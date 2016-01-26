/* Subroutines used for code generation on the Lattice Mico32 architecture.
   Contributed by Jon Beniston <jon@beniston.com>

   Copyright (C) 2008 Free Software Foundation, Inc.

   This file is part of GCC.

   GCC is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published
   by the Free Software Foundation; either version 3, or (at your
   option) any later version.

   GCC is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License
   along with GCC; see the file COPYING3.  If not see
   <http://www.gnu.org/licenses/>.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "regs.h"
#include "hard-reg-set.h"
#include "basic-block.h"
#include "real.h"
#include "insn-config.h"
#include "conditions.h"
#include "insn-flags.h"
#include "insn-attr.h"
#include "insn-codes.h"
#include "recog.h"
#include "output.h"
#include "tree.h"
#include "expr.h"
#include "flags.h"
#include "reload.h"
#include "tm_p.h"
#include "function.h"
#include "toplev.h"
#include "optabs.h"
#include "libfuncs.h"
#include "ggc.h"
#include "target.h"
#include "target-def.h"
#include "langhooks.h"
#include "tm-constrs.h"
#include "df.h"

struct lm32_frame_info
{
  HOST_WIDE_INT total_size;      /* number of bytes that the entire frame takes up.  */
  HOST_WIDE_INT callee_size;     /* number of bytes to save callee save registers  */
  HOST_WIDE_INT pretend_size;    /* number of bytes we push and pretend caller did.  */
  HOST_WIDE_INT args_size;       /* number of bytes that outgoing arguments take up.  */
  HOST_WIDE_INT locals_size;     /* number of bytes that local variables take up.  */
  unsigned int reg_save_mask;   /* mask of saved registers.  */
};

/* Prototypes for static functions */
static rtx emit_add (rtx dest, rtx src0, rtx src1);
static void expand_save_restore (struct lm32_frame_info *info, int op);
static void abort_with_insn (rtx insn, const char *reason);
static void stack_adjust (HOST_WIDE_INT amount);
static bool lm32_in_small_data_p (const_tree);
static void lm32_setup_incoming_varargs (CUMULATIVE_ARGS *cum, enum machine_mode mode, 
                             tree type, int *pretend_size, int no_rtl);

/* Detemines if given constant can be used as a displacement */
#define OFFSET_INT(X)  (((X) > -32768) && ((X) < 32768))

#undef TARGET_ADDRESS_COST
#define TARGET_ADDRESS_COST hook_int_rtx_bool_0
#undef TARGET_IN_SMALL_DATA_P
#define TARGET_IN_SMALL_DATA_P lm32_in_small_data_p
#undef TARGET_PROMOTE_FUNCTION_ARGS
#define TARGET_PROMOTE_FUNCTION_ARGS hook_bool_const_tree_true
#undef TARGET_PROMOTE_FUNCTION_RETURN
#define TARGET_PROMOTE_FUNCTION_RETURN hook_bool_const_tree_true
#undef TARGET_SETUP_INCOMING_VARARGS
#define TARGET_SETUP_INCOMING_VARARGS lm32_setup_incoming_varargs
#undef TARGET_PROMOTE_PROTOTYPES
#define TARGET_PROMOTE_PROTOTYPES hook_bool_const_tree_true

struct gcc_target targetm = TARGET_INITIALIZER;

/* Current frame information calculated by lm32_compute_frame_size.  */
static struct lm32_frame_info current_frame_info;

rtx lm32_compare_op0;
rtx lm32_compare_op1;

/* Return non-zero if the specified return type should be returned in memory */
int
lm32_return_in_memory (tree type)
{
  HOST_WIDE_INT size;

  if (!AGGREGATE_TYPE_P (type))
    {
      /* All simple types are returned in registers.  */
      return 0;
    }

  size = int_size_in_bytes (type);
  if (size >=0 && size <= UNITS_PER_WORD)
    {
      /* If it can fit in one register */
      return 0;
    }
  
  return 1;
}
 
