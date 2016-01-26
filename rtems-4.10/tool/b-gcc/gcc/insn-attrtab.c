/* Generated automatically by the program `genattrtab'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-attr.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "real.h"
#include "output.h"
#include "toplev.h"
#include "flags.h"
#include "function.h"

#define operands recog_data.operand

int
insn_current_length (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 33:  /* *inverted_fpe_branch */
    case 32:  /* *normal_fpe_branch */
    case 31:  /* *inverted_fp_branch */
    case 30:  /* *normal_fp_branch */
      extract_constrain_insn_cached (insn);
      if (fcc0_register_operand (operands[0], VOIDmode))
        {
	  return 0;
        }
      else
        {
	  if ((insn_current_reference_address (insn)) < (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[2]) == LABEL_REF ? XEXP (operands[2], 0) : operands[2])) : 0))
	    {
	      if (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[2]) == LABEL_REF ? XEXP (operands[2], 0) : operands[2])) : 0) - (insn_current_reference_address (insn))) < (260000))
	        {
		  if ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE)))
		    {
		      return 2;
		    }
		  else
		    {
		      return 1;
		    }
	        }
	      else
	        {
		  if ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE)))
		    {
		      return 4;
		    }
		  else
		    {
		      return 3;
		    }
	        }
	    }
	  else
	    {
	      if (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[2]) == LABEL_REF ? XEXP (operands[2], 0) : operands[2])) : 0)) < (260000))
	        {
		  if ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE)))
		    {
		      return 2;
		    }
		  else
		    {
		      return 1;
		    }
	        }
	      else
	        {
		  if ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE)))
		    {
		      return 4;
		    }
		  else
		    {
		      return 3;
		    }
	        }
	    }
        }

    case 29:  /* *inverted_branch */
    case 28:  /* *normal_branch */
      extract_constrain_insn_cached (insn);
      if (noov_compare64_operator (operands[0], VOIDmode))
        {
	  if ((insn_current_reference_address (insn)) < (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[1]) == LABEL_REF ? XEXP (operands[1], 0) : operands[1])) : 0))
	    {
	      if (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[1]) == LABEL_REF ? XEXP (operands[1], 0) : operands[1])) : 0) - (insn_current_reference_address (insn))) < (260000))
	        {
		  if ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE)))
		    {
		      return 2;
		    }
		  else
		    {
		      return 1;
		    }
	        }
	      else
	        {
		  if ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE)))
		    {
		      return 4;
		    }
		  else
		    {
		      return 3;
		    }
	        }
	    }
	  else
	    {
	      if (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[1]) == LABEL_REF ? XEXP (operands[1], 0) : operands[1])) : 0)) < (260000))
	        {
		  if ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE)))
		    {
		      return 2;
		    }
		  else
		    {
		      return 1;
		    }
	        }
	      else
	        {
		  if ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE)))
		    {
		      return 4;
		    }
		  else
		    {
		      return 3;
		    }
	        }
	    }
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
insn_variable_length_p (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 33:  /* *inverted_fpe_branch */
    case 32:  /* *normal_fpe_branch */
    case 31:  /* *inverted_fp_branch */
    case 30:  /* *normal_fp_branch */
      extract_insn_cached (insn);
      if (fcc0_register_operand (operands[0], VOIDmode))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 29:  /* *inverted_branch */
    case 28:  /* *normal_branch */
      extract_insn_cached (insn);
      if (noov_compare64_operator (operands[0], VOIDmode))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
insn_min_length (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 277:  /* do_builtin_setjmp_setup */
      extract_constrain_insn_cached (insn);
      if ((
#line 142 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(cfun->calls_alloca != 0)) == (
(CALLS_ALLOCA_FALSE)))
        {
	  return 0;
        }
      else if (! ((
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9))))
        {
	  return 1;
        }
      else if ((
#line 139 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(flag_pic != 0)) == (
(PIC_TRUE)))
        {
	  return 4;
        }
      else
        {
	  return 3;
        }

    case 276:  /* goto_handler_and_restore */
      extract_constrain_insn_cached (insn);
      if ((
#line 151 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(flag_delayed_branch != 0)) == (
(DELAYED_BRANCH_TRUE)))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 270:  /* *return_internal */
      extract_constrain_insn_cached (insn);
      if ((
#line 148 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(current_function_uses_only_leaf_regs != 0)) == (
(LEAF_FUNCTION_TRUE)))
        {
	  if ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE)))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else if ((
#line 145 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(crtl->calls_eh_return !=0 )) == (
(CALLS_EH_RETURN_TRUE)))
        {
	  if ((
#line 151 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(flag_delayed_branch != 0)) == (
(DELAYED_BRANCH_TRUE)))
	    {
	      if ((
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9)))
	        {
		  return 2;
	        }
	      else
	        {
		  return 3;
	        }
	    }
	  else
	    {
	      return 4;
	    }
        }
      else if ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE)))
        {
	  if ((
#line 151 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(flag_delayed_branch != 0)) == (
(DELAYED_BRANCH_TRUE)))
	    {
	      return 2;
	    }
	  else
	    {
	      return 3;
	    }
        }
      else
        {
	  return 1;
        }

    case 268:  /* *sibcall_value_symbolic_sp32 */
    case 267:  /* *sibcall_symbolic_sp32 */
      extract_constrain_insn_cached (insn);
      if ((
#line 148 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(current_function_uses_only_leaf_regs != 0)) == (
(LEAF_FUNCTION_TRUE)))
        {
	  if ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE)))
	    {
	      return 3;
	    }
	  else
	    {
	      return 2;
	    }
        }
      else
        {
	  if ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE)))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }

    case 293:  /* tldm_call32 */
    case 289:  /* tgd_call32 */
    case 274:  /* *branch_sp32 */
    case 266:  /* *call_value_symbolic_sp32 */
    case 265:  /* *call_value_address_sp32 */
    case 260:  /* *call_symbolic_sp32 */
    case 259:  /* *call_address_sp32 */
    case 258:  /* *tablejump_sp32 */
    case 257:  /* jump */
      extract_constrain_insn_cached (insn);
      if ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 256:  /* lshrdi3_v8plus */
    case 254:  /* ashrdi3_v8plus */
    case 250:  /* ashldi3_v8plus */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 5;
        }
      else
        {
	  return 6;
        }

    case 243:  /* *absdf2_notv9 */
    case 242:  /* *abstf2_v9 */
    case 240:  /* *abstf2_notv9 */
    case 237:  /* *negdf2_notv9 */
    case 236:  /* *negtf2_v9 */
    case 235:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 214:  /* *one_cmplv8qi2_sp32 */
    case 213:  /* *one_cmplv4hi2_sp32 */
    case 212:  /* *one_cmplv2si2_sp32 */
    case 211:  /* *one_cmpldi2_sp32 */
    case 197:  /* *xor_not_v8qi_sp32 */
    case 196:  /* *xor_not_v4hi_sp32 */
    case 195:  /* *xor_not_v2si_sp32 */
    case 194:  /* *xor_not_di_sp32 */
    case 190:  /* *xorv8qi3_sp32 */
    case 189:  /* *xorv4hi3_sp32 */
    case 188:  /* *xorv2si3_sp32 */
    case 187:  /* *xordi3_sp32 */
    case 183:  /* *or_not_v8qi_sp32 */
    case 182:  /* *or_not_v4hi_sp32 */
    case 181:  /* *or_not_v2si_sp32 */
    case 180:  /* *or_not_di_sp32 */
    case 176:  /* *iorv8qi3_sp32 */
    case 175:  /* *iorv4hi3_sp32 */
    case 174:  /* *iorv2si3_sp32 */
    case 173:  /* *iordi3_sp32 */
    case 169:  /* *and_not_v8qi_sp32 */
    case 168:  /* *and_not_v4hi_sp32 */
    case 167:  /* *and_not_v2si_sp32 */
    case 166:  /* *and_not_di_sp32 */
    case 162:  /* *andv8qi3_sp32 */
    case 161:  /* *andv4hi3_sp32 */
    case 160:  /* *andv2si3_sp32 */
    case 159:  /* *anddi3_sp32 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 76:  /* *movdf_insn_sp32_v9_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 75:  /* *movdf_insn_sp32_v9 */
    case 74:  /* *movdf_insn_sp32_v9 */
    case 73:  /* *movdf_insn_sp32_v9 */
    case 72:  /* *movdf_insn_sp32_v9 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7f))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 71:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 70:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 46:  /* *movdi_insn_sp32_v9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else if (which_alternative == 1)
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0xc))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0xf0))
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x300))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0xc00))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 45:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x78))
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x180))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 272:  /* update_return */
    case 34:  /* load_pcrel_symsi */
      extract_constrain_insn_cached (insn);
      if ((
#line 151 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(flag_delayed_branch != 0)) == (
(DELAYED_BRANCH_TRUE)))
        {
	  return 3;
        }
      else
        {
	  return 4;
        }

    case 33:  /* *inverted_fpe_branch */
    case 32:  /* *normal_fpe_branch */
    case 31:  /* *inverted_fp_branch */
    case 30:  /* *normal_fp_branch */
      extract_constrain_insn_cached (insn);
      if (fcc0_register_operand (operands[0], VOIDmode))
        {
	  if ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE)))
	    {
	      if ((
#line 192 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9)) == (0))
	        {
		  return 3;
	        }
	      else
	        {
		  return 2;
	        }
	    }
	  else
	    {
	      if ((
#line 195 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9)) == (0))
	        {
		  return 2;
	        }
	      else
	        {
		  return 1;
	        }
	    }
        }
      else
        {
	  return 1;
        }

    case 29:  /* *inverted_branch */
    case 28:  /* *normal_branch */
      extract_constrain_insn_cached (insn);
      if (noov_compare64_operator (operands[0], VOIDmode))
        {
	  return 1;
        }
      else
        {
	  if ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE)))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 207:  /* *negdi2_sp32 */
    case 151:  /* const_umulsi3_highpart */
    case 150:  /* *umulsi3_highpart_sp32 */
    case 149:  /* const_umulsi3_highpart_v8plus */
    case 148:  /* umulsi3_highpart_v8plus */
    case 143:  /* const_smulsi3_highpart */
    case 142:  /* *smulsi3_highpart_sp32 */
    case 141:  /* const_smulsi3_highpart_v8plus */
    case 140:  /* *sparc.md:4656 */
    case 139:  /* smulsi3_highpart_v8plus */
    case 128:  /* *sparc.md:4336 */
    case 127:  /* *subx_extend */
    case 125:  /* subdi3_insn_sp32 */
    case 121:  /* *sparc.md:4164 */
    case 120:  /* *addx_extend_sp32 */
    case 118:  /* adddi3_insn_sp32 */
    case 89:  /* *zero_extendsidi2_insn_sp32 */
    case 85:  /* *movtf_cc_v9 */
    case 14:  /* *x_minus_i_eq_0 */
    case 13:  /* *x_plus_i_eq_0 */
    case 12:  /* *x_minus_i_ne_0 */
    case 11:  /* *x_plus_i_ne_0 */
    case 10:  /* *neg_seqsi_zero */
    case 9:  /* *seqsi_zero */
    case 8:  /* *neg_snesi_zero */
    case 7:  /* *snesi_zero */
      return 2;

    case 351:  /* *sync_compare_and_swapdi_v8plus */
    case 280:  /* ffssi2 */
      return 8;

    case 316:  /* stack_protect_testsi */
    case 78:  /* *movtf_insn_sp32_no_fpu */
    case 77:  /* *movtf_insn_sp32 */
      return 4;

    case 315:  /* stack_protect_setsi */
    case 264:  /* *call_symbolic_untyped_struct_value_sp32 */
    case 263:  /* *call_address_untyped_struct_value_sp32 */
    case 262:  /* *call_symbolic_struct_value_sp32 */
    case 261:  /* *call_address_struct_value_sp32 */
      return 3;

    case 271:  /* blockage */
      return 0;

    case 155:  /* *cmp_udiv_cc_set */
      if ((
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9)))
        {
	  return 2;
        }
      else
        {
	  return 5;
        }

    case 154:  /* udivsi3_sp32 */
      if ((
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9)))
        {
	  return 3;
        }
      else
        {
	  return 5;
        }

    case 153:  /* *cmp_sdiv_cc_set */
      if ((
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9)))
        {
	  return 3;
        }
      else
        {
	  return 6;
        }

    case 152:  /* divsi3_sp32 */
      if ((
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9)))
        {
	  return 4;
        }
      else
        {
	  return 6;
        }

    case 147:  /* const_umulsidi3_v8plus */
    case 144:  /* umulsidi3_v8plus */
    case 136:  /* const_mulsidi3_v8plus */
    case 135:  /* mulsidi3_v8plus */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 3;
        }

    case 146:  /* const_umulsidi3_sp32 */
    case 145:  /* *umulsidi3_sp32 */
    case 138:  /* const_mulsidi3_sp32 */
    case 137:  /* *mulsidi3_sp32 */
      if (((! (
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9))) && ((! (
#line 109 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8))) && (
#line 110 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET)))))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 133:  /* muldi3_v8plus */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 9;
        }
      else
        {
	  return 8;
        }

    default:
      return 1;

    }
}

int
insn_default_length (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 277:  /* do_builtin_setjmp_setup */
      extract_constrain_insn_cached (insn);
      if ((
#line 142 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(cfun->calls_alloca != 0)) == (
(CALLS_ALLOCA_FALSE)))
        {
	  return 0;
        }
      else if (! ((
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9))))
        {
	  return 1;
        }
      else if ((
#line 139 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(flag_pic != 0)) == (
(PIC_TRUE)))
        {
	  return 4;
        }
      else
        {
	  return 3;
        }

    case 276:  /* goto_handler_and_restore */
      extract_constrain_insn_cached (insn);
      if ((
#line 151 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(flag_delayed_branch != 0)) == (
(DELAYED_BRANCH_TRUE)))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 270:  /* *return_internal */
      extract_constrain_insn_cached (insn);
      if ((
#line 148 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(current_function_uses_only_leaf_regs != 0)) == (
(LEAF_FUNCTION_TRUE)))
        {
	  if ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE)))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else if ((
#line 145 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(crtl->calls_eh_return !=0 )) == (
(CALLS_EH_RETURN_TRUE)))
        {
	  if ((
#line 151 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(flag_delayed_branch != 0)) == (
(DELAYED_BRANCH_TRUE)))
	    {
	      if ((
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9)))
	        {
		  return 2;
	        }
	      else
	        {
		  return 3;
	        }
	    }
	  else
	    {
	      return 4;
	    }
        }
      else if ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE)))
        {
	  if ((
#line 151 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(flag_delayed_branch != 0)) == (
(DELAYED_BRANCH_TRUE)))
	    {
	      return 2;
	    }
	  else
	    {
	      return 3;
	    }
        }
      else
        {
	  return 1;
        }

    case 268:  /* *sibcall_value_symbolic_sp32 */
    case 267:  /* *sibcall_symbolic_sp32 */
      extract_constrain_insn_cached (insn);
      if ((
#line 148 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(current_function_uses_only_leaf_regs != 0)) == (
(LEAF_FUNCTION_TRUE)))
        {
	  if ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE)))
	    {
	      return 3;
	    }
	  else
	    {
	      return 2;
	    }
        }
      else
        {
	  if ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE)))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }

    case 293:  /* tldm_call32 */
    case 289:  /* tgd_call32 */
    case 274:  /* *branch_sp32 */
    case 266:  /* *call_value_symbolic_sp32 */
    case 265:  /* *call_value_address_sp32 */
    case 260:  /* *call_symbolic_sp32 */
    case 259:  /* *call_address_sp32 */
    case 258:  /* *tablejump_sp32 */
    case 257:  /* jump */
      extract_constrain_insn_cached (insn);
      if ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 256:  /* lshrdi3_v8plus */
    case 254:  /* ashrdi3_v8plus */
    case 250:  /* ashldi3_v8plus */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 5;
        }
      else
        {
	  return 6;
        }

    case 243:  /* *absdf2_notv9 */
    case 242:  /* *abstf2_v9 */
    case 240:  /* *abstf2_notv9 */
    case 237:  /* *negdf2_notv9 */
    case 236:  /* *negtf2_v9 */
    case 235:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 214:  /* *one_cmplv8qi2_sp32 */
    case 213:  /* *one_cmplv4hi2_sp32 */
    case 212:  /* *one_cmplv2si2_sp32 */
    case 211:  /* *one_cmpldi2_sp32 */
    case 197:  /* *xor_not_v8qi_sp32 */
    case 196:  /* *xor_not_v4hi_sp32 */
    case 195:  /* *xor_not_v2si_sp32 */
    case 194:  /* *xor_not_di_sp32 */
    case 190:  /* *xorv8qi3_sp32 */
    case 189:  /* *xorv4hi3_sp32 */
    case 188:  /* *xorv2si3_sp32 */
    case 187:  /* *xordi3_sp32 */
    case 183:  /* *or_not_v8qi_sp32 */
    case 182:  /* *or_not_v4hi_sp32 */
    case 181:  /* *or_not_v2si_sp32 */
    case 180:  /* *or_not_di_sp32 */
    case 176:  /* *iorv8qi3_sp32 */
    case 175:  /* *iorv4hi3_sp32 */
    case 174:  /* *iorv2si3_sp32 */
    case 173:  /* *iordi3_sp32 */
    case 169:  /* *and_not_v8qi_sp32 */
    case 168:  /* *and_not_v4hi_sp32 */
    case 167:  /* *and_not_v2si_sp32 */
    case 166:  /* *and_not_di_sp32 */
    case 162:  /* *andv8qi3_sp32 */
    case 161:  /* *andv4hi3_sp32 */
    case 160:  /* *andv2si3_sp32 */
    case 159:  /* *anddi3_sp32 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 76:  /* *movdf_insn_sp32_v9_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 75:  /* *movdf_insn_sp32_v9 */
    case 74:  /* *movdf_insn_sp32_v9 */
    case 73:  /* *movdf_insn_sp32_v9 */
    case 72:  /* *movdf_insn_sp32_v9 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7f))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 71:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 70:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 46:  /* *movdi_insn_sp32_v9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else if (which_alternative == 1)
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0xc))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0xf0))
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x300))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0xc00))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 45:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x78))
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x180))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 272:  /* update_return */
    case 34:  /* load_pcrel_symsi */
      extract_constrain_insn_cached (insn);
      if ((
#line 151 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(flag_delayed_branch != 0)) == (
(DELAYED_BRANCH_TRUE)))
        {
	  return 3;
        }
      else
        {
	  return 4;
        }

    case 33:  /* *inverted_fpe_branch */
    case 32:  /* *normal_fpe_branch */
    case 31:  /* *inverted_fp_branch */
    case 30:  /* *normal_fp_branch */
      extract_constrain_insn_cached (insn);
      if (fcc0_register_operand (operands[0], VOIDmode))
        {
	  if ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE)))
	    {
	      if ((
#line 192 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9)) == (0))
	        {
		  return 3;
	        }
	      else
	        {
		  return 2;
	        }
	    }
	  else
	    {
	      if ((
#line 195 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9)) == (0))
	        {
		  return 2;
	        }
	      else
	        {
		  return 1;
	        }
	    }
        }
      else
        {
	  return 4;
        }

    case 29:  /* *inverted_branch */
    case 28:  /* *normal_branch */
      extract_constrain_insn_cached (insn);
      if (noov_compare64_operator (operands[0], VOIDmode))
        {
	  return 4;
        }
      else
        {
	  if ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE)))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 207:  /* *negdi2_sp32 */
    case 151:  /* const_umulsi3_highpart */
    case 150:  /* *umulsi3_highpart_sp32 */
    case 149:  /* const_umulsi3_highpart_v8plus */
    case 148:  /* umulsi3_highpart_v8plus */
    case 143:  /* const_smulsi3_highpart */
    case 142:  /* *smulsi3_highpart_sp32 */
    case 141:  /* const_smulsi3_highpart_v8plus */
    case 140:  /* *sparc.md:4656 */
    case 139:  /* smulsi3_highpart_v8plus */
    case 128:  /* *sparc.md:4336 */
    case 127:  /* *subx_extend */
    case 125:  /* subdi3_insn_sp32 */
    case 121:  /* *sparc.md:4164 */
    case 120:  /* *addx_extend_sp32 */
    case 118:  /* adddi3_insn_sp32 */
    case 89:  /* *zero_extendsidi2_insn_sp32 */
    case 85:  /* *movtf_cc_v9 */
    case 14:  /* *x_minus_i_eq_0 */
    case 13:  /* *x_plus_i_eq_0 */
    case 12:  /* *x_minus_i_ne_0 */
    case 11:  /* *x_plus_i_ne_0 */
    case 10:  /* *neg_seqsi_zero */
    case 9:  /* *seqsi_zero */
    case 8:  /* *neg_snesi_zero */
    case 7:  /* *snesi_zero */
      return 2;

    case 351:  /* *sync_compare_and_swapdi_v8plus */
    case 280:  /* ffssi2 */
      return 8;

    case 316:  /* stack_protect_testsi */
    case 78:  /* *movtf_insn_sp32_no_fpu */
    case 77:  /* *movtf_insn_sp32 */
      return 4;

    case 315:  /* stack_protect_setsi */
    case 264:  /* *call_symbolic_untyped_struct_value_sp32 */
    case 263:  /* *call_address_untyped_struct_value_sp32 */
    case 262:  /* *call_symbolic_struct_value_sp32 */
    case 261:  /* *call_address_struct_value_sp32 */
      return 3;

    case 271:  /* blockage */
      return 0;

    case 155:  /* *cmp_udiv_cc_set */
      if ((
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9)))
        {
	  return 2;
        }
      else
        {
	  return 5;
        }

    case 154:  /* udivsi3_sp32 */
      if ((
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9)))
        {
	  return 3;
        }
      else
        {
	  return 5;
        }

    case 153:  /* *cmp_sdiv_cc_set */
      if ((
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9)))
        {
	  return 3;
        }
      else
        {
	  return 6;
        }

    case 152:  /* divsi3_sp32 */
      if ((
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9)))
        {
	  return 4;
        }
      else
        {
	  return 6;
        }

    case 147:  /* const_umulsidi3_v8plus */
    case 144:  /* umulsidi3_v8plus */
    case 136:  /* const_mulsidi3_v8plus */
    case 135:  /* mulsidi3_v8plus */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 3;
        }

    case 146:  /* const_umulsidi3_sp32 */
    case 145:  /* *umulsidi3_sp32 */
    case 138:  /* const_mulsidi3_sp32 */
    case 137:  /* *mulsidi3_sp32 */
      if (((! (
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9))) && ((! (
#line 109 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8))) && (
#line 110 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET)))))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 133:  /* muldi3_v8plus */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 9;
        }
      else
        {
	  return 8;
        }

    default:
      return 1;

    }
}

int
bypass_p (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 241:  /* *abstf2_hq_v9 */
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))) || (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0)) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 243:  /* *absdf2_notv9 */
    case 242:  /* *abstf2_v9 */
    case 240:  /* *abstf2_notv9 */
    case 237:  /* *negdf2_notv9 */
    case 236:  /* *negtf2_v9 */
    case 235:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))) || (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0)) || (((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 347:  /* pdist_vis */
    case 345:  /* faligndatav8qi_vis */
    case 344:  /* faligndatav4hi_vis */
    case 343:  /* faligndatav2si_vis */
    case 342:  /* faligndatadi_vis */
    case 334:  /* fpmerge_vis */
    case 333:  /* fexpand_vis */
    case 332:  /* fpack32_vis */
    case 331:  /* fpackfix_vis */
    case 330:  /* fpack16_vis */
    case 329:  /* *nand<V32mode>_vis */
    case 328:  /* *nand<V32mode>_vis */
    case 327:  /* *nand<V32mode>_vis */
    case 326:  /* *nand<V64mode>_vis */
    case 325:  /* *nand<V64mode>_vis */
    case 324:  /* *nand<V64mode>_vis */
    case 323:  /* *nand<V64mode>_vis */
    case 322:  /* subv2hi3 */
    case 321:  /* subv4hi3 */
    case 320:  /* subv2si3 */
    case 319:  /* addv2hi3 */
    case 318:  /* addv4hi3 */
    case 317:  /* addv2si3 */
    case 248:  /* sqrtsf2 */
    case 247:  /* sqrtdf2 */
    case 246:  /* *sqrttf2_hq */
    case 234:  /* divsf3 */
    case 233:  /* divdf3 */
    case 232:  /* *divtf3_hq */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 217:  /* one_cmplv4qi2 */
    case 216:  /* one_cmplv2hi2 */
    case 215:  /* one_cmplsi2 */
    case 214:  /* *one_cmplv8qi2_sp32 */
    case 213:  /* *one_cmplv4hi2_sp32 */
    case 212:  /* *one_cmplv2si2_sp32 */
    case 211:  /* *one_cmpldi2_sp32 */
    case 200:  /* *xor_not_v4qi */
    case 199:  /* *xor_not_v2hi */
    case 198:  /* *xor_not_si */
    case 197:  /* *xor_not_v8qi_sp32 */
    case 196:  /* *xor_not_v4hi_sp32 */
    case 195:  /* *xor_not_v2si_sp32 */
    case 194:  /* *xor_not_di_sp32 */
    case 193:  /* xorv4qi3 */
    case 192:  /* xorv2hi3 */
    case 191:  /* xorsi3 */
    case 190:  /* *xorv8qi3_sp32 */
    case 189:  /* *xorv4hi3_sp32 */
    case 188:  /* *xorv2si3_sp32 */
    case 187:  /* *xordi3_sp32 */
    case 186:  /* *or_not_v4qi */
    case 185:  /* *or_not_v2hi */
    case 184:  /* *or_not_si */
    case 183:  /* *or_not_v8qi_sp32 */
    case 182:  /* *or_not_v4hi_sp32 */
    case 181:  /* *or_not_v2si_sp32 */
    case 180:  /* *or_not_di_sp32 */
    case 179:  /* iorv4qi3 */
    case 178:  /* iorv2hi3 */
    case 177:  /* iorsi3 */
    case 176:  /* *iorv8qi3_sp32 */
    case 175:  /* *iorv4hi3_sp32 */
    case 174:  /* *iorv2si3_sp32 */
    case 173:  /* *iordi3_sp32 */
    case 172:  /* *and_not_v4qi */
    case 171:  /* *and_not_v2hi */
    case 170:  /* *and_not_si */
    case 169:  /* *and_not_v8qi_sp32 */
    case 168:  /* *and_not_v4hi_sp32 */
    case 167:  /* *and_not_v2si_sp32 */
    case 166:  /* *and_not_di_sp32 */
    case 165:  /* andv4qi3 */
    case 164:  /* andv2hi3 */
    case 163:  /* andsi3 */
    case 162:  /* *andv8qi3_sp32 */
    case 161:  /* *andv4hi3_sp32 */
    case 160:  /* *andv2si3_sp32 */
    case 159:  /* *anddi3_sp32 */
      extract_constrain_insn_cached (insn);
      if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0)) || (((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 129:  /* subsi3 */
    case 122:  /* addsi3 */
      extract_constrain_insn_cached (insn);
      if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x3))) || (((which_alternative == 2) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x3)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 76:  /* *movdf_insn_sp32_v9_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0x7))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0x7))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 75:  /* *movdf_insn_sp32_v9 */
    case 74:  /* *movdf_insn_sp32_v9 */
    case 73:  /* *movdf_insn_sp32_v9 */
    case 72:  /* *movdf_insn_sp32_v9 */
      extract_constrain_insn_cached (insn);
      if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0x7c))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0x7d))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 71:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0x3))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0x3))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 70:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 0)) || (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0xf))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0xf)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 67:  /* *movsf_insn_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x7))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x7))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 66:  /* *movsf_insn */
    case 65:  /* *movsf_insn */
    case 64:  /* *movsf_insn */
      extract_constrain_insn_cached (insn);
      if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 5)) || (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x1f))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x1e)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 46:  /* *movdi_insn_sp32_v9 */
      extract_constrain_insn_cached (insn);
      if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (((1 << which_alternative) & 0x2200))) || (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x1cf0))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x1cf0)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 45:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 8)) || (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0x187))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0x187)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 38:  /* *movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 5)) || (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x13))) || (((which_alternative == 7) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x13))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 36:  /* *movhi_insn */
      extract_constrain_insn_cached (insn);
      if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x3))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x3))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 88:  /* *zero_extendqisi2_insn */
    case 87:  /* *zero_extendqihi2_insn */
    case 35:  /* *movqi_insn */
      extract_constrain_insn_cached (insn);
      if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0)) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 355:  /* *ldstubsi */
    case 354:  /* *ldstubhi */
    case 353:  /* *ldstubqi */
    case 352:  /* *swapsi */
    case 351:  /* *sync_compare_and_swapdi_v8plus */
    case 350:  /* *sync_compare_and_swapsi */
    case 349:  /* *membar */
    case 348:  /* *stbar */
    case 316:  /* stack_protect_testsi */
    case 315:  /* stack_protect_setsi */
    case 314:  /* *tldo_stw_sp32 */
    case 313:  /* *tldo_sth_sp32 */
    case 312:  /* *tldo_stb_sp32 */
    case 311:  /* *tldo_lduw_sp32 */
    case 310:  /* *tldo_ldsh1_sp32 */
    case 309:  /* *tldo_lduh1_sp32 */
    case 308:  /* *tldo_lduh_sp32 */
    case 307:  /* *tldo_ldsb2_sp32 */
    case 306:  /* *tldo_ldsb1_sp32 */
    case 305:  /* *tldo_ldub2_sp32 */
    case 304:  /* *tldo_ldub1_sp32 */
    case 303:  /* *tldo_ldub_sp32 */
    case 299:  /* tie_ld32 */
    case 293:  /* tldm_call32 */
    case 289:  /* tgd_call32 */
    case 285:  /* *sparc.md:7453 */
    case 284:  /* *sparc.md:7441 */
    case 283:  /* trap */
    case 282:  /* prefetch_32 */
    case 281:  /* prefetch_64 */
    case 280:  /* ffssi2 */
    case 279:  /* flushdi */
    case 278:  /* flush */
    case 277:  /* do_builtin_setjmp_setup */
    case 276:  /* goto_handler_and_restore */
    case 275:  /* flush_register_windows */
    case 274:  /* *branch_sp32 */
    case 272:  /* update_return */
    case 270:  /* *return_internal */
    case 269:  /* save_register_windowsi */
    case 268:  /* *sibcall_value_symbolic_sp32 */
    case 267:  /* *sibcall_symbolic_sp32 */
    case 266:  /* *call_value_symbolic_sp32 */
    case 265:  /* *call_value_address_sp32 */
    case 264:  /* *call_symbolic_untyped_struct_value_sp32 */
    case 263:  /* *call_address_untyped_struct_value_sp32 */
    case 262:  /* *call_symbolic_struct_value_sp32 */
    case 261:  /* *call_address_struct_value_sp32 */
    case 260:  /* *call_symbolic_sp32 */
    case 259:  /* *call_address_sp32 */
    case 258:  /* *tablejump_sp32 */
    case 257:  /* jump */
    case 256:  /* lshrdi3_v8plus */
    case 254:  /* ashrdi3_v8plus */
    case 250:  /* ashldi3_v8plus */
    case 158:  /* *umacdi */
    case 157:  /* *smacdi */
    case 156:  /* *smacsi */
    case 155:  /* *cmp_udiv_cc_set */
    case 154:  /* udivsi3_sp32 */
    case 153:  /* *cmp_sdiv_cc_set */
    case 152:  /* divsi3_sp32 */
    case 151:  /* const_umulsi3_highpart */
    case 150:  /* *umulsi3_highpart_sp32 */
    case 149:  /* const_umulsi3_highpart_v8plus */
    case 148:  /* umulsi3_highpart_v8plus */
    case 147:  /* const_umulsidi3_v8plus */
    case 146:  /* const_umulsidi3_sp32 */
    case 145:  /* *umulsidi3_sp32 */
    case 144:  /* umulsidi3_v8plus */
    case 143:  /* const_smulsi3_highpart */
    case 142:  /* *smulsi3_highpart_sp32 */
    case 141:  /* const_smulsi3_highpart_v8plus */
    case 140:  /* *sparc.md:4656 */
    case 139:  /* smulsi3_highpart_v8plus */
    case 138:  /* const_mulsidi3_sp32 */
    case 137:  /* *mulsidi3_sp32 */
    case 136:  /* const_mulsidi3_v8plus */
    case 135:  /* mulsidi3_v8plus */
    case 134:  /* *cmp_mul_set */
    case 133:  /* muldi3_v8plus */
    case 132:  /* mulsi3 */
    case 126:  /* subx */
    case 119:  /* addx */
    case 98:  /* *sign_extendqisi2_insn */
    case 97:  /* *sign_extendqihi2_insn */
    case 96:  /* *sign_extendhisi2_insn */
    case 86:  /* *zero_extendhisi2_insn */
    case 81:  /* *movsi_cc_v9 */
    case 80:  /* *movhi_cc_v9 */
    case 79:  /* *movqi_cc_v9 */
    case 34:  /* load_pcrel_symsi */
    case 33:  /* *inverted_fpe_branch */
    case 32:  /* *normal_fpe_branch */
    case 31:  /* *inverted_fp_branch */
    case 30:  /* *normal_fp_branch */
    case 29:  /* *inverted_branch */
    case 28:  /* *normal_branch */
    case 27:  /* *x_minus_sgeu */
    case 26:  /* *sgeu_plus_x */
    case 25:  /* *x_minus_sltu_plus_y */
    case 24:  /* *x_minus_y_minus_sltu */
    case 23:  /* *x_minus_sltu */
    case 22:  /* *sltu_plus_x_plus_y */
    case 21:  /* *sltu_plus_x */
    case 20:  /* *neg_sgeu_insn */
    case 19:  /* *sgeu_insn */
    case 18:  /* *neg_sltu_plus_x */
    case 17:  /* *neg_sltu_minus_x */
    case 16:  /* *neg_sltu_insn */
    case 15:  /* *sltu_insn */
      return 0;

    case 6:  /* *cmptf_fp */
    case 5:  /* *cmpdf_fp */
    case 4:  /* *cmpsf_fp */
    case 3:  /* *cmptf_fpe */
    case 2:  /* *cmpdf_fpe */
    case 1:  /* *cmpsf_fpe */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (get_attr_type (insn) == TYPE_FPLOAD)) || (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((get_attr_type (insn) == TYPE_IALU) || (get_attr_type (insn) == TYPE_SHIFT)) || (get_attr_type (insn) == TYPE_COMPARE))) || ((((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FPMOVE)) && ((get_attr_fptype (insn) == FPTYPE_SINGLE) || (get_attr_fptype (insn) == FPTYPE_DOUBLE))) || ((((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_FPCMOVE) || (get_attr_type (insn) == TYPE_FPCRMOVE))) && ((get_attr_fptype (insn) == FPTYPE_SINGLE) || (get_attr_fptype (insn) == FPTYPE_DOUBLE))) || ((((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FP)) && ((get_attr_fptype (insn) == FPTYPE_SINGLE) || (get_attr_fptype (insn) == FPTYPE_DOUBLE))) || ((((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FPMUL)) && ((get_attr_fptype (insn) == FPTYPE_SINGLE) || (get_attr_fptype (insn) == FPTYPE_DOUBLE))) || (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((get_attr_type (insn) == TYPE_FPDIVS) || (get_attr_type (insn) == TYPE_FPSQRTS)) || ((get_attr_type (insn) == TYPE_FPDIVD) || (get_attr_type (insn) == TYPE_FPSQRTD)))) || ((((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FGA)) && ((get_attr_fptype (insn) == FPTYPE_SINGLE) || (get_attr_fptype (insn) == FPTYPE_DOUBLE))) || ((((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_FGM_PACK) || ((get_attr_type (insn) == TYPE_FGM_MUL) || (get_attr_type (insn) == TYPE_FGM_CMP)))) && ((get_attr_fptype (insn) == FPTYPE_SINGLE) || (get_attr_fptype (insn) == FPTYPE_DOUBLE))) || (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FGM_PDIST)) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && ((((((((get_attr_type (insn) == TYPE_IALU) || ((get_attr_type (insn) == TYPE_SHIFT) || (get_attr_type (insn) == TYPE_COMPARE))) || (get_attr_type (insn) == TYPE_FPMOVE)) || (get_attr_type (insn) == TYPE_FPCMOVE)) || (get_attr_type (insn) == TYPE_FP)) || (get_attr_type (insn) == TYPE_FPCMP)) || (get_attr_type (insn) == TYPE_FPMUL)) || (get_attr_type (insn) == TYPE_FGM_PDIST)))))))))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    default:
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    }
}

