/* Definitions of target machine for GNU compiler, Lattice Mico32 architecture.
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

/*-------------------------------*/
/* Run-time Target Specification */
/*-------------------------------*/

/* Print subsidiary information on the compiler version in use.  */
#ifndef TARGET_VERSION
#define TARGET_VERSION fprintf (stderr, " (LatticeMico32)")
#endif

/* Target CPU builtins.  */
#define TARGET_CPU_CPP_BUILTINS()               \
  do                                            \
    {                                           \
      builtin_define ("__lm32__");              \
      builtin_define_std ("lm32");              \
      builtin_assert ("cpu=lm32");              \
      builtin_assert ("machine=lm32");          \
    }                                           \
  while (0)

#define CPP_SPEC "\
%{mmultiply-enabled:-D__multiply_enabled__} \
%{mdivide-enabled:-D__divide_enabled__} \
%{mbarrel-shift-enabled:-D__barrel_shift_enabled__} \
%{msign-extend-enabled:-D__sign_extend_enabled__} \
%{muser-enabled:-D__user_enabled__} \
"

#undef  ASM_SPEC
#define ASM_SPEC "\
%{mmultiply-enabled} \
%{mdivide-enabled} \
%{mbarrel-shift-enabled} \
%{msign-extend-enabled} \
%{muser-extend-enabled} \
%{v} \
"

/* Let link script define all link options. 
   Default to using simulator link script.  */

#undef  STARTFILE_SPEC
#define STARTFILE_SPEC ""
#undef  ENDFILE_SPEC
#define ENDFILE_SPEC ""
#undef  LIB_SPEC
#define LIB_SPEC "%{!T*:-T sim.ld}"

#define OVERRIDE_OPTIONS lm32_override_options()

extern int target_flags;

/* Add -G xx support.  */

#undef  SWITCH_TAKES_ARG
#define SWITCH_TAKES_ARG(CHAR) \
(DEFAULT_SWITCH_TAKES_ARG (CHAR) || (CHAR) == 'G')

#undef  CC1_SPEC
#define CC1_SPEC "%{G*}"

extern struct rtx_def *lm32_compare_op0;
extern struct rtx_def *lm32_compare_op1;

/*---------------------------------*/
/* Target machine storage layout.  */
/*---------------------------------*/

#define BITS_BIG_ENDIAN 0
#define BYTES_BIG_ENDIAN 1
#define WORDS_BIG_ENDIAN 1
#define LIBGCC2_WORDS_BIG_ENDIAN 1

#define BITS_PER_UNIT 8
#define BITS_PER_WORD 32
#define UNITS_PER_WORD 4

#define POINTER_SIZE 32

#define PROMOTE_MODE(MODE,UNSIGNEDP,TYPE)               \
do {                                                    \
  if (GET_MODE_CLASS (MODE) == MODE_INT                 \
      && GET_MODE_SIZE (MODE) < UNITS_PER_WORD)         \
    (MODE) = word_mode;                                 \
} while (0)

#define PARM_BOUNDARY 32

#define STACK_BOUNDARY 32

#define BIGGEST_ALIGNMENT 64

#define FUNCTION_BOUNDARY  32

#define EMPTY_FIELD_BOUNDARY 32

#define STRICT_ALIGNMENT 1

#define TARGET_FLOAT_FORMAT IEEE_FLOAT_FORMAT

/* Make strings word-aligned so strcpy from constants will be faster.  */
#define CONSTANT_ALIGNMENT(EXP, ALIGN)  \
  (TREE_CODE (EXP) == STRING_CST	\
   && (ALIGN) < BITS_PER_WORD ? BITS_PER_WORD : (ALIGN))

/* Make arrays and structures word-aligned to allow faster copying etc.  */
#define DATA_ALIGNMENT(TYPE, ALIGN)					\
  ((((ALIGN) < BITS_PER_WORD)						\
    && (TREE_CODE (TYPE) == ARRAY_TYPE					\
	|| TREE_CODE (TYPE) == UNION_TYPE				\
	|| TREE_CODE (TYPE) == RECORD_TYPE)) ? BITS_PER_WORD : (ALIGN))

/* We need this for the same reason as DATA_ALIGNMENT, namely to cause
   character arrays to be word-aligned so that `strcpy' calls that copy
   constants to character arrays can be done inline, and 'strcmp' can be
   optimised to use word loads. */