/* Determine if given constant can be used as a register displacement */
int
const_ok_for_base_offset (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  int val;

  val = INTVAL (op);
  return OFFSET_INT (val);
}

/* Generate an emit a word sized add instruction */
static rtx
emit_add (rtx dest, rtx src0, rtx src1)
{
  rtx insn;
  insn = emit_insn (gen_addsi3 (dest, src0, src1));
  return insn;
}

/* Generate the code to compare (and possibly branch) two integer values
   TEST_CODE is the comparison code we are trying to emulate 
     (or implement directly)
   RESULT is where to store the result of the comparison, 
     or null to emit a branch
   CMP0 CMP1 are the two comparison operands
   DESTINATION is the destination of the branch, or null to only compare
   */

void
gen_int_relational (enum rtx_code code, /* relational test (EQ, etc) */
		    rtx result,		/* result to store comp. or 0 if branch */
		    rtx cmp0,		/* first operand to compare */
		    rtx cmp1,		/* second operand to compare */
		    rtx destination)	/* destination of the branch, or 0 if compare */
{
  enum machine_mode mode;
  int branch_p;

  mode = GET_MODE (cmp0);
  if (mode == VOIDmode)
    mode = GET_MODE (cmp1);

  /* Is this a branch or compare */
  branch_p = (destination != 0);

  /* Instruction set doesn't support LE or LT, so swap operands and use GE, GT */
  switch (code)
    {
      case LE: 
      case LT: 
      case LEU: 
      case LTU:
        code = swap_condition (code);
        rtx temp = cmp0;
        cmp0 = cmp1;
        cmp1 = temp;       
        break;
      default:
        break;  
    }
    
  if (branch_p)
    {
      rtx insn;
      
      /* Operands must be in registers */
      if (!register_operand (cmp0, mode)) 
        cmp0 = force_reg (mode, cmp0);
      if (!register_operand (cmp1, mode)) 
        cmp1 = force_reg (mode, cmp1);

      /* Generate conditional branch instruction */           
      rtx cond = gen_rtx_fmt_ee (code, mode, cmp0, cmp1);
      rtx label = gen_rtx_LABEL_REF (VOIDmode, destination);
      insn = gen_rtx_SET (VOIDmode, pc_rtx,
            gen_rtx_IF_THEN_ELSE (VOIDmode,
      			    cond, label, pc_rtx));
      emit_jump_insn (insn);
    }
  else
    {    
      /* We can't have const_ints in cmp0, other than 0 */
      if ((GET_CODE (cmp0) == CONST_INT) && (INTVAL (cmp0) != 0)) 
        cmp0 = force_reg (mode, cmp0);
    
      /* If the comparison is against an int not in legal range
         move it into a register */
      if (GET_CODE (cmp1) == CONST_INT)
        {
          HOST_WIDE_INT value = INTVAL (cmp1);
          switch (code) 
            {
              case EQ: case NE: case LE: case LT: case GE: case GT: 
                if (!MEDIUM_INT(value))
                  cmp1 = force_reg (mode, cmp1);
                break;
              case LEU: case LTU: case GEU: case GTU:
                if (!MEDIUM_UINT(value))
                  cmp1 = force_reg (mode, cmp1);
                break;
              default:
                abort ();
            }    
        }
    
      /* Generate compare instruction */
      emit_move_insn (result, gen_rtx_fmt_ee (code, mode, cmp0, cmp1));
    }
}