int
insn_default_latency (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 347:  /* pdist_vis */
    case 345:  /* faligndatav8qi_vis */
    case 344:  /* faligndatav4hi_vis */
    case 343:  /* faligndatav2si_vis */
    case 342:  /* faligndatadi_vis */
    case 334:  /* fpmerge_vis */
    case 333:  /* fexpand_vis */
    case 332:  /* fpack32_vis */
    case 331:  /* fpackfix_vis */
    case 330:  /* fpack16_vis */
    case 329:  /* *nand<V32mode>_vis */
    case 328:  /* *nand<V32mode>_vis */
    case 327:  /* *nand<V32mode>_vis */
    case 326:  /* *nand<V64mode>_vis */
    case 325:  /* *nand<V64mode>_vis */
    case 324:  /* *nand<V64mode>_vis */
    case 323:  /* *nand<V64mode>_vis */
    case 322:  /* subv2hi3 */
    case 321:  /* subv4hi3 */
    case 320:  /* subv2si3 */
    case 319:  /* addv2hi3 */
    case 318:  /* addv4hi3 */
    case 317:  /* addv2si3 */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 2;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 3;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 8;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 6;
        }
      else
        {
	  return 0;
        }

    case 314:  /* *tldo_stw_sp32 */
    case 313:  /* *tldo_sth_sp32 */
    case 312:  /* *tldo_stb_sp32 */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 2;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701))))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 311:  /* *tldo_lduw_sp32 */
    case 299:  /* tie_ld32 */
    case 282:  /* prefetch_32 */
    case 281:  /* prefetch_64 */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))))
        {
	  return 1;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701))))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 275:  /* flush_register_windows */
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 1;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 5;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 25 /* 0x19 */;
        }
      else
        {
	  return 0;
        }

    case 270:  /* *return_internal */
      return 0;

    case 269:  /* save_register_windowsi */
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 4;
        }
      else
        {
	  return 0;
        }

    case 293:  /* tldm_call32 */
    case 289:  /* tgd_call32 */
    case 274:  /* *branch_sp32 */
    case 268:  /* *sibcall_value_symbolic_sp32 */
    case 267:  /* *sibcall_symbolic_sp32 */
    case 266:  /* *call_value_symbolic_sp32 */
    case 265:  /* *call_value_address_sp32 */
    case 264:  /* *call_symbolic_untyped_struct_value_sp32 */
    case 263:  /* *call_address_untyped_struct_value_sp32 */
    case 262:  /* *call_symbolic_struct_value_sp32 */
    case 261:  /* *call_address_struct_value_sp32 */
    case 260:  /* *call_symbolic_sp32 */
    case 259:  /* *call_address_sp32 */
    case 258:  /* *tablejump_sp32 */
    case 257:  /* jump */
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 1;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 3;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 5;
        }
      else
        {
	  return 0;
        }

    case 255:  /* lshrsi3 */
    case 253:  /* ashrsi3 */
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 249:  /* ashlsi3 */
      extract_insn_cached (insn);
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) || (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))) && (! (const_one_operand (operands[2], VOIDmode)))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 248:  /* sqrtsf2 */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 63 /* 0x3f */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 17 /* 0x11 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 13 /* 0xd */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 20 /* 0x14 */;
        }
      else
        {
	  return 0;
        }

    case 247:  /* sqrtdf2 */
    case 246:  /* *sqrttf2_hq */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 63 /* 0x3f */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 17 /* 0x11 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 23 /* 0x17 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 29 /* 0x1d */;
        }
      else
        {
	  return 0;
        }

    case 241:  /* *abstf2_hq_v9 */
      extract_constrain_insn_cached (insn);
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 5;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))) || (((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0)))))
        {
	  return 1;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 3;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 8;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 245:  /* abssf2 */
    case 244:  /* *absdf2_v9 */
    case 239:  /* negsf2 */
    case 238:  /* *negdf2_v9 */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 5;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))))
        {
	  return 1;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 3;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 8;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 243:  /* *absdf2_notv9 */
    case 242:  /* *abstf2_v9 */
    case 240:  /* *abstf2_notv9 */
    case 237:  /* *negdf2_notv9 */
    case 236:  /* *negtf2_v9 */
    case 235:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 0))
        {
	  return 5;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if ((((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 0)) || (((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))) || (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0)) || ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 8;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 234:  /* divsf3 */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 37 /* 0x25 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 6;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 8;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 13 /* 0xd */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 17 /* 0x11 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 54 /* 0x36 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 19 /* 0x13 */;
        }
      else
        {
	  return 0;
        }

    case 233:  /* divdf3 */
    case 232:  /* *divtf3_hq */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 37 /* 0x25 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 9;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 12 /* 0xc */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 23 /* 0x17 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 20 /* 0x14 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 83 /* 0x53 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 33 /* 0x21 */;
        }
      else
        {
	  return 0;
        }

    case 341:  /* fmuld8ulx16_vis */
    case 340:  /* fmuld8sux16_vis */
    case 339:  /* fmul8ulx16_vis */
    case 338:  /* fmul8sux16_vis */
    case 337:  /* fmul8x16al_vis */
    case 336:  /* fmul8x16au_vis */
    case 335:  /* fmul8x16_vis */
    case 231:  /* *multf3_extend */
    case 230:  /* *muldf3_extend */
    case 229:  /* mulsf3 */
    case 228:  /* muldf3 */
    case 227:  /* *multf3_hq */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 7;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 4;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 29 /* 0x1d */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 217:  /* one_cmplv4qi2 */
    case 216:  /* one_cmplv2hi2 */
    case 215:  /* one_cmplsi2 */
    case 214:  /* *one_cmplv8qi2_sp32 */
    case 213:  /* *one_cmplv4hi2_sp32 */
    case 212:  /* *one_cmplv2si2_sp32 */
    case 211:  /* *one_cmpldi2_sp32 */
    case 200:  /* *xor_not_v4qi */
    case 199:  /* *xor_not_v2hi */
    case 198:  /* *xor_not_si */
    case 197:  /* *xor_not_v8qi_sp32 */
    case 196:  /* *xor_not_v4hi_sp32 */
    case 195:  /* *xor_not_v2si_sp32 */
    case 194:  /* *xor_not_di_sp32 */
    case 193:  /* xorv4qi3 */
    case 192:  /* xorv2hi3 */
    case 191:  /* xorsi3 */
    case 190:  /* *xorv8qi3_sp32 */
    case 189:  /* *xorv4hi3_sp32 */
    case 188:  /* *xorv2si3_sp32 */
    case 187:  /* *xordi3_sp32 */
    case 186:  /* *or_not_v4qi */
    case 185:  /* *or_not_v2hi */
    case 184:  /* *or_not_si */
    case 183:  /* *or_not_v8qi_sp32 */
    case 182:  /* *or_not_v4hi_sp32 */
    case 181:  /* *or_not_v2si_sp32 */
    case 180:  /* *or_not_di_sp32 */
    case 179:  /* iorv4qi3 */
    case 178:  /* iorv2hi3 */
    case 177:  /* iorsi3 */
    case 176:  /* *iorv8qi3_sp32 */
    case 175:  /* *iorv4hi3_sp32 */
    case 174:  /* *iorv2si3_sp32 */
    case 173:  /* *iordi3_sp32 */
    case 172:  /* *and_not_v4qi */
    case 171:  /* *and_not_v2hi */
    case 170:  /* *and_not_si */
    case 169:  /* *and_not_v8qi_sp32 */
    case 168:  /* *and_not_v4hi_sp32 */
    case 167:  /* *and_not_v2si_sp32 */
    case 166:  /* *and_not_di_sp32 */
    case 165:  /* andv4qi3 */
    case 164:  /* andv2hi3 */
    case 163:  /* andsi3 */
    case 162:  /* *andv8qi3_sp32 */
    case 161:  /* *andv4hi3_sp32 */
    case 160:  /* *andv2si3_sp32 */
    case 159:  /* *anddi3_sp32 */
      extract_constrain_insn_cached (insn);
      if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 0)) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0)))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 8;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 6;
        }
      else
        {
	  return 0;
        }

    case 146:  /* const_umulsidi3_sp32 */
    case 145:  /* *umulsidi3_sp32 */
    case 138:  /* const_mulsidi3_sp32 */
    case 137:  /* *mulsidi3_sp32 */
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (((! (
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9))) && ((! (
#line 109 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8))) && (
#line 110 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET))))))
        {
	  return 4;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((! (
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9))) && ((! (
#line 109 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8))) && (
#line 110 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET))))))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (((! (
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9))) && ((! (
#line 109 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8))) && (
#line 110 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET))))))
        {
	  return 5;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (! (((! (
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9))) && ((! (
#line 109 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8))) && (
#line 110 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET))))))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((! (
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9))) && ((! (
#line 109 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8))) && (
#line 110 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET))))))
        {
	  return 7;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (! (((! (
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9))) && ((! (
#line 109 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8))) && (
#line 110 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET)))))))
        {
	  return 5;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((! (
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9))) && ((! (
#line 109 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8))) && (
#line 110 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET))))))
        {
	  return 11 /* 0xb */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 5;
        }
      else
        {
	  return 0;
        }

    case 158:  /* *umacdi */
    case 157:  /* *smacdi */
    case 156:  /* *smacsi */
    case 134:  /* *cmp_mul_set */
    case 132:  /* mulsi3 */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 4;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 17 /* 0x11 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701))))
        {
	  return 5;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 1;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 7;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 11 /* 0xb */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 5;
        }
      else
        {
	  return 0;
        }

    case 129:  /* subsi3 */
    case 122:  /* addsi3 */
      extract_constrain_insn_cached (insn);
      if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (((1 << which_alternative) & 0x3))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x3))))
        {
	  return 1;
        }
      else if ((which_alternative == 2) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 1;
        }
      else if ((which_alternative == 2) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 1;
        }
      else if ((which_alternative == 2) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 8;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 1;
        }
      else if ((which_alternative == 2) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 6;
        }
      else
        {
	  return 0;
        }

    case 226:  /* subsf3 */
    case 225:  /* subdf3 */
    case 224:  /* *subtf3_hq */
    case 223:  /* addsf3 */
    case 222:  /* adddf3 */
    case 221:  /* *addtf3_hq */
    case 117:  /* *fix_trunctfdi2_hq */
    case 116:  /* fix_truncdfdi2 */
    case 115:  /* fix_truncsfdi2 */
    case 114:  /* *fix_trunctfsi2_hq */
    case 113:  /* fix_truncdfsi2 */
    case 112:  /* fix_truncsfsi2 */
    case 111:  /* *floatditf2_hq */
    case 110:  /* floatdidf2 */
    case 109:  /* floatdisf2 */
    case 108:  /* *floatsitf2_hq */
    case 107:  /* floatsidf2 */
    case 106:  /* floatsisf2 */
    case 105:  /* *trunctfdf2_hq */
    case 104:  /* *trunctfsf2_hq */
    case 103:  /* truncdfsf2 */
    case 102:  /* *extenddftf2_hq */
    case 101:  /* *extendsftf2_hq */
    case 100:  /* extendsfdf2 */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 5;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 4;
        }
      else
        {
	  return 0;
        }

    case 310:  /* *tldo_ldsh1_sp32 */
    case 307:  /* *tldo_ldsb2_sp32 */
    case 306:  /* *tldo_ldsb1_sp32 */
    case 98:  /* *sign_extendqisi2_insn */
    case 97:  /* *sign_extendqihi2_insn */
    case 96:  /* *sign_extendhisi2_insn */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 88:  /* *zero_extendqisi2_insn */
    case 87:  /* *zero_extendqihi2_insn */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) || ((which_alternative == 1) && ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 309:  /* *tldo_lduh1_sp32 */
    case 308:  /* *tldo_lduh_sp32 */
    case 305:  /* *tldo_ldub2_sp32 */
    case 304:  /* *tldo_ldub1_sp32 */
    case 303:  /* *tldo_ldub_sp32 */
    case 86:  /* *zero_extendhisi2_insn */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))))
        {
	  return 1;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701))))
        {
	  return 3;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 84:  /* *movtf_cc_hq_v9 */
    case 83:  /* movdf_cc_v9 */
    case 82:  /* *movsf_cc_v9 */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 2;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 3;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 8;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 81:  /* *movsi_cc_v9 */
    case 80:  /* *movhi_cc_v9 */
    case 79:  /* *movqi_cc_v9 */
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 76:  /* *movdf_insn_sp32_v9_no_fpu */
      extract_constrain_insn_cached (insn);
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) || (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 0)))
        {
	  return 1;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x6)))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (((1 << which_alternative) & 0x7)))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0x7)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x6))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0x7))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x6))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (!((1 << which_alternative) & 0x7))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x6))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (!((1 << which_alternative) & 0x7))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x6)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 75:  /* *movdf_insn_sp32_v9 */
    case 74:  /* *movdf_insn_sp32_v9 */
    case 73:  /* *movdf_insn_sp32_v9 */
    case 72:  /* *movdf_insn_sp32_v9 */
      extract_constrain_insn_cached (insn);
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 1))
        {
	  return 5;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (!((1 << which_alternative) & 0x3)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 1))
        {
	  return 3;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x24)))
        {
	  return 1;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x58)))
        {
	  return 2;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 1))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (((1 << which_alternative) & 0x7c)))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0x7f)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x5a)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0x7f)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x58)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (!((1 << which_alternative) & 0x7f)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x58)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 8;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (!((1 << which_alternative) & 0x7f)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x58)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 1))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 6;
        }
      else
        {
	  return 0;
        }

    case 71:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) || (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 0)))
        {
	  return 1;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 1))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0x3)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 1)) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0x3))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 1)) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (!((1 << which_alternative) & 0x3))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 1)) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (!((1 << which_alternative) & 0x3))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 1))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 70:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (((1 << which_alternative) & 0x5)))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 2))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 0))
        {
	  return 0;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative != 0)) || (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x5))))
        {
	  return 1;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0xa)))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (((1 << which_alternative) & 0xc)))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0xf)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x5)))
        {
	  return 2;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0xa))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0xf))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x5)))
        {
	  return 2;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0xa))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (!((1 << which_alternative) & 0xf))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 2))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 9;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 3))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 1))
        {
	  return 8;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (!((1 << which_alternative) & 0xf)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x5)))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0xa)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 67:  /* *movsf_insn_no_fpu */
      extract_constrain_insn_cached (insn);
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 3))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) || (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 3)))
        {
	  return 1;
        }
      else if ((which_alternative == 4) && ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))))
        {
	  return 2;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 3)) || ((which_alternative == 4) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701))))))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x7)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 3))
        {
	  return 2;
        }
      else if (((which_alternative == 4) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x7))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 3))
        {
	  return 2;
        }
      else if (((which_alternative == 4) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x7))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 3))
        {
	  return 3;
        }
      else if (((which_alternative == 4) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x7))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 3))
        {
	  return 3;
        }
      else if ((which_alternative == 4) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 66:  /* *movsf_insn */
    case 65:  /* *movsf_insn */
    case 64:  /* *movsf_insn */
      extract_constrain_insn_cached (insn);
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (((1 << which_alternative) & 0x60)))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 1))
        {
	  return 5;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 6))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 5))
        {
	  return 0;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (!((1 << which_alternative) & 0x23)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 1))
        {
	  return 3;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x60)))
        {
	  return 1;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (!((1 << which_alternative) & 0x7f)))
        {
	  return 2;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 1))
        {
	  return 1;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 6)) || ((which_alternative == 8) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701))))))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x1c)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x60)))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0x7d)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x1c)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x60)))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0x7f)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x1c)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 6))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 5))
        {
	  return 9;
        }
      else if ((which_alternative == 8) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x83)))
        {
	  return 8;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x1c)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x60)))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (!((1 << which_alternative) & 0x7f)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 1))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 6;
        }
      else
        {
	  return 0;
        }

    case 46:  /* *movdi_insn_sp32_v9 */
      extract_constrain_insn_cached (insn);
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (((1 << which_alternative) & 0x2208)))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 12))
        {
	  return 5;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 3))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (((1 << which_alternative) & 0x2200)))
        {
	  return 0;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (!((1 << which_alternative) & 0x3200)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 12))
        {
	  return 3;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x2208)))
        {
	  return 1;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (!((1 << which_alternative) & 0x3ef8)))
        {
	  return 2;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 12))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (((1 << which_alternative) & 0xf)))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0xcf0)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x2208)))
        {
	  return 2;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0x2ef8))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0xcf0))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x2208)))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0x3ef8)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 12))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0xcf0)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 3))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x2200)))
        {
	  return 9;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x7)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (!((1 << which_alternative) & 0x2eff)))
        {
	  return 8;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0xcf0)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x2208)))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (!((1 << which_alternative) & 0x3ef8)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 12))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 45:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (((1 << which_alternative) & 0x104)))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 2))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 8))
        {
	  return 0;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative != 8)) || (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x104))))
        {
	  return 1;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x83)))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (((1 << which_alternative) & 0x7)))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0x187)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x104)))
        {
	  return 2;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x83))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0x187))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x104)))
        {
	  return 2;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x83))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (!((1 << which_alternative) & 0x187))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 2))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 8))
        {
	  return 9;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 7))
        {
	  return 8;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (!((1 << which_alternative) & 0x187)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x104)))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x83)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 38:  /* *movsi_insn */
      extract_constrain_insn_cached (insn);
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 4))
        {
	  return 5;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 2))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 5))
        {
	  return 0;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (((1 << which_alternative) & 0x4f)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 4))
        {
	  return 3;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x24)))
        {
	  return 1;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x48)))
        {
	  return 2;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 4))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (((1 << which_alternative) & 0xc)))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x58)))
        {
	  return 1;
        }
      else if ((which_alternative == 7) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x48)))
        {
	  return 1;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 4)) || ((which_alternative == 7) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 2))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 5))
        {
	  return 9;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 3))
        {
	  return 1;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x50))) || ((which_alternative == 7) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))))
        {
	  return 8;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x48)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 4))
        {
	  return 3;
        }
      else if ((which_alternative == 7) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 6;
        }
      else
        {
	  return 0;
        }

    case 36:  /* *movhi_insn */
      extract_constrain_insn_cached (insn);
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 2))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) || (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 2)))
        {
	  return 1;
        }
      else if ((which_alternative == 3) && ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))))
        {
	  return 2;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 2)) || ((which_alternative == 3) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701))))))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 2))
        {
	  return 2;
        }
      else if (((which_alternative == 3) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x3))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 2))
        {
	  return 3;
        }
      else if (((which_alternative == 3) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x3))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 2))
        {
	  return 3;
        }
      else if (((which_alternative == 3) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x3))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 2))
        {
	  return 3;
        }
      else if ((which_alternative == 3) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 35:  /* *movqi_insn */
      extract_constrain_insn_cached (insn);
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 1))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) || (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 1)))
        {
	  return 1;
        }
      else if ((which_alternative == 2) && ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))))
        {
	  return 2;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 1)) || ((which_alternative == 2) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701))))))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 1))
        {
	  return 2;
        }
      else if (((which_alternative == 2) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 1))
        {
	  return 3;
        }
      else if (((which_alternative == 2) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 1))
        {
	  return 3;
        }
      else if (((which_alternative == 2) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 1))
        {
	  return 3;
        }
      else if ((which_alternative == 2) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 355:  /* *ldstubsi */
    case 354:  /* *ldstubhi */
    case 353:  /* *ldstubqi */
    case 352:  /* *swapsi */
    case 351:  /* *sync_compare_and_swapdi_v8plus */
    case 350:  /* *sync_compare_and_swapsi */
    case 349:  /* *membar */
    case 348:  /* *stbar */
    case 316:  /* stack_protect_testsi */
    case 315:  /* stack_protect_setsi */
    case 285:  /* *sparc.md:7453 */
    case 284:  /* *sparc.md:7441 */
    case 283:  /* trap */
    case 280:  /* ffssi2 */
    case 279:  /* flushdi */
    case 278:  /* flush */
    case 277:  /* do_builtin_setjmp_setup */
    case 276:  /* goto_handler_and_restore */
    case 272:  /* update_return */
    case 256:  /* lshrdi3_v8plus */
    case 254:  /* ashrdi3_v8plus */
    case 250:  /* ashldi3_v8plus */
    case 155:  /* *cmp_udiv_cc_set */
    case 154:  /* udivsi3_sp32 */
    case 153:  /* *cmp_sdiv_cc_set */
    case 152:  /* divsi3_sp32 */
    case 151:  /* const_umulsi3_highpart */
    case 150:  /* *umulsi3_highpart_sp32 */
    case 149:  /* const_umulsi3_highpart_v8plus */
    case 148:  /* umulsi3_highpart_v8plus */
    case 147:  /* const_umulsidi3_v8plus */
    case 144:  /* umulsidi3_v8plus */
    case 143:  /* const_smulsi3_highpart */
    case 142:  /* *smulsi3_highpart_sp32 */
    case 141:  /* const_smulsi3_highpart_v8plus */
    case 140:  /* *sparc.md:4656 */
    case 139:  /* smulsi3_highpart_v8plus */
    case 136:  /* const_mulsidi3_v8plus */
    case 135:  /* mulsidi3_v8plus */
    case 133:  /* muldi3_v8plus */
    case 34:  /* load_pcrel_symsi */
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 5;
        }
      else
        {
	  return 0;
        }

    case 33:  /* *inverted_fpe_branch */
    case 32:  /* *normal_fpe_branch */
    case 31:  /* *inverted_fp_branch */
    case 30:  /* *normal_fp_branch */
    case 29:  /* *inverted_branch */
    case 28:  /* *normal_branch */
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))))
        {
	  return 1;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 3;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 5;
        }
      else
        {
	  return 0;
        }

    case 126:  /* subx */
    case 119:  /* addx */
    case 27:  /* *x_minus_sgeu */
    case 26:  /* *sgeu_plus_x */
    case 25:  /* *x_minus_sltu_plus_y */
    case 24:  /* *x_minus_y_minus_sltu */
    case 23:  /* *x_minus_sltu */
    case 22:  /* *sltu_plus_x_plus_y */
    case 21:  /* *sltu_plus_x */
    case 20:  /* *neg_sgeu_insn */
    case 19:  /* *sgeu_insn */
    case 18:  /* *neg_sltu_plus_x */
    case 17:  /* *neg_sltu_minus_x */
    case 16:  /* *neg_sltu_insn */
    case 15:  /* *sltu_insn */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 6:  /* *cmptf_fp */
    case 5:  /* *cmpdf_fp */
    case 4:  /* *cmpsf_fp */
    case 3:  /* *cmptf_fpe */
    case 2:  /* *cmpdf_fpe */
    case 1:  /* *cmpsf_fpe */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))))
        {
	  return 1;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 5;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 26 /* 0x1a */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 252:  /* *cmp_cc_set_ashift_1 */
    case 251:  /* *cmp_cc_ashift_1 */
    case 220:  /* *cmp_cc_set */
    case 219:  /* *cmp_cc_set_not */
    case 218:  /* *cmp_cc_not */
    case 210:  /* *cmp_cc_set_neg */
    case 209:  /* *cmp_cc_neg */
    case 206:  /* *cmp_cc_arith_op_not_set */
    case 205:  /* *cmp_cc_arith_op_not */
    case 204:  /* *cmp_cc_xor_not_set */
    case 203:  /* *cmp_cc_xor_not */
    case 202:  /* *cmp_cc_arith_op_set */
    case 201:  /* *cmp_cc_arith_op */
    case 131:  /* cmp_minus_cc_set */
    case 130:  /* *cmp_minus_cc */
    case 124:  /* *cmp_cc_plus_set */
    case 123:  /* *cmp_cc_plus */
    case 99:  /* *cmp_zero_extract */
    case 95:  /* *cmp_siqi_trunc_set */
    case 94:  /* *cmp_siqi_trunc */
    case 93:  /* *cmp_zero_extendqisi2_andcc_set */
    case 92:  /* *cmp_zero_extendqisi2_set */
    case 91:  /* *cmp_zero_qi */
    case 90:  /* *cmp_zero_extendqisi2 */
    case 0:  /* *cmpsi_insn */
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && ((get_attr_type (insn) == TYPE_LOAD) || ((get_attr_type (insn) == TYPE_SLOAD) || (get_attr_type (insn) == TYPE_FPLOAD))))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && ((get_attr_type (insn) == TYPE_FP) || (get_attr_type (insn) == TYPE_FPMOVE)))
        {
	  return 5;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (get_attr_type (insn) == TYPE_FPMUL))
        {
	  return 7;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && ((get_attr_type (insn) == TYPE_FPDIVS) || (get_attr_type (insn) == TYPE_FPDIVD)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && ((get_attr_type (insn) == TYPE_FPSQRTS) || (get_attr_type (insn) == TYPE_FPSQRTD)))
        {
	  return 63 /* 0x3f */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && ((get_attr_type (insn) == TYPE_LOAD) || (get_attr_type (insn) == TYPE_SLOAD)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (get_attr_type (insn) == TYPE_FPLOAD))
        {
	  return 0;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && ((((get_attr_type (insn) == TYPE_STORE) || (get_attr_type (insn) == TYPE_FPSTORE)) || (get_attr_type (insn) == TYPE_SHIFT)) || ((get_attr_type (insn) == TYPE_LOAD) || ((get_attr_type (insn) == TYPE_SLOAD) || ((get_attr_type (insn) == TYPE_STORE) || ((get_attr_type (insn) == TYPE_SHIFT) || (get_attr_type (insn) == TYPE_IALU)))))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (((get_attr_type (insn) == TYPE_FP) || ((get_attr_type (insn) == TYPE_FPMOVE) || (get_attr_type (insn) == TYPE_FPCMP))) || (get_attr_type (insn) == TYPE_FPMUL)))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (get_attr_type (insn) == TYPE_FPDIVS))
        {
	  return 6;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (get_attr_type (insn) == TYPE_FPDIVD))
        {
	  return 9;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && ((get_attr_type (insn) == TYPE_FPSQRTS) || (get_attr_type (insn) == TYPE_FPSQRTD)))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (get_attr_type (insn) == TYPE_IMUL))
        {
	  return 4;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && ((get_attr_type (insn) == TYPE_LOAD) || ((get_attr_type (insn) == TYPE_SLOAD) || (get_attr_type (insn) == TYPE_FPLOAD))))
        {
	  return 1;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && ((get_attr_type (insn) == TYPE_STORE) || (get_attr_type (insn) == TYPE_FPSTORE)))
        {
	  return 2;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))) && ((get_attr_type (insn) == TYPE_BRANCH) || (get_attr_type (insn) == TYPE_SHIFT))) || (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((get_attr_type (insn) == TYPE_FP) || ((get_attr_type (insn) == TYPE_FPMOVE) || (get_attr_type (insn) == TYPE_FPCMP))) || (get_attr_type (insn) == TYPE_FPMUL))))
        {
	  return 1;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (get_attr_type (insn) == TYPE_FPDIVS))
        {
	  return 8;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (get_attr_type (insn) == TYPE_FPDIVD))
        {
	  return 12 /* 0xc */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((get_attr_type (insn) == TYPE_FPSQRTS) || (get_attr_type (insn) == TYPE_FPSQRTD)) || (get_attr_type (insn) == TYPE_IMUL)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (((get_attr_type (insn) == TYPE_LOAD) || (get_attr_type (insn) == TYPE_SLOAD)) || (get_attr_type (insn) == TYPE_STORE)))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (get_attr_type (insn) == TYPE_IMUL))
        {
	  return 5;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((((((get_attr_type (insn) == TYPE_MULTI) || ((get_attr_type (insn) == TYPE_SAVEW) || ((get_attr_type (insn) == TYPE_FLUSHW) || ((get_attr_type (insn) == TYPE_IFLUSH) || (get_attr_type (insn) == TYPE_TRAP))))) || (get_attr_type (insn) == TYPE_IALU)) || (get_attr_type (insn) == TYPE_SHIFT)) || (get_attr_type (insn) == TYPE_COMPARE)) || (get_attr_type (insn) == TYPE_IALUX)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_CMOVE))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_IMUL) || (get_attr_type (insn) == TYPE_IDIV)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_LOAD) || (get_attr_type (insn) == TYPE_FPLOAD)))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_SLOAD))
        {
	  return 3;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((((get_attr_type (insn) == TYPE_STORE) || (get_attr_type (insn) == TYPE_FPSTORE)) || (get_attr_type (insn) == TYPE_BRANCH)) || ((get_attr_type (insn) == TYPE_CALL) || ((get_attr_type (insn) == TYPE_SIBCALL) || ((get_attr_type (insn) == TYPE_CALL_NO_DELAY_SLOT) || (get_attr_type (insn) == TYPE_UNCOND_BRANCH)))))) || (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FPMOVE)) && ((get_attr_fptype (insn) == FPTYPE_SINGLE) || (get_attr_fptype (insn) == FPTYPE_DOUBLE))))
        {
	  return 1;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_FPCMOVE) || (get_attr_type (insn) == TYPE_FPCRMOVE))) && ((get_attr_fptype (insn) == FPTYPE_SINGLE) || (get_attr_fptype (insn) == FPTYPE_DOUBLE)))
        {
	  return 2;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FP)) && ((get_attr_fptype (insn) == FPTYPE_SINGLE) || (get_attr_fptype (insn) == FPTYPE_DOUBLE)))
        {
	  return 4;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FPCMP)) && ((get_attr_fptype (insn) == FPTYPE_SINGLE) || (get_attr_fptype (insn) == FPTYPE_DOUBLE)))
        {
	  return 1;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FPMUL)) && ((get_attr_fptype (insn) == FPTYPE_SINGLE) || (get_attr_fptype (insn) == FPTYPE_DOUBLE)))
        {
	  return 4;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_FPDIVS) || (get_attr_type (insn) == TYPE_FPSQRTS)))
        {
	  return 13 /* 0xd */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_FPDIVD) || (get_attr_type (insn) == TYPE_FPSQRTD)))
        {
	  return 23 /* 0x17 */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FGA)) && ((get_attr_fptype (insn) == FPTYPE_SINGLE) || (get_attr_fptype (insn) == FPTYPE_DOUBLE)))
        {
	  return 2;
        }
      else if ((((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_FGM_PACK) || ((get_attr_type (insn) == TYPE_FGM_MUL) || (get_attr_type (insn) == TYPE_FGM_CMP)))) && ((get_attr_fptype (insn) == FPTYPE_SINGLE) || (get_attr_fptype (insn) == FPTYPE_DOUBLE))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FGM_PDIST)))
        {
	  return 4;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((get_attr_type (insn) == TYPE_MULTI) || ((get_attr_type (insn) == TYPE_SAVEW) || ((get_attr_type (insn) == TYPE_FLUSHW) || ((get_attr_type (insn) == TYPE_IFLUSH) || (get_attr_type (insn) == TYPE_TRAP))))) || ((get_attr_type (insn) == TYPE_IALU) || ((get_attr_type (insn) == TYPE_SHIFT) || (get_attr_type (insn) == TYPE_COMPARE)))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && ((get_attr_type (insn) == TYPE_IALU) || ((get_attr_type (insn) == TYPE_SHIFT) || (get_attr_type (insn) == TYPE_COMPARE))))
        {
	  return 5;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_CMOVE))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_IMUL))
        {
	  return 7;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_IDIV))
        {
	  return 72 /* 0x48 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((get_attr_type (insn) == TYPE_LOAD) || (get_attr_type (insn) == TYPE_FPLOAD)) && (get_attr_us3load_type (insn) == US3LOAD_TYPE_2CYCLE)))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((get_attr_type (insn) == TYPE_LOAD) || (get_attr_type (insn) == TYPE_SLOAD)) && (get_attr_us3load_type (insn) == US3LOAD_TYPE_3CYCLE)))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && ((((get_attr_type (insn) == TYPE_STORE) || (get_attr_type (insn) == TYPE_FPSTORE)) || (get_attr_type (insn) == TYPE_BRANCH)) || ((get_attr_type (insn) == TYPE_CALL) || ((get_attr_type (insn) == TYPE_SIBCALL) || ((get_attr_type (insn) == TYPE_CALL_NO_DELAY_SLOT) || (get_attr_type (insn) == TYPE_UNCOND_BRANCH))))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((get_attr_type (insn) == TYPE_FPMOVE) || (get_attr_type (insn) == TYPE_FPCMOVE)) || (get_attr_type (insn) == TYPE_FPCRMOVE)))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FP))
        {
	  return 4;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FPCMP))
        {
	  return 5;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FPMUL))
        {
	  return 4;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FPDIVS))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && ((get_attr_type (insn) == TYPE_FPSQRTS) || (get_attr_type (insn) == TYPE_FPDIVD)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FPSQRTD))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FGA))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((get_attr_type (insn) == TYPE_FGM_PACK) || ((get_attr_type (insn) == TYPE_FGM_MUL) || (get_attr_type (insn) == TYPE_FGM_CMP))) || (get_attr_type (insn) == TYPE_FGM_PDIST)))
        {
	  return 4;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && ((get_attr_type (insn) == TYPE_MULTI) || ((get_attr_type (insn) == TYPE_FLUSHW) || ((get_attr_type (insn) == TYPE_IFLUSH) || (get_attr_type (insn) == TYPE_TRAP)))))
        {
	  return 5;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_SAVEW))
        {
	  return 4;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && ((get_attr_type (insn) == TYPE_IALU) || ((get_attr_type (insn) == TYPE_SHIFT) || ((get_attr_type (insn) == TYPE_COMPARE) || (get_attr_type (insn) == TYPE_CMOVE)))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_IMUL))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_IDIV))
        {
	  return 72 /* 0x48 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((get_attr_type (insn) == TYPE_CALL) || ((get_attr_type (insn) == TYPE_SIBCALL) || ((get_attr_type (insn) == TYPE_CALL_NO_DELAY_SLOT) || ((get_attr_type (insn) == TYPE_UNCOND_BRANCH) || (get_attr_type (insn) == TYPE_BRANCH))))) || (get_attr_type (insn) == TYPE_LOAD)))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_FPLOAD))
        {
	  return 9;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_STORE))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && ((get_attr_type (insn) == TYPE_FPSTORE) || ((get_attr_type (insn) == TYPE_FPMOVE) || ((get_attr_type (insn) == TYPE_FPCMOVE) || (get_attr_type (insn) == TYPE_FPCRMOVE)))))
        {
	  return 8;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_FPCMP))
        {
	  return 26 /* 0x1a */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_FPMUL))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_FPDIVS))
        {
	  return 54 /* 0x36 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_FPDIVD))
        {
	  return 83 /* 0x53 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && ((get_attr_type (insn) == TYPE_FGA) || ((get_attr_type (insn) == TYPE_FGM_PACK) || ((get_attr_type (insn) == TYPE_FGM_MUL) || ((get_attr_type (insn) == TYPE_FGM_CMP) || (get_attr_type (insn) == TYPE_FGM_PDIST))))))
        {
	  return 8;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (get_attr_type (insn) == TYPE_FLUSHW))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && ((get_attr_type (insn) == TYPE_MULTI) || ((get_attr_type (insn) == TYPE_FLUSHW) || ((get_attr_type (insn) == TYPE_IFLUSH) || (get_attr_type (insn) == TYPE_TRAP)))))
        {
	  return 5;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (get_attr_type (insn) == TYPE_SAVEW))
        {
	  return 4;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && ((get_attr_type (insn) == TYPE_IALU) || ((get_attr_type (insn) == TYPE_SHIFT) || ((get_attr_type (insn) == TYPE_COMPARE) || (get_attr_type (insn) == TYPE_CMOVE)))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (get_attr_type (insn) == TYPE_IMUL))
        {
	  return 5;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (get_attr_type (insn) == TYPE_IDIV))
        {
	  return 31 /* 0x1f */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && ((get_attr_type (insn) == TYPE_CALL) || ((get_attr_type (insn) == TYPE_SIBCALL) || ((get_attr_type (insn) == TYPE_CALL_NO_DELAY_SLOT) || ((get_attr_type (insn) == TYPE_UNCOND_BRANCH) || (get_attr_type (insn) == TYPE_BRANCH))))))
        {
	  return 5;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && ((get_attr_type (insn) == TYPE_LOAD) || (get_attr_type (insn) == TYPE_FPLOAD)))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && ((get_attr_type (insn) == TYPE_STORE) || (get_attr_type (insn) == TYPE_FPSTORE)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && ((get_attr_type (insn) == TYPE_FPMOVE) || ((get_attr_type (insn) == TYPE_FPCMOVE) || ((get_attr_type (insn) == TYPE_FPCRMOVE) || ((get_attr_type (insn) == TYPE_FPCMP) || (get_attr_type (insn) == TYPE_FPMUL))))))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (get_attr_type (insn) == TYPE_FPDIVS))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (get_attr_type (insn) == TYPE_FPDIVD))
        {
	  return 33 /* 0x21 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && ((get_attr_type (insn) == TYPE_FGA) || ((get_attr_type (insn) == TYPE_FGM_PACK) || ((get_attr_type (insn) == TYPE_FGM_MUL) || ((get_attr_type (insn) == TYPE_FGM_CMP) || (get_attr_type (insn) == TYPE_FGM_PDIST))))))
        {
	  return 6;
        }
      else
        {
	  return 0;
        }

    default:
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) || ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    }
}

int
internal_dfa_insn_code (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 329:  /* *nand<V32mode>_vis */
    case 328:  /* *nand<V32mode>_vis */
    case 327:  /* *nand<V32mode>_vis */
    case 322:  /* subv2hi3 */
    case 319:  /* addv2hi3 */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 54 /* 0x36 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 80 /* 0x50 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 98 /* 0x62 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 111 /* 0x6f */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 347:  /* pdist_vis */
    case 345:  /* faligndatav8qi_vis */
    case 344:  /* faligndatav4hi_vis */
    case 343:  /* faligndatav2si_vis */
    case 342:  /* faligndatadi_vis */
    case 334:  /* fpmerge_vis */
    case 333:  /* fexpand_vis */
    case 332:  /* fpack32_vis */
    case 331:  /* fpackfix_vis */
    case 330:  /* fpack16_vis */
    case 326:  /* *nand<V64mode>_vis */
    case 325:  /* *nand<V64mode>_vis */
    case 324:  /* *nand<V64mode>_vis */
    case 323:  /* *nand<V64mode>_vis */
    case 321:  /* subv4hi3 */
    case 320:  /* subv2si3 */
    case 318:  /* addv4hi3 */
    case 317:  /* addv2si3 */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 55 /* 0x37 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 80 /* 0x50 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 98 /* 0x62 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 111 /* 0x6f */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 314:  /* *tldo_stw_sp32 */
    case 313:  /* *tldo_sth_sp32 */
    case 312:  /* *tldo_stb_sp32 */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 7;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 17 /* 0x11 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701))))
        {
	  return 27 /* 0x1b */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 39 /* 0x27 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 67 /* 0x43 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 91 /* 0x5b */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 107 /* 0x6b */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 311:  /* *tldo_lduw_sp32 */
    case 299:  /* tie_ld32 */
    case 282:  /* prefetch_32 */
    case 281:  /* prefetch_64 */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 0;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 5;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 16 /* 0x10 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701))))
        {
	  return 26 /* 0x1a */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 37 /* 0x25 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 65 /* 0x41 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 89 /* 0x59 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 106 /* 0x6a */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 275:  /* flush_register_windows */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 29 /* 0x1d */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 59 /* 0x3b */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 83 /* 0x53 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 99 /* 0x63 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 270:  /* *return_internal */
      return 113 /* 0x71 */;

    case 269:  /* save_register_windowsi */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 29 /* 0x1d */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 59 /* 0x3b */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 84 /* 0x54 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 101 /* 0x65 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 293:  /* tldm_call32 */
    case 289:  /* tgd_call32 */
    case 274:  /* *branch_sp32 */
    case 268:  /* *sibcall_value_symbolic_sp32 */
    case 267:  /* *sibcall_symbolic_sp32 */
    case 266:  /* *call_value_symbolic_sp32 */
    case 265:  /* *call_value_address_sp32 */
    case 264:  /* *call_symbolic_untyped_struct_value_sp32 */
    case 263:  /* *call_address_untyped_struct_value_sp32 */
    case 262:  /* *call_symbolic_struct_value_sp32 */
    case 261:  /* *call_address_struct_value_sp32 */
    case 260:  /* *call_symbolic_sp32 */
    case 259:  /* *call_address_sp32 */
    case 258:  /* *tablejump_sp32 */
    case 257:  /* jump */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 41 /* 0x29 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 69 /* 0x45 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 88 /* 0x58 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 105 /* 0x69 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 255:  /* lshrsi3 */
    case 253:  /* ashrsi3 */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 8;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))
        {
	  return 19 /* 0x13 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 31 /* 0x1f */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 60 /* 0x3c */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 85 /* 0x55 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 102 /* 0x66 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 249:  /* ashlsi3 */
      extract_insn_cached (insn);
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (! (const_one_operand (operands[2], VOIDmode))))
        {
	  return 8;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 9;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))) && (! (const_one_operand (operands[2], VOIDmode))))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (const_one_operand (operands[2], VOIDmode)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (! (const_one_operand (operands[2], VOIDmode))))
        {
	  return 31 /* 0x1f */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 60 /* 0x3c */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 85 /* 0x55 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 102 /* 0x66 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 248:  /* sqrtsf2 */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 4;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 24 /* 0x18 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 52 /* 0x34 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 77 /* 0x4d */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 247:  /* sqrtdf2 */
    case 246:  /* *sqrttf2_hq */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 4;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 24 /* 0x18 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 53 /* 0x35 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 79 /* 0x4f */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 241:  /* *abstf2_hq_v9 */
      extract_constrain_insn_cached (insn);
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 1;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 20 /* 0x14 */;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 42 /* 0x2a */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 43 /* 0x2b */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 70 /* 0x46 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 93 /* 0x5d */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 108 /* 0x6c */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 245:  /* abssf2 */
    case 239:  /* negsf2 */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 1;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 20 /* 0x14 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 42 /* 0x2a */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 70 /* 0x46 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 93 /* 0x5d */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 108 /* 0x6c */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 244:  /* *absdf2_v9 */
    case 238:  /* *negdf2_v9 */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 1;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 20 /* 0x14 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 43 /* 0x2b */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 70 /* 0x46 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 93 /* 0x5d */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 108 /* 0x6c */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 242:  /* *abstf2_v9 */
    case 236:  /* *negtf2_v9 */
      extract_constrain_insn_cached (insn);
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))))
        {
	  return 9;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 0))
        {
	  return 10 /* 0xa */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 0))
        {
	  return 20 /* 0x14 */;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 43 /* 0x2b */;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 70 /* 0x46 */;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 93 /* 0x5d */;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 102 /* 0x66 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 108 /* 0x6c */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 243:  /* *absdf2_notv9 */
    case 240:  /* *abstf2_notv9 */
    case 237:  /* *negdf2_notv9 */
    case 235:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))))
        {
	  return 9;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 0))
        {
	  return 10 /* 0xa */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 0))
        {
	  return 20 /* 0x14 */;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 42 /* 0x2a */;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 70 /* 0x46 */;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 93 /* 0x5d */;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 102 /* 0x66 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 108 /* 0x6c */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 234:  /* divsf3 */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 3;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 22 /* 0x16 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 52 /* 0x34 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 76 /* 0x4c */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 96 /* 0x60 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 109 /* 0x6d */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 233:  /* divdf3 */
    case 232:  /* *divtf3_hq */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 3;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 13 /* 0xd */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 23 /* 0x17 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 53 /* 0x35 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 78 /* 0x4e */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 97 /* 0x61 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 110 /* 0x6e */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 341:  /* fmuld8ulx16_vis */
    case 340:  /* fmuld8sux16_vis */
    case 339:  /* fmul8ulx16_vis */
    case 338:  /* fmul8sux16_vis */
    case 337:  /* fmul8x16al_vis */
    case 336:  /* fmul8x16au_vis */
    case 335:  /* fmul8x16_vis */
    case 230:  /* *muldf3_extend */
    case 228:  /* muldf3 */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 2;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 21 /* 0x15 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 51 /* 0x33 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 75 /* 0x4b */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 95 /* 0x5f */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 108 /* 0x6c */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 231:  /* *multf3_extend */
    case 229:  /* mulsf3 */
    case 227:  /* *multf3_hq */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 2;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 21 /* 0x15 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 50 /* 0x32 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 75 /* 0x4b */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 95 /* 0x5f */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 108 /* 0x6c */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 217:  /* one_cmplv4qi2 */
    case 216:  /* one_cmplv2hi2 */
    case 215:  /* one_cmplsi2 */
    case 200:  /* *xor_not_v4qi */
    case 199:  /* *xor_not_v2hi */
    case 198:  /* *xor_not_si */
    case 193:  /* xorv4qi3 */
    case 192:  /* xorv2hi3 */
    case 191:  /* xorsi3 */
    case 186:  /* *or_not_v4qi */
    case 185:  /* *or_not_v2hi */
    case 184:  /* *or_not_si */
    case 179:  /* iorv4qi3 */
    case 178:  /* iorv2hi3 */
    case 177:  /* iorsi3 */
    case 172:  /* *and_not_v4qi */
    case 171:  /* *and_not_v2hi */
    case 170:  /* *and_not_si */
    case 165:  /* andv4qi3 */
    case 164:  /* andv2hi3 */
    case 163:  /* andsi3 */
      extract_constrain_insn_cached (insn);
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 0))
        {
	  return 9;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 30 /* 0x1e */;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 54 /* 0x36 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 60 /* 0x3c */;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 80 /* 0x50 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 85 /* 0x55 */;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 98 /* 0x62 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 102 /* 0x66 */;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 111 /* 0x6f */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 214:  /* *one_cmplv8qi2_sp32 */
    case 213:  /* *one_cmplv4hi2_sp32 */
    case 212:  /* *one_cmplv2si2_sp32 */
    case 211:  /* *one_cmpldi2_sp32 */
    case 197:  /* *xor_not_v8qi_sp32 */
    case 196:  /* *xor_not_v4hi_sp32 */
    case 195:  /* *xor_not_v2si_sp32 */
    case 194:  /* *xor_not_di_sp32 */
    case 190:  /* *xorv8qi3_sp32 */
    case 189:  /* *xorv4hi3_sp32 */
    case 188:  /* *xorv2si3_sp32 */
    case 187:  /* *xordi3_sp32 */
    case 183:  /* *or_not_v8qi_sp32 */
    case 182:  /* *or_not_v4hi_sp32 */
    case 181:  /* *or_not_v2si_sp32 */
    case 180:  /* *or_not_di_sp32 */
    case 176:  /* *iorv8qi3_sp32 */
    case 175:  /* *iorv4hi3_sp32 */
    case 174:  /* *iorv2si3_sp32 */
    case 173:  /* *iordi3_sp32 */
    case 169:  /* *and_not_v8qi_sp32 */
    case 168:  /* *and_not_v4hi_sp32 */
    case 167:  /* *and_not_v2si_sp32 */
    case 166:  /* *and_not_di_sp32 */
    case 162:  /* *andv8qi3_sp32 */
    case 161:  /* *andv4hi3_sp32 */
    case 160:  /* *andv2si3_sp32 */
    case 159:  /* *anddi3_sp32 */
      extract_constrain_insn_cached (insn);
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 0))
        {
	  return 9;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 30 /* 0x1e */;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 55 /* 0x37 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 60 /* 0x3c */;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 80 /* 0x50 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 85 /* 0x55 */;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 98 /* 0x62 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 102 /* 0x66 */;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 111 /* 0x6f */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 146:  /* const_umulsidi3_sp32 */
    case 145:  /* *umulsidi3_sp32 */
    case 138:  /* const_mulsidi3_sp32 */
    case 137:  /* *mulsidi3_sp32 */
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (((! (
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9))) && ((! (
#line 109 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8))) && (
#line 110 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET))))))
        {
	  return 15 /* 0xf */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((! (
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9))) && ((! (
#line 109 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8))) && (
#line 110 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET))))))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (((! (
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9))) && ((! (
#line 109 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8))) && (
#line 110 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET))))))
        {
	  return 28 /* 0x1c */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (! (((! (
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9))) && ((! (
#line 109 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8))) && (
#line 110 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET)))))))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((! (
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9))) && ((! (
#line 109 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8))) && (
#line 110 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET))))))
        {
	  return 35 /* 0x23 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (! (((! (
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9))) && ((! (
#line 109 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8))) && (
#line 110 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET)))))))
        {
	  return 59 /* 0x3b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((! (
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9))) && ((! (
#line 109 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8))) && (
#line 110 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET))))))
        {
	  return 63 /* 0x3f */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (! (((! (
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9))) && ((! (
#line 109 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8))) && (
#line 110 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET)))))))
        {
	  return 83 /* 0x53 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((! (
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9))) && ((! (
#line 109 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8))) && (
#line 110 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET))))))
        {
	  return 86 /* 0x56 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (! (((! (
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9))) && ((! (
#line 109 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8))) && (
#line 110 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET)))))))
        {
	  return 100 /* 0x64 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((! (
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9))) && ((! (
#line 109 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8))) && (
#line 110 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET))))))
        {
	  return 103 /* 0x67 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 158:  /* *umacdi */
    case 157:  /* *smacdi */
    case 156:  /* *smacsi */
    case 134:  /* *cmp_mul_set */
    case 132:  /* mulsi3 */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 15 /* 0xf */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 25 /* 0x19 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701))))
        {
	  return 28 /* 0x1c */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 35 /* 0x23 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 63 /* 0x3f */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 86 /* 0x56 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 103 /* 0x67 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 129:  /* subsi3 */
    case 122:  /* addsi3 */
      extract_constrain_insn_cached (insn);
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 9;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((which_alternative == 2) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 54 /* 0x36 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 60 /* 0x3c */;
        }
      else if ((which_alternative == 2) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 80 /* 0x50 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 85 /* 0x55 */;
        }
      else if ((which_alternative == 2) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 98 /* 0x62 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 102 /* 0x66 */;
        }
      else if ((which_alternative == 2) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 111 /* 0x6f */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 226:  /* subsf3 */
    case 224:  /* *subtf3_hq */
    case 223:  /* addsf3 */
    case 221:  /* *addtf3_hq */
    case 117:  /* *fix_trunctfdi2_hq */
    case 114:  /* *fix_trunctfsi2_hq */
    case 111:  /* *floatditf2_hq */
    case 108:  /* *floatsitf2_hq */
    case 105:  /* *trunctfdf2_hq */
    case 104:  /* *trunctfsf2_hq */
    case 102:  /* *extenddftf2_hq */
    case 101:  /* *extendsftf2_hq */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 1;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 20 /* 0x14 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 46 /* 0x2e */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 73 /* 0x49 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 225:  /* subdf3 */
    case 222:  /* adddf3 */
    case 116:  /* fix_truncdfdi2 */
    case 115:  /* fix_truncsfdi2 */
    case 113:  /* fix_truncdfsi2 */
    case 112:  /* fix_truncsfsi2 */
    case 110:  /* floatdidf2 */
    case 109:  /* floatdisf2 */
    case 107:  /* floatsidf2 */
    case 106:  /* floatsisf2 */
    case 103:  /* truncdfsf2 */
    case 100:  /* extendsfdf2 */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 1;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 20 /* 0x14 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 47 /* 0x2f */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 73 /* 0x49 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 310:  /* *tldo_ldsh1_sp32 */
    case 307:  /* *tldo_ldsb2_sp32 */
    case 306:  /* *tldo_ldsb1_sp32 */
    case 98:  /* *sign_extendqisi2_insn */
    case 97:  /* *sign_extendqihi2_insn */
    case 96:  /* *sign_extendhisi2_insn */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 0;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 5;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 16 /* 0x10 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701))))
        {
	  return 26 /* 0x1a */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 38 /* 0x26 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 66 /* 0x42 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 88:  /* *zero_extendqisi2_insn */
    case 87:  /* *zero_extendqihi2_insn */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))))
        {
	  return 0;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))))
        {
	  return 5;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 9;
        }
      else if ((which_alternative == 1) && ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))))
        {
	  return 16 /* 0x10 */;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))))
        {
	  return 26 /* 0x1a */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 30 /* 0x1e */;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 60 /* 0x3c */;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 66 /* 0x42 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 85 /* 0x55 */;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 102 /* 0x66 */;
        }
      else if ((which_alternative == 1) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 106 /* 0x6a */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 309:  /* *tldo_lduh1_sp32 */
    case 308:  /* *tldo_lduh_sp32 */
    case 305:  /* *tldo_ldub2_sp32 */
    case 304:  /* *tldo_ldub1_sp32 */
    case 303:  /* *tldo_ldub_sp32 */
    case 86:  /* *zero_extendhisi2_insn */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS))))
        {
	  return 0;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 5;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 16 /* 0x10 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701))))
        {
	  return 26 /* 0x1a */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 37 /* 0x25 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 66 /* 0x42 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 89 /* 0x59 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 106 /* 0x6a */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 83:  /* movdf_cc_v9 */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 45 /* 0x2d */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 71 /* 0x47 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 93 /* 0x5d */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 108 /* 0x6c */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 84:  /* *movtf_cc_hq_v9 */
    case 82:  /* *movsf_cc_v9 */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 44 /* 0x2c */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 71 /* 0x47 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 93 /* 0x5d */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 108 /* 0x6c */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 81:  /* *movsi_cc_v9 */
    case 80:  /* *movhi_cc_v9 */
    case 79:  /* *movqi_cc_v9 */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 34 /* 0x22 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 62 /* 0x3e */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 85 /* 0x55 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 102 /* 0x66 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 76:  /* *movdf_insn_sp32_v9_no_fpu */
      extract_constrain_insn_cached (insn);
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 0))
        {
	  return 0;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 0))
        {
	  return 5;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (((1 << which_alternative) & 0x6)))
        {
	  return 7;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 9;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 0))
        {
	  return 16 /* 0x10 */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x6)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 0))
        {
	  return 26 /* 0x1a */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (((1 << which_alternative) & 0x6)))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0x7)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x6)))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0x7)))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 65 /* 0x41 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x6)))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (!((1 << which_alternative) & 0x7)))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x6)))
        {
	  return 91 /* 0x5b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (!((1 << which_alternative) & 0x7)))
        {
	  return 102 /* 0x66 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 106 /* 0x6a */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x6)))
        {
	  return 107 /* 0x6b */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 75:  /* *movdf_insn_sp32_v9 */
    case 74:  /* *movdf_insn_sp32_v9 */
    case 73:  /* *movdf_insn_sp32_v9 */
    case 72:  /* *movdf_insn_sp32_v9 */
      extract_constrain_insn_cached (insn);
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 0;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 1))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 5;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (((1 << which_alternative) & 0x58)))
        {
	  return 7;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (!((1 << which_alternative) & 0x3)))
        {
	  return 9;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 1))
        {
	  return 10 /* 0xa */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x24)))
        {
	  return 16 /* 0x10 */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x58)))
        {
	  return 17 /* 0x11 */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 1))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 26 /* 0x1a */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (((1 << which_alternative) & 0x58)))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0x7f)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x58)))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 1))
        {
	  return 43 /* 0x2b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 55 /* 0x37 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0x7f)))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 65 /* 0x41 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x58)))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 1))
        {
	  return 70 /* 0x46 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 80 /* 0x50 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (!((1 << which_alternative) & 0x7f)))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x58)))
        {
	  return 91 /* 0x5b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 1))
        {
	  return 93 /* 0x5d */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 98 /* 0x62 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (!((1 << which_alternative) & 0x7f)))
        {
	  return 102 /* 0x66 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 106 /* 0x6a */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x58)))
        {
	  return 107 /* 0x6b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 1))
        {
	  return 108 /* 0x6c */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 111 /* 0x6f */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 71:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 0))
        {
	  return 0;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 0))
        {
	  return 5;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 1))
        {
	  return 7;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 9;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 0))
        {
	  return 16 /* 0x10 */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 1))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 0))
        {
	  return 26 /* 0x1a */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 1))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0x3)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 1))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0x3)))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 65 /* 0x41 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 1))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (!((1 << which_alternative) & 0x3)))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 1))
        {
	  return 91 /* 0x5b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (!((1 << which_alternative) & 0x3)))
        {
	  return 102 /* 0x66 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 106 /* 0x6a */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 1))
        {
	  return 107 /* 0x6b */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 70:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (((1 << which_alternative) & 0x5)))
        {
	  return 0;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 2))
        {
	  return 5;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 0))
        {
	  return 6;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (((1 << which_alternative) & 0xa)))
        {
	  return 7;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (!((1 << which_alternative) & 0x3)))
        {
	  return 9;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x5)))
        {
	  return 16 /* 0x10 */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0xa)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 2))
        {
	  return 26 /* 0x1a */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 3))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0xf)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x5)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0xa)))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0xf)))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x5)))
        {
	  return 65 /* 0x41 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0xa)))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (!((1 << which_alternative) & 0xf)))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 2))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 90 /* 0x5a */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 3))
        {
	  return 91 /* 0x5b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 1))
        {
	  return 92 /* 0x5c */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (!((1 << which_alternative) & 0xf)))
        {
	  return 102 /* 0x66 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x5)))
        {
	  return 106 /* 0x6a */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0xa)))
        {
	  return 107 /* 0x6b */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 67:  /* *movsf_insn_no_fpu */
      extract_constrain_insn_cached (insn);
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 3))
        {
	  return 0;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 3))
        {
	  return 5;
        }
      else if ((which_alternative == 4) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))))
        {
	  return 7;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 9;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 3))
        {
	  return 16 /* 0x10 */;
        }
      else if ((which_alternative == 4) && ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 3))
        {
	  return 26 /* 0x1a */;
        }
      else if ((which_alternative == 4) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x7)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 3))
        {
	  return 37 /* 0x25 */;
        }
      else if ((which_alternative == 4) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x7)))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 3))
        {
	  return 65 /* 0x41 */;
        }
      else if ((which_alternative == 4) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x7)))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 3))
        {
	  return 89 /* 0x59 */;
        }
      else if ((which_alternative == 4) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 91 /* 0x5b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x7)))
        {
	  return 102 /* 0x66 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 3))
        {
	  return 106 /* 0x6a */;
        }
      else if ((which_alternative == 4) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 107 /* 0x6b */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 66:  /* *movsf_insn */
    case 65:  /* *movsf_insn */
    case 64:  /* *movsf_insn */
      extract_constrain_insn_cached (insn);
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (((1 << which_alternative) & 0x60)))
        {
	  return 0;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 1))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 6))
        {
	  return 5;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 5))
        {
	  return 6;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (!((1 << which_alternative) & 0x7f)))
        {
	  return 7;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (!((1 << which_alternative) & 0xa3)))
        {
	  return 9;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 1))
        {
	  return 10 /* 0xa */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x60)))
        {
	  return 16 /* 0x10 */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (!((1 << which_alternative) & 0x7f)))
        {
	  return 17 /* 0x11 */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 1))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 6))
        {
	  return 26 /* 0x1a */;
        }
      else if ((which_alternative == 8) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x1c)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x60)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0x7f)))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 1))
        {
	  return 42 /* 0x2a */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 54 /* 0x36 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x1c)))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x60)))
        {
	  return 65 /* 0x41 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0x7f)))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 1))
        {
	  return 70 /* 0x46 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 80 /* 0x50 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x1c)))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 6))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 5))
        {
	  return 90 /* 0x5a */;
        }
      else if ((which_alternative == 8) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 91 /* 0x5b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 7))
        {
	  return 92 /* 0x5c */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 1))
        {
	  return 93 /* 0x5d */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 98 /* 0x62 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x1c)))
        {
	  return 102 /* 0x66 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x60)))
        {
	  return 106 /* 0x6a */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (!((1 << which_alternative) & 0x7f)))
        {
	  return 107 /* 0x6b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 1))
        {
	  return 108 /* 0x6c */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 111 /* 0x6f */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 46:  /* *movdi_insn_sp32_v9 */
      extract_constrain_insn_cached (insn);
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (((1 << which_alternative) & 0x2208)))
        {
	  return 0;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 12))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 3))
        {
	  return 5;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (((1 << which_alternative) & 0x2200)))
        {
	  return 6;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (!((1 << which_alternative) & 0x3ef8)))
        {
	  return 7;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (((1 << which_alternative) & 0xcff)))
        {
	  return 9;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 12))
        {
	  return 10 /* 0xa */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x2208)))
        {
	  return 16 /* 0x10 */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (!((1 << which_alternative) & 0x3ef8)))
        {
	  return 17 /* 0x11 */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 12))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 3))
        {
	  return 26 /* 0x1a */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (((1 << which_alternative) & 0x7)))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0xcf0)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x2208)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0x3ef8)))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 12))
        {
	  return 43 /* 0x2b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0xcf0)))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x2208)))
        {
	  return 65 /* 0x41 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0x3ef8)))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 12))
        {
	  return 70 /* 0x46 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0xcf0)))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 3))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x2200)))
        {
	  return 90 /* 0x5a */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x7)))
        {
	  return 91 /* 0x5b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (!((1 << which_alternative) & 0x3eff)))
        {
	  return 92 /* 0x5c */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 12))
        {
	  return 93 /* 0x5d */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0xcf0)))
        {
	  return 102 /* 0x66 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x2208)))
        {
	  return 106 /* 0x6a */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (!((1 << which_alternative) & 0x3ef8)))
        {
	  return 107 /* 0x6b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 12))
        {
	  return 108 /* 0x6c */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 45:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (((1 << which_alternative) & 0x104)))
        {
	  return 0;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 2))
        {
	  return 5;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 8))
        {
	  return 6;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (((1 << which_alternative) & 0x83)))
        {
	  return 7;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (!((1 << which_alternative) & 0x180)))
        {
	  return 9;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x104)))
        {
	  return 16 /* 0x10 */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x83)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 2))
        {
	  return 26 /* 0x1a */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (!((1 << which_alternative) & 0x187)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x104)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x83)))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (!((1 << which_alternative) & 0x187)))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x104)))
        {
	  return 65 /* 0x41 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x83)))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (!((1 << which_alternative) & 0x187)))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 2))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 8))
        {
	  return 90 /* 0x5a */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 91 /* 0x5b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 7))
        {
	  return 92 /* 0x5c */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (!((1 << which_alternative) & 0x187)))
        {
	  return 102 /* 0x66 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x104)))
        {
	  return 106 /* 0x6a */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x83)))
        {
	  return 107 /* 0x6b */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 38:  /* *movsi_insn */
      extract_constrain_insn_cached (insn);
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 0;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 4))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 2))
        {
	  return 5;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 5))
        {
	  return 6;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (((1 << which_alternative) & 0x48)))
        {
	  return 7;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (((1 << which_alternative) & 0xf)))
        {
	  return 9;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 4))
        {
	  return 10 /* 0xa */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x24)))
        {
	  return 16 /* 0x10 */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (((1 << which_alternative) & 0x48)))
        {
	  return 17 /* 0x11 */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 4))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 2))
        {
	  return 26 /* 0x1a */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 3))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x48)))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 4))
        {
	  return 42 /* 0x2a */;
        }
      else if ((which_alternative == 7) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 54 /* 0x36 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 65 /* 0x41 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x48)))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 4))
        {
	  return 70 /* 0x46 */;
        }
      else if ((which_alternative == 7) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 80 /* 0x50 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 2))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 5))
        {
	  return 90 /* 0x5a */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 3))
        {
	  return 91 /* 0x5b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 6))
        {
	  return 92 /* 0x5c */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 4))
        {
	  return 93 /* 0x5d */;
        }
      else if ((which_alternative == 7) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 98 /* 0x62 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 102 /* 0x66 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x24)))
        {
	  return 106 /* 0x6a */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x48)))
        {
	  return 107 /* 0x6b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 4))
        {
	  return 108 /* 0x6c */;
        }
      else if ((which_alternative == 7) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 111 /* 0x6f */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 36:  /* *movhi_insn */
      extract_constrain_insn_cached (insn);
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 2))
        {
	  return 0;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 2))
        {
	  return 5;
        }
      else if ((which_alternative == 3) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))))
        {
	  return 7;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 9;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 2))
        {
	  return 16 /* 0x10 */;
        }
      else if ((which_alternative == 3) && ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 2))
        {
	  return 26 /* 0x1a */;
        }
      else if ((which_alternative == 3) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 2))
        {
	  return 37 /* 0x25 */;
        }
      else if ((which_alternative == 3) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 2))
        {
	  return 66 /* 0x42 */;
        }
      else if ((which_alternative == 3) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 2))
        {
	  return 89 /* 0x59 */;
        }
      else if ((which_alternative == 3) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 91 /* 0x5b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 102 /* 0x66 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 2))
        {
	  return 106 /* 0x6a */;
        }
      else if ((which_alternative == 3) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 107 /* 0x6b */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 35:  /* *movqi_insn */
      extract_constrain_insn_cached (insn);
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (which_alternative == 1))
        {
	  return 0;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (which_alternative == 1))
        {
	  return 5;
        }
      else if ((which_alternative == 2) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))))
        {
	  return 7;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 9;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (which_alternative == 1))
        {
	  return 16 /* 0x10 */;
        }
      else if ((which_alternative == 2) && ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (which_alternative == 1))
        {
	  return 26 /* 0x1a */;
        }
      else if ((which_alternative == 2) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 0))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (which_alternative == 1))
        {
	  return 37 /* 0x25 */;
        }
      else if ((which_alternative == 2) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 0))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (which_alternative == 1))
        {
	  return 66 /* 0x42 */;
        }
      else if ((which_alternative == 2) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 0))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (which_alternative == 1))
        {
	  return 89 /* 0x59 */;
        }
      else if ((which_alternative == 2) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))))
        {
	  return 91 /* 0x5b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 0))
        {
	  return 102 /* 0x66 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (which_alternative == 1))
        {
	  return 106 /* 0x6a */;
        }
      else if ((which_alternative == 2) && (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))))
        {
	  return 107 /* 0x6b */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 355:  /* *ldstubsi */
    case 354:  /* *ldstubhi */
    case 353:  /* *ldstubqi */
    case 352:  /* *swapsi */
    case 351:  /* *sync_compare_and_swapdi_v8plus */
    case 350:  /* *sync_compare_and_swapsi */
    case 349:  /* *membar */
    case 348:  /* *stbar */
    case 316:  /* stack_protect_testsi */
    case 315:  /* stack_protect_setsi */
    case 285:  /* *sparc.md:7453 */
    case 284:  /* *sparc.md:7441 */
    case 283:  /* trap */
    case 280:  /* ffssi2 */
    case 279:  /* flushdi */
    case 278:  /* flush */
    case 277:  /* do_builtin_setjmp_setup */
    case 276:  /* goto_handler_and_restore */
    case 272:  /* update_return */
    case 256:  /* lshrdi3_v8plus */
    case 254:  /* ashrdi3_v8plus */
    case 250:  /* ashldi3_v8plus */
    case 155:  /* *cmp_udiv_cc_set */
    case 154:  /* udivsi3_sp32 */
    case 153:  /* *cmp_sdiv_cc_set */
    case 152:  /* divsi3_sp32 */
    case 151:  /* const_umulsi3_highpart */
    case 150:  /* *umulsi3_highpart_sp32 */
    case 149:  /* const_umulsi3_highpart_v8plus */
    case 148:  /* umulsi3_highpart_v8plus */
    case 147:  /* const_umulsidi3_v8plus */
    case 144:  /* umulsidi3_v8plus */
    case 143:  /* const_smulsi3_highpart */
    case 142:  /* *smulsi3_highpart_sp32 */
    case 141:  /* const_smulsi3_highpart_v8plus */
    case 140:  /* *sparc.md:4656 */
    case 139:  /* smulsi3_highpart_v8plus */
    case 136:  /* const_mulsidi3_v8plus */
    case 135:  /* mulsidi3_v8plus */
    case 133:  /* muldi3_v8plus */
    case 34:  /* load_pcrel_symsi */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 29 /* 0x1d */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 59 /* 0x3b */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 83 /* 0x53 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 100 /* 0x64 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 33:  /* *inverted_fpe_branch */
    case 32:  /* *normal_fpe_branch */
    case 31:  /* *inverted_fp_branch */
    case 30:  /* *normal_fp_branch */
    case 29:  /* *inverted_branch */
    case 28:  /* *normal_branch */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))
        {
	  return 18 /* 0x12 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 40 /* 0x28 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 68 /* 0x44 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 88 /* 0x58 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 105 /* 0x69 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 126:  /* subx */
    case 119:  /* addx */
    case 27:  /* *x_minus_sgeu */
    case 26:  /* *sgeu_plus_x */
    case 25:  /* *x_minus_sltu_plus_y */
    case 24:  /* *x_minus_y_minus_sltu */
    case 23:  /* *x_minus_sltu */
    case 22:  /* *sltu_plus_x_plus_y */
    case 21:  /* *sltu_plus_x */
    case 20:  /* *neg_sgeu_insn */
    case 19:  /* *sgeu_insn */
    case 18:  /* *neg_sltu_plus_x */
    case 17:  /* *neg_sltu_minus_x */
    case 16:  /* *neg_sltu_insn */
    case 15:  /* *sltu_insn */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 33 /* 0x21 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 5:  /* *cmpdf_fp */
    case 2:  /* *cmpdf_fpe */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 20 /* 0x14 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 49 /* 0x31 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 74 /* 0x4a */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 94 /* 0x5e */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 108 /* 0x6c */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 6:  /* *cmptf_fp */
    case 4:  /* *cmpsf_fp */
    case 3:  /* *cmptf_fpe */
    case 1:  /* *cmpsf_fpe */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))))
        {
	  return 20 /* 0x14 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 48 /* 0x30 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 74 /* 0x4a */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 94 /* 0x5e */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 108 /* 0x6c */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case 252:  /* *cmp_cc_set_ashift_1 */
    case 251:  /* *cmp_cc_ashift_1 */
    case 220:  /* *cmp_cc_set */
    case 219:  /* *cmp_cc_set_not */
    case 218:  /* *cmp_cc_not */
    case 210:  /* *cmp_cc_set_neg */
    case 209:  /* *cmp_cc_neg */
    case 206:  /* *cmp_cc_arith_op_not_set */
    case 205:  /* *cmp_cc_arith_op_not */
    case 204:  /* *cmp_cc_xor_not_set */
    case 203:  /* *cmp_cc_xor_not */
    case 202:  /* *cmp_cc_arith_op_set */
    case 201:  /* *cmp_cc_arith_op */
    case 131:  /* cmp_minus_cc_set */
    case 130:  /* *cmp_minus_cc */
    case 124:  /* *cmp_cc_plus_set */
    case 123:  /* *cmp_cc_plus */
    case 99:  /* *cmp_zero_extract */
    case 95:  /* *cmp_siqi_trunc_set */
    case 94:  /* *cmp_siqi_trunc */
    case 93:  /* *cmp_zero_extendqisi2_andcc_set */
    case 92:  /* *cmp_zero_extendqisi2_set */
    case 91:  /* *cmp_zero_qi */
    case 90:  /* *cmp_zero_extendqisi2 */
    case 0:  /* *cmpsi_insn */
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 32 /* 0x20 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 60 /* 0x3c */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 85 /* 0x55 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 102 /* 0x66 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && ((get_attr_type (insn) == TYPE_LOAD) || ((get_attr_type (insn) == TYPE_SLOAD) || (get_attr_type (insn) == TYPE_FPLOAD))))
        {
	  return 0;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && ((get_attr_type (insn) == TYPE_FP) || (get_attr_type (insn) == TYPE_FPMOVE)))
        {
	  return 1;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && (get_attr_type (insn) == TYPE_FPMUL))
        {
	  return 2;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && ((get_attr_type (insn) == TYPE_FPDIVS) || (get_attr_type (insn) == TYPE_FPDIVD)))
        {
	  return 3;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_CYPRESS)))) && ((get_attr_type (insn) == TYPE_FPSQRTS) || (get_attr_type (insn) == TYPE_FPSQRTD)))
        {
	  return 4;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && ((get_attr_type (insn) == TYPE_LOAD) || (get_attr_type (insn) == TYPE_SLOAD)))
        {
	  return 5;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (get_attr_type (insn) == TYPE_FPLOAD))
        {
	  return 6;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && ((get_attr_type (insn) == TYPE_STORE) || (get_attr_type (insn) == TYPE_FPSTORE)))
        {
	  return 7;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (get_attr_type (insn) == TYPE_SHIFT))
        {
	  return 8;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && ((get_attr_type (insn) == TYPE_LOAD) || ((get_attr_type (insn) == TYPE_SLOAD) || ((get_attr_type (insn) == TYPE_STORE) || ((get_attr_type (insn) == TYPE_SHIFT) || (get_attr_type (insn) == TYPE_IALU))))))
        {
	  return 9;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && ((get_attr_type (insn) == TYPE_FP) || ((get_attr_type (insn) == TYPE_FPMOVE) || (get_attr_type (insn) == TYPE_FPCMP))))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (get_attr_type (insn) == TYPE_FPMUL))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (get_attr_type (insn) == TYPE_FPDIVS))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (get_attr_type (insn) == TYPE_FPDIVD))
        {
	  return 13 /* 0xd */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && ((get_attr_type (insn) == TYPE_FPSQRTS) || (get_attr_type (insn) == TYPE_FPSQRTD)))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC)))) && (get_attr_type (insn) == TYPE_IMUL))
        {
	  return 15 /* 0xf */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && ((get_attr_type (insn) == TYPE_LOAD) || ((get_attr_type (insn) == TYPE_SLOAD) || (get_attr_type (insn) == TYPE_FPLOAD))))
        {
	  return 16 /* 0x10 */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && ((get_attr_type (insn) == TYPE_STORE) || (get_attr_type (insn) == TYPE_FPSTORE)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))) && (get_attr_type (insn) == TYPE_BRANCH))
        {
	  return 18 /* 0x12 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X)))) && (get_attr_type (insn) == TYPE_SHIFT))
        {
	  return 19 /* 0x13 */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && ((get_attr_type (insn) == TYPE_FP) || ((get_attr_type (insn) == TYPE_FPMOVE) || (get_attr_type (insn) == TYPE_FPCMP))))
        {
	  return 20 /* 0x14 */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (get_attr_type (insn) == TYPE_FPMUL))
        {
	  return 21 /* 0x15 */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (get_attr_type (insn) == TYPE_FPDIVS))
        {
	  return 22 /* 0x16 */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (get_attr_type (insn) == TYPE_FPDIVD))
        {
	  return 23 /* 0x17 */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && ((get_attr_type (insn) == TYPE_FPSQRTS) || (get_attr_type (insn) == TYPE_FPSQRTD)))
        {
	  return 24 /* 0x18 */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_HYPERSPARC)))) || (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SPARCLITE86X))))) && (get_attr_type (insn) == TYPE_IMUL))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && ((get_attr_type (insn) == TYPE_LOAD) || (get_attr_type (insn) == TYPE_SLOAD)))
        {
	  return 26 /* 0x1a */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (get_attr_type (insn) == TYPE_STORE))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_TSC701)))) && (get_attr_type (insn) == TYPE_IMUL))
        {
	  return 28 /* 0x1c */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_MULTI) || ((get_attr_type (insn) == TYPE_SAVEW) || ((get_attr_type (insn) == TYPE_FLUSHW) || ((get_attr_type (insn) == TYPE_IFLUSH) || (get_attr_type (insn) == TYPE_TRAP))))))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_IALU))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_SHIFT))
        {
	  return 31 /* 0x1f */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_COMPARE))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_IALUX))
        {
	  return 33 /* 0x21 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_CMOVE))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_IMUL))
        {
	  return 35 /* 0x23 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_IDIV))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_LOAD) || (get_attr_type (insn) == TYPE_FPLOAD)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_SLOAD))
        {
	  return 38 /* 0x26 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_STORE) || (get_attr_type (insn) == TYPE_FPSTORE)))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_BRANCH))
        {
	  return 40 /* 0x28 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_CALL) || ((get_attr_type (insn) == TYPE_SIBCALL) || ((get_attr_type (insn) == TYPE_CALL_NO_DELAY_SLOT) || (get_attr_type (insn) == TYPE_UNCOND_BRANCH)))))
        {
	  return 41 /* 0x29 */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FPMOVE)) && (get_attr_fptype (insn) == FPTYPE_SINGLE))
        {
	  return 42 /* 0x2a */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FPMOVE)) && (get_attr_fptype (insn) == FPTYPE_DOUBLE))
        {
	  return 43 /* 0x2b */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_FPCMOVE) || (get_attr_type (insn) == TYPE_FPCRMOVE))) && (get_attr_fptype (insn) == FPTYPE_SINGLE))
        {
	  return 44 /* 0x2c */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_FPCMOVE) || (get_attr_type (insn) == TYPE_FPCRMOVE))) && (get_attr_fptype (insn) == FPTYPE_DOUBLE))
        {
	  return 45 /* 0x2d */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FP)) && (get_attr_fptype (insn) == FPTYPE_SINGLE))
        {
	  return 46 /* 0x2e */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FP)) && (get_attr_fptype (insn) == FPTYPE_DOUBLE))
        {
	  return 47 /* 0x2f */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FPCMP)) && (get_attr_fptype (insn) == FPTYPE_SINGLE))
        {
	  return 48 /* 0x30 */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FPCMP)) && (get_attr_fptype (insn) == FPTYPE_DOUBLE))
        {
	  return 49 /* 0x31 */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FPMUL)) && (get_attr_fptype (insn) == FPTYPE_SINGLE))
        {
	  return 50 /* 0x32 */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FPMUL)) && (get_attr_fptype (insn) == FPTYPE_DOUBLE))
        {
	  return 51 /* 0x33 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_FPDIVS) || (get_attr_type (insn) == TYPE_FPSQRTS)))
        {
	  return 52 /* 0x34 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_FPDIVD) || (get_attr_type (insn) == TYPE_FPSQRTD)))
        {
	  return 53 /* 0x35 */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FGA)) && (get_attr_fptype (insn) == FPTYPE_SINGLE))
        {
	  return 54 /* 0x36 */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FGA)) && (get_attr_fptype (insn) == FPTYPE_DOUBLE))
        {
	  return 55 /* 0x37 */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_FGM_PACK) || ((get_attr_type (insn) == TYPE_FGM_MUL) || (get_attr_type (insn) == TYPE_FGM_CMP)))) && (get_attr_fptype (insn) == FPTYPE_SINGLE))
        {
	  return 56 /* 0x38 */;
        }
      else if (((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && ((get_attr_type (insn) == TYPE_FGM_PACK) || ((get_attr_type (insn) == TYPE_FGM_MUL) || (get_attr_type (insn) == TYPE_FGM_CMP)))) && (get_attr_fptype (insn) == FPTYPE_DOUBLE))
        {
	  return 57 /* 0x39 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC)))) && (get_attr_type (insn) == TYPE_FGM_PDIST))
        {
	  return 58 /* 0x3a */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && ((get_attr_type (insn) == TYPE_MULTI) || ((get_attr_type (insn) == TYPE_SAVEW) || ((get_attr_type (insn) == TYPE_FLUSHW) || ((get_attr_type (insn) == TYPE_IFLUSH) || (get_attr_type (insn) == TYPE_TRAP))))))
        {
	  return 59 /* 0x3b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && ((get_attr_type (insn) == TYPE_IALU) || ((get_attr_type (insn) == TYPE_SHIFT) || (get_attr_type (insn) == TYPE_COMPARE))))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && ((get_attr_type (insn) == TYPE_IALU) || ((get_attr_type (insn) == TYPE_SHIFT) || (get_attr_type (insn) == TYPE_COMPARE))))
        {
	  return 61 /* 0x3d */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_CMOVE))
        {
	  return 62 /* 0x3e */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_IMUL))
        {
	  return 63 /* 0x3f */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_IDIV))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((get_attr_type (insn) == TYPE_LOAD) || (get_attr_type (insn) == TYPE_FPLOAD)) && (get_attr_us3load_type (insn) == US3LOAD_TYPE_2CYCLE)))
        {
	  return 65 /* 0x41 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (((get_attr_type (insn) == TYPE_LOAD) || (get_attr_type (insn) == TYPE_SLOAD)) && (get_attr_us3load_type (insn) == US3LOAD_TYPE_3CYCLE)))
        {
	  return 66 /* 0x42 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && ((get_attr_type (insn) == TYPE_STORE) || (get_attr_type (insn) == TYPE_FPSTORE)))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_BRANCH))
        {
	  return 68 /* 0x44 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && ((get_attr_type (insn) == TYPE_CALL) || ((get_attr_type (insn) == TYPE_SIBCALL) || ((get_attr_type (insn) == TYPE_CALL_NO_DELAY_SLOT) || (get_attr_type (insn) == TYPE_UNCOND_BRANCH)))))
        {
	  return 69 /* 0x45 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FPMOVE))
        {
	  return 70 /* 0x46 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FPCMOVE))
        {
	  return 71 /* 0x47 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FPCRMOVE))
        {
	  return 72 /* 0x48 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FP))
        {
	  return 73 /* 0x49 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FPCMP))
        {
	  return 74 /* 0x4a */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FPMUL))
        {
	  return 75 /* 0x4b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FPDIVS))
        {
	  return 76 /* 0x4c */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FPSQRTS))
        {
	  return 77 /* 0x4d */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FPDIVD))
        {
	  return 78 /* 0x4e */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FPSQRTD))
        {
	  return 79 /* 0x4f */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FGA))
        {
	  return 80 /* 0x50 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && ((get_attr_type (insn) == TYPE_FGM_PACK) || ((get_attr_type (insn) == TYPE_FGM_MUL) || (get_attr_type (insn) == TYPE_FGM_CMP))))
        {
	  return 81 /* 0x51 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3)))) && (get_attr_type (insn) == TYPE_FGM_PDIST))
        {
	  return 82 /* 0x52 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && ((get_attr_type (insn) == TYPE_MULTI) || ((get_attr_type (insn) == TYPE_FLUSHW) || ((get_attr_type (insn) == TYPE_IFLUSH) || (get_attr_type (insn) == TYPE_TRAP)))))
        {
	  return 83 /* 0x53 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_SAVEW))
        {
	  return 84 /* 0x54 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && ((get_attr_type (insn) == TYPE_IALU) || ((get_attr_type (insn) == TYPE_SHIFT) || ((get_attr_type (insn) == TYPE_COMPARE) || (get_attr_type (insn) == TYPE_CMOVE)))))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_IMUL))
        {
	  return 86 /* 0x56 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_IDIV))
        {
	  return 87 /* 0x57 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && ((get_attr_type (insn) == TYPE_CALL) || ((get_attr_type (insn) == TYPE_SIBCALL) || ((get_attr_type (insn) == TYPE_CALL_NO_DELAY_SLOT) || ((get_attr_type (insn) == TYPE_UNCOND_BRANCH) || (get_attr_type (insn) == TYPE_BRANCH))))))
        {
	  return 88 /* 0x58 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_LOAD))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_FPLOAD))
        {
	  return 90 /* 0x5a */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_STORE))
        {
	  return 91 /* 0x5b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_FPSTORE))
        {
	  return 92 /* 0x5c */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && ((get_attr_type (insn) == TYPE_FPMOVE) || ((get_attr_type (insn) == TYPE_FPCMOVE) || (get_attr_type (insn) == TYPE_FPCRMOVE))))
        {
	  return 93 /* 0x5d */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_FPCMP))
        {
	  return 94 /* 0x5e */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_FPMUL))
        {
	  return 95 /* 0x5f */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_FPDIVS))
        {
	  return 96 /* 0x60 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && (get_attr_type (insn) == TYPE_FPDIVD))
        {
	  return 97 /* 0x61 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA)))) && ((get_attr_type (insn) == TYPE_FGA) || ((get_attr_type (insn) == TYPE_FGM_PACK) || ((get_attr_type (insn) == TYPE_FGM_MUL) || ((get_attr_type (insn) == TYPE_FGM_CMP) || (get_attr_type (insn) == TYPE_FGM_PDIST))))))
        {
	  return 98 /* 0x62 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (get_attr_type (insn) == TYPE_FLUSHW))
        {
	  return 99 /* 0x63 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && ((get_attr_type (insn) == TYPE_MULTI) || ((get_attr_type (insn) == TYPE_FLUSHW) || ((get_attr_type (insn) == TYPE_IFLUSH) || (get_attr_type (insn) == TYPE_TRAP)))))
        {
	  return 100 /* 0x64 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (get_attr_type (insn) == TYPE_SAVEW))
        {
	  return 101 /* 0x65 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && ((get_attr_type (insn) == TYPE_IALU) || ((get_attr_type (insn) == TYPE_SHIFT) || ((get_attr_type (insn) == TYPE_COMPARE) || (get_attr_type (insn) == TYPE_CMOVE)))))
        {
	  return 102 /* 0x66 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (get_attr_type (insn) == TYPE_IMUL))
        {
	  return 103 /* 0x67 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (get_attr_type (insn) == TYPE_IDIV))
        {
	  return 104 /* 0x68 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && ((get_attr_type (insn) == TYPE_CALL) || ((get_attr_type (insn) == TYPE_SIBCALL) || ((get_attr_type (insn) == TYPE_CALL_NO_DELAY_SLOT) || ((get_attr_type (insn) == TYPE_UNCOND_BRANCH) || (get_attr_type (insn) == TYPE_BRANCH))))))
        {
	  return 105 /* 0x69 */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && ((get_attr_type (insn) == TYPE_LOAD) || (get_attr_type (insn) == TYPE_FPLOAD)))
        {
	  return 106 /* 0x6a */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && ((get_attr_type (insn) == TYPE_STORE) || (get_attr_type (insn) == TYPE_FPSTORE)))
        {
	  return 107 /* 0x6b */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && ((get_attr_type (insn) == TYPE_FPMOVE) || ((get_attr_type (insn) == TYPE_FPCMOVE) || ((get_attr_type (insn) == TYPE_FPCRMOVE) || ((get_attr_type (insn) == TYPE_FPCMP) || (get_attr_type (insn) == TYPE_FPMUL))))))
        {
	  return 108 /* 0x6c */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (get_attr_type (insn) == TYPE_FPDIVS))
        {
	  return 109 /* 0x6d */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && (get_attr_type (insn) == TYPE_FPDIVD))
        {
	  return 110 /* 0x6e */;
        }
      else if ((((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2)))) && ((get_attr_type (insn) == TYPE_FGA) || ((get_attr_type (insn) == TYPE_FGM_PACK) || ((get_attr_type (insn) == TYPE_FGM_MUL) || ((get_attr_type (insn) == TYPE_FGM_CMP) || (get_attr_type (insn) == TYPE_FGM_PDIST))))))
        {
	  return 111 /* 0x6f */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    default:
      if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_SUPERSPARC))))
        {
	  return 9;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC))))
        {
	  return 30 /* 0x1e */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_ULTRASPARC3))))
        {
	  return 60 /* 0x3c */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA))))
        {
	  return 85 /* 0x55 */;
        }
      else if (((
#line 101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(sparc_cpu_attr)) == (
(CPU_NIAGARA2))))
        {
	  return 102 /* 0x66 */;
        }
      else
        {
	  return 113 /* 0x71 */;
        }

    }
}