#define LOCAL_ALIGNMENT(TYPE, ALIGN) \
  DATA_ALIGNMENT (TYPE, ALIGN)
   
/*----------------------------------------*/
/* Layout of source language data types.  */
/*----------------------------------------*/

#define INT_TYPE_SIZE		    32
#define SHORT_TYPE_SIZE		    16
#define LONG_TYPE_SIZE		    32
#define LONG_LONG_TYPE_SIZE	    64

#define FLOAT_TYPE_SIZE		    32
#define DOUBLE_TYPE_SIZE	    64
#define LONG_DOUBLE_TYPE_SIZE       64

#define DEFAULT_SIGNED_CHAR         0

#define SIZE_TYPE "unsigned int"

#define PTRDIFF_TYPE "int"

/*---------------------------*/
/* Standard register usage.  */
/*---------------------------*/

#define FIRST_PSEUDO_REGISTER  32

#define RV_REGNUM   1
#define GP_REGNUM   26
#define FP_REGNUM   27
#define SP_REGNUM   28
#define RA_REGNUM   29

#define G_REG_P(X)      ((X)<32)
#define PSEUDO_REG_P(X) ((X)>=FIRST_PSEUDO_REGISTER)

#define FIXED_REGISTERS   \
{ 1, 0, 0, 0, 0, 0, 0, 0, \
  0, 0, 0, 0, 0, 0, 0, 0, \
  0, 0, 0, 0, 0, 0, 0, 0, \
  0, 0, 1, 0, 1, 0, 1, 1}

#define CALL_USED_REGISTERS \
{ 1, 1, 1, 1, 1, 1, 1, 1,   \
  1, 1, 1, 0, 0, 0, 0, 0,   \
  0, 0, 0, 0, 0, 0, 0, 0,   \
  0, 0, 1, 0, 1, 0, 1, 1}
  
#define HARD_REGNO_NREGS(REGNO, MODE)                                   \
    ((GET_MODE_SIZE (MODE) + UNITS_PER_WORD - 1) / UNITS_PER_WORD)      

#define HARD_REGNO_MODE_OK(REGNO, MODE) G_REG_P(REGNO)

#define MODES_TIEABLE_P(MODE1, MODE2)           \
(      GET_MODE_CLASS (MODE1) == MODE_INT		\
    && GET_MODE_CLASS (MODE2) == MODE_INT		\
    && GET_MODE_SIZE (MODE1) <= UNITS_PER_WORD	\
    && GET_MODE_SIZE (MODE2) <= UNITS_PER_WORD)

#define AVOID_CCMODE_COPIES

/*----------------------------------*/
/* Register classes and constants.  */
/*----------------------------------*/

enum reg_class {
  NO_REGS, 
  GENERAL_REGS,
  ALL_REGS,
  LIM_REG_CLASSES
};

#define N_REG_CLASSES (int) LIM_REG_CLASSES

#define REG_CLASS_NAMES { "NO_REGS", "GENERAL_REGS", "ALL_REGS" }

#define REG_CLASS_CONTENTS      \
{ {0x00000000},                 \
  {0xffffffff},                 \
  {0xffffffff}                  \
}

#define REGNO_REG_CLASS(REGNO) \
    (G_REG_P(REGNO) ? GENERAL_REGS : NO_REGS)
    
#define CLASS_MAX_NREGS(CLASS, MODE) \
    ((GET_MODE_SIZE (MODE) + UNITS_PER_WORD - 1) / UNITS_PER_WORD)      
    
#define INDEX_REG_CLASS NO_REGS

#define BASE_REG_CLASS GENERAL_REGS

#define REG_CLASS_FROM_LETTER(C) NO_REGS

#ifdef REG_OK_STRICT
#define REGNO_OK_FOR_BASE_P(REGNO) 					\
(G_REG_P (REGNO) || G_REG_P (reg_renumber[REGNO]))
#else
#define REGNO_OK_FOR_BASE_P(REGNO) 					\
(G_REG_P (REGNO) || PSEUDO_REG_P (REGNO))
#endif

#define REGNO_OK_FOR_INDEX_P(REGNO) 0

#define PREFERRED_RELOAD_CLASS(X,CLASS) (CLASS)