/* Generate and emit RTL to save or restore callee save registers */
static void
expand_save_restore (struct lm32_frame_info *info, int op)
{
  unsigned int reg_save_mask = info->reg_save_mask;
  int regno;
  HOST_WIDE_INT offset;
  rtx insn;

  /* Callee saves are below locals and above outgoing arguments */
  offset = info->args_size + info->callee_size;
  for (regno = 0; regno <= 31; regno++)
    {
      if ((reg_save_mask & (1 << regno)) != 0)
        {
          if (op == 0)
            {
              insn = emit_move_insn (gen_rtx_MEM (word_mode, 
                                                  gen_rtx_PLUS (Pmode,
                                                                stack_pointer_rtx,
                                                                GEN_INT (offset))), 
                                     gen_rtx_REG (word_mode, regno));
            }
          else
            {
              insn = emit_move_insn (gen_rtx_REG (word_mode, regno),
                                     gen_rtx_MEM (word_mode, 
                                                  gen_rtx_PLUS (Pmode,
                                                                stack_pointer_rtx,
                                                                GEN_INT (offset))));
            }

	  /* only prologue instructions which set the sp fp or save a
	     register should be marked as frame related */
          if (op==0)
	    RTX_FRAME_RELATED_P (insn) = 1;
          offset -= UNITS_PER_WORD;
        }
    }
}

static void 
stack_adjust (HOST_WIDE_INT amount)
{
  rtx insn;
  
  if (!MEDIUM_INT (amount))
    {
      /* r10 is caller saved so it can be used as a temp reg */
      rtx r10;
      r10 = gen_rtx_REG (word_mode, 10);  
      insn = emit_move_insn (r10, GEN_INT (amount));
      if (amount < 0)
	RTX_FRAME_RELATED_P (insn) = 1;
      insn = emit_add (stack_pointer_rtx, stack_pointer_rtx, r10);
      if (amount < 0)
	RTX_FRAME_RELATED_P (insn) = 1;
    }
  else
    {
      insn = emit_add (stack_pointer_rtx,
                       stack_pointer_rtx,
                       GEN_INT (amount));
      if (amount < 0)
	RTX_FRAME_RELATED_P (insn) = 1;
    }
}


/* Create and emit instructions for a functions prologue */
void
lm32_expand_prologue (void)
{
  rtx insn;
    
  lm32_compute_frame_size (get_frame_size ());
        
  if (current_frame_info.total_size > 0)
    {
      /* Add space on stack new frame  */
      stack_adjust (-current_frame_info.total_size);
                                
      /* Save callee save registers */
      if (current_frame_info.reg_save_mask != 0)
        expand_save_restore (&current_frame_info, 0);
        
      /* Setup frame pointer if it's needed */                
      if (frame_pointer_needed == 1)
        {
          /* Load offset - Don't use total_size, as that includes pretend_size, which isn't part of this frame? */
          insn = emit_move_insn (frame_pointer_rtx, GEN_INT (  current_frame_info.args_size 
                                                             + current_frame_info.callee_size 
                                                             + current_frame_info.locals_size));
          RTX_FRAME_RELATED_P (insn) = 1;
          
          /* Add in sp */
          insn = emit_add (frame_pointer_rtx, 
                           frame_pointer_rtx,
                           stack_pointer_rtx);
          RTX_FRAME_RELATED_P (insn) = 1;
        }  
                
      /* Prevent prologue from being scheduled into function body */
      emit_insn (gen_blockage ());        
    }
}

/* Create an emit instructions for a functions epilogue */
void
lm32_expand_epilogue (void)
{
  rtx ra_rtx = gen_rtx_REG (Pmode, RA_REGNUM);
    
  lm32_compute_frame_size (get_frame_size ());

  if (current_frame_info.total_size > 0)
    {       
      /* Prevent stack code from being reordered */
      emit_insn (gen_blockage ());             
           
      /* Restore callee save registers */
      if (current_frame_info.reg_save_mask != 0)
        expand_save_restore (&current_frame_info, 1);         
      
      /* Deallocate stack */
      stack_adjust (current_frame_info.total_size);

      /* Return to calling function */
      emit_jump_insn (gen_return_internalsi (ra_rtx));                    
    }
  else
    {
      /* Return to calling function */
      emit_jump_insn (gen_return_internalsi (ra_rtx));
    }    
}

/* Return the bytes needed to compute the frame pointer from the current
   stack pointer. */