int
num_delay_slots (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 293:  /* tldm_call32 */
    case 289:  /* tgd_call32 */
    case 274:  /* *branch_sp32 */
    case 270:  /* *return_internal */
    case 268:  /* *sibcall_value_symbolic_sp32 */
    case 267:  /* *sibcall_symbolic_sp32 */
    case 266:  /* *call_value_symbolic_sp32 */
    case 265:  /* *call_value_address_sp32 */
    case 260:  /* *call_symbolic_sp32 */
    case 259:  /* *call_address_sp32 */
    case 258:  /* *tablejump_sp32 */
    case 257:  /* jump */
    case 33:  /* *inverted_fpe_branch */
    case 32:  /* *normal_fpe_branch */
    case 31:  /* *inverted_fp_branch */
    case 30:  /* *normal_fp_branch */
    case 29:  /* *inverted_branch */
    case 28:  /* *normal_branch */
      return 1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if ((get_attr_type (insn) == TYPE_RETURN) || ((get_attr_type (insn) == TYPE_UNCOND_BRANCH) || ((get_attr_type (insn) == TYPE_BRANCH) || ((get_attr_type (insn) == TYPE_SIBCALL) || (get_attr_type (insn) == TYPE_CALL)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    default:
      return 0;

    }
}

enum attr_branch_type
get_attr_branch_type (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 30:  /* *normal_fp_branch */
    case 31:  /* *inverted_fp_branch */
    case 32:  /* *normal_fpe_branch */
    case 33:  /* *inverted_fpe_branch */
      return BRANCH_TYPE_FCC;

    case 28:  /* *normal_branch */
    case 29:  /* *inverted_branch */
      return BRANCH_TYPE_ICC;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return BRANCH_TYPE_NONE;

    }
}

enum attr_calls_eh_return
get_attr_calls_eh_return (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      extract_constrain_insn_cached (insn);
      return 
#line 145 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(crtl->calls_eh_return !=0 );

    }
}

enum attr_calls_alloca
get_attr_calls_alloca (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      extract_constrain_insn_cached (insn);
      return 
#line 142 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(cfun->calls_alloca != 0);

    }
}