/* The letters I, J, K, L, M, N, O, P in a register constraint string
   can be used to stand for particular ranges of immediate operands.
   This macro defines what the ranges are.
   C is the letter, and VALUE is a constant value.
   Return 1 if VALUE is in the range specified by C.  
   
   Lattice usage:
   
   J - 0
   K - 16-bit signed
   L - 16-bit unsigned
   M - 32-bit signed 
   */
#define MEDIUM_INT(X)  ((((HOST_WIDE_INT)(X)) >= -32768) && (((HOST_WIDE_INT)(X)) < 32768))
#define MEDIUM_UINT(X) (((unsigned HOST_WIDE_INT)(X)) < 65536)
#define LARGE_INT(X)                                    \
((X) >= (-(HOST_WIDE_INT) 0x7fffffff - 1)               \
 && (X) <= (unsigned HOST_WIDE_INT) 0xffffffff)
 
#define CONST_OK_FOR_LETTER_P(VALUE, C)                 \
(  (C) == 'J' ? (VALUE) == 0                            \
 : (C) == 'K' ? MEDIUM_INT (VALUE)                      \
 : (C) == 'L' ? MEDIUM_UINT (VALUE)                     \
 : (C) == 'M' ? LARGE_INT (VALUE)                       \
 : 0                                                    \
)

#define CONST_DOUBLE_OK_FOR_LETTER_P(VALUE, C)  0

/*----------------------------------------*/
/* Stack Layout and Calling Conventions.  */
/*----------------------------------------*/

#define STACK_GROWS_DOWNWARD 1

#define FRAME_GROWS_DOWNWARD 1

#define STACK_POINTER_OFFSET (UNITS_PER_WORD)

#define STARTING_FRAME_OFFSET (UNITS_PER_WORD)

#define FIRST_PARM_OFFSET(FNDECL) (UNITS_PER_WORD)

#define STACK_POINTER_REGNUM SP_REGNUM

#define FRAME_POINTER_REGNUM FP_REGNUM

#define ARG_POINTER_REGNUM FRAME_POINTER_REGNUM

#define FRAME_POINTER_REQUIRED (cfun->calls_alloca) 

#define RETURN_ADDR_RTX(count, frame)                               \
  lm32_return_addr_rtx (count, frame)

/* FIXME! */
#define STATIC_CHAIN_REGNUM 3

#define ELIMINABLE_REGS \
{{ FRAME_POINTER_REGNUM, STACK_POINTER_REGNUM },        \
 { ARG_POINTER_REGNUM, STACK_POINTER_REGNUM },          \
}

#define CAN_ELIMINATE(FROM, TO)						    \
   (((TO) == STACK_POINTER_REGNUM && frame_pointer_needed) ? 0 : 1)

#define INITIAL_ELIMINATION_OFFSET(FROM, TO, OFFSET)    \
  (OFFSET) = lm32_compute_initial_elimination_offset (FROM, TO)

/*-----------------------------*/
/* Function argument passing.  */
/*-----------------------------*/

#define ACCUMULATE_OUTGOING_ARGS 1

#define RETURN_POPS_ARGS(DECL, FUNTYPE, SIZE) 0

/*--------------------------------*/
/* Passing Arguments in Registers */
/*--------------------------------*/

/* The first argument register */
#define LM32_FIRST_ARG_REG 1

/* The number of (integer) argument register available.  */
#define LM32_NUM_ARG_REGS 8

#define FUNCTION_ARG(CUM, MODE, TYPE, NAMED) \
  lm32_function_arg ((CUM), (MODE), (TYPE), (NAMED))

#define CUMULATIVE_ARGS int

#define INIT_CUMULATIVE_ARGS(CUM,FNTYPE,LIBNAME,INDIRECT,N_NAMED_ARGS) \
  (CUM) = 0

#define FUNCTION_ARG_ADVANCE(CUM, MODE, TYPE, NAMED) \
  (CUM) += LM32_NUM_REGS2 (MODE, TYPE)

#define FUNCTION_ARG_REGNO_P(r)	(((r) >= 1) && ((r) <= LM32_NUM_ARG_REGS))

/*--------------------*/
/* Function results.  */
/*--------------------*/

#define FUNCTION_VALUE(VALTYPE, FUNC)                                   \
   gen_rtx_REG ((INTEGRAL_TYPE_P (VALTYPE)                              \
                 && TYPE_PRECISION (VALTYPE) < BITS_PER_WORD)           \
	            ? word_mode                                         \
	            : TYPE_MODE (VALTYPE),				                    \
	            RV_REGNUM)