HOST_WIDE_INT
lm32_compute_frame_size (int size)
{
  int regno;
  HOST_WIDE_INT total_size, locals_size, args_size, pretend_size, callee_size;
  unsigned int reg_save_mask;

  locals_size = size;
  args_size = crtl->outgoing_args_size;
  pretend_size = crtl->args.pretend_args_size;
  callee_size = 0;
  reg_save_mask = 0;
    
  /* Build mask that actually determines which regsiters we save
     and calculate size required to store them in the stack. */
  for (regno = 1; regno < SP_REGNUM; regno++)
    {
      if (df_regs_ever_live_p(regno) && !call_used_regs[regno])
        {
          reg_save_mask |= 1 << regno;
          callee_size += UNITS_PER_WORD;
        }
    }
  if (df_regs_ever_live_p(RA_REGNUM) || !current_function_is_leaf || !optimize)
    {
      reg_save_mask |= 1 << RA_REGNUM;       
      callee_size += UNITS_PER_WORD;
    }
  if (!(reg_save_mask & (1 << FP_REGNUM)) && frame_pointer_needed)
    {
      reg_save_mask |= 1 << FP_REGNUM;       
      callee_size += UNITS_PER_WORD;
    }

  /* Compute total frame size */
  total_size = pretend_size + args_size + locals_size + callee_size;
     
  /* Align frame to appropriate boundary */
  total_size = (total_size+3) & ~3;
  
  /* Save computed information.  */
  current_frame_info.total_size = total_size;
  current_frame_info.callee_size = callee_size;
  current_frame_info.pretend_size = pretend_size;
  current_frame_info.locals_size = locals_size;
  current_frame_info.args_size = args_size;
  current_frame_info.reg_save_mask = reg_save_mask;

  return total_size;
}

void
lm32_print_operand (FILE *file, rtx op, int letter)
{
  register enum rtx_code code;

  if (! op)
    {
      error ("PRINT_OPERAND null pointer");
      abort ();
    }

  code = GET_CODE (op);

  if (code == SIGN_EXTEND)
    op = XEXP (op, 0), code = GET_CODE (op);
  else if (code == REG || code == SUBREG)
    {
      int regnum;

      if (code == REG)
        regnum = REGNO (op);
      else
        regnum = true_regnum (op);

     if (   (letter == 'H' && !WORDS_BIG_ENDIAN) 
         || (letter == 'L' && WORDS_BIG_ENDIAN))
         {
         abort();
            regnum++;
            }

      fprintf (file, "%s", reg_names[regnum]);
    }
  else if (code == MEM) 
      output_address (XEXP (op, 0));
  else if (letter == 'z' && GET_CODE (op) == CONST_INT && INTVAL (op) == 0)
    fprintf (file, "%s", reg_names[0]);
  else if (GET_CODE (op) == CONST_DOUBLE) 
    {
      if ((CONST_DOUBLE_LOW (op) != 0) || (CONST_DOUBLE_HIGH (op) != 0))
        output_operand_lossage ("Only 0.0 can be loaded as an immediate");
      else
        fprintf (file, "0");
    }        
  else if (code == EQ)
    fprintf (file, "e  ");  
  else if (code == NE)
    fprintf (file, "ne ");        
  else if (code == GT)
    fprintf (file, "g  ");    
  else if (code == GTU)
    fprintf (file, "gu ");    
  else if (code == LT)
    fprintf (file, "l  ");        
  else if (code == LTU)
    fprintf (file, "lu ");        
  else if (code == GE)
    fprintf (file, "ge ");        
  else if (code == GEU)
    fprintf (file, "geu");        
  else if (code == LE)
    fprintf (file, "le ");        
  else if (code == LEU)
    fprintf (file, "leu");                  
  else
    output_addr_const (file, op);
}

/* A C compound statement to output to stdio stream STREAM the
   assembler syntax for an instruction operand that is a memory
   reference whose address is ADDR.  ADDR is an RTL expression.

   On some machines, the syntax for a symbolic address depends on
   the section that the address refers to.  On these machines,
   define the macro `ENCODE_SECTION_INFO' to store the information
   into the `symbol_ref', and then check for it here.  */