enum attr_delayed_branch
get_attr_delayed_branch (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      extract_constrain_insn_cached (insn);
      return 
#line 151 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(flag_delayed_branch != 0);

    }
}

enum attr_eligible_for_return_delay
get_attr_eligible_for_return_delay (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      extract_constrain_insn_cached (insn);
      return 
#line 263 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(eligible_for_return_delay (insn));

    }
}

enum attr_eligible_for_sibcall_delay
get_attr_eligible_for_sibcall_delay (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      extract_constrain_insn_cached (insn);
      return 
#line 260 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(eligible_for_sibcall_delay (insn));

    }
}

enum attr_empty_delay_slot
get_attr_empty_delay_slot (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      extract_constrain_insn_cached (insn);
      return 
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn));

    }
}

enum attr_fptype
get_attr_fptype (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 75:  /* *movdf_insn_sp32_v9 */
    case 74:  /* *movdf_insn_sp32_v9 */
    case 73:  /* *movdf_insn_sp32_v9 */
    case 72:  /* *movdf_insn_sp32_v9 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return FPTYPE_DOUBLE;
        }
      else
        {
	  return FPTYPE_SINGLE;
        }

    case 46:  /* *movdi_insn_sp32_v9 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xfff))
        {
	  return FPTYPE_SINGLE;
        }
      else if (which_alternative == 12)
        {
	  return FPTYPE_DOUBLE;
        }
      else
        {
	  return FPTYPE_SINGLE;
        }

    case 159:  /* *anddi3_sp32 */
    case 160:  /* *andv2si3_sp32 */
    case 161:  /* *andv4hi3_sp32 */
    case 162:  /* *andv8qi3_sp32 */
    case 166:  /* *and_not_di_sp32 */
    case 167:  /* *and_not_v2si_sp32 */
    case 168:  /* *and_not_v4hi_sp32 */
    case 169:  /* *and_not_v8qi_sp32 */
    case 173:  /* *iordi3_sp32 */
    case 174:  /* *iorv2si3_sp32 */
    case 175:  /* *iorv4hi3_sp32 */
    case 176:  /* *iorv8qi3_sp32 */
    case 180:  /* *or_not_di_sp32 */
    case 181:  /* *or_not_v2si_sp32 */
    case 182:  /* *or_not_v4hi_sp32 */
    case 183:  /* *or_not_v8qi_sp32 */
    case 187:  /* *xordi3_sp32 */
    case 188:  /* *xorv2si3_sp32 */
    case 189:  /* *xorv4hi3_sp32 */
    case 190:  /* *xorv8qi3_sp32 */
    case 194:  /* *xor_not_di_sp32 */
    case 195:  /* *xor_not_v2si_sp32 */
    case 196:  /* *xor_not_v4hi_sp32 */
    case 197:  /* *xor_not_v8qi_sp32 */
    case 211:  /* *one_cmpldi2_sp32 */
    case 212:  /* *one_cmplv2si2_sp32 */
    case 213:  /* *one_cmplv4hi2_sp32 */
    case 214:  /* *one_cmplv8qi2_sp32 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return FPTYPE_SINGLE;
        }
      else
        {
	  return FPTYPE_DOUBLE;
        }

    case 241:  /* *abstf2_hq_v9 */
    case 242:  /* *abstf2_v9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return FPTYPE_DOUBLE;
        }
      else
        {
	  return FPTYPE_SINGLE;
        }

    case 2:  /* *cmpdf_fpe */
    case 5:  /* *cmpdf_fp */
    case 83:  /* movdf_cc_v9 */
    case 100:  /* extendsfdf2 */
    case 103:  /* truncdfsf2 */
    case 106:  /* floatsisf2 */
    case 107:  /* floatsidf2 */
    case 109:  /* floatdisf2 */
    case 110:  /* floatdidf2 */
    case 112:  /* fix_truncsfsi2 */
    case 113:  /* fix_truncdfsi2 */
    case 115:  /* fix_truncsfdi2 */
    case 116:  /* fix_truncdfdi2 */
    case 222:  /* adddf3 */
    case 225:  /* subdf3 */
    case 228:  /* muldf3 */
    case 230:  /* *muldf3_extend */
    case 233:  /* divdf3 */
    case 236:  /* *negtf2_v9 */
    case 238:  /* *negdf2_v9 */
    case 244:  /* *absdf2_v9 */
    case 247:  /* sqrtdf2 */
    case 317:  /* addv2si3 */
    case 318:  /* addv4hi3 */
    case 320:  /* subv2si3 */
    case 321:  /* subv4hi3 */
    case 323:  /* *nand<V64mode>_vis */
    case 324:  /* *nand<V64mode>_vis */
    case 325:  /* *nand<V64mode>_vis */
    case 326:  /* *nand<V64mode>_vis */
    case 330:  /* fpack16_vis */
    case 331:  /* fpackfix_vis */
    case 332:  /* fpack32_vis */
    case 333:  /* fexpand_vis */
    case 334:  /* fpmerge_vis */
    case 335:  /* fmul8x16_vis */
    case 336:  /* fmul8x16au_vis */
    case 337:  /* fmul8x16al_vis */
    case 338:  /* fmul8sux16_vis */
    case 339:  /* fmul8ulx16_vis */
    case 340:  /* fmuld8sux16_vis */
    case 341:  /* fmuld8ulx16_vis */
    case 342:  /* faligndatadi_vis */
    case 343:  /* faligndatav2si_vis */
    case 344:  /* faligndatav4hi_vis */
    case 345:  /* faligndatav8qi_vis */
    case 347:  /* pdist_vis */
      return FPTYPE_DOUBLE;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return FPTYPE_SINGLE;

    }
}