#define LIBCALL_VALUE(MODE) gen_rtx_REG (MODE, RV_REGNUM)

#define FUNCTION_VALUE_REGNO_P(N) ((N) == RV_REGNUM)

#define RETURN_IN_MEMORY(TYPE) lm32_return_in_memory (TYPE)

#define DEFAULT_PCC_STRUCT_RETURN 0

/* Convert from bytes to ints.  */
#define LM32_NUM_INTS(X) (((X) + UNITS_PER_WORD - 1) / UNITS_PER_WORD)

/* The number of (integer) registers required to hold a quantity of
   type MODE.  */
#define LM32_NUM_REGS(MODE) LM32_NUM_INTS (GET_MODE_SIZE (MODE))

/* The number of (integer) registers required to hold a quantity of
   TYPE MODE.  */
#define LM32_NUM_REGS2(MODE, TYPE)                       \
  LM32_NUM_INTS ((MODE) == BLKmode ?                     \
  int_size_in_bytes (TYPE) : GET_MODE_SIZE (MODE))

#define STRUCT_VALUE 0

/*---------------------------*/
/* Function entry and exit.  */
/*---------------------------*/

/*-------------*/
/* Profiling.  */
/*-------------*/

#define FUNCTION_PROFILER(FILE, LABELNO)

/*---------------*/
/* Trampolines.  */
/*---------------*/

#define INITIALIZE_TRAMPOLINE	
#define TRAMPOLINE_SIZE		0

/*---------------------*/ 
/*  Addressing Modes.  */
/*---------------------*/ 

#define CONSTANT_ADDRESS_P(X)						\
  ((GET_CODE (X) == LABEL_REF || GET_CODE (X) == SYMBOL_REF		\
    || GET_CODE (X) == CONST_INT || GET_CODE (X) == HIGH		\
    || (GET_CODE (X) == CONST)))

#define MAX_REGS_PER_ADDRESS 1

#ifdef REG_OK_STRICT
#define REG_OK_FOR_FRAME_PTR_P(X) (REGNO (X) == FRAME_POINTER_REGNUM)
#else
#define REG_OK_FOR_FRAME_PTR_P(X) (REGNO (X) == FRAME_POINTER_REGNUM)
#endif

#define RTX_OK_FOR_BASE_P(X)                    (REG_P (X) && REG_OK_FOR_BASE_P (X))
#define RTX_OK_FOR_STACK_P(X)                   (REG_P (X) && (REGNO (X) == STACK_POINTER_REGNUM))
#define CONST_OK_FOR_BASE_OFFSET(X, MODE)       const_ok_for_base_offset ((X), (MODE))
               
#define LEGITIMATE_BASE_INDEX_P(ADDR, MODE)                     \
(   GET_CODE (ADDR)==PLUS                                       \
 && RTX_OK_FOR_BASE_P (XEXP (ADDR, 0))                          \
 && GET_CODE (XEXP (ADDR, 1)) == CONST_INT                      \
 && CONST_OK_FOR_BASE_OFFSET (XEXP ((ADDR), 1), (MODE)))        

#define LEGITIMATE_GPREL_P(ADDR)                                \
(   GET_CODE (ADDR) == SYMBOL_REF                               \
 && SYMBOL_REF_SMALL_P (ADDR))
 
#ifdef REG_OK_STRICT
#define REG_OK_FOR_BASE_P(X) (G_REG_P (REGNO (X)))
#else
#define REG_OK_FOR_BASE_P(X) (G_REG_P (REGNO (X)) || PSEUDO_REG_P (REGNO (X)))
#endif

#ifdef REG_OK_STRICT
#define REG_OK_FOR_INDEX_P(X) (G_REG_P (REGNO (X)))
#else
#define REG_OK_FOR_INDEX_P(X) (G_REG_P (REGNO (X)) || PSEUDO_REG_P (REGNO (X)))
#endif

#define GO_IF_LEGITIMATE_ADDRESS(m,x,l)	                                                                                             \
{                                                                                                                                    \
  if (RTX_OK_FOR_BASE_P (x)) goto l;                            /* (rM) */                                                      \
  else if (LEGITIMATE_BASE_INDEX_P (x, m)) goto l;              /* (rM)+literal) */                                            \
  else if (LEGITIMATE_GPREL_P (x)) goto l;                                                                                      \
}