void
lm32_print_operand_address (FILE *file, rtx addr)
{
  switch (GET_CODE (addr))
    {
    case REG:
      fprintf (file, "(%s+0)", reg_names [REGNO (addr)]);
      break;

    case MEM:
      output_address (XEXP (addr, 0));
      break;

    case PLUS:
      {
        rtx arg0 = XEXP (addr, 0);
        rtx arg1 = XEXP (addr, 1);
              
        if (GET_CODE (arg0) == REG && CONSTANT_P (arg1))
          {
            if (GET_CODE(arg1) == CONST_INT)
              fprintf (file, "(%s+%ld)", reg_names [REGNO (arg0)], INTVAL (arg1));
            else
              {
                fprintf (file, "(%s+", reg_names [REGNO (arg0)]);
                output_addr_const (file, arg1);
                fprintf (file, ")");
              }
          }
        else if (CONSTANT_P (arg0) && CONSTANT_P (arg1))
          output_addr_const (file, addr);
        else
          abort_with_insn (addr, "bad operand");
      }
      break;
    
    case SYMBOL_REF:
      if (SYMBOL_REF_SMALL_P (addr)) 
        {        
          fprintf (file, "gp(");
          output_addr_const (file, addr);
          fprintf (file, ")");
        } 
      else
        abort_with_insn (addr, "can't use non gp relative absolute address");
      break;      
        
    default:
      abort_with_insn (addr, "invalid addressing mode");
      break;
    }
}

/* Determine where to put an argument to a function.
   Value is zero to push the argument on the stack,
   or a hard register in which to store the argument.

   MODE is the argument's machine mode.
   TYPE is the data type of the argument (as a tree).
    This is null for libcalls where that information may
    not be available.
   CUM is a variable of type CUMULATIVE_ARGS which gives info about
    the preceding args and about the function being called.
   NAMED is nonzero if this argument is a named parameter
    (otherwise it is an extra parameter matching an ellipsis).  */

rtx
lm32_function_arg (CUMULATIVE_ARGS cum, enum machine_mode mode, 
                   tree type, int named)
{        
  if (mode == VOIDmode)
    /* Compute operand 2 of the call insn.  */
    return GEN_INT (0);

  if (targetm.calls.must_pass_in_stack (mode, type))
    return NULL_RTX;
    
  if (!named  || (cum + LM32_NUM_REGS2(mode, type) > LM32_NUM_ARG_REGS))
    return NULL_RTX;

  return gen_rtx_REG (mode, cum + LM32_FIRST_ARG_REG);
}

HOST_WIDE_INT
lm32_compute_initial_elimination_offset (int from, int to)
{
  HOST_WIDE_INT offset = 0;
  
  switch (from)
    {
    /*case FRAME_POINTER_REGNUM: - Same as ARG_POINTER_REGNUM */
    case ARG_POINTER_REGNUM:
      switch (to)
        {
        case FRAME_POINTER_REGNUM:
          offset = 0;
          break;
        case STACK_POINTER_REGNUM:
          offset = lm32_compute_frame_size (get_frame_size ()) - current_frame_info.pretend_size;
          break;
        default:
          abort ();
        }
      break;
    default:
      abort ();
    }
    
  return offset;    
}