enum attr_in_annul_branch_delay
get_attr_in_annul_branch_delay (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 270:  /* *return_internal */
      extract_constrain_insn_cached (insn);
      if ((((
#line 148 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(current_function_uses_only_leaf_regs != 0)) == (
(LEAF_FUNCTION_TRUE))) && (! ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE))))) || ((! ((
#line 148 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(current_function_uses_only_leaf_regs != 0)) == (
(LEAF_FUNCTION_TRUE)))) && ((! ((
#line 145 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(crtl->calls_eh_return !=0 )) == (
(CALLS_EH_RETURN_TRUE)))) && (! ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE)))))))
        {
	  return IN_ANNUL_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_ANNUL_BRANCH_DELAY_FALSE;
        }

    case 243:  /* *absdf2_notv9 */
    case 242:  /* *abstf2_v9 */
    case 240:  /* *abstf2_notv9 */
    case 237:  /* *negdf2_notv9 */
    case 236:  /* *negtf2_v9 */
    case 235:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return IN_ANNUL_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_ANNUL_BRANCH_DELAY_FALSE;
        }

    case 214:  /* *one_cmplv8qi2_sp32 */
    case 213:  /* *one_cmplv4hi2_sp32 */
    case 212:  /* *one_cmplv2si2_sp32 */
    case 211:  /* *one_cmpldi2_sp32 */
    case 197:  /* *xor_not_v8qi_sp32 */
    case 196:  /* *xor_not_v4hi_sp32 */
    case 195:  /* *xor_not_v2si_sp32 */
    case 194:  /* *xor_not_di_sp32 */
    case 190:  /* *xorv8qi3_sp32 */
    case 189:  /* *xorv4hi3_sp32 */
    case 188:  /* *xorv2si3_sp32 */
    case 187:  /* *xordi3_sp32 */
    case 183:  /* *or_not_v8qi_sp32 */
    case 182:  /* *or_not_v4hi_sp32 */
    case 181:  /* *or_not_v2si_sp32 */
    case 180:  /* *or_not_di_sp32 */
    case 176:  /* *iorv8qi3_sp32 */
    case 175:  /* *iorv4hi3_sp32 */
    case 174:  /* *iorv2si3_sp32 */
    case 173:  /* *iordi3_sp32 */
    case 169:  /* *and_not_v8qi_sp32 */
    case 168:  /* *and_not_v4hi_sp32 */
    case 167:  /* *and_not_v2si_sp32 */
    case 166:  /* *and_not_di_sp32 */
    case 162:  /* *andv8qi3_sp32 */
    case 161:  /* *andv4hi3_sp32 */
    case 160:  /* *andv2si3_sp32 */
    case 159:  /* *anddi3_sp32 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return IN_ANNUL_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_ANNUL_BRANCH_DELAY_FALSE;
        }

    case 146:  /* const_umulsidi3_sp32 */
    case 145:  /* *umulsidi3_sp32 */
    case 138:  /* const_mulsidi3_sp32 */
    case 137:  /* *mulsidi3_sp32 */
      if (((! (
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9))) && ((! (
#line 109 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8))) && (
#line 110 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET)))))
        {
	  return IN_ANNUL_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_ANNUL_BRANCH_DELAY_FALSE;
        }

    case 76:  /* *movdf_insn_sp32_v9_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return IN_ANNUL_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_ANNUL_BRANCH_DELAY_FALSE;
        }

    case 75:  /* *movdf_insn_sp32_v9 */
    case 74:  /* *movdf_insn_sp32_v9 */
    case 73:  /* *movdf_insn_sp32_v9 */
    case 72:  /* *movdf_insn_sp32_v9 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7f))
        {
	  return IN_ANNUL_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_ANNUL_BRANCH_DELAY_FALSE;
        }

    case 71:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return IN_ANNUL_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_ANNUL_BRANCH_DELAY_FALSE;
        }

    case 70:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return IN_ANNUL_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_ANNUL_BRANCH_DELAY_FALSE;
        }

    case 46:  /* *movdi_insn_sp32_v9 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0xcf2))
        {
	  return IN_ANNUL_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_ANNUL_BRANCH_DELAY_FALSE;
        }

    case 45:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x186))
        {
	  return IN_ANNUL_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_ANNUL_BRANCH_DELAY_FALSE;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((! (get_attr_type (insn) == TYPE_UNCOND_BRANCH)) && ((! (get_attr_type (insn) == TYPE_BRANCH)) && ((! (get_attr_type (insn) == TYPE_CALL)) && ((! (get_attr_type (insn) == TYPE_SIBCALL)) && ((! (get_attr_type (insn) == TYPE_CALL_NO_DELAY_SLOT)) && (! (get_attr_type (insn) == TYPE_MULTI))))))) && (get_attr_length (insn) == 1))
        {
	  return IN_ANNUL_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_ANNUL_BRANCH_DELAY_FALSE;
        }

    case 355:  /* *ldstubsi */
    case 354:  /* *ldstubhi */
    case 353:  /* *ldstubqi */
    case 352:  /* *swapsi */
    case 351:  /* *sync_compare_and_swapdi_v8plus */
    case 350:  /* *sync_compare_and_swapsi */
    case 349:  /* *membar */
    case 348:  /* *stbar */
    case 316:  /* stack_protect_testsi */
    case 315:  /* stack_protect_setsi */
    case 293:  /* tldm_call32 */
    case 289:  /* tgd_call32 */
    case 280:  /* ffssi2 */
    case 277:  /* do_builtin_setjmp_setup */
    case 276:  /* goto_handler_and_restore */
    case 274:  /* *branch_sp32 */
    case 272:  /* update_return */
    case 271:  /* blockage */
    case 268:  /* *sibcall_value_symbolic_sp32 */
    case 267:  /* *sibcall_symbolic_sp32 */
    case 266:  /* *call_value_symbolic_sp32 */
    case 265:  /* *call_value_address_sp32 */
    case 264:  /* *call_symbolic_untyped_struct_value_sp32 */
    case 263:  /* *call_address_untyped_struct_value_sp32 */
    case 262:  /* *call_symbolic_struct_value_sp32 */
    case 261:  /* *call_address_struct_value_sp32 */
    case 260:  /* *call_symbolic_sp32 */
    case 259:  /* *call_address_sp32 */
    case 258:  /* *tablejump_sp32 */
    case 257:  /* jump */
    case 256:  /* lshrdi3_v8plus */
    case 254:  /* ashrdi3_v8plus */
    case 250:  /* ashldi3_v8plus */
    case 207:  /* *negdi2_sp32 */
    case 155:  /* *cmp_udiv_cc_set */
    case 154:  /* udivsi3_sp32 */
    case 153:  /* *cmp_sdiv_cc_set */
    case 152:  /* divsi3_sp32 */
    case 151:  /* const_umulsi3_highpart */
    case 150:  /* *umulsi3_highpart_sp32 */
    case 149:  /* const_umulsi3_highpart_v8plus */
    case 148:  /* umulsi3_highpart_v8plus */
    case 147:  /* const_umulsidi3_v8plus */
    case 144:  /* umulsidi3_v8plus */
    case 143:  /* const_smulsi3_highpart */
    case 142:  /* *smulsi3_highpart_sp32 */
    case 141:  /* const_smulsi3_highpart_v8plus */
    case 140:  /* *sparc.md:4656 */
    case 139:  /* smulsi3_highpart_v8plus */
    case 136:  /* const_mulsidi3_v8plus */
    case 135:  /* mulsidi3_v8plus */
    case 133:  /* muldi3_v8plus */
    case 128:  /* *sparc.md:4336 */
    case 127:  /* *subx_extend */
    case 125:  /* subdi3_insn_sp32 */
    case 121:  /* *sparc.md:4164 */
    case 120:  /* *addx_extend_sp32 */
    case 118:  /* adddi3_insn_sp32 */
    case 89:  /* *zero_extendsidi2_insn_sp32 */
    case 85:  /* *movtf_cc_v9 */
    case 78:  /* *movtf_insn_sp32_no_fpu */
    case 77:  /* *movtf_insn_sp32 */
    case 34:  /* load_pcrel_symsi */
    case 33:  /* *inverted_fpe_branch */
    case 32:  /* *normal_fpe_branch */
    case 31:  /* *inverted_fp_branch */
    case 30:  /* *normal_fp_branch */
    case 29:  /* *inverted_branch */
    case 28:  /* *normal_branch */
    case 14:  /* *x_minus_i_eq_0 */
    case 13:  /* *x_plus_i_eq_0 */
    case 12:  /* *x_minus_i_ne_0 */
    case 11:  /* *x_plus_i_ne_0 */
    case 10:  /* *neg_seqsi_zero */
    case 9:  /* *seqsi_zero */
    case 8:  /* *neg_snesi_zero */
    case 7:  /* *snesi_zero */
      return IN_ANNUL_BRANCH_DELAY_FALSE;

    default:
      return IN_ANNUL_BRANCH_DELAY_TRUE;

    }
}

enum attr_in_uncond_branch_delay
get_attr_in_uncond_branch_delay (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 270:  /* *return_internal */
      extract_constrain_insn_cached (insn);
      if ((((
#line 148 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(current_function_uses_only_leaf_regs != 0)) == (
(LEAF_FUNCTION_TRUE))) && (! ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE))))) || ((! ((
#line 148 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(current_function_uses_only_leaf_regs != 0)) == (
(LEAF_FUNCTION_TRUE)))) && ((! ((
#line 145 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(crtl->calls_eh_return !=0 )) == (
(CALLS_EH_RETURN_TRUE)))) && (! ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE)))))))
        {
	  return IN_UNCOND_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_UNCOND_BRANCH_DELAY_FALSE;
        }

    case 243:  /* *absdf2_notv9 */
    case 242:  /* *abstf2_v9 */
    case 240:  /* *abstf2_notv9 */
    case 237:  /* *negdf2_notv9 */
    case 236:  /* *negtf2_v9 */
    case 235:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return IN_UNCOND_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_UNCOND_BRANCH_DELAY_FALSE;
        }

    case 214:  /* *one_cmplv8qi2_sp32 */
    case 213:  /* *one_cmplv4hi2_sp32 */
    case 212:  /* *one_cmplv2si2_sp32 */
    case 211:  /* *one_cmpldi2_sp32 */
    case 197:  /* *xor_not_v8qi_sp32 */
    case 196:  /* *xor_not_v4hi_sp32 */
    case 195:  /* *xor_not_v2si_sp32 */
    case 194:  /* *xor_not_di_sp32 */
    case 190:  /* *xorv8qi3_sp32 */
    case 189:  /* *xorv4hi3_sp32 */
    case 188:  /* *xorv2si3_sp32 */
    case 187:  /* *xordi3_sp32 */
    case 183:  /* *or_not_v8qi_sp32 */
    case 182:  /* *or_not_v4hi_sp32 */
    case 181:  /* *or_not_v2si_sp32 */
    case 180:  /* *or_not_di_sp32 */
    case 176:  /* *iorv8qi3_sp32 */
    case 175:  /* *iorv4hi3_sp32 */
    case 174:  /* *iorv2si3_sp32 */
    case 173:  /* *iordi3_sp32 */
    case 169:  /* *and_not_v8qi_sp32 */
    case 168:  /* *and_not_v4hi_sp32 */
    case 167:  /* *and_not_v2si_sp32 */
    case 166:  /* *and_not_di_sp32 */
    case 162:  /* *andv8qi3_sp32 */
    case 161:  /* *andv4hi3_sp32 */
    case 160:  /* *andv2si3_sp32 */
    case 159:  /* *anddi3_sp32 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return IN_UNCOND_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_UNCOND_BRANCH_DELAY_FALSE;
        }

    case 146:  /* const_umulsidi3_sp32 */
    case 145:  /* *umulsidi3_sp32 */
    case 138:  /* const_mulsidi3_sp32 */
    case 137:  /* *mulsidi3_sp32 */
      if (((! (
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9))) && ((! (
#line 109 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8))) && (
#line 110 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET)))))
        {
	  return IN_UNCOND_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_UNCOND_BRANCH_DELAY_FALSE;
        }

    case 76:  /* *movdf_insn_sp32_v9_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return IN_UNCOND_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_UNCOND_BRANCH_DELAY_FALSE;
        }

    case 75:  /* *movdf_insn_sp32_v9 */
    case 74:  /* *movdf_insn_sp32_v9 */
    case 73:  /* *movdf_insn_sp32_v9 */
    case 72:  /* *movdf_insn_sp32_v9 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7f))
        {
	  return IN_UNCOND_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_UNCOND_BRANCH_DELAY_FALSE;
        }

    case 71:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return IN_UNCOND_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_UNCOND_BRANCH_DELAY_FALSE;
        }

    case 70:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return IN_UNCOND_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_UNCOND_BRANCH_DELAY_FALSE;
        }

    case 46:  /* *movdi_insn_sp32_v9 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0xcf2))
        {
	  return IN_UNCOND_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_UNCOND_BRANCH_DELAY_FALSE;
        }

    case 45:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x186))
        {
	  return IN_UNCOND_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_UNCOND_BRANCH_DELAY_FALSE;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((! (get_attr_type (insn) == TYPE_UNCOND_BRANCH)) && ((! (get_attr_type (insn) == TYPE_BRANCH)) && ((! (get_attr_type (insn) == TYPE_CALL)) && ((! (get_attr_type (insn) == TYPE_SIBCALL)) && ((! (get_attr_type (insn) == TYPE_CALL_NO_DELAY_SLOT)) && (! (get_attr_type (insn) == TYPE_MULTI))))))) && (get_attr_length (insn) == 1))
        {
	  return IN_UNCOND_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_UNCOND_BRANCH_DELAY_FALSE;
        }

    case 355:  /* *ldstubsi */
    case 354:  /* *ldstubhi */
    case 353:  /* *ldstubqi */
    case 352:  /* *swapsi */
    case 351:  /* *sync_compare_and_swapdi_v8plus */
    case 350:  /* *sync_compare_and_swapsi */
    case 349:  /* *membar */
    case 348:  /* *stbar */
    case 316:  /* stack_protect_testsi */
    case 315:  /* stack_protect_setsi */
    case 293:  /* tldm_call32 */
    case 289:  /* tgd_call32 */
    case 280:  /* ffssi2 */
    case 277:  /* do_builtin_setjmp_setup */
    case 276:  /* goto_handler_and_restore */
    case 274:  /* *branch_sp32 */
    case 272:  /* update_return */
    case 271:  /* blockage */
    case 268:  /* *sibcall_value_symbolic_sp32 */
    case 267:  /* *sibcall_symbolic_sp32 */
    case 266:  /* *call_value_symbolic_sp32 */
    case 265:  /* *call_value_address_sp32 */
    case 264:  /* *call_symbolic_untyped_struct_value_sp32 */
    case 263:  /* *call_address_untyped_struct_value_sp32 */
    case 262:  /* *call_symbolic_struct_value_sp32 */
    case 261:  /* *call_address_struct_value_sp32 */
    case 260:  /* *call_symbolic_sp32 */
    case 259:  /* *call_address_sp32 */
    case 258:  /* *tablejump_sp32 */
    case 257:  /* jump */
    case 256:  /* lshrdi3_v8plus */
    case 254:  /* ashrdi3_v8plus */
    case 250:  /* ashldi3_v8plus */
    case 207:  /* *negdi2_sp32 */
    case 155:  /* *cmp_udiv_cc_set */
    case 154:  /* udivsi3_sp32 */
    case 153:  /* *cmp_sdiv_cc_set */
    case 152:  /* divsi3_sp32 */
    case 151:  /* const_umulsi3_highpart */
    case 150:  /* *umulsi3_highpart_sp32 */
    case 149:  /* const_umulsi3_highpart_v8plus */
    case 148:  /* umulsi3_highpart_v8plus */
    case 147:  /* const_umulsidi3_v8plus */
    case 144:  /* umulsidi3_v8plus */
    case 143:  /* const_smulsi3_highpart */
    case 142:  /* *smulsi3_highpart_sp32 */
    case 141:  /* const_smulsi3_highpart_v8plus */
    case 140:  /* *sparc.md:4656 */
    case 139:  /* smulsi3_highpart_v8plus */
    case 136:  /* const_mulsidi3_v8plus */
    case 135:  /* mulsidi3_v8plus */
    case 133:  /* muldi3_v8plus */
    case 128:  /* *sparc.md:4336 */
    case 127:  /* *subx_extend */
    case 125:  /* subdi3_insn_sp32 */
    case 121:  /* *sparc.md:4164 */
    case 120:  /* *addx_extend_sp32 */
    case 118:  /* adddi3_insn_sp32 */
    case 89:  /* *zero_extendsidi2_insn_sp32 */
    case 85:  /* *movtf_cc_v9 */
    case 78:  /* *movtf_insn_sp32_no_fpu */
    case 77:  /* *movtf_insn_sp32 */
    case 34:  /* load_pcrel_symsi */
    case 33:  /* *inverted_fpe_branch */
    case 32:  /* *normal_fpe_branch */
    case 31:  /* *inverted_fp_branch */
    case 30:  /* *normal_fp_branch */
    case 29:  /* *inverted_branch */
    case 28:  /* *normal_branch */
    case 14:  /* *x_minus_i_eq_0 */
    case 13:  /* *x_plus_i_eq_0 */
    case 12:  /* *x_minus_i_ne_0 */
    case 11:  /* *x_plus_i_ne_0 */
    case 10:  /* *neg_seqsi_zero */
    case 9:  /* *seqsi_zero */
    case 8:  /* *neg_snesi_zero */
    case 7:  /* *snesi_zero */
      return IN_UNCOND_BRANCH_DELAY_FALSE;

    default:
      return IN_UNCOND_BRANCH_DELAY_TRUE;

    }
}

enum attr_in_branch_delay
get_attr_in_branch_delay (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 270:  /* *return_internal */
      extract_constrain_insn_cached (insn);
      if ((((
#line 148 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(current_function_uses_only_leaf_regs != 0)) == (
(LEAF_FUNCTION_TRUE))) && (! ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE))))) || ((! ((
#line 148 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(current_function_uses_only_leaf_regs != 0)) == (
(LEAF_FUNCTION_TRUE)))) && ((! ((
#line 145 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(crtl->calls_eh_return !=0 )) == (
(CALLS_EH_RETURN_TRUE)))) && (! ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE)))))))
        {
	  return IN_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_BRANCH_DELAY_FALSE;
        }

    case 243:  /* *absdf2_notv9 */
    case 242:  /* *abstf2_v9 */
    case 240:  /* *abstf2_notv9 */
    case 237:  /* *negdf2_notv9 */
    case 236:  /* *negtf2_v9 */
    case 235:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return IN_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_BRANCH_DELAY_FALSE;
        }

    case 214:  /* *one_cmplv8qi2_sp32 */
    case 213:  /* *one_cmplv4hi2_sp32 */
    case 212:  /* *one_cmplv2si2_sp32 */
    case 211:  /* *one_cmpldi2_sp32 */
    case 197:  /* *xor_not_v8qi_sp32 */
    case 196:  /* *xor_not_v4hi_sp32 */
    case 195:  /* *xor_not_v2si_sp32 */
    case 194:  /* *xor_not_di_sp32 */
    case 190:  /* *xorv8qi3_sp32 */
    case 189:  /* *xorv4hi3_sp32 */
    case 188:  /* *xorv2si3_sp32 */
    case 187:  /* *xordi3_sp32 */
    case 183:  /* *or_not_v8qi_sp32 */
    case 182:  /* *or_not_v4hi_sp32 */
    case 181:  /* *or_not_v2si_sp32 */
    case 180:  /* *or_not_di_sp32 */
    case 176:  /* *iorv8qi3_sp32 */
    case 175:  /* *iorv4hi3_sp32 */
    case 174:  /* *iorv2si3_sp32 */
    case 173:  /* *iordi3_sp32 */
    case 169:  /* *and_not_v8qi_sp32 */
    case 168:  /* *and_not_v4hi_sp32 */
    case 167:  /* *and_not_v2si_sp32 */
    case 166:  /* *and_not_di_sp32 */
    case 162:  /* *andv8qi3_sp32 */
    case 161:  /* *andv4hi3_sp32 */
    case 160:  /* *andv2si3_sp32 */
    case 159:  /* *anddi3_sp32 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return IN_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_BRANCH_DELAY_FALSE;
        }

    case 146:  /* const_umulsidi3_sp32 */
    case 145:  /* *umulsidi3_sp32 */
    case 138:  /* const_mulsidi3_sp32 */
    case 137:  /* *mulsidi3_sp32 */
      if (((! (
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9))) && ((! (
#line 109 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8))) && (
#line 110 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET)))))
        {
	  return IN_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_BRANCH_DELAY_FALSE;
        }

    case 76:  /* *movdf_insn_sp32_v9_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return IN_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_BRANCH_DELAY_FALSE;
        }

    case 75:  /* *movdf_insn_sp32_v9 */
    case 74:  /* *movdf_insn_sp32_v9 */
    case 73:  /* *movdf_insn_sp32_v9 */
    case 72:  /* *movdf_insn_sp32_v9 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7f))
        {
	  return IN_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_BRANCH_DELAY_FALSE;
        }

    case 71:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return IN_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_BRANCH_DELAY_FALSE;
        }

    case 70:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return IN_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_BRANCH_DELAY_FALSE;
        }

    case 46:  /* *movdi_insn_sp32_v9 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0xcf2))
        {
	  return IN_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_BRANCH_DELAY_FALSE;
        }

    case 45:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x186))
        {
	  return IN_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_BRANCH_DELAY_FALSE;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((! (get_attr_type (insn) == TYPE_UNCOND_BRANCH)) && ((! (get_attr_type (insn) == TYPE_BRANCH)) && ((! (get_attr_type (insn) == TYPE_CALL)) && ((! (get_attr_type (insn) == TYPE_SIBCALL)) && ((! (get_attr_type (insn) == TYPE_CALL_NO_DELAY_SLOT)) && (! (get_attr_type (insn) == TYPE_MULTI))))))) && (get_attr_length (insn) == 1))
        {
	  return IN_BRANCH_DELAY_TRUE;
        }
      else
        {
	  return IN_BRANCH_DELAY_FALSE;
        }

    case 355:  /* *ldstubsi */
    case 354:  /* *ldstubhi */
    case 353:  /* *ldstubqi */
    case 352:  /* *swapsi */
    case 351:  /* *sync_compare_and_swapdi_v8plus */
    case 350:  /* *sync_compare_and_swapsi */
    case 349:  /* *membar */
    case 348:  /* *stbar */
    case 316:  /* stack_protect_testsi */
    case 315:  /* stack_protect_setsi */
    case 293:  /* tldm_call32 */
    case 289:  /* tgd_call32 */
    case 280:  /* ffssi2 */
    case 277:  /* do_builtin_setjmp_setup */
    case 276:  /* goto_handler_and_restore */
    case 274:  /* *branch_sp32 */
    case 272:  /* update_return */
    case 271:  /* blockage */
    case 268:  /* *sibcall_value_symbolic_sp32 */
    case 267:  /* *sibcall_symbolic_sp32 */
    case 266:  /* *call_value_symbolic_sp32 */
    case 265:  /* *call_value_address_sp32 */
    case 264:  /* *call_symbolic_untyped_struct_value_sp32 */
    case 263:  /* *call_address_untyped_struct_value_sp32 */
    case 262:  /* *call_symbolic_struct_value_sp32 */
    case 261:  /* *call_address_struct_value_sp32 */
    case 260:  /* *call_symbolic_sp32 */
    case 259:  /* *call_address_sp32 */
    case 258:  /* *tablejump_sp32 */
    case 257:  /* jump */
    case 256:  /* lshrdi3_v8plus */
    case 254:  /* ashrdi3_v8plus */
    case 250:  /* ashldi3_v8plus */
    case 207:  /* *negdi2_sp32 */
    case 155:  /* *cmp_udiv_cc_set */
    case 154:  /* udivsi3_sp32 */
    case 153:  /* *cmp_sdiv_cc_set */
    case 152:  /* divsi3_sp32 */
    case 151:  /* const_umulsi3_highpart */
    case 150:  /* *umulsi3_highpart_sp32 */
    case 149:  /* const_umulsi3_highpart_v8plus */
    case 148:  /* umulsi3_highpart_v8plus */
    case 147:  /* const_umulsidi3_v8plus */
    case 144:  /* umulsidi3_v8plus */
    case 143:  /* const_smulsi3_highpart */
    case 142:  /* *smulsi3_highpart_sp32 */
    case 141:  /* const_smulsi3_highpart_v8plus */
    case 140:  /* *sparc.md:4656 */
    case 139:  /* smulsi3_highpart_v8plus */
    case 136:  /* const_mulsidi3_v8plus */
    case 135:  /* mulsidi3_v8plus */
    case 133:  /* muldi3_v8plus */
    case 128:  /* *sparc.md:4336 */
    case 127:  /* *subx_extend */
    case 125:  /* subdi3_insn_sp32 */
    case 121:  /* *sparc.md:4164 */
    case 120:  /* *addx_extend_sp32 */
    case 118:  /* adddi3_insn_sp32 */
    case 89:  /* *zero_extendsidi2_insn_sp32 */
    case 85:  /* *movtf_cc_v9 */
    case 78:  /* *movtf_insn_sp32_no_fpu */
    case 77:  /* *movtf_insn_sp32 */
    case 34:  /* load_pcrel_symsi */
    case 33:  /* *inverted_fpe_branch */
    case 32:  /* *normal_fpe_branch */
    case 31:  /* *inverted_fp_branch */
    case 30:  /* *normal_fp_branch */
    case 29:  /* *inverted_branch */
    case 28:  /* *normal_branch */
    case 14:  /* *x_minus_i_eq_0 */
    case 13:  /* *x_plus_i_eq_0 */
    case 12:  /* *x_minus_i_ne_0 */
    case 11:  /* *x_plus_i_ne_0 */
    case 10:  /* *neg_seqsi_zero */
    case 9:  /* *seqsi_zero */
    case 8:  /* *neg_snesi_zero */
    case 7:  /* *snesi_zero */
      return IN_BRANCH_DELAY_FALSE;

    default:
      return IN_BRANCH_DELAY_TRUE;

    }
}

enum attr_in_call_delay
get_attr_in_call_delay (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 270:  /* *return_internal */
      extract_constrain_insn_cached (insn);
      if (((((
#line 148 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(current_function_uses_only_leaf_regs != 0)) == (
(LEAF_FUNCTION_TRUE))) && (! ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE))))) || ((! ((
#line 148 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(current_function_uses_only_leaf_regs != 0)) == (
(LEAF_FUNCTION_TRUE)))) && ((! ((
#line 145 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(crtl->calls_eh_return !=0 )) == (
(CALLS_EH_RETURN_TRUE)))) && (! ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE))))))) && ((
#line 245 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(tls_call_delay (insn))) == (
(TLS_CALL_DELAY_TRUE))))
        {
	  return IN_CALL_DELAY_TRUE;
        }
      else
        {
	  return IN_CALL_DELAY_FALSE;
        }

    case 243:  /* *absdf2_notv9 */
    case 242:  /* *abstf2_v9 */
    case 240:  /* *abstf2_notv9 */
    case 237:  /* *negdf2_notv9 */
    case 236:  /* *negtf2_v9 */
    case 235:  /* *negtf2_notv9 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && ((
#line 245 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(tls_call_delay (insn))) == (
(TLS_CALL_DELAY_TRUE))))
        {
	  return IN_CALL_DELAY_TRUE;
        }
      else
        {
	  return IN_CALL_DELAY_FALSE;
        }

    case 214:  /* *one_cmplv8qi2_sp32 */
    case 213:  /* *one_cmplv4hi2_sp32 */
    case 212:  /* *one_cmplv2si2_sp32 */
    case 211:  /* *one_cmpldi2_sp32 */
    case 197:  /* *xor_not_v8qi_sp32 */
    case 196:  /* *xor_not_v4hi_sp32 */
    case 195:  /* *xor_not_v2si_sp32 */
    case 194:  /* *xor_not_di_sp32 */
    case 190:  /* *xorv8qi3_sp32 */
    case 189:  /* *xorv4hi3_sp32 */
    case 188:  /* *xorv2si3_sp32 */
    case 187:  /* *xordi3_sp32 */
    case 183:  /* *or_not_v8qi_sp32 */
    case 182:  /* *or_not_v4hi_sp32 */
    case 181:  /* *or_not_v2si_sp32 */
    case 180:  /* *or_not_di_sp32 */
    case 176:  /* *iorv8qi3_sp32 */
    case 175:  /* *iorv4hi3_sp32 */
    case 174:  /* *iorv2si3_sp32 */
    case 173:  /* *iordi3_sp32 */
    case 169:  /* *and_not_v8qi_sp32 */
    case 168:  /* *and_not_v4hi_sp32 */
    case 167:  /* *and_not_v2si_sp32 */
    case 166:  /* *and_not_di_sp32 */
    case 162:  /* *andv8qi3_sp32 */
    case 161:  /* *andv4hi3_sp32 */
    case 160:  /* *andv2si3_sp32 */
    case 159:  /* *anddi3_sp32 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && ((
#line 245 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(tls_call_delay (insn))) == (
(TLS_CALL_DELAY_TRUE))))
        {
	  return IN_CALL_DELAY_TRUE;
        }
      else
        {
	  return IN_CALL_DELAY_FALSE;
        }

    case 146:  /* const_umulsidi3_sp32 */
    case 145:  /* *umulsidi3_sp32 */
    case 138:  /* const_mulsidi3_sp32 */
    case 137:  /* *mulsidi3_sp32 */
      extract_constrain_insn_cached (insn);
      if (! (((! (
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9))) && ((! (
#line 109 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8))) && (
#line 110 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET))))))
        {
	  return IN_CALL_DELAY_FALSE;
        }
      else
        {
	  if ((
#line 245 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(tls_call_delay (insn))) == (
(TLS_CALL_DELAY_TRUE)))
	    {
	      return IN_CALL_DELAY_TRUE;
	    }
	  else
	    {
	      return IN_CALL_DELAY_FALSE;
	    }
        }

    case 76:  /* *movdf_insn_sp32_v9_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return IN_CALL_DELAY_TRUE;
        }
      else
        {
	  return IN_CALL_DELAY_FALSE;
        }

    case 75:  /* *movdf_insn_sp32_v9 */
    case 74:  /* *movdf_insn_sp32_v9 */
    case 73:  /* *movdf_insn_sp32_v9 */
    case 72:  /* *movdf_insn_sp32_v9 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7c))
        {
	  return IN_CALL_DELAY_TRUE;
        }
      else
        {
	  if ((((1 << which_alternative) & 0x7f)) && ((
#line 245 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(tls_call_delay (insn))) == (
(TLS_CALL_DELAY_TRUE))))
	    {
	      return IN_CALL_DELAY_TRUE;
	    }
	  else
	    {
	      return IN_CALL_DELAY_FALSE;
	    }
        }

    case 71:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return IN_CALL_DELAY_TRUE;
        }
      else
        {
	  return IN_CALL_DELAY_FALSE;
        }

    case 70:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return IN_CALL_DELAY_TRUE;
        }
      else
        {
	  return IN_CALL_DELAY_FALSE;
        }

    case 67:  /* *movsf_insn_no_fpu */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x7))
        {
	  return IN_CALL_DELAY_TRUE;
        }
      else
        {
	  if ((
#line 245 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(tls_call_delay (insn))) == (
(TLS_CALL_DELAY_TRUE)))
	    {
	      return IN_CALL_DELAY_TRUE;
	    }
	  else
	    {
	      return IN_CALL_DELAY_FALSE;
	    }
        }

    case 66:  /* *movsf_insn */
    case 65:  /* *movsf_insn */
    case 64:  /* *movsf_insn */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x1f))
        {
	  return IN_CALL_DELAY_TRUE;
        }
      else
        {
	  if ((
#line 245 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(tls_call_delay (insn))) == (
(TLS_CALL_DELAY_TRUE)))
	    {
	      return IN_CALL_DELAY_TRUE;
	    }
	  else
	    {
	      return IN_CALL_DELAY_FALSE;
	    }
        }

    case 46:  /* *movdi_insn_sp32_v9 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x1cf0))
        {
	  if (!((1 << which_alternative) & 0xcf2))
	    {
	      return IN_CALL_DELAY_TRUE;
	    }
	  else
	    {
	      return IN_CALL_DELAY_FALSE;
	    }
        }
      else
        {
	  if ((!((1 << which_alternative) & 0xcf2)) && ((
#line 245 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(tls_call_delay (insn))) == (
(TLS_CALL_DELAY_TRUE))))
	    {
	      return IN_CALL_DELAY_TRUE;
	    }
	  else
	    {
	      return IN_CALL_DELAY_FALSE;
	    }
        }

    case 45:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x187))
        {
	  if (((1 << which_alternative) & 0x186))
	    {
	      return IN_CALL_DELAY_TRUE;
	    }
	  else
	    {
	      return IN_CALL_DELAY_FALSE;
	    }
        }
      else
        {
	  return IN_CALL_DELAY_FALSE;
        }

    case 38:  /* *movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x6c))
        {
	  return IN_CALL_DELAY_TRUE;
        }
      else
        {
	  if ((
#line 245 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(tls_call_delay (insn))) == (
(TLS_CALL_DELAY_TRUE)))
	    {
	      return IN_CALL_DELAY_TRUE;
	    }
	  else
	    {
	      return IN_CALL_DELAY_FALSE;
	    }
        }

    case 36:  /* *movhi_insn */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x3))
        {
	  return IN_CALL_DELAY_TRUE;
        }
      else
        {
	  if ((
#line 245 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(tls_call_delay (insn))) == (
(TLS_CALL_DELAY_TRUE)))
	    {
	      return IN_CALL_DELAY_TRUE;
	    }
	  else
	    {
	      return IN_CALL_DELAY_FALSE;
	    }
        }

    case 88:  /* *zero_extendqisi2_insn */
    case 87:  /* *zero_extendqihi2_insn */
    case 35:  /* *movqi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return IN_CALL_DELAY_TRUE;
        }
      else
        {
	  if ((
#line 245 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(tls_call_delay (insn))) == (
(TLS_CALL_DELAY_TRUE)))
	    {
	      return IN_CALL_DELAY_TRUE;
	    }
	  else
	    {
	      return IN_CALL_DELAY_FALSE;
	    }
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if ((get_attr_type (insn) == TYPE_UNCOND_BRANCH) || ((get_attr_type (insn) == TYPE_BRANCH) || ((get_attr_type (insn) == TYPE_CALL) || ((get_attr_type (insn) == TYPE_SIBCALL) || ((get_attr_type (insn) == TYPE_CALL_NO_DELAY_SLOT) || (get_attr_type (insn) == TYPE_MULTI))))))
        {
	  return IN_CALL_DELAY_FALSE;
        }
      else if ((get_attr_type (insn) == TYPE_LOAD) || ((get_attr_type (insn) == TYPE_FPLOAD) || ((get_attr_type (insn) == TYPE_STORE) || (get_attr_type (insn) == TYPE_FPSTORE))))
        {
	  if (get_attr_length (insn) == 1)
	    {
	      return IN_CALL_DELAY_TRUE;
	    }
	  else
	    {
	      return IN_CALL_DELAY_FALSE;
	    }
        }
      else
        {
	  if ((get_attr_length (insn) == 1) && (get_attr_tls_call_delay (insn) == TLS_CALL_DELAY_TRUE))
	    {
	      return IN_CALL_DELAY_TRUE;
	    }
	  else
	    {
	      return IN_CALL_DELAY_FALSE;
	    }
        }

    case 314:  /* *tldo_stw_sp32 */
    case 313:  /* *tldo_sth_sp32 */
    case 312:  /* *tldo_stb_sp32 */
    case 311:  /* *tldo_lduw_sp32 */
    case 309:  /* *tldo_lduh1_sp32 */
    case 308:  /* *tldo_lduh_sp32 */
    case 305:  /* *tldo_ldub2_sp32 */
    case 304:  /* *tldo_ldub1_sp32 */
    case 303:  /* *tldo_ldub_sp32 */
    case 299:  /* tie_ld32 */
    case 282:  /* prefetch_32 */
    case 281:  /* prefetch_64 */
    case 86:  /* *zero_extendhisi2_insn */
      return IN_CALL_DELAY_TRUE;

    case 355:  /* *ldstubsi */
    case 354:  /* *ldstubhi */
    case 353:  /* *ldstubqi */
    case 352:  /* *swapsi */
    case 351:  /* *sync_compare_and_swapdi_v8plus */
    case 350:  /* *sync_compare_and_swapsi */
    case 349:  /* *membar */
    case 348:  /* *stbar */
    case 316:  /* stack_protect_testsi */
    case 315:  /* stack_protect_setsi */
    case 293:  /* tldm_call32 */
    case 289:  /* tgd_call32 */
    case 280:  /* ffssi2 */
    case 277:  /* do_builtin_setjmp_setup */
    case 276:  /* goto_handler_and_restore */
    case 274:  /* *branch_sp32 */
    case 272:  /* update_return */
    case 271:  /* blockage */
    case 268:  /* *sibcall_value_symbolic_sp32 */
    case 267:  /* *sibcall_symbolic_sp32 */
    case 266:  /* *call_value_symbolic_sp32 */
    case 265:  /* *call_value_address_sp32 */
    case 264:  /* *call_symbolic_untyped_struct_value_sp32 */
    case 263:  /* *call_address_untyped_struct_value_sp32 */
    case 262:  /* *call_symbolic_struct_value_sp32 */
    case 261:  /* *call_address_struct_value_sp32 */
    case 260:  /* *call_symbolic_sp32 */
    case 259:  /* *call_address_sp32 */
    case 258:  /* *tablejump_sp32 */
    case 257:  /* jump */
    case 256:  /* lshrdi3_v8plus */
    case 254:  /* ashrdi3_v8plus */
    case 250:  /* ashldi3_v8plus */
    case 207:  /* *negdi2_sp32 */
    case 155:  /* *cmp_udiv_cc_set */
    case 154:  /* udivsi3_sp32 */
    case 153:  /* *cmp_sdiv_cc_set */
    case 152:  /* divsi3_sp32 */
    case 151:  /* const_umulsi3_highpart */
    case 150:  /* *umulsi3_highpart_sp32 */
    case 149:  /* const_umulsi3_highpart_v8plus */
    case 148:  /* umulsi3_highpart_v8plus */
    case 147:  /* const_umulsidi3_v8plus */
    case 144:  /* umulsidi3_v8plus */
    case 143:  /* const_smulsi3_highpart */
    case 142:  /* *smulsi3_highpart_sp32 */
    case 141:  /* const_smulsi3_highpart_v8plus */
    case 140:  /* *sparc.md:4656 */
    case 139:  /* smulsi3_highpart_v8plus */
    case 136:  /* const_mulsidi3_v8plus */
    case 135:  /* mulsidi3_v8plus */
    case 133:  /* muldi3_v8plus */
    case 128:  /* *sparc.md:4336 */
    case 127:  /* *subx_extend */
    case 125:  /* subdi3_insn_sp32 */
    case 121:  /* *sparc.md:4164 */
    case 120:  /* *addx_extend_sp32 */
    case 118:  /* adddi3_insn_sp32 */
    case 89:  /* *zero_extendsidi2_insn_sp32 */
    case 85:  /* *movtf_cc_v9 */
    case 78:  /* *movtf_insn_sp32_no_fpu */
    case 77:  /* *movtf_insn_sp32 */
    case 34:  /* load_pcrel_symsi */
    case 33:  /* *inverted_fpe_branch */
    case 32:  /* *normal_fpe_branch */
    case 31:  /* *inverted_fp_branch */
    case 30:  /* *normal_fp_branch */
    case 29:  /* *inverted_branch */
    case 28:  /* *normal_branch */
    case 14:  /* *x_minus_i_eq_0 */
    case 13:  /* *x_plus_i_eq_0 */
    case 12:  /* *x_minus_i_ne_0 */
    case 11:  /* *x_plus_i_ne_0 */
    case 10:  /* *neg_seqsi_zero */
    case 9:  /* *seqsi_zero */
    case 8:  /* *neg_snesi_zero */
    case 7:  /* *snesi_zero */
      return IN_CALL_DELAY_FALSE;

    default:
      extract_constrain_insn_cached (insn);
      if ((
#line 245 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(tls_call_delay (insn))) == (
(TLS_CALL_DELAY_TRUE)))
        {
	  return IN_CALL_DELAY_TRUE;
        }
      else
        {
	  return IN_CALL_DELAY_FALSE;
        }

    }
}