#define ARM_LEGITIMIZE_ADDRESS(X, OLDX, MODE, WIN)	     \
do {							     \
  if (flag_pic)                                              \
    X = lm32_legitimize_pic_address (OLDX, MODE, NULL_RTX);  \
} while (0)

#define GO_IF_MODE_DEPENDENT_ADDRESS(ADDR, LABEL) 			\
  if (GET_CODE (ADDR) == PLUS) goto LABEL;		      		\

#define LEGITIMATE_CONSTANT_P(X) 1

/*-------------------------*/
/* Condition Code Status.  */
/*-------------------------*/

#define REVERSIBLE_CC_MODE(MODE) 1

/*---------*/
/* Costs.  */
/*---------*/

#define SLOW_BYTE_ACCESS 1

#define NO_FUNCTION_CSE

#define BRANCH_COST(speed_p, predictable_p) 4

#define MOVE_RATIO(speed) (speed ? 24 : 3)

/*------------*/
/* Sections.  */
/*------------*/

#define TEXT_SECTION_ASM_OP             "\t.section\t.text"
#define DATA_SECTION_ASM_OP             "\t.section\t.data"
#define SDATA_SECTION_ASM_OP            "\t.section\t.sdata,\"aw\""
#define BSS_SECTION_ASM_OP              "\t.section\t.bss"
#define SBSS_SECTION_ASM_OP             "\t.section\t.sbss,\"aw\""

/*-------*/
/* PIC.  */
/*-------*/

#define PIC_OFFSET_TABLE_REGNUM (flag_pic ? GP_REGNUM : INVALID_REGNUM)

#define JUMP_TABLES_IN_TEXT_SECTION (flag_pic)

#define LEGITIMATE_PIC_OPERAND_P(X)                                    \
	(!(nonpic_symbol_mentioned_p (X)))

/*-------------*/
/* Assembler.  */
/*-------------*/

#define ASM_COMMENT_START "#"

#define ASM_APP_ON "#APP\n"

#define ASM_APP_OFF "#NO_APP\n"

#define ASM_OUTPUT_DEF(FILE,LABEL1,LABEL2)				\
 do {									\
	fputc ( '\t', FILE);						\
	assemble_name (FILE, LABEL1);					\
	fputs ( " = ", FILE);						\
	assemble_name (FILE, LABEL2);					\
	fputc ( '\n', FILE);						\
 } while (0)

/* Override default implementation in elfos.h to support -G.  */
#undef  ASM_OUTPUT_ALIGNED_LOCAL
#define ASM_OUTPUT_ALIGNED_LOCAL(FILE, NAME, SIZE, ALIGN)		\
do {									\
  if ((SIZE) <= g_switch_value)						\
    switch_to_section (sbss_section);					\
  else									\
    switch_to_section (bss_section);					\
  ASM_OUTPUT_TYPE_DIRECTIVE (FILE, NAME, "object");			\
  if (!flag_inhibit_size_directive)					\
    ASM_OUTPUT_SIZE_DIRECTIVE (FILE, NAME, SIZE);			\
  ASM_OUTPUT_ALIGN ((FILE), exact_log2((ALIGN) / BITS_PER_UNIT));	\
  ASM_OUTPUT_LABEL(FILE, NAME);						\
  ASM_OUTPUT_SKIP((FILE), (SIZE) ? (SIZE) : 1);				\
} while (0)

/* Override default implementation in elfos.h to support -G.  */
#undef  ASM_OUTPUT_ALIGNED_COMMON
#define ASM_OUTPUT_ALIGNED_COMMON(FILE, NAME, SIZE, ALIGN)		\
do 									\
{									\
  if ((SIZE) <= g_switch_value)						\
    {									\
      switch_to_section (sbss_section);					\
      (*targetm.asm_out.globalize_label) (FILE, NAME);			\
      ASM_OUTPUT_TYPE_DIRECTIVE (FILE, NAME, "object");			\
      if (!flag_inhibit_size_directive)					\
	ASM_OUTPUT_SIZE_DIRECTIVE (FILE, NAME, SIZE);			\
      ASM_OUTPUT_ALIGN ((FILE), exact_log2((ALIGN) / BITS_PER_UNIT));	\
      ASM_OUTPUT_LABEL(FILE, NAME);					\
      ASM_OUTPUT_SKIP((FILE), (SIZE) ? (SIZE) : 1);			\
    }									\
  else									\
    {									\
      switch_to_section (bss_section);					\
      fprintf ((FILE), "%s", COMMON_ASM_OP);				\
      assemble_name ((FILE), (NAME));					\
      fprintf ((FILE), ","HOST_WIDE_INT_PRINT_UNSIGNED",%u\n", (SIZE), (ALIGN) / BITS_PER_UNIT);	\
    }									\
}									\
while (0)