static void
lm32_setup_incoming_varargs (CUMULATIVE_ARGS *cum, enum machine_mode mode, 
                             tree type, int *pretend_size, int no_rtl)
{
  int first_anon_arg;
  tree fntype;
  int stdarg_p;
  
  fntype = TREE_TYPE (current_function_decl);
  stdarg_p = (TYPE_ARG_TYPES (fntype) != 0
	      && (TREE_VALUE (tree_last (TYPE_ARG_TYPES (fntype)))
		  != void_type_node));
   
  if (stdarg_p)
    first_anon_arg = *cum + LM32_FIRST_ARG_REG;
  else
    {
      /* this is the common case, we have been passed details setup
         for the last named argument, we want to skip over the
         registers, if any used in passing this named paramter in
         order to determine which is the first registers used to pass
         anonymous arguments */
      int size;

      if (mode==BLKmode)
        size = int_size_in_bytes (type);
      else
        size = GET_MODE_SIZE (mode);
      
      first_anon_arg = *cum + LM32_FIRST_ARG_REG + ((size + UNITS_PER_WORD - 1) / UNITS_PER_WORD);
    }

  if ((first_anon_arg < (LM32_FIRST_ARG_REG + LM32_NUM_ARG_REGS)) && !no_rtl)
    {
      int first_reg_offset = first_anon_arg;
      int size = LM32_FIRST_ARG_REG + LM32_NUM_ARG_REGS - first_anon_arg;
      rtx regblock;

      regblock = gen_rtx_MEM (BLKmode,
                              plus_constant (arg_pointer_rtx, 
                                             FIRST_PARM_OFFSET (0)));
      move_block_from_reg (first_reg_offset, regblock, size);

      *pretend_size = size * UNITS_PER_WORD;
    }
}

/* Abort after printing out a specific insn.  */
static void
abort_with_insn (rtx insn, const char *reason)
{
  error (reason);
  debug_rtx (insn);
  abort ();
}

/* Override command line options */
void 
lm32_override_options (void)
{          
  /* We must have sign-extend enabled if barrel-shift isn't */
  if (!MASK_BARREL_SHIFT_ENABLED)
    {
      warning (0, "neither -mbarrel-shift-enabled nor -msign-extend-enabled specified. Assuming -msign-extend-enabled");
      target_flags |= MASK_SIGN_EXTEND_ENABLED;
    }
}

/* Return nonzero if this function is known to have a null epilogue.
   This allows the optimizer to omit jumps to jumps if no stack
   was created.  */
int 
lm32_can_use_return (void)
{
  if (!reload_completed) 
    return 0;
  
  if (df_regs_ever_live_p(RA_REGNUM) || crtl->profile)
    return 0;
    
  if (lm32_compute_frame_size (get_frame_size ()) != 0)
    return 0;
    
  return 1;
}

/* Support function to determine the return address of the function
   'count' frames back up the stack. */
rtx 
lm32_return_addr_rtx (int count, rtx frame)
{
  rtx r;
  if (count == 0)
    {
      /* *mjs* This test originally used leaf_function_p (), we now use
	 the regs_ever_live test which I *think* is more accurate. */
      if (!df_regs_ever_live_p(RA_REGNUM))
	{
	  r = gen_rtx_REG (Pmode, RA_REGNUM);
	}
      else
	{
	  r = gen_rtx_MEM (Pmode, 
			   gen_rtx_PLUS (Pmode, frame,
					 GEN_INT(- 2 * UNITS_PER_WORD)));
	  set_mem_alias_set (r, get_frame_alias_set ());
	}
    }
  else if (flag_omit_frame_pointer)
    r = NULL_RTX;
  else
    {
      r = gen_rtx_MEM (Pmode, 
		       gen_rtx_PLUS (Pmode, frame,
				     GEN_INT(- 2 * UNITS_PER_WORD)));
      set_mem_alias_set (r, get_frame_alias_set ());
    }
  return r;
}

/* Return true if EXP should be placed in the small data section.  */

static bool
lm32_in_small_data_p (const_tree exp)
{
  /* We want to merge strings, so we never consider them small data.  */
  if (TREE_CODE (exp) == STRING_CST)
    return false;

  /* Functions are never in the small data area.  Duh.  */
  if (TREE_CODE (exp) == FUNCTION_DECL)
    return false;

  if (TREE_CODE (exp) == VAR_DECL && DECL_SECTION_NAME (exp))
    {
      const char *section = TREE_STRING_POINTER (DECL_SECTION_NAME (exp));
      if (strcmp (section, ".sdata") == 0
	  || strcmp (section, ".sbss") == 0)
	return true;
    }
  else
    {
      HOST_WIDE_INT size = int_size_in_bytes (TREE_TYPE (exp));

      /* If this is an incomplete type with size 0, then we can't put it
	 in sdata because it might be too big when completed.  */
      if (size > 0 && (unsigned HOST_WIDE_INT) size <= g_switch_value)
	return true;
    }

  return false;
}