enum attr_leaf_function
get_attr_leaf_function (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      extract_constrain_insn_cached (insn);
      return 
#line 148 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(current_function_uses_only_leaf_regs != 0);

    }
}

enum attr_pic
get_attr_pic (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      extract_constrain_insn_cached (insn);
      return 
#line 139 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(flag_pic != 0);

    }
}

enum attr_tls_call_delay
get_attr_tls_call_delay (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      extract_constrain_insn_cached (insn);
      return 
#line 245 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(tls_call_delay (insn));

    }
}

enum attr_type
get_attr_type (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 129:  /* subsi3 */
    case 122:  /* addsi3 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_IALU;
        }
      else
        {
	  return TYPE_FGA;
        }

    case 76:  /* *movdf_insn_sp32_v9_no_fpu */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_LOAD;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_IALU;
        }

    case 75:  /* *movdf_insn_sp32_v9 */
    case 74:  /* *movdf_insn_sp32_v9 */
    case 73:  /* *movdf_insn_sp32_v9 */
    case 72:  /* *movdf_insn_sp32_v9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FGA;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_FPMOVE;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_LOAD;
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_IALU;
        }

    case 71:  /* *movdf_insn_sp32_no_fpu */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_IALU;
        }

    case 70:  /* *movdf_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_FPSTORE;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_IALU;
        }

    case 67:  /* *movsf_insn_no_fpu */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return TYPE_IALU;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 66:  /* *movsf_insn */
    case 65:  /* *movsf_insn */
    case 64:  /* *movsf_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FGA;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_FPMOVE;
        }
      else if (((1 << which_alternative) & 0x1c))
        {
	  return TYPE_IALU;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_FPSTORE;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 46:  /* *movdi_insn_sp32_v9 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_LOAD;
        }
      else if (((1 << which_alternative) & 0xf0))
        {
	  return TYPE_IALU;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_FPSTORE;
        }
      else if (which_alternative == 9)
        {
	  return TYPE_FPLOAD;
        }
      else if (((1 << which_alternative) & 0xc00))
        {
	  return TYPE_IALU;
        }
      else if (which_alternative == 12)
        {
	  return TYPE_FPMOVE;
        }
      else if (which_alternative == 13)
        {
	  return TYPE_FPLOAD;
        }
      else
        {
	  return TYPE_FPSTORE;
        }

    case 45:  /* *movdi_insn_sp32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_LOAD;
        }
      else if (((1 << which_alternative) & 0x78))
        {
	  return TYPE_IALU;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_FPSTORE;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_FPLOAD;
        }
      else
        {
	  return TYPE_IALU;
        }

    case 38:  /* *movsi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_IALU;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_FPMOVE;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_FPSTORE;
        }
      else
        {
	  return TYPE_FGA;
        }

    case 36:  /* *movhi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_IALU;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 35:  /* *movqi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_IALU;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 87:  /* *zero_extendqihi2_insn */
    case 88:  /* *zero_extendqisi2_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_IALU;
        }
      else
        {
	  return TYPE_LOAD;
        }

    case 137:  /* *mulsidi3_sp32 */
    case 138:  /* const_mulsidi3_sp32 */
    case 145:  /* *umulsidi3_sp32 */
    case 146:  /* const_umulsidi3_sp32 */
      if (((! (
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9))) && ((! (
#line 109 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8))) && (
#line 110 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET)))))
        {
	  return TYPE_IMUL;
        }
      else
        {
	  return TYPE_MULTI;
        }

    case 159:  /* *anddi3_sp32 */
    case 160:  /* *andv2si3_sp32 */
    case 161:  /* *andv4hi3_sp32 */
    case 162:  /* *andv8qi3_sp32 */
    case 163:  /* andsi3 */
    case 164:  /* andv2hi3 */
    case 165:  /* andv4qi3 */
    case 166:  /* *and_not_di_sp32 */
    case 167:  /* *and_not_v2si_sp32 */
    case 168:  /* *and_not_v4hi_sp32 */
    case 169:  /* *and_not_v8qi_sp32 */
    case 170:  /* *and_not_si */
    case 171:  /* *and_not_v2hi */
    case 172:  /* *and_not_v4qi */
    case 173:  /* *iordi3_sp32 */
    case 174:  /* *iorv2si3_sp32 */
    case 175:  /* *iorv4hi3_sp32 */
    case 176:  /* *iorv8qi3_sp32 */
    case 177:  /* iorsi3 */
    case 178:  /* iorv2hi3 */
    case 179:  /* iorv4qi3 */
    case 180:  /* *or_not_di_sp32 */
    case 181:  /* *or_not_v2si_sp32 */
    case 182:  /* *or_not_v4hi_sp32 */
    case 183:  /* *or_not_v8qi_sp32 */
    case 184:  /* *or_not_si */
    case 185:  /* *or_not_v2hi */
    case 186:  /* *or_not_v4qi */
    case 187:  /* *xordi3_sp32 */
    case 188:  /* *xorv2si3_sp32 */
    case 189:  /* *xorv4hi3_sp32 */
    case 190:  /* *xorv8qi3_sp32 */
    case 191:  /* xorsi3 */
    case 192:  /* xorv2hi3 */
    case 193:  /* xorv4qi3 */
    case 194:  /* *xor_not_di_sp32 */
    case 195:  /* *xor_not_v2si_sp32 */
    case 196:  /* *xor_not_v4hi_sp32 */
    case 197:  /* *xor_not_v8qi_sp32 */
    case 198:  /* *xor_not_si */
    case 199:  /* *xor_not_v2hi */
    case 200:  /* *xor_not_v4qi */
    case 211:  /* *one_cmpldi2_sp32 */
    case 212:  /* *one_cmplv2si2_sp32 */
    case 213:  /* *one_cmplv4hi2_sp32 */
    case 214:  /* *one_cmplv8qi2_sp32 */
    case 215:  /* one_cmplsi2 */
    case 216:  /* one_cmplv2hi2 */
    case 217:  /* one_cmplv4qi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_IALU;
        }
      else
        {
	  return TYPE_FGA;
        }

    case 235:  /* *negtf2_notv9 */
    case 236:  /* *negtf2_v9 */
    case 237:  /* *negdf2_notv9 */
    case 240:  /* *abstf2_notv9 */
    case 242:  /* *abstf2_v9 */
    case 243:  /* *absdf2_notv9 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FPMOVE;
        }
      else
        {
	  return TYPE_IALU;
        }

    case 249:  /* ashlsi3 */
      extract_insn_cached (insn);
      if (const_one_operand (operands[2], VOIDmode))
        {
	  return TYPE_IALU;
        }
      else
        {
	  return TYPE_SHIFT;
        }

    case 283:  /* trap */
    case 284:  /* *sparc.md:7441 */
    case 285:  /* *sparc.md:7453 */
      return TYPE_TRAP;

    case 278:  /* flush */
    case 279:  /* flushdi */
      return TYPE_IFLUSH;

    case 275:  /* flush_register_windows */
      return TYPE_FLUSHW;

    case 269:  /* save_register_windowsi */
      return TYPE_SAVEW;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 34:  /* load_pcrel_symsi */
    case 133:  /* muldi3_v8plus */
    case 135:  /* mulsidi3_v8plus */
    case 136:  /* const_mulsidi3_v8plus */
    case 139:  /* smulsi3_highpart_v8plus */
    case 140:  /* *sparc.md:4656 */
    case 141:  /* const_smulsi3_highpart_v8plus */
    case 142:  /* *smulsi3_highpart_sp32 */
    case 143:  /* const_smulsi3_highpart */
    case 144:  /* umulsidi3_v8plus */
    case 147:  /* const_umulsidi3_v8plus */
    case 148:  /* umulsi3_highpart_v8plus */
    case 149:  /* const_umulsi3_highpart_v8plus */
    case 150:  /* *umulsi3_highpart_sp32 */
    case 151:  /* const_umulsi3_highpart */
    case 152:  /* divsi3_sp32 */
    case 153:  /* *cmp_sdiv_cc_set */
    case 154:  /* udivsi3_sp32 */
    case 155:  /* *cmp_udiv_cc_set */
    case 250:  /* ashldi3_v8plus */
    case 254:  /* ashrdi3_v8plus */
    case 256:  /* lshrdi3_v8plus */
    case 272:  /* update_return */
    case 276:  /* goto_handler_and_restore */
    case 277:  /* do_builtin_setjmp_setup */
    case 280:  /* ffssi2 */
    case 315:  /* stack_protect_setsi */
    case 316:  /* stack_protect_testsi */
    case 348:  /* *stbar */
    case 349:  /* *membar */
    case 350:  /* *sync_compare_and_swapsi */
    case 351:  /* *sync_compare_and_swapdi_v8plus */
    case 352:  /* *swapsi */
    case 353:  /* *ldstubqi */
    case 354:  /* *ldstubhi */
    case 355:  /* *ldstubsi */
      return TYPE_MULTI;

    case 15:  /* *sltu_insn */
    case 16:  /* *neg_sltu_insn */
    case 17:  /* *neg_sltu_minus_x */
    case 18:  /* *neg_sltu_plus_x */
    case 19:  /* *sgeu_insn */
    case 20:  /* *neg_sgeu_insn */
    case 21:  /* *sltu_plus_x */
    case 22:  /* *sltu_plus_x_plus_y */
    case 23:  /* *x_minus_sltu */
    case 24:  /* *x_minus_y_minus_sltu */
    case 25:  /* *x_minus_sltu_plus_y */
    case 26:  /* *sgeu_plus_x */
    case 27:  /* *x_minus_sgeu */
    case 119:  /* addx */
    case 126:  /* subx */
      return TYPE_IALUX;

    case 79:  /* *movqi_cc_v9 */
    case 80:  /* *movhi_cc_v9 */
    case 81:  /* *movsi_cc_v9 */
      return TYPE_CMOVE;

    case 317:  /* addv2si3 */
    case 318:  /* addv4hi3 */
    case 319:  /* addv2hi3 */
    case 320:  /* subv2si3 */
    case 321:  /* subv4hi3 */
    case 322:  /* subv2hi3 */
    case 323:  /* *nand<V64mode>_vis */
    case 324:  /* *nand<V64mode>_vis */
    case 325:  /* *nand<V64mode>_vis */
    case 326:  /* *nand<V64mode>_vis */
    case 327:  /* *nand<V32mode>_vis */
    case 328:  /* *nand<V32mode>_vis */
    case 329:  /* *nand<V32mode>_vis */
    case 330:  /* fpack16_vis */
    case 331:  /* fpackfix_vis */
    case 332:  /* fpack32_vis */
    case 333:  /* fexpand_vis */
    case 334:  /* fpmerge_vis */
    case 342:  /* faligndatadi_vis */
    case 343:  /* faligndatav2si_vis */
    case 344:  /* faligndatav4hi_vis */
    case 345:  /* faligndatav8qi_vis */
    case 347:  /* pdist_vis */
      return TYPE_FGA;

    case 246:  /* *sqrttf2_hq */
    case 247:  /* sqrtdf2 */
      return TYPE_FPSQRTD;

    case 248:  /* sqrtsf2 */
      return TYPE_FPSQRTS;

    case 232:  /* *divtf3_hq */
    case 233:  /* divdf3 */
      return TYPE_FPDIVD;

    case 234:  /* divsf3 */
      return TYPE_FPDIVS;

    case 227:  /* *multf3_hq */
    case 228:  /* muldf3 */
    case 229:  /* mulsf3 */
    case 230:  /* *muldf3_extend */
    case 231:  /* *multf3_extend */
    case 335:  /* fmul8x16_vis */
    case 336:  /* fmul8x16au_vis */
    case 337:  /* fmul8x16al_vis */
    case 338:  /* fmul8sux16_vis */
    case 339:  /* fmul8ulx16_vis */
    case 340:  /* fmuld8sux16_vis */
    case 341:  /* fmuld8ulx16_vis */
      return TYPE_FPMUL;

    case 1:  /* *cmpsf_fpe */
    case 2:  /* *cmpdf_fpe */
    case 3:  /* *cmptf_fpe */
    case 4:  /* *cmpsf_fp */
    case 5:  /* *cmpdf_fp */
    case 6:  /* *cmptf_fp */
      return TYPE_FPCMP;

    case 82:  /* *movsf_cc_v9 */
    case 83:  /* movdf_cc_v9 */
    case 84:  /* *movtf_cc_hq_v9 */
      return TYPE_FPCMOVE;

    case 238:  /* *negdf2_v9 */
    case 239:  /* negsf2 */
    case 241:  /* *abstf2_hq_v9 */
    case 244:  /* *absdf2_v9 */
    case 245:  /* abssf2 */
      return TYPE_FPMOVE;

    case 100:  /* extendsfdf2 */
    case 101:  /* *extendsftf2_hq */
    case 102:  /* *extenddftf2_hq */
    case 103:  /* truncdfsf2 */
    case 104:  /* *trunctfsf2_hq */
    case 105:  /* *trunctfdf2_hq */
    case 106:  /* floatsisf2 */
    case 107:  /* floatsidf2 */
    case 108:  /* *floatsitf2_hq */
    case 109:  /* floatdisf2 */
    case 110:  /* floatdidf2 */
    case 111:  /* *floatditf2_hq */
    case 112:  /* fix_truncsfsi2 */
    case 113:  /* fix_truncdfsi2 */
    case 114:  /* *fix_trunctfsi2_hq */
    case 115:  /* fix_truncsfdi2 */
    case 116:  /* fix_truncdfdi2 */
    case 117:  /* *fix_trunctfdi2_hq */
    case 221:  /* *addtf3_hq */
    case 222:  /* adddf3 */
    case 223:  /* addsf3 */
    case 224:  /* *subtf3_hq */
    case 225:  /* subdf3 */
    case 226:  /* subsf3 */
      return TYPE_FP;

    case 132:  /* mulsi3 */
    case 134:  /* *cmp_mul_set */
    case 156:  /* *smacsi */
    case 157:  /* *smacdi */
    case 158:  /* *umacdi */
      return TYPE_IMUL;

    case 270:  /* *return_internal */
      return TYPE_RETURN;

    case 261:  /* *call_address_struct_value_sp32 */
    case 262:  /* *call_symbolic_struct_value_sp32 */
    case 263:  /* *call_address_untyped_struct_value_sp32 */
    case 264:  /* *call_symbolic_untyped_struct_value_sp32 */
      return TYPE_CALL_NO_DELAY_SLOT;

    case 267:  /* *sibcall_symbolic_sp32 */
    case 268:  /* *sibcall_value_symbolic_sp32 */
      return TYPE_SIBCALL;

    case 259:  /* *call_address_sp32 */
    case 260:  /* *call_symbolic_sp32 */
    case 265:  /* *call_value_address_sp32 */
    case 266:  /* *call_value_symbolic_sp32 */
    case 289:  /* tgd_call32 */
    case 293:  /* tldm_call32 */
      return TYPE_CALL;

    case 28:  /* *normal_branch */
    case 29:  /* *inverted_branch */
    case 30:  /* *normal_fp_branch */
    case 31:  /* *inverted_fp_branch */
    case 32:  /* *normal_fpe_branch */
    case 33:  /* *inverted_fpe_branch */
      return TYPE_BRANCH;

    case 257:  /* jump */
    case 258:  /* *tablejump_sp32 */
    case 274:  /* *branch_sp32 */
      return TYPE_UNCOND_BRANCH;

    case 312:  /* *tldo_stb_sp32 */
    case 313:  /* *tldo_sth_sp32 */
    case 314:  /* *tldo_stw_sp32 */
      return TYPE_STORE;

    case 96:  /* *sign_extendhisi2_insn */
    case 97:  /* *sign_extendqihi2_insn */
    case 98:  /* *sign_extendqisi2_insn */
    case 306:  /* *tldo_ldsb1_sp32 */
    case 307:  /* *tldo_ldsb2_sp32 */
    case 310:  /* *tldo_ldsh1_sp32 */
      return TYPE_SLOAD;

    case 86:  /* *zero_extendhisi2_insn */
    case 281:  /* prefetch_64 */
    case 282:  /* prefetch_32 */
    case 299:  /* tie_ld32 */
    case 303:  /* *tldo_ldub_sp32 */
    case 304:  /* *tldo_ldub1_sp32 */
    case 305:  /* *tldo_ldub2_sp32 */
    case 308:  /* *tldo_lduh_sp32 */
    case 309:  /* *tldo_lduh1_sp32 */
    case 311:  /* *tldo_lduw_sp32 */
      return TYPE_LOAD;

    case 253:  /* ashrsi3 */
    case 255:  /* lshrsi3 */
      return TYPE_SHIFT;

    case 0:  /* *cmpsi_insn */
    case 90:  /* *cmp_zero_extendqisi2 */
    case 91:  /* *cmp_zero_qi */
    case 92:  /* *cmp_zero_extendqisi2_set */
    case 93:  /* *cmp_zero_extendqisi2_andcc_set */
    case 94:  /* *cmp_siqi_trunc */
    case 95:  /* *cmp_siqi_trunc_set */
    case 99:  /* *cmp_zero_extract */
    case 123:  /* *cmp_cc_plus */
    case 124:  /* *cmp_cc_plus_set */
    case 130:  /* *cmp_minus_cc */
    case 131:  /* cmp_minus_cc_set */
    case 201:  /* *cmp_cc_arith_op */
    case 202:  /* *cmp_cc_arith_op_set */
    case 203:  /* *cmp_cc_xor_not */
    case 204:  /* *cmp_cc_xor_not_set */
    case 205:  /* *cmp_cc_arith_op_not */
    case 206:  /* *cmp_cc_arith_op_not_set */
    case 209:  /* *cmp_cc_neg */
    case 210:  /* *cmp_cc_set_neg */
    case 218:  /* *cmp_cc_not */
    case 219:  /* *cmp_cc_set_not */
    case 220:  /* *cmp_cc_set */
    case 251:  /* *cmp_cc_ashift_1 */
    case 252:  /* *cmp_cc_set_ashift_1 */
      return TYPE_COMPARE;

    default:
      return TYPE_IALU;

    }
}

enum attr_us3load_type
get_attr_us3load_type (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 36:  /* *movhi_insn */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return US3LOAD_TYPE_2CYCLE;
        }
      else if (which_alternative == 2)
        {
	  return US3LOAD_TYPE_3CYCLE;
        }
      else
        {
	  return US3LOAD_TYPE_2CYCLE;
        }

    case 35:  /* *movqi_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return US3LOAD_TYPE_2CYCLE;
        }
      else if (which_alternative == 1)
        {
	  return US3LOAD_TYPE_3CYCLE;
        }
      else
        {
	  return US3LOAD_TYPE_2CYCLE;
        }

    case 87:  /* *zero_extendqihi2_insn */
    case 88:  /* *zero_extendqisi2_insn */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return US3LOAD_TYPE_2CYCLE;
        }
      else
        {
	  return US3LOAD_TYPE_3CYCLE;
        }

    case 86:  /* *zero_extendhisi2_insn */
    case 96:  /* *sign_extendhisi2_insn */
    case 97:  /* *sign_extendqihi2_insn */
    case 98:  /* *sign_extendqisi2_insn */
    case 303:  /* *tldo_ldub_sp32 */
    case 304:  /* *tldo_ldub1_sp32 */
    case 305:  /* *tldo_ldub2_sp32 */
    case 306:  /* *tldo_ldsb1_sp32 */
    case 307:  /* *tldo_ldsb2_sp32 */
    case 308:  /* *tldo_lduh_sp32 */
    case 309:  /* *tldo_lduh1_sp32 */
    case 310:  /* *tldo_ldsh1_sp32 */
      return US3LOAD_TYPE_3CYCLE;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return US3LOAD_TYPE_2CYCLE;

    }
}