#define ASM_OUTPUT_LABEL(FILE, NAME) \
  do { assemble_name (FILE, NAME); fputs (":\n", FILE); } while (0)

#define ASM_OUTPUT_LABELREF(FILE,NAME)	\
  do {					\
    const char *xname = (NAME);		\
    if (xname[0] == '@')		\
      xname += 1;			\
    if (xname[0] == '*')		\
      xname += 1;			\
    fputs (xname, FILE);		\
  } while (0)

#define ASM_OUTPUT_SYMBOL_REF(STREAM, SYMBOL)				\
  do {									                    \
    assemble_name (STREAM, XSTR (SYMBOL, 0));				\
  } while (0)

#define GLOBAL_ASM_OP "\t.global\t"

#define REGISTER_NAMES 					 \
{                                                        \
 "r0",  "r1",  "r2",  "r3",  "r4",  "r5",  "r6",  "r7",	 \
 "r8",  "r9",  "r10", "r11", "r12", "r13", "r14", "r15", \
 "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", \
 "r24", "r25",  "gp",  "fp",  "sp",  "ra",  "ea",  "ba"}

#define PRINT_OPERAND_PUNCT_VALID_P(CHAR) \
  (((CHAR) == '&') || ((CHAR) == '@') || ((CHAR) == '*'))

#define PRINT_OPERAND(FILE, X, CODE)                    \
  lm32_print_operand (FILE, X, CODE)

#define PRINT_OPERAND_ADDRESS(FILE, ADDR) 				\
  lm32_print_operand_address (FILE, ADDR)

#ifndef LOCAL_LABEL_PREFIX
#define LOCAL_LABEL_PREFIX	"."
#endif

#define ASM_OUTPUT_ALIGN(FILE,LOG) 					\
  do { if ((LOG) != 0) fprintf (FILE, "\t.align %d\n", (1 << (LOG))); } while (0)

#define ASM_OUTPUT_ADDR_VEC_ELT(FILE, VALUE)                    \
do {                                                            \
  char label[64];                                               \
  ASM_GENERATE_INTERNAL_LABEL (label, "L", VALUE);              \
  fprintf (FILE, "\n\t.word\t");                                \
  assemble_name (FILE, label);                                  \
  fprintf (FILE, "\n");                                         \
} while (0)

#define ASM_OUTPUT_ADDR_DIFF_ELT(FILE, BODY, VALUE, REL)        \
do {                                                            \
  char label[64];                                               \
  fprintf (FILE, "\t.word\t(");                                 \
  ASM_GENERATE_INTERNAL_LABEL (label, "L", VALUE);		\
  assemble_name (FILE, label);                                  \
  fprintf (FILE, "-");                                          \
  ASM_GENERATE_INTERNAL_LABEL (label, "L", REL);                \
  assemble_name (FILE, label);                                  \
  fprintf (FILE, ")\n");                                        \
} while (0)

/*-------------*/
/* Debugging.  */
/*-------------*/

#define DBX_REGISTER_NUMBER(REGNO) (REGNO) 

#define CAN_DEBUG_WITHOUT_FP
     
#define DEFAULT_GDB_EXTENSIONS 1

/*--------*/
/* Misc.  */
/*--------*/

#define CASE_VECTOR_MODE Pmode

#define WORD_REGISTER_OPERATIONS

#define LOAD_EXTEND_OP(MODE) ZERO_EXTEND

#define SHORT_IMMEDIATES_SIGN_EXTEND

#define MOVE_MAX        UNITS_PER_WORD
#define MAX_MOVE_MAX    4

#define SHIFT_COUNT_TRUNCATED 1

#define TRULY_NOOP_TRUNCATION(OUTPREC, INPREC) 1

#define Pmode SImode

#define FUNCTION_MODE SImode

#ifndef NO_IMPLICIT_EXTERN_C
#define NO_IMPLICIT_EXTERN_C
#endif

#define STORE_FLAG_VALUE 1