/* Emit straight-line code to move LENGTH bytes from SRC to DEST.
   Assume that the areas do not overlap.  */

static void
lm32_block_move_inline (rtx dest, rtx src, HOST_WIDE_INT length, HOST_WIDE_INT alignment)
{
  HOST_WIDE_INT offset, delta;
  unsigned HOST_WIDE_INT bits;
  int i;
  enum machine_mode mode;
  rtx *regs;

  /* Work out how many bits to move at a time.  */
  switch (alignment)
    {
      case 1:
        bits = 8;
        break;
      case 2:
        bits = 16;
        break;
      case 4:
        bits = 32;
        break;
      default: 
        abort ();
    }

  mode = mode_for_size (bits, MODE_INT, 0);
  delta = bits / BITS_PER_UNIT;

  /* Allocate a buffer for the temporary registers.  */
  regs = alloca (sizeof (rtx) * length / delta);

  /* Load as many BITS-sized chunks as possible.  */
  for (offset = 0, i = 0; offset + delta <= length; offset += delta, i++)
    {
      regs[i] = gen_reg_rtx (mode);
      emit_move_insn (regs[i], adjust_address (src, mode, offset));
    }

  /* Copy the chunks to the destination.  */
  for (offset = 0, i = 0; offset + delta <= length; offset += delta, i++)
    emit_move_insn (adjust_address (dest, mode, offset), regs[i]);

  /* Mop up any left-over bytes.  */
  if (offset < length)
    {
      src = adjust_address (src, BLKmode, offset);
      dest = adjust_address (dest, BLKmode, offset);
      move_by_pieces (dest, src, length - offset,
		      MIN (MEM_ALIGN (src), MEM_ALIGN (dest)), 0);
    }
}

/* Expand string/block move operations.

   operands[0] is the pointer to the destination.
   operands[1] is the pointer to the source.
   operands[2] is the number of bytes to move.
   operands[3] is the alignment.  */

int
lm32_expand_block_move (rtx *operands)
{
  if ((GET_CODE (operands[2]) == CONST_INT) && (INTVAL (operands[2]) <= 32))
    {
      lm32_block_move_inline (operands[0], operands[1], INTVAL (operands[2]), INTVAL (operands[3]));
      return 1;
    }
  return 0;
}

/* Return TRUE if X references a SYMBOL_REF or LABEL_REF whose symbol
   isn't protected by a PIC unspec.  */
int
nonpic_symbol_mentioned_p (rtx x)
{
  register const char *fmt;
  register int i;

  if (GET_CODE (x) == SYMBOL_REF || GET_CODE (x) == LABEL_REF
      || GET_CODE (x) == PC)
    return 1;

  /* We don't want to look into the possible MEM location of a
     CONST_DOUBLE, since we're not going to use it, in general.  */
  if (GET_CODE (x) == CONST_DOUBLE)
    return 0;

  if (GET_CODE (x) == UNSPEC)
    return 0;

  fmt = GET_RTX_FORMAT (GET_CODE (x));
  for (i = GET_RTX_LENGTH (GET_CODE (x)) - 1; i >= 0; i--)
    {
      if (fmt[i] == 'E')
	{
	  register int j;

	  for (j = XVECLEN (x, i) - 1; j >= 0; j--)
	    if (nonpic_symbol_mentioned_p (XVECEXP (x, i, j)))
	      return 1;
	}
      else if (fmt[i] == 'e' && nonpic_symbol_mentioned_p (XEXP (x, i)))
	return 1;
    }

  return 0;
}