int
eligible_for_delay (rtx delay_insn ATTRIBUTE_UNUSED, int slot, rtx candidate_insn, int flags ATTRIBUTE_UNUSED)
{
  rtx insn;

  gcc_assert (slot < 1);

  if (!INSN_P (candidate_insn))
    return 0;

  insn = delay_insn;
  switch (recog_memoized (insn))
    {
    case 270:  /* *return_internal */
      slot += 5 * 1;
      break;
      break;

    case 268:  /* *sibcall_value_symbolic_sp32 */
    case 267:  /* *sibcall_symbolic_sp32 */
      slot += 2 * 1;
      break;
      break;

    case 293:  /* tldm_call32 */
    case 289:  /* tgd_call32 */
    case 266:  /* *call_value_symbolic_sp32 */
    case 265:  /* *call_value_address_sp32 */
    case 260:  /* *call_symbolic_sp32 */
    case 259:  /* *call_address_sp32 */
      slot += 1 * 1;
      break;
      break;

    case 274:  /* *branch_sp32 */
    case 258:  /* *tablejump_sp32 */
    case 257:  /* jump */
      slot += 4 * 1;
      break;
      break;

    case 33:  /* *inverted_fpe_branch */
    case 32:  /* *normal_fpe_branch */
    case 31:  /* *inverted_fp_branch */
    case 30:  /* *normal_fp_branch */
    case 29:  /* *inverted_branch */
    case 28:  /* *normal_branch */
      slot += 3 * 1;
      break;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (get_attr_type (insn) == TYPE_RETURN)
        {
	  slot += 5 * 1;
      break;
        }
      else if (get_attr_type (insn) == TYPE_UNCOND_BRANCH)
        {
	  slot += 4 * 1;
      break;
        }
      else if (get_attr_type (insn) == TYPE_BRANCH)
        {
	  slot += 3 * 1;
      break;
        }
      else if (get_attr_type (insn) == TYPE_SIBCALL)
        {
	  slot += 2 * 1;
      break;
        }
      else if (get_attr_type (insn) == TYPE_CALL)
        {
	  slot += 1 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    default:
      slot += 0 * 1;
      break;
      break;

    }

  gcc_assert (slot >= 1);

  insn = candidate_insn;
  switch (slot)
    {
    case 5:
      switch (recog_memoized (insn))
	{
        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
	  if (get_attr_eligible_for_return_delay (insn) == ELIGIBLE_FOR_RETURN_DELAY_TRUE)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        default:
	  extract_constrain_insn_cached (insn);
	  if ((
#line 263 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(eligible_for_return_delay (insn))) == (
(ELIGIBLE_FOR_RETURN_DELAY_TRUE)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

      }
    case 4:
      switch (recog_memoized (insn))
	{
        case 270:  /* *return_internal */
	  extract_constrain_insn_cached (insn);
	  if ((((
#line 148 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(current_function_uses_only_leaf_regs != 0)) == (
(LEAF_FUNCTION_TRUE))) && (! ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE))))) || ((! ((
#line 148 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(current_function_uses_only_leaf_regs != 0)) == (
(LEAF_FUNCTION_TRUE)))) && ((! ((
#line 145 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(crtl->calls_eh_return !=0 )) == (
(CALLS_EH_RETURN_TRUE)))) && (! ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE)))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 243:  /* *absdf2_notv9 */
        case 242:  /* *abstf2_v9 */
        case 240:  /* *abstf2_notv9 */
        case 237:  /* *negdf2_notv9 */
        case 236:  /* *negtf2_v9 */
        case 235:  /* *negtf2_notv9 */
	  extract_constrain_insn_cached (insn);
	  if (which_alternative == 0)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 214:  /* *one_cmplv8qi2_sp32 */
        case 213:  /* *one_cmplv4hi2_sp32 */
        case 212:  /* *one_cmplv2si2_sp32 */
        case 211:  /* *one_cmpldi2_sp32 */
        case 197:  /* *xor_not_v8qi_sp32 */
        case 196:  /* *xor_not_v4hi_sp32 */
        case 195:  /* *xor_not_v2si_sp32 */
        case 194:  /* *xor_not_di_sp32 */
        case 190:  /* *xorv8qi3_sp32 */
        case 189:  /* *xorv4hi3_sp32 */
        case 188:  /* *xorv2si3_sp32 */
        case 187:  /* *xordi3_sp32 */
        case 183:  /* *or_not_v8qi_sp32 */
        case 182:  /* *or_not_v4hi_sp32 */
        case 181:  /* *or_not_v2si_sp32 */
        case 180:  /* *or_not_di_sp32 */
        case 176:  /* *iorv8qi3_sp32 */
        case 175:  /* *iorv4hi3_sp32 */
        case 174:  /* *iorv2si3_sp32 */
        case 173:  /* *iordi3_sp32 */
        case 169:  /* *and_not_v8qi_sp32 */
        case 168:  /* *and_not_v4hi_sp32 */
        case 167:  /* *and_not_v2si_sp32 */
        case 166:  /* *and_not_di_sp32 */
        case 162:  /* *andv8qi3_sp32 */
        case 161:  /* *andv4hi3_sp32 */
        case 160:  /* *andv2si3_sp32 */
        case 159:  /* *anddi3_sp32 */
	  extract_constrain_insn_cached (insn);
	  if (which_alternative != 0)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 146:  /* const_umulsidi3_sp32 */
        case 145:  /* *umulsidi3_sp32 */
        case 138:  /* const_mulsidi3_sp32 */
        case 137:  /* *mulsidi3_sp32 */
	  if (((! (
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9))) && ((! (
#line 109 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8))) && (
#line 110 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 76:  /* *movdf_insn_sp32_v9_no_fpu */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0x7))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 75:  /* *movdf_insn_sp32_v9 */
        case 74:  /* *movdf_insn_sp32_v9 */
        case 73:  /* *movdf_insn_sp32_v9 */
        case 72:  /* *movdf_insn_sp32_v9 */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0x7f))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 71:  /* *movdf_insn_sp32_no_fpu */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0x3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 70:  /* *movdf_insn_sp32 */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0xf))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 46:  /* *movdi_insn_sp32_v9 */
	  extract_constrain_insn_cached (insn);
	  if (!((1 << which_alternative) & 0xcf2))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 45:  /* *movdi_insn_sp32 */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0x186))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 355:  /* *ldstubsi */
        case 354:  /* *ldstubhi */
        case 353:  /* *ldstubqi */
        case 352:  /* *swapsi */
        case 351:  /* *sync_compare_and_swapdi_v8plus */
        case 350:  /* *sync_compare_and_swapsi */
        case 349:  /* *membar */
        case 348:  /* *stbar */
        case 316:  /* stack_protect_testsi */
        case 315:  /* stack_protect_setsi */
        case 293:  /* tldm_call32 */
        case 289:  /* tgd_call32 */
        case 280:  /* ffssi2 */
        case 277:  /* do_builtin_setjmp_setup */
        case 276:  /* goto_handler_and_restore */
        case 274:  /* *branch_sp32 */
        case 272:  /* update_return */
        case 271:  /* blockage */
        case 268:  /* *sibcall_value_symbolic_sp32 */
        case 267:  /* *sibcall_symbolic_sp32 */
        case 266:  /* *call_value_symbolic_sp32 */
        case 265:  /* *call_value_address_sp32 */
        case 264:  /* *call_symbolic_untyped_struct_value_sp32 */
        case 263:  /* *call_address_untyped_struct_value_sp32 */
        case 262:  /* *call_symbolic_struct_value_sp32 */
        case 261:  /* *call_address_struct_value_sp32 */
        case 260:  /* *call_symbolic_sp32 */
        case 259:  /* *call_address_sp32 */
        case 258:  /* *tablejump_sp32 */
        case 257:  /* jump */
        case 256:  /* lshrdi3_v8plus */
        case 254:  /* ashrdi3_v8plus */
        case 250:  /* ashldi3_v8plus */
        case 207:  /* *negdi2_sp32 */
        case 155:  /* *cmp_udiv_cc_set */
        case 154:  /* udivsi3_sp32 */
        case 153:  /* *cmp_sdiv_cc_set */
        case 152:  /* divsi3_sp32 */
        case 151:  /* const_umulsi3_highpart */
        case 150:  /* *umulsi3_highpart_sp32 */
        case 149:  /* const_umulsi3_highpart_v8plus */
        case 148:  /* umulsi3_highpart_v8plus */
        case 147:  /* const_umulsidi3_v8plus */
        case 144:  /* umulsidi3_v8plus */
        case 143:  /* const_smulsi3_highpart */
        case 142:  /* *smulsi3_highpart_sp32 */
        case 141:  /* const_smulsi3_highpart_v8plus */
        case 140:  /* *sparc.md:4656 */
        case 139:  /* smulsi3_highpart_v8plus */
        case 136:  /* const_mulsidi3_v8plus */
        case 135:  /* mulsidi3_v8plus */
        case 133:  /* muldi3_v8plus */
        case 128:  /* *sparc.md:4336 */
        case 127:  /* *subx_extend */
        case 125:  /* subdi3_insn_sp32 */
        case 121:  /* *sparc.md:4164 */
        case 120:  /* *addx_extend_sp32 */
        case 118:  /* adddi3_insn_sp32 */
        case 89:  /* *zero_extendsidi2_insn_sp32 */
        case 85:  /* *movtf_cc_v9 */
        case 78:  /* *movtf_insn_sp32_no_fpu */
        case 77:  /* *movtf_insn_sp32 */
        case 34:  /* load_pcrel_symsi */
        case 33:  /* *inverted_fpe_branch */
        case 32:  /* *normal_fpe_branch */
        case 31:  /* *inverted_fp_branch */
        case 30:  /* *normal_fp_branch */
        case 29:  /* *inverted_branch */
        case 28:  /* *normal_branch */
        case 14:  /* *x_minus_i_eq_0 */
        case 13:  /* *x_plus_i_eq_0 */
        case 12:  /* *x_minus_i_ne_0 */
        case 11:  /* *x_plus_i_ne_0 */
        case 10:  /* *neg_seqsi_zero */
        case 9:  /* *seqsi_zero */
        case 8:  /* *neg_snesi_zero */
        case 7:  /* *snesi_zero */
	  return 0;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
	  if (get_attr_in_uncond_branch_delay (insn) == IN_UNCOND_BRANCH_DELAY_TRUE)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        default:
	  return 1;

      }
    case 3:
      switch (recog_memoized (insn))
	{
        case 270:  /* *return_internal */
	  extract_constrain_insn_cached (insn);
	  if ((((
#line 148 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(current_function_uses_only_leaf_regs != 0)) == (
(LEAF_FUNCTION_TRUE))) && (! ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE))))) || ((! ((
#line 148 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(current_function_uses_only_leaf_regs != 0)) == (
(LEAF_FUNCTION_TRUE)))) && ((! ((
#line 145 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(crtl->calls_eh_return !=0 )) == (
(CALLS_EH_RETURN_TRUE)))) && (! ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE)))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 243:  /* *absdf2_notv9 */
        case 242:  /* *abstf2_v9 */
        case 240:  /* *abstf2_notv9 */
        case 237:  /* *negdf2_notv9 */
        case 236:  /* *negtf2_v9 */
        case 235:  /* *negtf2_notv9 */
	  extract_constrain_insn_cached (insn);
	  if (which_alternative == 0)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 214:  /* *one_cmplv8qi2_sp32 */
        case 213:  /* *one_cmplv4hi2_sp32 */
        case 212:  /* *one_cmplv2si2_sp32 */
        case 211:  /* *one_cmpldi2_sp32 */
        case 197:  /* *xor_not_v8qi_sp32 */
        case 196:  /* *xor_not_v4hi_sp32 */
        case 195:  /* *xor_not_v2si_sp32 */
        case 194:  /* *xor_not_di_sp32 */
        case 190:  /* *xorv8qi3_sp32 */
        case 189:  /* *xorv4hi3_sp32 */
        case 188:  /* *xorv2si3_sp32 */
        case 187:  /* *xordi3_sp32 */
        case 183:  /* *or_not_v8qi_sp32 */
        case 182:  /* *or_not_v4hi_sp32 */
        case 181:  /* *or_not_v2si_sp32 */
        case 180:  /* *or_not_di_sp32 */
        case 176:  /* *iorv8qi3_sp32 */
        case 175:  /* *iorv4hi3_sp32 */
        case 174:  /* *iorv2si3_sp32 */
        case 173:  /* *iordi3_sp32 */
        case 169:  /* *and_not_v8qi_sp32 */
        case 168:  /* *and_not_v4hi_sp32 */
        case 167:  /* *and_not_v2si_sp32 */
        case 166:  /* *and_not_di_sp32 */
        case 162:  /* *andv8qi3_sp32 */
        case 161:  /* *andv4hi3_sp32 */
        case 160:  /* *andv2si3_sp32 */
        case 159:  /* *anddi3_sp32 */
	  extract_constrain_insn_cached (insn);
	  if (which_alternative != 0)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 146:  /* const_umulsidi3_sp32 */
        case 145:  /* *umulsidi3_sp32 */
        case 138:  /* const_mulsidi3_sp32 */
        case 137:  /* *mulsidi3_sp32 */
	  if (((! (
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9))) && ((! (
#line 109 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8))) && (
#line 110 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 76:  /* *movdf_insn_sp32_v9_no_fpu */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0x7))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 75:  /* *movdf_insn_sp32_v9 */
        case 74:  /* *movdf_insn_sp32_v9 */
        case 73:  /* *movdf_insn_sp32_v9 */
        case 72:  /* *movdf_insn_sp32_v9 */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0x7f))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 71:  /* *movdf_insn_sp32_no_fpu */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0x3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 70:  /* *movdf_insn_sp32 */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0xf))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 46:  /* *movdi_insn_sp32_v9 */
	  extract_constrain_insn_cached (insn);
	  if (!((1 << which_alternative) & 0xcf2))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 45:  /* *movdi_insn_sp32 */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0x186))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 355:  /* *ldstubsi */
        case 354:  /* *ldstubhi */
        case 353:  /* *ldstubqi */
        case 352:  /* *swapsi */
        case 351:  /* *sync_compare_and_swapdi_v8plus */
        case 350:  /* *sync_compare_and_swapsi */
        case 349:  /* *membar */
        case 348:  /* *stbar */
        case 316:  /* stack_protect_testsi */
        case 315:  /* stack_protect_setsi */
        case 293:  /* tldm_call32 */
        case 289:  /* tgd_call32 */
        case 280:  /* ffssi2 */
        case 277:  /* do_builtin_setjmp_setup */
        case 276:  /* goto_handler_and_restore */
        case 274:  /* *branch_sp32 */
        case 272:  /* update_return */
        case 271:  /* blockage */
        case 268:  /* *sibcall_value_symbolic_sp32 */
        case 267:  /* *sibcall_symbolic_sp32 */
        case 266:  /* *call_value_symbolic_sp32 */
        case 265:  /* *call_value_address_sp32 */
        case 264:  /* *call_symbolic_untyped_struct_value_sp32 */
        case 263:  /* *call_address_untyped_struct_value_sp32 */
        case 262:  /* *call_symbolic_struct_value_sp32 */
        case 261:  /* *call_address_struct_value_sp32 */
        case 260:  /* *call_symbolic_sp32 */
        case 259:  /* *call_address_sp32 */
        case 258:  /* *tablejump_sp32 */
        case 257:  /* jump */
        case 256:  /* lshrdi3_v8plus */
        case 254:  /* ashrdi3_v8plus */
        case 250:  /* ashldi3_v8plus */
        case 207:  /* *negdi2_sp32 */
        case 155:  /* *cmp_udiv_cc_set */
        case 154:  /* udivsi3_sp32 */
        case 153:  /* *cmp_sdiv_cc_set */
        case 152:  /* divsi3_sp32 */
        case 151:  /* const_umulsi3_highpart */
        case 150:  /* *umulsi3_highpart_sp32 */
        case 149:  /* const_umulsi3_highpart_v8plus */
        case 148:  /* umulsi3_highpart_v8plus */
        case 147:  /* const_umulsidi3_v8plus */
        case 144:  /* umulsidi3_v8plus */
        case 143:  /* const_smulsi3_highpart */
        case 142:  /* *smulsi3_highpart_sp32 */
        case 141:  /* const_smulsi3_highpart_v8plus */
        case 140:  /* *sparc.md:4656 */
        case 139:  /* smulsi3_highpart_v8plus */
        case 136:  /* const_mulsidi3_v8plus */
        case 135:  /* mulsidi3_v8plus */
        case 133:  /* muldi3_v8plus */
        case 128:  /* *sparc.md:4336 */
        case 127:  /* *subx_extend */
        case 125:  /* subdi3_insn_sp32 */
        case 121:  /* *sparc.md:4164 */
        case 120:  /* *addx_extend_sp32 */
        case 118:  /* adddi3_insn_sp32 */
        case 89:  /* *zero_extendsidi2_insn_sp32 */
        case 85:  /* *movtf_cc_v9 */
        case 78:  /* *movtf_insn_sp32_no_fpu */
        case 77:  /* *movtf_insn_sp32 */
        case 34:  /* load_pcrel_symsi */
        case 33:  /* *inverted_fpe_branch */
        case 32:  /* *normal_fpe_branch */
        case 31:  /* *inverted_fp_branch */
        case 30:  /* *normal_fp_branch */
        case 29:  /* *inverted_branch */
        case 28:  /* *normal_branch */
        case 14:  /* *x_minus_i_eq_0 */
        case 13:  /* *x_plus_i_eq_0 */
        case 12:  /* *x_minus_i_ne_0 */
        case 11:  /* *x_plus_i_ne_0 */
        case 10:  /* *neg_seqsi_zero */
        case 9:  /* *seqsi_zero */
        case 8:  /* *neg_snesi_zero */
        case 7:  /* *snesi_zero */
	  return 0;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
	  if (get_attr_in_branch_delay (insn) == IN_BRANCH_DELAY_TRUE)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        default:
	  return 1;

      }
    case 2:
      switch (recog_memoized (insn))
	{
        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
	  if (get_attr_eligible_for_sibcall_delay (insn) == ELIGIBLE_FOR_SIBCALL_DELAY_TRUE)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        default:
	  extract_constrain_insn_cached (insn);
	  if ((
#line 260 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(eligible_for_sibcall_delay (insn))) == (
(ELIGIBLE_FOR_SIBCALL_DELAY_TRUE)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

      }
    case 1:
      switch (recog_memoized (insn))
	{
        case 270:  /* *return_internal */
	  extract_constrain_insn_cached (insn);
	  if (((((
#line 148 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(current_function_uses_only_leaf_regs != 0)) == (
(LEAF_FUNCTION_TRUE))) && (! ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE))))) || ((! ((
#line 148 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(current_function_uses_only_leaf_regs != 0)) == (
(LEAF_FUNCTION_TRUE)))) && ((! ((
#line 145 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(crtl->calls_eh_return !=0 )) == (
(CALLS_EH_RETURN_TRUE)))) && (! ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE))))))) && ((
#line 245 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(tls_call_delay (insn))) == (
(TLS_CALL_DELAY_TRUE))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 243:  /* *absdf2_notv9 */
        case 242:  /* *abstf2_v9 */
        case 240:  /* *abstf2_notv9 */
        case 237:  /* *negdf2_notv9 */
        case 236:  /* *negtf2_v9 */
        case 235:  /* *negtf2_notv9 */
	  extract_constrain_insn_cached (insn);
	  if ((which_alternative == 0) && ((
#line 245 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(tls_call_delay (insn))) == (
(TLS_CALL_DELAY_TRUE))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 214:  /* *one_cmplv8qi2_sp32 */
        case 213:  /* *one_cmplv4hi2_sp32 */
        case 212:  /* *one_cmplv2si2_sp32 */
        case 211:  /* *one_cmpldi2_sp32 */
        case 197:  /* *xor_not_v8qi_sp32 */
        case 196:  /* *xor_not_v4hi_sp32 */
        case 195:  /* *xor_not_v2si_sp32 */
        case 194:  /* *xor_not_di_sp32 */
        case 190:  /* *xorv8qi3_sp32 */
        case 189:  /* *xorv4hi3_sp32 */
        case 188:  /* *xorv2si3_sp32 */
        case 187:  /* *xordi3_sp32 */
        case 183:  /* *or_not_v8qi_sp32 */
        case 182:  /* *or_not_v4hi_sp32 */
        case 181:  /* *or_not_v2si_sp32 */
        case 180:  /* *or_not_di_sp32 */
        case 176:  /* *iorv8qi3_sp32 */
        case 175:  /* *iorv4hi3_sp32 */
        case 174:  /* *iorv2si3_sp32 */
        case 173:  /* *iordi3_sp32 */
        case 169:  /* *and_not_v8qi_sp32 */
        case 168:  /* *and_not_v4hi_sp32 */
        case 167:  /* *and_not_v2si_sp32 */
        case 166:  /* *and_not_di_sp32 */
        case 162:  /* *andv8qi3_sp32 */
        case 161:  /* *andv4hi3_sp32 */
        case 160:  /* *andv2si3_sp32 */
        case 159:  /* *anddi3_sp32 */
	  extract_constrain_insn_cached (insn);
	  if ((which_alternative == 1) && ((
#line 245 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(tls_call_delay (insn))) == (
(TLS_CALL_DELAY_TRUE))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 146:  /* const_umulsidi3_sp32 */
        case 145:  /* *umulsidi3_sp32 */
        case 138:  /* const_mulsidi3_sp32 */
        case 137:  /* *mulsidi3_sp32 */
	  extract_constrain_insn_cached (insn);
	  if ((((! (
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9))) && ((! (
#line 109 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8))) && (
#line 110 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET))))) && ((
#line 245 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(tls_call_delay (insn))) == (
(TLS_CALL_DELAY_TRUE))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 314:  /* *tldo_stw_sp32 */
        case 313:  /* *tldo_sth_sp32 */
        case 312:  /* *tldo_stb_sp32 */
        case 311:  /* *tldo_lduw_sp32 */
        case 309:  /* *tldo_lduh1_sp32 */
        case 308:  /* *tldo_lduh_sp32 */
        case 305:  /* *tldo_ldub2_sp32 */
        case 304:  /* *tldo_ldub1_sp32 */
        case 303:  /* *tldo_ldub_sp32 */
        case 299:  /* tie_ld32 */
        case 282:  /* prefetch_32 */
        case 281:  /* prefetch_64 */
        case 86:  /* *zero_extendhisi2_insn */
	  return 1;

        case 76:  /* *movdf_insn_sp32_v9_no_fpu */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0x7))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 75:  /* *movdf_insn_sp32_v9 */
        case 74:  /* *movdf_insn_sp32_v9 */
        case 73:  /* *movdf_insn_sp32_v9 */
        case 72:  /* *movdf_insn_sp32_v9 */
	  extract_constrain_insn_cached (insn);
	  if ((((1 << which_alternative) & 0x7c)) || ((((1 << which_alternative) & 0x3)) && ((
#line 245 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(tls_call_delay (insn))) == (
(TLS_CALL_DELAY_TRUE)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 71:  /* *movdf_insn_sp32_no_fpu */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0x3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 70:  /* *movdf_insn_sp32 */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0xf))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 67:  /* *movsf_insn_no_fpu */
	  extract_constrain_insn_cached (insn);
	  if ((!((1 << which_alternative) & 0x7)) || ((((1 << which_alternative) & 0x7)) && ((
#line 245 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(tls_call_delay (insn))) == (
(TLS_CALL_DELAY_TRUE)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 66:  /* *movsf_insn */
        case 65:  /* *movsf_insn */
        case 64:  /* *movsf_insn */
	  extract_constrain_insn_cached (insn);
	  if ((!((1 << which_alternative) & 0x1f)) || ((((1 << which_alternative) & 0x1f)) && ((
#line 245 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(tls_call_delay (insn))) == (
(TLS_CALL_DELAY_TRUE)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 46:  /* *movdi_insn_sp32_v9 */
	  extract_constrain_insn_cached (insn);
	  if ((!((1 << which_alternative) & 0x1cf2)) || ((which_alternative == 12) && ((
#line 245 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(tls_call_delay (insn))) == (
(TLS_CALL_DELAY_TRUE)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 45:  /* *movdi_insn_sp32 */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0x186))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 38:  /* *movsi_insn */
	  extract_constrain_insn_cached (insn);
	  if ((((1 << which_alternative) & 0x6c)) || ((!((1 << which_alternative) & 0x6c)) && ((
#line 245 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(tls_call_delay (insn))) == (
(TLS_CALL_DELAY_TRUE)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 36:  /* *movhi_insn */
	  extract_constrain_insn_cached (insn);
	  if ((!((1 << which_alternative) & 0x3)) || ((((1 << which_alternative) & 0x3)) && ((
#line 245 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(tls_call_delay (insn))) == (
(TLS_CALL_DELAY_TRUE)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 88:  /* *zero_extendqisi2_insn */
        case 87:  /* *zero_extendqihi2_insn */
        case 35:  /* *movqi_insn */
	  extract_constrain_insn_cached (insn);
	  if ((which_alternative != 0) || ((which_alternative == 0) && ((
#line 245 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(tls_call_delay (insn))) == (
(TLS_CALL_DELAY_TRUE)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 355:  /* *ldstubsi */
        case 354:  /* *ldstubhi */
        case 353:  /* *ldstubqi */
        case 352:  /* *swapsi */
        case 351:  /* *sync_compare_and_swapdi_v8plus */
        case 350:  /* *sync_compare_and_swapsi */
        case 349:  /* *membar */
        case 348:  /* *stbar */
        case 316:  /* stack_protect_testsi */
        case 315:  /* stack_protect_setsi */
        case 293:  /* tldm_call32 */
        case 289:  /* tgd_call32 */
        case 280:  /* ffssi2 */
        case 277:  /* do_builtin_setjmp_setup */
        case 276:  /* goto_handler_and_restore */
        case 274:  /* *branch_sp32 */
        case 272:  /* update_return */
        case 271:  /* blockage */
        case 268:  /* *sibcall_value_symbolic_sp32 */
        case 267:  /* *sibcall_symbolic_sp32 */
        case 266:  /* *call_value_symbolic_sp32 */
        case 265:  /* *call_value_address_sp32 */
        case 264:  /* *call_symbolic_untyped_struct_value_sp32 */
        case 263:  /* *call_address_untyped_struct_value_sp32 */
        case 262:  /* *call_symbolic_struct_value_sp32 */
        case 261:  /* *call_address_struct_value_sp32 */
        case 260:  /* *call_symbolic_sp32 */
        case 259:  /* *call_address_sp32 */
        case 258:  /* *tablejump_sp32 */
        case 257:  /* jump */
        case 256:  /* lshrdi3_v8plus */
        case 254:  /* ashrdi3_v8plus */
        case 250:  /* ashldi3_v8plus */
        case 207:  /* *negdi2_sp32 */
        case 155:  /* *cmp_udiv_cc_set */
        case 154:  /* udivsi3_sp32 */
        case 153:  /* *cmp_sdiv_cc_set */
        case 152:  /* divsi3_sp32 */
        case 151:  /* const_umulsi3_highpart */
        case 150:  /* *umulsi3_highpart_sp32 */
        case 149:  /* const_umulsi3_highpart_v8plus */
        case 148:  /* umulsi3_highpart_v8plus */
        case 147:  /* const_umulsidi3_v8plus */
        case 144:  /* umulsidi3_v8plus */
        case 143:  /* const_smulsi3_highpart */
        case 142:  /* *smulsi3_highpart_sp32 */
        case 141:  /* const_smulsi3_highpart_v8plus */
        case 140:  /* *sparc.md:4656 */
        case 139:  /* smulsi3_highpart_v8plus */
        case 136:  /* const_mulsidi3_v8plus */
        case 135:  /* mulsidi3_v8plus */
        case 133:  /* muldi3_v8plus */
        case 128:  /* *sparc.md:4336 */
        case 127:  /* *subx_extend */
        case 125:  /* subdi3_insn_sp32 */
        case 121:  /* *sparc.md:4164 */
        case 120:  /* *addx_extend_sp32 */
        case 118:  /* adddi3_insn_sp32 */
        case 89:  /* *zero_extendsidi2_insn_sp32 */
        case 85:  /* *movtf_cc_v9 */
        case 78:  /* *movtf_insn_sp32_no_fpu */
        case 77:  /* *movtf_insn_sp32 */
        case 34:  /* load_pcrel_symsi */
        case 33:  /* *inverted_fpe_branch */
        case 32:  /* *normal_fpe_branch */
        case 31:  /* *inverted_fp_branch */
        case 30:  /* *normal_fp_branch */
        case 29:  /* *inverted_branch */
        case 28:  /* *normal_branch */
        case 14:  /* *x_minus_i_eq_0 */
        case 13:  /* *x_plus_i_eq_0 */
        case 12:  /* *x_minus_i_ne_0 */
        case 11:  /* *x_plus_i_ne_0 */
        case 10:  /* *neg_seqsi_zero */
        case 9:  /* *seqsi_zero */
        case 8:  /* *neg_snesi_zero */
        case 7:  /* *snesi_zero */
	  return 0;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
	  if (get_attr_in_call_delay (insn) == IN_CALL_DELAY_TRUE)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        default:
	  extract_constrain_insn_cached (insn);
	  if ((
#line 245 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(tls_call_delay (insn))) == (
(TLS_CALL_DELAY_TRUE)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

      }
    default:
      gcc_unreachable ();
    }
}

int
eligible_for_annul_false (rtx delay_insn ATTRIBUTE_UNUSED, int slot, rtx candidate_insn, int flags ATTRIBUTE_UNUSED)
{
  rtx insn;

  gcc_assert (slot < 1);

  if (!INSN_P (candidate_insn))
    return 0;

  insn = delay_insn;
  switch (recog_memoized (insn))
    {
    case 270:  /* *return_internal */
      slot += 5 * 1;
      break;
      break;

    case 268:  /* *sibcall_value_symbolic_sp32 */
    case 267:  /* *sibcall_symbolic_sp32 */
      slot += 2 * 1;
      break;
      break;

    case 293:  /* tldm_call32 */
    case 289:  /* tgd_call32 */
    case 266:  /* *call_value_symbolic_sp32 */
    case 265:  /* *call_value_address_sp32 */
    case 260:  /* *call_symbolic_sp32 */
    case 259:  /* *call_address_sp32 */
      slot += 1 * 1;
      break;
      break;

    case 274:  /* *branch_sp32 */
    case 258:  /* *tablejump_sp32 */
    case 257:  /* jump */
      slot += 4 * 1;
      break;
      break;

    case 33:  /* *inverted_fpe_branch */
    case 32:  /* *normal_fpe_branch */
    case 31:  /* *inverted_fp_branch */
    case 30:  /* *normal_fp_branch */
    case 29:  /* *inverted_branch */
    case 28:  /* *normal_branch */
      slot += 3 * 1;
      break;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (get_attr_type (insn) == TYPE_RETURN)
        {
	  slot += 5 * 1;
      break;
        }
      else if (get_attr_type (insn) == TYPE_UNCOND_BRANCH)
        {
	  slot += 4 * 1;
      break;
        }
      else if (get_attr_type (insn) == TYPE_BRANCH)
        {
	  slot += 3 * 1;
      break;
        }
      else if (get_attr_type (insn) == TYPE_SIBCALL)
        {
	  slot += 2 * 1;
      break;
        }
      else if (get_attr_type (insn) == TYPE_CALL)
        {
	  slot += 1 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    default:
      slot += 0 * 1;
      break;
      break;

    }

  gcc_assert (slot >= 1);

  insn = candidate_insn;
  switch (slot)
    {
    case 5:
      switch (recog_memoized (insn))
	{
        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 0;

      }
    case 4:
      switch (recog_memoized (insn))
	{
        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 0;

      }
    case 3:
      switch (recog_memoized (insn))
	{
        case 270:  /* *return_internal */
	  extract_constrain_insn_cached (insn);
	  if ((((
#line 148 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(current_function_uses_only_leaf_regs != 0)) == (
(LEAF_FUNCTION_TRUE))) && (! ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE))))) || ((! ((
#line 148 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(current_function_uses_only_leaf_regs != 0)) == (
(LEAF_FUNCTION_TRUE)))) && ((! ((
#line 145 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(crtl->calls_eh_return !=0 )) == (
(CALLS_EH_RETURN_TRUE)))) && (! ((
#line 133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(empty_delay_slot (insn))) == (
(EMPTY_DELAY_SLOT_TRUE)))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 243:  /* *absdf2_notv9 */
        case 242:  /* *abstf2_v9 */
        case 240:  /* *abstf2_notv9 */
        case 237:  /* *negdf2_notv9 */
        case 236:  /* *negtf2_v9 */
        case 235:  /* *negtf2_notv9 */
	  extract_constrain_insn_cached (insn);
	  if (which_alternative == 0)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 214:  /* *one_cmplv8qi2_sp32 */
        case 213:  /* *one_cmplv4hi2_sp32 */
        case 212:  /* *one_cmplv2si2_sp32 */
        case 211:  /* *one_cmpldi2_sp32 */
        case 197:  /* *xor_not_v8qi_sp32 */
        case 196:  /* *xor_not_v4hi_sp32 */
        case 195:  /* *xor_not_v2si_sp32 */
        case 194:  /* *xor_not_di_sp32 */
        case 190:  /* *xorv8qi3_sp32 */
        case 189:  /* *xorv4hi3_sp32 */
        case 188:  /* *xorv2si3_sp32 */
        case 187:  /* *xordi3_sp32 */
        case 183:  /* *or_not_v8qi_sp32 */
        case 182:  /* *or_not_v4hi_sp32 */
        case 181:  /* *or_not_v2si_sp32 */
        case 180:  /* *or_not_di_sp32 */
        case 176:  /* *iorv8qi3_sp32 */
        case 175:  /* *iorv4hi3_sp32 */
        case 174:  /* *iorv2si3_sp32 */
        case 173:  /* *iordi3_sp32 */
        case 169:  /* *and_not_v8qi_sp32 */
        case 168:  /* *and_not_v4hi_sp32 */
        case 167:  /* *and_not_v2si_sp32 */
        case 166:  /* *and_not_di_sp32 */
        case 162:  /* *andv8qi3_sp32 */
        case 161:  /* *andv4hi3_sp32 */
        case 160:  /* *andv2si3_sp32 */
        case 159:  /* *anddi3_sp32 */
	  extract_constrain_insn_cached (insn);
	  if (which_alternative != 0)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 146:  /* const_umulsidi3_sp32 */
        case 145:  /* *umulsidi3_sp32 */
        case 138:  /* const_mulsidi3_sp32 */
        case 137:  /* *mulsidi3_sp32 */
	  if (((! (
#line 108 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9))) && ((! (
#line 109 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8))) && (
#line 110 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 76:  /* *movdf_insn_sp32_v9_no_fpu */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0x7))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 75:  /* *movdf_insn_sp32_v9 */
        case 74:  /* *movdf_insn_sp32_v9 */
        case 73:  /* *movdf_insn_sp32_v9 */
        case 72:  /* *movdf_insn_sp32_v9 */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0x7f))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 71:  /* *movdf_insn_sp32_no_fpu */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0x3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 70:  /* *movdf_insn_sp32 */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0xf))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 46:  /* *movdi_insn_sp32_v9 */
	  extract_constrain_insn_cached (insn);
	  if (!((1 << which_alternative) & 0xcf2))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 45:  /* *movdi_insn_sp32 */
	  extract_constrain_insn_cached (insn);
	  if (((1 << which_alternative) & 0x186))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 355:  /* *ldstubsi */
        case 354:  /* *ldstubhi */
        case 353:  /* *ldstubqi */
        case 352:  /* *swapsi */
        case 351:  /* *sync_compare_and_swapdi_v8plus */
        case 350:  /* *sync_compare_and_swapsi */
        case 349:  /* *membar */
        case 348:  /* *stbar */
        case 316:  /* stack_protect_testsi */
        case 315:  /* stack_protect_setsi */
        case 293:  /* tldm_call32 */
        case 289:  /* tgd_call32 */
        case 280:  /* ffssi2 */
        case 277:  /* do_builtin_setjmp_setup */
        case 276:  /* goto_handler_and_restore */
        case 274:  /* *branch_sp32 */
        case 272:  /* update_return */
        case 271:  /* blockage */
        case 268:  /* *sibcall_value_symbolic_sp32 */
        case 267:  /* *sibcall_symbolic_sp32 */
        case 266:  /* *call_value_symbolic_sp32 */
        case 265:  /* *call_value_address_sp32 */
        case 264:  /* *call_symbolic_untyped_struct_value_sp32 */
        case 263:  /* *call_address_untyped_struct_value_sp32 */
        case 262:  /* *call_symbolic_struct_value_sp32 */
        case 261:  /* *call_address_struct_value_sp32 */
        case 260:  /* *call_symbolic_sp32 */
        case 259:  /* *call_address_sp32 */
        case 258:  /* *tablejump_sp32 */
        case 257:  /* jump */
        case 256:  /* lshrdi3_v8plus */
        case 254:  /* ashrdi3_v8plus */
        case 250:  /* ashldi3_v8plus */
        case 207:  /* *negdi2_sp32 */
        case 155:  /* *cmp_udiv_cc_set */
        case 154:  /* udivsi3_sp32 */
        case 153:  /* *cmp_sdiv_cc_set */
        case 152:  /* divsi3_sp32 */
        case 151:  /* const_umulsi3_highpart */
        case 150:  /* *umulsi3_highpart_sp32 */
        case 149:  /* const_umulsi3_highpart_v8plus */
        case 148:  /* umulsi3_highpart_v8plus */
        case 147:  /* const_umulsidi3_v8plus */
        case 144:  /* umulsidi3_v8plus */
        case 143:  /* const_smulsi3_highpart */
        case 142:  /* *smulsi3_highpart_sp32 */
        case 141:  /* const_smulsi3_highpart_v8plus */
        case 140:  /* *sparc.md:4656 */
        case 139:  /* smulsi3_highpart_v8plus */
        case 136:  /* const_mulsidi3_v8plus */
        case 135:  /* mulsidi3_v8plus */
        case 133:  /* muldi3_v8plus */
        case 128:  /* *sparc.md:4336 */
        case 127:  /* *subx_extend */
        case 125:  /* subdi3_insn_sp32 */
        case 121:  /* *sparc.md:4164 */
        case 120:  /* *addx_extend_sp32 */
        case 118:  /* adddi3_insn_sp32 */
        case 89:  /* *zero_extendsidi2_insn_sp32 */
        case 85:  /* *movtf_cc_v9 */
        case 78:  /* *movtf_insn_sp32_no_fpu */
        case 77:  /* *movtf_insn_sp32 */
        case 34:  /* load_pcrel_symsi */
        case 33:  /* *inverted_fpe_branch */
        case 32:  /* *normal_fpe_branch */
        case 31:  /* *inverted_fp_branch */
        case 30:  /* *normal_fp_branch */
        case 29:  /* *inverted_branch */
        case 28:  /* *normal_branch */
        case 14:  /* *x_minus_i_eq_0 */
        case 13:  /* *x_plus_i_eq_0 */
        case 12:  /* *x_minus_i_ne_0 */
        case 11:  /* *x_plus_i_ne_0 */
        case 10:  /* *neg_seqsi_zero */
        case 9:  /* *seqsi_zero */
        case 8:  /* *neg_snesi_zero */
        case 7:  /* *snesi_zero */
	  return 0;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
	  if (get_attr_in_annul_branch_delay (insn) == IN_ANNUL_BRANCH_DELAY_TRUE)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        default:
	  return 1;

      }
    case 2:
      switch (recog_memoized (insn))
	{
        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 0;

      }
    case 1:
      switch (recog_memoized (insn))
	{
        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 0;

      }
    default:
      gcc_unreachable ();
    }
}

int
const_num_delay_slots (rtx insn)
{
  switch (recog_memoized (insn))
    {
    default:
      return 1;
    }
}

const int length_unit_log = 0;
