/* Generated automatically by the program `genoutput'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "flags.h"
#include "ggc.h"
#include "rtl.h"
#include "expr.h"
#include "insn-codes.h"
#include "tm_p.h"
#include "function.h"
#include "regs.h"
#include "hard-reg-set.h"
#include "real.h"
#include "insn-config.h"

#include "conditions.h"
#include "insn-attr.h"

#include "recog.h"

#include "toplev.h"
#include "output.h"
#include "target.h"
#include "tm-constrs.h"

static const char *
output_1 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 433 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (TARGET_V9)
    return "fcmpes\t%0, %1, %2";
  return "fcmpes\t%1, %2";
}
}

static const char *
output_2 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 445 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (TARGET_V9)
    return "fcmped\t%0, %1, %2";
  return "fcmped\t%1, %2";
}
}

static const char *
output_3 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 458 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (TARGET_V9)
    return "fcmpeq\t%0, %1, %2";
  return "fcmpeq\t%1, %2";
}
}

static const char *
output_4 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 470 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (TARGET_V9)
    return "fcmps\t%0, %1, %2";
  return "fcmps\t%1, %2";
}
}

static const char *
output_5 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 482 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (TARGET_V9)
    return "fcmpd\t%0, %1, %2";
  return "fcmpd\t%1, %2";
}
}

static const char *
output_6 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 495 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (TARGET_V9)
    return "fcmpq\t%0, %1, %2";
  return "fcmpq\t%1, %2";
}
}

static const char *
output_28 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1616 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  return output_cbranch (operands[0], operands[1], 1, 0,
			 final_sequence && INSN_ANNULLED_BRANCH_P (insn),
			 insn);
}
}

static const char *
output_29 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1632 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  return output_cbranch (operands[0], operands[1], 1, 1,
			 final_sequence && INSN_ANNULLED_BRANCH_P (insn),
			 insn);
}
}

static const char *
output_30 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1649 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  return output_cbranch (operands[1], operands[2], 2, 0,
			 final_sequence && INSN_ANNULLED_BRANCH_P (insn),
			 insn);
}
}

static const char *
output_31 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1666 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  return output_cbranch (operands[1], operands[2], 2, 1,
			 final_sequence && INSN_ANNULLED_BRANCH_P (insn),
			 insn);
}
}

static const char *
output_32 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1683 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  return output_cbranch (operands[1], operands[2], 2, 0,
			 final_sequence && INSN_ANNULLED_BRANCH_P (insn),
			 insn);
}
}

static const char *
output_33 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1700 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  return output_cbranch (operands[1], operands[2], 2, 1,
			 final_sequence && INSN_ANNULLED_BRANCH_P (insn),
			 insn);
}
}

static const char *
output_34 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1760 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (flag_delayed_branch)
    return "sethi\t%%hi(%a1-4), %0\n\tcall\t%a2\n\t add\t%0, %%lo(%a1+4), %0";
  else
    return "sethi\t%%hi(%a1-8), %0\n\tadd\t%0, %%lo(%a1-4), %0\n\tcall\t%a2\n\t nop";
}
}

static const char * const output_35[] = {
  "mov\t%1, %0",
  "ldub\t%1, %0",
  "stb\t%r1, %0",
};

static const char * const output_36[] = {
  "mov\t%1, %0",
  "sethi\t%%hi(%a1), %0",
  "lduh\t%1, %0",
  "sth\t%r1, %0",
};

static const char * const output_38[] = {
  "mov\t%1, %0",
  "sethi\t%%hi(%a1), %0",
  "ld\t%1, %0",
  "st\t%r1, %0",
  "fmovs\t%1, %0",
  "ld\t%1, %0",
  "st\t%1, %0",
  "fzeros\t%0",
};

static const char * const output_45[] = {
  "#",
  "std\t%1, %0",
  "ldd\t%1, %0",
  "#",
  "#",
  "#",
  "#",
  "std\t%1, %0",
  "ldd\t%1, %0",
  "#",
  "#",
  "#",
};

static const char * const output_46[] = {
  "stx\t%%g0, %0",
  "#",
  "std\t%1, %0",
  "ldd\t%1, %0",
  "#",
  "#",
  "#",
  "#",
  "std\t%1, %0",
  "ldd\t%1, %0",
  "#",
  "#",
  "fmovd\t%1, %0",
  "ldd\t%1, %0",
  "std\t%1, %0",
};

static const char *
output_64 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2405 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (GET_CODE (operands[1]) == CONST_DOUBLE
      && (which_alternative == 2
          || which_alternative == 3
          || which_alternative == 4))
    {
      REAL_VALUE_TYPE r;
      long i;

      REAL_VALUE_FROM_CONST_DOUBLE (r, operands[1]);
      REAL_VALUE_TO_TARGET_SINGLE (r, i);
      operands[1] = GEN_INT (i);
    }

  switch (which_alternative)
    {
    case 0:
      return "fzeros\t%0";
    case 1:
      return "fmovs\t%1, %0";
    case 2:
      return "mov\t%1, %0";
    case 3:
      return "sethi\t%%hi(%a1), %0";
    case 4:
      return "#";
    case 5:
    case 6:
      return "ld\t%1, %0";
    case 7:
    case 8:
      return "st\t%r1, %0";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_65 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2405 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (GET_CODE (operands[1]) == CONST_DOUBLE
      && (which_alternative == 2
          || which_alternative == 3
          || which_alternative == 4))
    {
      REAL_VALUE_TYPE r;
      long i;

      REAL_VALUE_FROM_CONST_DOUBLE (r, operands[1]);
      REAL_VALUE_TO_TARGET_SINGLE (r, i);
      operands[1] = GEN_INT (i);
    }

  switch (which_alternative)
    {
    case 0:
      return "fzeros\t%0";
    case 1:
      return "fmovs\t%1, %0";
    case 2:
      return "mov\t%1, %0";
    case 3:
      return "sethi\t%%hi(%a1), %0";
    case 4:
      return "#";
    case 5:
    case 6:
      return "ld\t%1, %0";
    case 7:
    case 8:
      return "st\t%r1, %0";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_66 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2405 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (GET_CODE (operands[1]) == CONST_DOUBLE
      && (which_alternative == 2
          || which_alternative == 3
          || which_alternative == 4))
    {
      REAL_VALUE_TYPE r;
      long i;

      REAL_VALUE_FROM_CONST_DOUBLE (r, operands[1]);
      REAL_VALUE_TO_TARGET_SINGLE (r, i);
      operands[1] = GEN_INT (i);
    }

  switch (which_alternative)
    {
    case 0:
      return "fzeros\t%0";
    case 1:
      return "fmovs\t%1, %0";
    case 2:
      return "mov\t%1, %0";
    case 3:
      return "sethi\t%%hi(%a1), %0";
    case 4:
      return "#";
    case 5:
    case 6:
      return "ld\t%1, %0";
    case 7:
    case 8:
      return "st\t%r1, %0";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_67 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2453 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (GET_CODE (operands[1]) == CONST_DOUBLE
      && (which_alternative == 0
          || which_alternative == 1
          || which_alternative == 2))
    {
      REAL_VALUE_TYPE r;
      long i;

      REAL_VALUE_FROM_CONST_DOUBLE (r, operands[1]);
      REAL_VALUE_TO_TARGET_SINGLE (r, i);
      operands[1] = GEN_INT (i);
    }

  switch (which_alternative)
    {
    case 0:
      return "mov\t%1, %0";
    case 1:
      return "sethi\t%%hi(%a1), %0";
    case 2:
      return "#";
    case 3:
      return "ld\t%1, %0";
    case 4:
      return "st\t%r1, %0";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_68 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2492 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  REAL_VALUE_TYPE r;
  long i;

  REAL_VALUE_FROM_CONST_DOUBLE (r, operands[2]);
  REAL_VALUE_TO_TARGET_SINGLE (r, i);
  operands[2] = GEN_INT (i);
  return "or\t%1, %%lo(%a2), %0";
}
}

static const char *
output_69 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2506 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  REAL_VALUE_TYPE r;
  long i;

  REAL_VALUE_FROM_CONST_DOUBLE (r, operands[1]);
  REAL_VALUE_TO_TARGET_SINGLE (r, i);
  operands[1] = GEN_INT (i);
  return "sethi\t%%hi(%1), %0";
}
}

static const char * const output_70[] = {
  "ldd\t%1, %0",
  "std\t%1, %0",
  "ldd\t%1, %0",
  "std\t%1, %0",
  "#",
  "#",
  "#",
  "#",
  "#",
  "#",
};

static const char * const output_71[] = {
  "ldd\t%1, %0",
  "std\t%1, %0",
  "#",
  "#",
  "#",
};

static const char * const output_72[] = {
  "fzero\t%0",
  "fmovd\t%1, %0",
  "ldd\t%1, %0",
  "stx\t%r1, %0",
  "std\t%1, %0",
  "ldd\t%1, %0",
  "std\t%1, %0",
  "#",
  "#",
  "#",
};

static const char * const output_73[] = {
  "fzero\t%0",
  "fmovd\t%1, %0",
  "ldd\t%1, %0",
  "stx\t%r1, %0",
  "std\t%1, %0",
  "ldd\t%1, %0",
  "std\t%1, %0",
  "#",
  "#",
  "#",
};

static const char * const output_74[] = {
  "fzero\t%0",
  "fmovd\t%1, %0",
  "ldd\t%1, %0",
  "stx\t%r1, %0",
  "std\t%1, %0",
  "ldd\t%1, %0",
  "std\t%1, %0",
  "#",
  "#",
  "#",
};

static const char * const output_75[] = {
  "fzero\t%0",
  "fmovd\t%1, %0",
  "ldd\t%1, %0",
  "stx\t%r1, %0",
  "std\t%1, %0",
  "ldd\t%1, %0",
  "std\t%1, %0",
  "#",
  "#",
  "#",
};

static const char * const output_76[] = {
  "ldd\t%1, %0",
  "std\t%1, %0",
  "stx\t%r1, %0",
  "#",
  "#",
};

static const char * const output_79[] = {
  "mov%C1\t%x2, %3, %0",
  "mov%c1\t%x2, %4, %0",
};

static const char * const output_80[] = {
  "mov%C1\t%x2, %3, %0",
  "mov%c1\t%x2, %4, %0",
};

static const char * const output_81[] = {
  "mov%C1\t%x2, %3, %0",
  "mov%c1\t%x2, %4, %0",
};

static const char * const output_82[] = {
  "fmovs%C1\t%x2, %3, %0",
  "fmovs%c1\t%x2, %4, %0",
};

static const char * const output_83[] = {
  "fmovd%C1\t%x2, %3, %0",
  "fmovd%c1\t%x2, %4, %0",
};

static const char * const output_84[] = {
  "fmovq%C1\t%x2, %3, %0",
  "fmovq%c1\t%x2, %4, %0",
};

static const char * const output_87[] = {
  "and\t%1, 0xff, %0",
  "ldub\t%1, %0",
};

static const char * const output_88[] = {
  "and\t%1, 0xff, %0",
  "ldub\t%1, %0",
};

static const char *
output_99 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3789 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  int len = INTVAL (operands[1]);
  int pos = 32 - INTVAL (operands[2]) - len;
  HOST_WIDE_INT mask = ((1 << len) - 1) << pos;
  operands[1] = GEN_INT (mask);
  return "andcc\t%0, %1, %%g0";
}
}

static const char * const output_122[] = {
  "add\t%1, %2, %0",
  "sub\t%1, -%2, %0",
  "fpadd32s\t%1, %2, %0",
};

static const char * const output_129[] = {
  "sub\t%1, %2, %0",
  "add\t%1, -%2, %0",
  "fpsub32s\t%1, %2, %0",
};

static const char *
output_133 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4462 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (sparc_check_64 (operands[1], insn) <= 0)
    output_asm_insn ("srl\t%L1, 0, %L1", operands);
  if (which_alternative == 1)
    output_asm_insn ("sllx\t%H1, 32, %H1", operands);
  if (GET_CODE (operands[2]) == CONST_INT)
    {
      if (which_alternative == 1)
	return "or\t%L1, %H1, %H1\n\tmulx\t%H1, %2, %L0\n\tsrlx\t%L0, 32, %H0";
      else
	return "sllx\t%H1, 32, %3\n\tor\t%L1, %3, %3\n\tmulx\t%3, %2, %3\n\tsrlx\t%3, 32, %H0\n\tmov\t%3, %L0";
    }
  else if (rtx_equal_p (operands[1], operands[2]))
    {
      if (which_alternative == 1)
	return "or\t%L1, %H1, %H1\n\tmulx\t%H1, %H1, %L0\n\tsrlx\t%L0, 32, %H0";
      else
	return "sllx\t%H1, 32, %3\n\tor\t%L1, %3, %3\n\tmulx\t%3, %3, %3\n\tsrlx\t%3, 32, %H0\n\tmov\t%3, %L0";
    }
  if (sparc_check_64 (operands[2], insn) <= 0)
    output_asm_insn ("srl\t%L2, 0, %L2", operands);
  if (which_alternative == 1)
    return "or\t%L1, %H1, %H1\n\tsllx\t%H2, 32, %L1\n\tor\t%L2, %L1, %L1\n\tmulx\t%H1, %L1, %L0\n\tsrlx\t%L0, 32, %H0";
  else
    return "sllx\t%H1, 32, %3\n\tsllx\t%H2, 32, %4\n\tor\t%L1, %3, %3\n\tor\t%L2, %4, %4\n\tmulx\t%3, %4, %3\n\tsrlx\t%3, 32, %H0\n\tmov\t%3, %L0";
}
}

static const char * const output_135[] = {
  "smul\t%1, %2, %L0\n\tsrlx\t%L0, 32, %H0",
  "smul\t%1, %2, %3\n\tsrlx\t%3, 32, %H0\n\tmov\t%3, %L0",
};

static const char * const output_136[] = {
  "smul\t%1, %2, %L0\n\tsrlx\t%L0, 32, %H0",
  "smul\t%1, %2, %3\n\tsrlx\t%3, 32, %H0\n\tmov\t%3, %L0",
};

static const char *
output_137 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4562 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  return TARGET_SPARCLET
         ? "smuld\t%1, %2, %L0"
         : "smul\t%1, %2, %L0\n\trd\t%%y, %H0";
}
}

static const char *
output_138 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4590 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  return TARGET_SPARCLET
         ? "smuld\t%1, %2, %L0"
         : "smul\t%1, %2, %L0\n\trd\t%%y, %H0";
}
}

static const char * const output_139[] = {
  "smul\t%1, %2, %0\n\tsrlx\t%0, %3, %0",
  "smul\t%1, %2, %4\n\tsrlx\t%4, %3, %0",
};

static const char * const output_140[] = {
  "smul\t%1, %2, %0\n\tsrlx\t%0, %3, %0",
  "smul\t%1, %2, %4\n\tsrlx\t%4, %3, %0",
};

static const char * const output_141[] = {
  "smul\t%1, %2, %0\n\tsrlx\t%0, %3, %0",
  "smul\t%1, %2, %4\n\tsrlx\t%4, %3, %0",
};

static const char * const output_144[] = {
  "umul\t%1, %2, %L0\n\tsrlx\t%L0, 32, %H0",
  "umul\t%1, %2, %3\n\tsrlx\t%3, 32, %H0\n\tmov\t%3, %L0",
};

static const char *
output_145 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4756 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  return TARGET_SPARCLET
         ? "umuld\t%1, %2, %L0"
         : "umul\t%1, %2, %L0\n\trd\t%%y, %H0";
}
}

static const char *
output_146 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4784 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  return TARGET_SPARCLET
         ? "umuld\t%1, %s2, %L0"
         : "umul\t%1, %s2, %L0\n\trd\t%%y, %H0";
}
}

static const char * const output_147[] = {
  "umul\t%1, %s2, %L0\n\tsrlx\t%L0, 32, %H0",
  "umul\t%1, %s2, %3\n\tsrlx\t%3, 32, %H0\n\tmov\t%3, %L0",
};

static const char * const output_148[] = {
  "umul\t%1, %2, %0\n\tsrlx\t%0, %3, %0",
  "umul\t%1, %2, %4\n\tsrlx\t%4, %3, %0",
};

static const char * const output_149[] = {
  "umul\t%1, %s2, %0\n\tsrlx\t%0, %3, %0",
  "umul\t%1, %s2, %4\n\tsrlx\t%4, %3, %0",
};

static const char *
output_152 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4927 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  output_asm_insn ("sra\t%1, 31, %3", operands);
  output_asm_insn ("wr\t%3, 0, %%y", operands);

  switch (which_alternative)
    {
    case 0:
      if (TARGET_V9)
	return "sdiv\t%1, %2, %0";
      else
	return "nop\n\tnop\n\tnop\n\tsdiv\t%1, %2, %0";
    case 1:
      if (TARGET_V9)
	return "sethi\t%%hi(%a2), %3\n\tsdiv\t%1, %3, %0";
      else
	return "sethi\t%%hi(%a2), %3\n\tnop\n\tnop\n\tsdiv\t%1, %3, %0";
    case 2:
      if (TARGET_V9)
	return "ld\t%2, %3\n\tsdiv\t%1, %3, %0";
      else
	return "ld\t%2, %3\n\tnop\n\tnop\n\tsdiv\t%1, %3, %0";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_153 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4984 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  output_asm_insn ("sra\t%1, 31, %3", operands);
  output_asm_insn ("wr\t%3, 0, %%y", operands);

  if (TARGET_V9)
    return "sdivcc\t%1, %2, %0";
  else
    return "nop\n\tnop\n\tnop\n\tsdivcc\t%1, %2, %0";
}
}

static const char *
output_154 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5015 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  output_asm_insn ("wr\t%%g0, 0, %%y", operands);

  switch (which_alternative)
    {
    case 0:
      if (TARGET_V9)
	return "udiv\t%1, %2, %0";
      else
	return "nop\n\tnop\n\tnop\n\tudiv\t%1, %2, %0";
    case 1:
      if (TARGET_V9)
	return "sethi\t%%hi(%a2), %0\n\tudiv\t%1, %0, %0";
      else
	return "sethi\t%%hi(%a2), %0\n\tnop\n\tnop\n\tudiv\t%1, %0, %0";
    case 2:
      if (TARGET_V9)
	return "ld\t%2, %0\n\tudiv\t%1, %0, %0";
      else
	return "ld\t%2, %0\n\tnop\n\tnop\n\tudiv\t%1, %0, %0";
    case 3:
      if (TARGET_V9)
	return "ld\t%1, %0\n\tudiv\t%0, %2, %0";
      else
	return "ld\t%1, %0\n\tnop\n\tnop\n\tudiv\t%0, %2, %0";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_155 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5074 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  output_asm_insn ("wr\t%%g0, 0, %%y", operands);

  if (TARGET_V9)
    return "udivcc\t%1, %2, %0";
  else
    return "nop\n\tnop\n\tnop\n\tudivcc\t%1, %2, %0";
}
}

static const char * const output_159[] = {
  "#",
  "fand\t%1, %2, %0",
};

static const char * const output_160[] = {
  "#",
  "fand\t%1, %2, %0",
};

static const char * const output_161[] = {
  "#",
  "fand\t%1, %2, %0",
};

static const char * const output_162[] = {
  "#",
  "fand\t%1, %2, %0",
};

static const char * const output_163[] = {
  "and\t%1, %2, %0",
  "fands\t%1, %2, %0",
};

static const char * const output_164[] = {
  "and\t%1, %2, %0",
  "fands\t%1, %2, %0",
};

static const char * const output_165[] = {
  "and\t%1, %2, %0",
  "fands\t%1, %2, %0",
};

static const char * const output_166[] = {
  "#",
  "fandnot1\t%1, %2, %0",
};

static const char * const output_167[] = {
  "#",
  "fandnot1\t%1, %2, %0",
};

static const char * const output_168[] = {
  "#",
  "fandnot1\t%1, %2, %0",
};

static const char * const output_169[] = {
  "#",
  "fandnot1\t%1, %2, %0",
};

static const char * const output_170[] = {
  "andn\t%2, %1, %0",
  "fandnot1s\t%1, %2, %0",
};

static const char * const output_171[] = {
  "andn\t%2, %1, %0",
  "fandnot1s\t%1, %2, %0",
};

static const char * const output_172[] = {
  "andn\t%2, %1, %0",
  "fandnot1s\t%1, %2, %0",
};

static const char * const output_173[] = {
  "#",
  "for\t%1, %2, %0",
};

static const char * const output_174[] = {
  "#",
  "for\t%1, %2, %0",
};

static const char * const output_175[] = {
  "#",
  "for\t%1, %2, %0",
};

static const char * const output_176[] = {
  "#",
  "for\t%1, %2, %0",
};

static const char * const output_177[] = {
  "or\t%1, %2, %0",
  "fors\t%1, %2, %0",
};

static const char * const output_178[] = {
  "or\t%1, %2, %0",
  "fors\t%1, %2, %0",
};

static const char * const output_179[] = {
  "or\t%1, %2, %0",
  "fors\t%1, %2, %0",
};

static const char * const output_180[] = {
  "#",
  "fornot1\t%1, %2, %0",
};

static const char * const output_181[] = {
  "#",
  "fornot1\t%1, %2, %0",
};

static const char * const output_182[] = {
  "#",
  "fornot1\t%1, %2, %0",
};

static const char * const output_183[] = {
  "#",
  "fornot1\t%1, %2, %0",
};

static const char * const output_184[] = {
  "orn\t%2, %1, %0",
  "fornot1s\t%1, %2, %0",
};

static const char * const output_185[] = {
  "orn\t%2, %1, %0",
  "fornot1s\t%1, %2, %0",
};

static const char * const output_186[] = {
  "orn\t%2, %1, %0",
  "fornot1s\t%1, %2, %0",
};

static const char * const output_187[] = {
  "#",
  "fxor\t%1, %2, %0",
};

static const char * const output_188[] = {
  "#",
  "fxor\t%1, %2, %0",
};

static const char * const output_189[] = {
  "#",
  "fxor\t%1, %2, %0",
};

static const char * const output_190[] = {
  "#",
  "fxor\t%1, %2, %0",
};

static const char * const output_191[] = {
  "xor\t%r1, %2, %0",
  "fxors\t%1, %2, %0",
};

static const char * const output_192[] = {
  "xor\t%r1, %2, %0",
  "fxors\t%1, %2, %0",
};

static const char * const output_193[] = {
  "xor\t%r1, %2, %0",
  "fxors\t%1, %2, %0",
};

static const char * const output_194[] = {
  "#",
  "fxnor\t%1, %2, %0",
};

static const char * const output_195[] = {
  "#",
  "fxnor\t%1, %2, %0",
};

static const char * const output_196[] = {
  "#",
  "fxnor\t%1, %2, %0",
};

static const char * const output_197[] = {
  "#",
  "fxnor\t%1, %2, %0",
};

static const char * const output_198[] = {
  "xnor\t%r1, %2, %0",
  "fxnors\t%1, %2, %0",
};

static const char * const output_199[] = {
  "xnor\t%r1, %2, %0",
  "fxnors\t%1, %2, %0",
};

static const char * const output_200[] = {
  "xnor\t%r1, %2, %0",
  "fxnors\t%1, %2, %0",
};

static const char * const output_211[] = {
  "#",
  "fnot1\t%1, %0",
};

static const char * const output_212[] = {
  "#",
  "fnot1\t%1, %0",
};

static const char * const output_213[] = {
  "#",
  "fnot1\t%1, %0",
};

static const char * const output_214[] = {
  "#",
  "fnot1\t%1, %0",
};

static const char * const output_215[] = {
  "xnor\t%%g0, %1, %0",
  "fnot1s\t%1, %0",
};

static const char * const output_216[] = {
  "xnor\t%%g0, %1, %0",
  "fnot1s\t%1, %0",
};

static const char * const output_217[] = {
  "xnor\t%%g0, %1, %0",
  "fnot1s\t%1, %0",
};

static const char * const output_235[] = {
  "fnegs\t%0, %0",
  "#",
};

static const char * const output_236[] = {
  "fnegd\t%0, %0",
  "#",
};

static const char * const output_237[] = {
  "fnegs\t%0, %0",
  "#",
};

static const char * const output_240[] = {
  "fabss\t%0, %0",
  "#",
};

static const char * const output_241[] = {
  "fabsd\t%0, %0",
  "fabsq\t%1, %0",
};

static const char * const output_242[] = {
  "fabsd\t%0, %0",
  "#",
};

static const char * const output_243[] = {
  "fabss\t%0, %0",
  "#",
};

static const char *
output_249 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6190 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
  return "sll\t%1, %2, %0";
}
}

static const char *
output_250 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6235 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
 return output_v8plus_shift (operands, insn, "sllx");
}

static const char *
output_253 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6281 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
     if (GET_CODE (operands[2]) == CONST_INT)
       operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
     return "sra\t%1, %2, %0";
  }
}

static const char *
output_254 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6345 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
 return output_v8plus_shift (operands, insn, "srax");
}

static const char *
output_255 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6354 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
    if (GET_CODE (operands[2]) == CONST_INT)
      operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
    return "srl\t%1, %2, %0";
  }
}

static const char *
output_256 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6422 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
 return output_v8plus_shift (operands, insn, "srlx");
}

static const char *
output_257 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6488 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
 return output_ubranch (operands[0], 0, insn);
}

static const char *
output_261 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6645 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) & 0xfff);
  return "call\t%a0, %1\n\t nop\n\tunimp\t%2";
}
}

static const char *
output_262 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6661 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) & 0xfff);
  return "call\t%a0, %1\n\t nop\n\tunimp\t%2";
}
}

static const char *
output_267 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6803 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
 return output_sibcall(insn, operands[0]);
}

static const char *
output_268 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6827 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
 return output_sibcall(insn, operands[1]);
}

static const char *
output_270 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6890 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
 return output_return (insn);
}

static const char *
output_272 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6971 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (flag_delayed_branch)
    return "cmp\t%1, 0\n\tbe,a\t.+8\n\t add\t%0, 4, %0";
  else
    return "cmp\t%1, 0\n\tbne\t.+12\n\t nop\n\tadd\t%0, 4, %0";
}
}

static const char *
output_275 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7050 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{ return TARGET_V9 ? "flushw" : "ta\t3"; }
}

static const char *
output_276 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7056 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (flag_delayed_branch)
    return "jmp\t%0\n\t restore";
  else
    return "mov\t%0,%%g1\n\trestore\n\tjmp\t%%g1\n\t nop";
}
}

static const char *
output_277 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7082 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (!cfun->calls_alloca)
    return "";
  if (!TARGET_V9)
    return "ta\t3";
  fputs ("\tflushw\n", asm_out_file);
  if (flag_pic)
    fprintf (asm_out_file, "\tst%c\t%%l7, [%%sp+%d]\n",
	     TARGET_ARCH64 ? 'x' : 'w',
	     SPARC_STACK_BIAS + 7 * UNITS_PER_WORD);
  fprintf (asm_out_file, "\tst%c\t%%fp, [%%sp+%d]\n",
	   TARGET_ARCH64 ? 'x' : 'w',
	   SPARC_STACK_BIAS + 14 * UNITS_PER_WORD);
  fprintf (asm_out_file, "\tst%c\t%%i7, [%%sp+%d]\n",
	   TARGET_ARCH64 ? 'x' : 'w',
	   SPARC_STACK_BIAS + 15 * UNITS_PER_WORD);
  return "";
}
}

static const char *
output_278 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7147 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{ return TARGET_V9 ? "flush\t%f0" : "iflush\t%f0"; }
}

static const char *
output_279 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7153 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{ return TARGET_V9 ? "flush\t%f0" : "iflush\t%f0"; }
}

static const char *
output_280 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7170 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  return "sub\t%%g0, %1, %0\n\tand\t%0, %1, %0\n\tscan\t%0, 0, %0\n\tmov\t32, %2\n\tsub\t%2, %0, %0\n\tsra\t%0, 31, %2\n\tand\t%2, 31, %2\n\tadd\t%2, %0, %0";
}
}

static const char *
output_281 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7378 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  static const char * const prefetch_instr[2][2] = {
    {
      "prefetch\t[%a0], 1", /* no locality: prefetch for one read */
      "prefetch\t[%a0], 0", /* medium to high locality: prefetch for several reads */
    },
    {
      "prefetch\t[%a0], 3", /* no locality: prefetch for one write */
      "prefetch\t[%a0], 2", /* medium to high locality: prefetch for several writes */
    }
  };
  int read_or_write = INTVAL (operands[1]);
  int locality = INTVAL (operands[2]);

  gcc_assert (read_or_write == 0 || read_or_write == 1);
  gcc_assert (locality >= 0 && locality < 4);
  return prefetch_instr [read_or_write][locality == 0 ? 0 : 1];
}
}

static const char *
output_282 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7403 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  static const char * const prefetch_instr[2][2] = {
    {
      "prefetch\t[%a0], 1", /* no locality: prefetch for one read */
      "prefetch\t[%a0], 0", /* medium to high locality: prefetch for several reads */
    },
    {
      "prefetch\t[%a0], 3", /* no locality: prefetch for one write */
      "prefetch\t[%a0], 2", /* medium to high locality: prefetch for several writes */
    }
  };
  int read_or_write = INTVAL (operands[1]);
  int locality = INTVAL (operands[2]);

  gcc_assert (read_or_write == 0 || read_or_write == 1);
  gcc_assert (locality >= 0 && locality < 4);
  return prefetch_instr [read_or_write][locality == 0 ? 0 : 1];
}
}

static const char *
output_284 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7445 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (TARGET_V9)
    return "t%C0\t%%icc, %1";
  else
    return "t%C0\t%1";
}
}

static const char *
output_351 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 103 "../../gcc-4.4.7/gcc/config/sparc/sync.md"
{
  if (sparc_check_64 (operands[3], insn) <= 0)
    output_asm_insn ("srl\t%L3, 0, %L3", operands);
  output_asm_insn ("sllx\t%H3, 32, %H3", operands);
  output_asm_insn ("or\t%L3, %H3, %L3", operands);
  if (sparc_check_64 (operands[2], insn) <= 0)
    output_asm_insn ("srl\t%L2, 0, %L2", operands);
  output_asm_insn ("sllx\t%H2, 32, %H3", operands);
  output_asm_insn ("or\t%L2, %H3, %H3", operands);
  output_asm_insn ("casx\t%1, %H3, %L3", operands);
  return "srlx\t%L3, 32, %H3";
}
}



static const struct insn_operand_data operand_data[] = 
{
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    fcc_register_operand,
    "=c",
    CCFPEmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    fcc_register_operand,
    "=c",
    CCFPEmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    1
  },
  {
    fcc_register_operand,
    "=c",
    CCFPEmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    TFmode,
    0,
    1
  },
  {
    fcc_register_operand,
    "=c",
    CCFPmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    fcc_register_operand,
    "=c",
    CCFPmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    1
  },
  {
    fcc_register_operand,
    "=c",
    CCFPmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    noov_compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    fcc_register_operand,
    "c",
    CCFPmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    fcc_register_operand,
    "c",
    CCFPEmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    call_address_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m",
    QImode,
    0,
    1
  },
  {
    input_operand,
    "rI,m,rJ",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m",
    HImode,
    0,
    1
  },
  {
    input_operand,
    "rI,K,m,rJ",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    small_int_operand,
    "I",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,!f,!f,!m,d",
    SImode,
    0,
    1
  },
  {
    input_operand,
    "rI,K,m,rJ,f,m,f,J",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "in",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "in",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    label_ref_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    label_ref_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=o,T,U,o,r,r,r,?T,?f,?f,?o,?f",
    DImode,
    0,
    1
  },
  {
    input_operand,
    "J,U,T,r,o,i,r,f,T,o,f,f",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=T,o,T,U,o,r,r,r,?T,?f,?f,?o,?e,?e,?W",
    DImode,
    0,
    1
  },
  {
    input_operand,
    "J,J,U,T,r,o,i,r,f,T,o,f,e,W,e",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    medium_pic_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    symbolic_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    symbolic_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    data_segment_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    data_segment_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    text_segment_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    text_segment_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,f,*r,*r,*r,f,*r,m,m",
    SFmode,
    0,
    1
  },
  {
    input_operand,
    "GY,f,*rRY,Q,S,m,m,f,*rGY",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,f,*r,*r,*r,f,*r,m,m",
    V2HImode,
    0,
    1
  },
  {
    input_operand,
    "GY,f,*rRY,Q,S,m,m,f,*rGY",
    V2HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,f,*r,*r,*r,f,*r,m,m",
    V4QImode,
    0,
    1
  },
  {
    input_operand,
    "GY,f,*rRY,Q,S,m,m,f,*rGY",
    V4QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,r,m",
    SFmode,
    0,
    1
  },
  {
    input_operand,
    "rR,Q,S,m,rG",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SFmode,
    0,
    1
  },
  {
    fp_const_high_losum_operand,
    "S",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SFmode,
    0,
    1
  },
  {
    fp_const_high_losum_operand,
    "S",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=e,W,U,T,o,e,*r,o,e,o",
    DFmode,
    0,
    1
  },
  {
    input_operand,
    "W#F,e,T,U,G,e,*rFo,*r,o#F,e",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=U,T,o,r,o",
    DFmode,
    0,
    1
  },
  {
    input_operand,
    "T,U,G,ro,r",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=b,e,e,T,W,U,T,f,*r,o",
    DFmode,
    0,
    1
  },
  {
    input_operand,
    "GY,e,W#F,GY,e,T,U,o#F,*roGYDF,*rGYf",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=b,e,e,T,W,U,T,f,*r,o",
    V2SImode,
    0,
    1
  },
  {
    input_operand,
    "GY,e,W#F,GY,e,T,U,o#F,*roGYDF,*rGYf",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=b,e,e,T,W,U,T,f,*r,o",
    V4HImode,
    0,
    1
  },
  {
    input_operand,
    "GY,e,W#F,GY,e,T,U,o#F,*roGYDF,*rGYf",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=b,e,e,T,W,U,T,f,*r,o",
    V8QImode,
    0,
    1
  },
  {
    input_operand,
    "GY,e,W#F,GY,e,T,U,o#F,*roGYDF,*rGYf",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=U,T,T,r,o",
    DFmode,
    0,
    1
  },
  {
    input_operand,
    "T,U,G,ro,rG",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=b,e,o,U,r",
    TFmode,
    0,
    1
  },
  {
    input_operand,
    "G,oe,GeUr,o,roG",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=o,U,o,r,o",
    TFmode,
    0,
    1
  },
  {
    input_operand,
    "G,o,U,roG,r",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    QImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    icc_or_fcc_register_operand,
    "X,X",
    VOIDmode,
    0,
    1
  },
  {
    arith11_operand,
    "rL,0",
    QImode,
    0,
    1
  },
  {
    arith11_operand,
    "0,rL",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    icc_or_fcc_register_operand,
    "X,X",
    VOIDmode,
    0,
    1
  },
  {
    arith11_operand,
    "rL,0",
    HImode,
    0,
    1
  },
  {
    arith11_operand,
    "0,rL",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    icc_or_fcc_register_operand,
    "X,X",
    VOIDmode,
    0,
    1
  },
  {
    arith11_operand,
    "rL,0",
    SImode,
    0,
    1
  },
  {
    arith11_operand,
    "0,rL",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    icc_or_fcc_register_operand,
    "X,X",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=e,e",
    DFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    icc_or_fcc_register_operand,
    "X,X",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "e,0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=e,e",
    TFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    icc_or_fcc_register_operand,
    "X,X",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "e,0",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "0,e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    1
  },
  {
    input_operand,
    "r,m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    input_operand,
    "r,m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    small_int_operand,
    "I",
    SImode,
    0,
    1
  },
  {
    small_int_operand,
    "I",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    arith_double_operand,
    "%r",
    DImode,
    0,
    1
  },
  {
    arith_double_operand,
    "rHI",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_or_zero_operand,
    "%rJ",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%r,r,d",
    SImode,
    0,
    1
  },
  {
    arith_add_operand,
    "rI,O,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    arith_double_operand,
    "rHI",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,r,d",
    SImode,
    0,
    1
  },
  {
    arith_add_operand,
    "rI,O,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,h",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "%r,0",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,rI",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&h,X",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&h,X",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=h,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,&h",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=h,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    small_int_operand,
    "I,I",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,&h",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    small_int_operand,
    "I",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=h,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    small_int_operand,
    "I,I",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,&h",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=h,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    small_int_operand,
    "I,I",
    DImode,
    0,
    1
  },
  {
    small_int_operand,
    "I,I",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,&h",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    small_int_operand,
    "i",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    uns_small_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=h,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    uns_small_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,h",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=h,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    small_int_operand,
    "I,I",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,h",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=h,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    uns_small_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    small_int_operand,
    "I,I",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,h",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    uns_small_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,r,r",
    SImode,
    0,
    1
  },
  {
    input_operand,
    "rI,K,m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r,&r,&r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=r,&r,&r,&r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,r,r,m",
    SImode,
    0,
    1
  },
  {
    input_operand,
    "rI,K,m,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    DImode,
    0,
    1
  },
  {
    arith_double_operand,
    "%r,b",
    DImode,
    0,
    1
  },
  {
    arith_double_operand,
    "rHI,b",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V2SImode,
    0,
    1
  },
  {
    arith_double_operand,
    "%r,b",
    V2SImode,
    0,
    1
  },
  {
    arith_double_operand,
    "rHI,b",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V4HImode,
    0,
    1
  },
  {
    arith_double_operand,
    "%r,b",
    V4HImode,
    0,
    1
  },
  {
    arith_double_operand,
    "rHI,b",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V8QImode,
    0,
    1
  },
  {
    arith_double_operand,
    "%r,b",
    V8QImode,
    0,
    1
  },
  {
    arith_double_operand,
    "rHI,b",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "%r,d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V2HImode,
    0,
    1
  },
  {
    arith_operand,
    "%r,d",
    V2HImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V4QImode,
    0,
    1
  },
  {
    arith_operand,
    "%r,d",
    V4QImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%r,b",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "%r,b",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "%r,b",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "%r,b",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%r,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "%r,d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "r,d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "%r,d",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "r,d",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,b",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "r,b",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "r,d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "r,d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "r,d",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "r,d",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "%rJ,d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V2HImode,
    0,
    1
  },
  {
    arith_operand,
    "%rJ,d",
    V2HImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V4QImode,
    0,
    1
  },
  {
    arith_operand,
    "%rJ,d",
    V4QImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    SImode,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ,d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V2HImode,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ,d",
    V2HImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V4QImode,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ,d",
    V4QImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    V4QImode,
    0,
    1
  },
  {
    arith_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    cc_arith_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    cc_arith_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_arith_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_or_zero_operand,
    "%rJ",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ",
    SImode,
    0,
    1
  },
  {
    cc_arith_not_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ",
    SImode,
    0,
    1
  },
  {
    cc_arith_not_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_arith_not_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=r,d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V2HImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,d",
    V4QImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,d",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=e,e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "0,e",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=e,e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,e",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=&h,&h,r",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,0,rI",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "rI,rI,rI",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,X,&h",
    SImode,
    0,
    0
  },
  {
    address_operand,
    "p",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    symbolic_operand,
    "s",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    address_operand,
    "p",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    symbolic_operand,
    "s",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "=rf",
    VOIDmode,
    0,
    1
  },
  {
    address_operand,
    "p",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "=rf",
    VOIDmode,
    0,
    1
  },
  {
    symbolic_operand,
    "s",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    address_operand,
    "p",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    DImode,
    0,
    1
  },
  {
    address_operand,
    "p",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    noov_compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    arith_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    tgd_symbolic_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    tgd_symbolic_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    tgd_symbolic_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    1
  },
  {
    symbolic_operand,
    "s",
    SImode,
    0,
    1
  },
  {
    tgd_symbolic_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    1
  },
  {
    symbolic_operand,
    "s",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    tld_symbolic_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    tld_symbolic_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    tld_symbolic_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    tie_symbolic_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    tie_symbolic_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    tie_symbolic_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    tle_symbolic_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    tle_symbolic_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    tld_symbolic_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    tld_symbolic_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=e",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ",
    SImode,
    0,
    1
  },
  {
    register_or_zero_operand,
    "rJ",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=e",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "e",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    BLKmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_reg_operand,
    "+m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=h",
    DImode,
    0,
    1
  },
  {
    memory_reg_operand,
    "+m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "h",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    QImode,
    0,
    1
  },
  {
    compare_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    int_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    icc_or_fcc_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    noov_compare_operator,
    "",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_double_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_zero_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    fp_const_high_losum_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    const_double_or_vector_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    const_double_or_vector_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    const_double_or_vector_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    const_double_or_vector_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    const_zero_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    const_zero_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    const_zero_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    const_zero_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    const_zero_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    const_zero_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    const_zero_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    const_zero_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    const_zero_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arith10_operand,
    "",
    QImode,
    0,
    1
  },
  {
    arith10_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arith10_operand,
    "",
    HImode,
    0,
    1
  },
  {
    arith10_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arith10_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arith10_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    icc_or_fcc_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arith_double_add_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arith_double_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arith_double_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_or_zero_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arith_double_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    uns_arith_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    uns_arith_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    input_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    input_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    arith_double_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    arith_double_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    arith_double_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    arith_double_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    arith_double_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    arith_double_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_compl_high_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    cc_arith_operator,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arith_double_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    cc_arith_operator,
    "",
    V2SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    arith_double_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    cc_arith_operator,
    "",
    V4HImode,
    0,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    arith_double_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    cc_arith_operator,
    "",
    V8QImode,
    0,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    arith_double_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=rf",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    address_operand,
    "p",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    address_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    noov_compare_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
};


#if GCC_VERSION >= 2007
__extension__
#endif

const struct insn_data insn_data[] = 
{
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:412 */
  {
    "*cmpsi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:428 */
  {
    "*cmpsf_fpe",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1 },
#else
    { 0, 0, output_1 },
#endif
    0,
    &operand_data[3],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:440 */
  {
    "*cmpdf_fpe",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_2 },
#else
    { 0, 0, output_2 },
#endif
    0,
    &operand_data[6],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:453 */
  {
    "*cmptf_fpe",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_3 },
#else
    { 0, 0, output_3 },
#endif
    0,
    &operand_data[9],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:465 */
  {
    "*cmpsf_fp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_4 },
#else
    { 0, 0, output_4 },
#endif
    0,
    &operand_data[12],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:477 */
  {
    "*cmpdf_fp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_5 },
#else
    { 0, 0, output_5 },
#endif
    0,
    &operand_data[15],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:490 */
  {
    "*cmptf_fp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_6 },
#else
    { 0, 0, output_6 },
#endif
    0,
    &operand_data[18],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:885 */
  {
    "*snesi_zero",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[21],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:899 */
  {
    "*neg_snesi_zero",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[21],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:976 */
  {
    "*seqsi_zero",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[21],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:990 */
  {
    "*neg_seqsi_zero",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[21],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1071 */
  {
    "*x_plus_i_ne_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[21],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1087 */
  {
    "*x_minus_i_ne_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[21],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1103 */
  {
    "*x_plus_i_eq_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[21],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1119 */
  {
    "*x_minus_i_eq_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[21],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1139 */
  {
    "*sltu_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addx\t%%g0, 0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[21],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1146 */
  {
    "*neg_sltu_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subx\t%%g0, 0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[21],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1154 */
  {
    "*neg_sltu_minus_x",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subx\t%%g0, %1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[24],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1162 */
  {
    "*neg_sltu_plus_x",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subx\t%%g0, %1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[24],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1170 */
  {
    "*sgeu_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subx\t%%g0, -1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[21],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1177 */
  {
    "*neg_sgeu_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addx\t%%g0, -1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[21],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1188 */
  {
    "*sltu_plus_x",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addx\t%%g0, %1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[24],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1196 */
  {
    "*sltu_plus_x_plus_y",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addx\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[26],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1205 */
  {
    "*x_minus_sltu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subx\t%1, 0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[21],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1214 */
  {
    "*x_minus_y_minus_sltu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subx\t%r1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[29],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1223 */
  {
    "*x_minus_sltu_plus_y",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subx\t%r1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[29],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1232 */
  {
    "*sgeu_plus_x",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subx\t%1, -1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[21],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1240 */
  {
    "*x_minus_sgeu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addx\t%1, -1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[21],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1609 */
  {
    "*normal_branch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_28 },
#else
    { 0, 0, output_28 },
#endif
    0,
    &operand_data[32],
    2,
    0,
    0,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1625 */
  {
    "*inverted_branch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_29 },
#else
    { 0, 0, output_29 },
#endif
    0,
    &operand_data[32],
    2,
    0,
    0,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1641 */
  {
    "*normal_fp_branch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_30 },
#else
    { 0, 0, output_30 },
#endif
    0,
    &operand_data[34],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1658 */
  {
    "*inverted_fp_branch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_31 },
#else
    { 0, 0, output_31 },
#endif
    0,
    &operand_data[34],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1675 */
  {
    "*normal_fpe_branch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_32 },
#else
    { 0, 0, output_32 },
#endif
    0,
    &operand_data[37],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1692 */
  {
    "*inverted_fpe_branch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_33 },
#else
    { 0, 0, output_33 },
#endif
    0,
    &operand_data[37],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1748 */
  {
    "load_pcrel_symsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_34 },
#else
    { 0, 0, output_34 },
#endif
    (insn_gen_fn) gen_load_pcrel_symsi,
    &operand_data[40],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1784 */
  {
    "*movqi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_35 },
#else
    { 0, output_35, 0 },
#endif
    0,
    &operand_data[43],
    2,
    0,
    3,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1805 */
  {
    "*movhi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_36 },
#else
    { 0, output_36, 0 },
#endif
    0,
    &operand_data[45],
    2,
    0,
    4,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1819 */
  {
    "*movhi_lo_sum",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[47],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1835 */
  {
    "*movsi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_38 },
#else
    { 0, output_38, 0 },
#endif
    0,
    &operand_data[50],
    2,
    0,
    8,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1851 */
  {
    "*movsi_lo_sum",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%1, %%lo(%a2), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[52],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1858 */
  {
    "*movsi_high",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sethi\t%%hi(%a1), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[55],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1866 */
  {
    "movsi_lo_sum_pic",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%1, %%lo(%a2), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_movsi_lo_sum_pic,
    &operand_data[52],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1873 */
  {
    "movsi_high_pic",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sethi\t%%hi(%a1), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_movsi_high_pic,
    &operand_data[57],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1904 */
  {
    "*movsi_high_pic_label_ref",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sethi\t%%hi(%a2-(%a1-.)), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[59],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1912 */
  {
    "*movsi_lo_sum_pic_label_ref",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%1, %%lo(%a3-(%a2-.)), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[62],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1957 */
  {
    "*movdi_insn_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_45 },
#else
    { 0, output_45, 0 },
#endif
    0,
    &operand_data[66],
    2,
    0,
    12,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1981 */
  {
    "*movdi_insn_sp32_v9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_46 },
#else
    { 0, output_46, 0 },
#endif
    0,
    &operand_data[68],
    2,
    0,
    15,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2085 */
  {
    "*sethi_di_medlow_embmedany_pic",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sethi\t%%hi(%a1), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[70],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2091 */
  {
    "*sethi_di_medlow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sethi\t%%hi(%a1), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[72],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2097 */
  {
    "*losum_di_medlow",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%1, %%lo(%a2), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[74],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2104 */
  {
    "seth44",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sethi\t%%h44(%a1), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_seth44,
    &operand_data[72],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2110 */
  {
    "setm44",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%1, %%m44(%a2), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_setm44,
    &operand_data[74],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2117 */
  {
    "setl44",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%1, %%l44(%a2), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_setl44,
    &operand_data[74],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2124 */
  {
    "sethh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sethi\t%%hh(%a1), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sethh,
    &operand_data[72],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2130 */
  {
    "setlm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sethi\t%%lm(%a1), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_setlm,
    &operand_data[72],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2136 */
  {
    "sethm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%1, %%hm(%a2), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sethm,
    &operand_data[74],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2143 */
  {
    "setlo",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%1, %%lo(%a2), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_setlo,
    &operand_data[74],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2150 */
  {
    "embmedany_sethi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sethi\t%%hi(%a1), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_embmedany_sethi,
    &operand_data[77],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2156 */
  {
    "embmedany_losum",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t%1, %%lo(%a2), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_embmedany_losum,
    &operand_data[79],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2163 */
  {
    "embmedany_brsum",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t%1, %_, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_embmedany_brsum,
    &operand_data[74],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2169 */
  {
    "embmedany_textuhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sethi\t%%uhi(%a1), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_embmedany_textuhi,
    &operand_data[82],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2175 */
  {
    "embmedany_texthi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sethi\t%%hi(%a1), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_embmedany_texthi,
    &operand_data[82],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2181 */
  {
    "embmedany_textulo",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%1, %%ulo(%a2), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_embmedany_textulo,
    &operand_data[84],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2188 */
  {
    "embmedany_textlo",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%1, %%lo(%a2), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_embmedany_textlo,
    &operand_data[84],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2399 */
  {
    "*movsf_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_64 },
#else
    { 0, 0, output_64 },
#endif
    0,
    &operand_data[87],
    2,
    0,
    9,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2399 */
  {
    "*movsf_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_65 },
#else
    { 0, 0, output_65 },
#endif
    0,
    &operand_data[89],
    2,
    0,
    9,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2399 */
  {
    "*movsf_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_66 },
#else
    { 0, 0, output_66 },
#endif
    0,
    &operand_data[91],
    2,
    0,
    9,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2447 */
  {
    "*movsf_insn_no_fpu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_67 },
#else
    { 0, 0, output_67 },
#endif
    0,
    &operand_data[93],
    2,
    0,
    5,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2487 */
  {
    "*movsf_lo_sum",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_68 },
#else
    { 0, 0, output_68 },
#endif
    0,
    &operand_data[95],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2502 */
  {
    "*movsf_high",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_69 },
#else
    { 0, 0, output_69 },
#endif
    0,
    &operand_data[98],
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2536 */
  {
    "*movdf_insn_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_70 },
#else
    { 0, output_70, 0 },
#endif
    0,
    &operand_data[100],
    2,
    0,
    10,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2557 */
  {
    "*movdf_insn_sp32_no_fpu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_71 },
#else
    { 0, output_71, 0 },
#endif
    0,
    &operand_data[102],
    2,
    0,
    5,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2574 */
  {
    "*movdf_insn_sp32_v9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_72 },
#else
    { 0, output_72, 0 },
#endif
    0,
    &operand_data[104],
    2,
    0,
    10,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2574 */
  {
    "*movdf_insn_sp32_v9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_73 },
#else
    { 0, output_73, 0 },
#endif
    0,
    &operand_data[106],
    2,
    0,
    10,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2574 */
  {
    "*movdf_insn_sp32_v9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_74 },
#else
    { 0, output_74, 0 },
#endif
    0,
    &operand_data[108],
    2,
    0,
    10,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2574 */
  {
    "*movdf_insn_sp32_v9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_75 },
#else
    { 0, output_75, 0 },
#endif
    0,
    &operand_data[110],
    2,
    0,
    10,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2597 */
  {
    "*movdf_insn_sp32_v9_no_fpu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_76 },
#else
    { 0, output_76, 0 },
#endif
    0,
    &operand_data[112],
    2,
    0,
    5,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2876 */
  {
    "*movtf_insn_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[114],
    2,
    0,
    5,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2890 */
  {
    "*movtf_insn_sp32_no_fpu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[116],
    2,
    0,
    5,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3116 */
  {
    "*movqi_cc_v9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_79 },
#else
    { 0, output_79, 0 },
#endif
    0,
    &operand_data[118],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3116 */
  {
    "*movhi_cc_v9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_80 },
#else
    { 0, output_80, 0 },
#endif
    0,
    &operand_data[123],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3116 */
  {
    "*movsi_cc_v9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_81 },
#else
    { 0, output_81, 0 },
#endif
    0,
    &operand_data[128],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3142 */
  {
    "*movsf_cc_v9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_82 },
#else
    { 0, output_82, 0 },
#endif
    0,
    &operand_data[133],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3169 */
  {
    "movdf_cc_v9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_83 },
#else
    { 0, output_83, 0 },
#endif
    (insn_gen_fn) gen_movdf_cc_v9,
    &operand_data[138],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3198 */
  {
    "*movtf_cc_hq_v9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_84 },
#else
    { 0, output_84, 0 },
#endif
    0,
    &operand_data[143],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3224 */
  {
    "*movtf_cc_v9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[143],
    5,
    0,
    2,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3340 */
  {
    "*zero_extendhisi2_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lduh\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[148],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3354 */
  {
    "*zero_extendqihi2_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_87 },
#else
    { 0, output_87, 0 },
#endif
    0,
    &operand_data[150],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3370 */
  {
    "*zero_extendqisi2_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_88 },
#else
    { 0, output_88, 0 },
#endif
    0,
    &operand_data[152],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3444 */
  {
    "*zero_extendsidi2_insn_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[154],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3478 */
  {
    "*cmp_zero_extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andcc\t%0, 0xff, %%g0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[156],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3486 */
  {
    "*cmp_zero_qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andcc\t%0, 0xff, %%g0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[156],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3494 */
  {
    "*cmp_zero_extendqisi2_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andcc\t%1, 0xff, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[157],
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3504 */
  {
    "*cmp_zero_extendqisi2_andcc_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andcc\t%1, 0xff, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[21],
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3554 */
  {
    "*cmp_siqi_trunc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andcc\t%0, 0xff, %%g0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3562 */
  {
    "*cmp_siqi_trunc_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andcc\t%1, 0xff, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[159],
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3620 */
  {
    "*sign_extendhisi2_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldsh\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[148],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3660 */
  {
    "*sign_extendqihi2_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldsb\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[161],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3691 */
  {
    "*sign_extendqisi2_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldsb\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[163],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3781 */
  {
    "*cmp_zero_extract",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_99 },
#else
    { 0, 0, output_99 },
#endif
    0,
    &operand_data[165],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3818 */
  {
    "extendsfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fstod\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_extendsfdf2,
    &operand_data[168],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3834 */
  {
    "*extendsftf2_hq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fstoq\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[170],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3849 */
  {
    "*extenddftf2_hq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fdtoq\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[172],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3857 */
  {
    "truncdfsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fdtos\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_truncdfsf2,
    &operand_data[174],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3873 */
  {
    "*trunctfsf2_hq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fqtos\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[176],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3888 */
  {
    "*trunctfdf2_hq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fqtod\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[178],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3899 */
  {
    "floatsisf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fitos\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatsisf2,
    &operand_data[180],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3907 */
  {
    "floatsidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fitod\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatsidf2,
    &operand_data[182],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3921 */
  {
    "*floatsitf2_hq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fitoq\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[184],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3936 */
  {
    "floatdisf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fxtos\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatdisf2,
    &operand_data[186],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3950 */
  {
    "floatdidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fxtod\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatdidf2,
    &operand_data[188],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3970 */
  {
    "*floatditf2_hq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fxtoq\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[190],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3986 */
  {
    "fix_truncsfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fstoi\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsfsi2,
    &operand_data[192],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3994 */
  {
    "fix_truncdfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fdtoi\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfsi2,
    &operand_data[194],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4008 */
  {
    "*fix_trunctfsi2_hq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fqtoi\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[196],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4023 */
  {
    "fix_truncsfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fstox\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsfdi2,
    &operand_data[198],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4037 */
  {
    "fix_truncdfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fdtox\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfdi2,
    &operand_data[200],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4057 */
  {
    "*fix_trunctfdi2_hq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fqtox\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[202],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4091 */
  {
    "adddi3_insn_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_adddi3_insn_sp32,
    &operand_data[204],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4130 */
  {
    "addx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addx\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addx,
    &operand_data[26],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4139 */
  {
    "*addx_extend_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[207],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4164 */
  {
    "*sparc.md:4164",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[210],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4194 */
  {
    "addsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_122 },
#else
    { 0, output_122, 0 },
#endif
    (insn_gen_fn) gen_addsi3,
    &operand_data[213],
    3,
    0,
    3,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4206 */
  {
    "*cmp_cc_plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addcc\t%0, %1, %%g0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[27],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4224 */
  {
    "*cmp_cc_plus_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addcc\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[26],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4264 */
  {
    "subdi3_insn_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subdi3_insn_sp32,
    &operand_data[216],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4303 */
  {
    "subx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subx\t%r1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subx,
    &operand_data[29],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4321 */
  {
    "*subx_extend",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[219],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4336 */
  {
    "*sparc.md:4336",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[222],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4366 */
  {
    "subsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_129 },
#else
    { 0, output_129, 0 },
#endif
    (insn_gen_fn) gen_subsi3,
    &operand_data[225],
    3,
    0,
    3,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4378 */
  {
    "*cmp_minus_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subcc\t%r0, %1, %%g0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[30],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4396 */
  {
    "cmp_minus_cc_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subcc\t%r1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cmp_minus_cc_set,
    &operand_data[29],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4424 */
  {
    "mulsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smul\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulsi3,
    &operand_data[26],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4455 */
  {
    "muldi3_v8plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_133 },
#else
    { 0, 0, output_133 },
#endif
    (insn_gen_fn) gen_muldi3_v8plus,
    &operand_data[228],
    5,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4491 */
  {
    "*cmp_mul_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smulcc\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[26],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4531 */
  {
    "mulsidi3_v8plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_135 },
#else
    { 0, output_135, 0 },
#endif
    (insn_gen_fn) gen_mulsidi3_v8plus,
    &operand_data[233],
    4,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4544 */
  {
    "const_mulsidi3_v8plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_136 },
#else
    { 0, output_136, 0 },
#endif
    (insn_gen_fn) gen_const_mulsidi3_v8plus,
    &operand_data[237],
    4,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4557 */
  {
    "*mulsidi3_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_137 },
#else
    { 0, 0, output_137 },
#endif
    0,
    &operand_data[241],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4585 */
  {
    "const_mulsidi3_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_138 },
#else
    { 0, 0, output_138 },
#endif
    (insn_gen_fn) gen_const_mulsidi3_sp32,
    &operand_data[244],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4640 */
  {
    "smulsi3_highpart_v8plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_139 },
#else
    { 0, output_139, 0 },
#endif
    (insn_gen_fn) gen_smulsi3_highpart_v8plus,
    &operand_data[247],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4656 */
  {
    "*sparc.md:4656",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_140 },
#else
    { 0, output_140, 0 },
#endif
    0,
    &operand_data[247],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4673 */
  {
    "const_smulsi3_highpart_v8plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_141 },
#else
    { 0, output_141, 0 },
#endif
    (insn_gen_fn) gen_const_smulsi3_highpart_v8plus,
    &operand_data[252],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4688 */
  {
    "*smulsi3_highpart_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smul\t%1, %2, %%g0\n\trd\t%%y, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[21],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4700 */
  {
    "const_smulsi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smul\t%1, %2, %%g0\n\trd\t%%y, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_const_smulsi3_highpart,
    &operand_data[257],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4738 */
  {
    "umulsidi3_v8plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_144 },
#else
    { 0, output_144, 0 },
#endif
    (insn_gen_fn) gen_umulsidi3_v8plus,
    &operand_data[233],
    4,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4751 */
  {
    "*umulsidi3_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_145 },
#else
    { 0, 0, output_145 },
#endif
    0,
    &operand_data[241],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4779 */
  {
    "const_umulsidi3_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_146 },
#else
    { 0, 0, output_146 },
#endif
    (insn_gen_fn) gen_const_umulsidi3_sp32,
    &operand_data[260],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4805 */
  {
    "const_umulsidi3_v8plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_147 },
#else
    { 0, output_147, 0 },
#endif
    (insn_gen_fn) gen_const_umulsidi3_v8plus,
    &operand_data[263],
    4,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4847 */
  {
    "umulsi3_highpart_v8plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_148 },
#else
    { 0, output_148, 0 },
#endif
    (insn_gen_fn) gen_umulsi3_highpart_v8plus,
    &operand_data[267],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4862 */
  {
    "const_umulsi3_highpart_v8plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_149 },
#else
    { 0, output_149, 0 },
#endif
    (insn_gen_fn) gen_const_umulsi3_highpart_v8plus,
    &operand_data[272],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4877 */
  {
    "*umulsi3_highpart_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "umul\t%1, %2, %%g0\n\trd\t%%y, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[21],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4889 */
  {
    "const_umulsi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "umul\t%1, %s2, %%g0\n\trd\t%%y, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_const_umulsi3_highpart,
    &operand_data[277],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4921 */
  {
    "divsi3_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_152 },
#else
    { 0, 0, output_152 },
#endif
    (insn_gen_fn) gen_divsi3_sp32,
    &operand_data[280],
    4,
    0,
    3,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4975 */
  {
    "*cmp_sdiv_cc_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_153 },
#else
    { 0, 0, output_153 },
#endif
    0,
    &operand_data[284],
    4,
    2,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5010 */
  {
    "udivsi3_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_154 },
#else
    { 0, 0, output_154 },
#endif
    (insn_gen_fn) gen_udivsi3_sp32,
    &operand_data[288],
    3,
    0,
    4,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5066 */
  {
    "*cmp_udiv_cc_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_155 },
#else
    { 0, 0, output_155 },
#endif
    0,
    &operand_data[284],
    3,
    2,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5089 */
  {
    "*smacsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smac\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[291],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5098 */
  {
    "*smacdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smacd\t%1, %2, %L0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[295],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5109 */
  {
    "*umacdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "umacd\t%1, %2, %L0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[295],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5136 */
  {
    "*anddi3_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_159 },
#else
    { 0, output_159, 0 },
#endif
    0,
    &operand_data[299],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5136 */
  {
    "*andv2si3_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_160 },
#else
    { 0, output_160, 0 },
#endif
    0,
    &operand_data[302],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5136 */
  {
    "*andv4hi3_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_161 },
#else
    { 0, output_161, 0 },
#endif
    0,
    &operand_data[305],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5136 */
  {
    "*andv8qi3_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_162 },
#else
    { 0, output_162, 0 },
#endif
    0,
    &operand_data[308],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5159 */
  {
    "andsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_163 },
#else
    { 0, output_163, 0 },
#endif
    (insn_gen_fn) gen_andsi3,
    &operand_data[311],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5159 */
  {
    "andv2hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_164 },
#else
    { 0, output_164, 0 },
#endif
    (insn_gen_fn) gen_andv2hi3,
    &operand_data[314],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5159 */
  {
    "andv4qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_165 },
#else
    { 0, output_165, 0 },
#endif
    (insn_gen_fn) gen_andv4qi3,
    &operand_data[317],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5182 */
  {
    "*and_not_di_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_166 },
#else
    { 0, output_166, 0 },
#endif
    0,
    &operand_data[320],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5182 */
  {
    "*and_not_v2si_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_167 },
#else
    { 0, output_167, 0 },
#endif
    0,
    &operand_data[323],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5182 */
  {
    "*and_not_v4hi_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_168 },
#else
    { 0, output_168, 0 },
#endif
    0,
    &operand_data[326],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5182 */
  {
    "*and_not_v8qi_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_169 },
#else
    { 0, output_169, 0 },
#endif
    0,
    &operand_data[329],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5219 */
  {
    "*and_not_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_170 },
#else
    { 0, output_170, 0 },
#endif
    0,
    &operand_data[332],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5219 */
  {
    "*and_not_v2hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_171 },
#else
    { 0, output_171, 0 },
#endif
    0,
    &operand_data[335],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5219 */
  {
    "*and_not_v4qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_172 },
#else
    { 0, output_172, 0 },
#endif
    0,
    &operand_data[338],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5237 */
  {
    "*iordi3_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_173 },
#else
    { 0, output_173, 0 },
#endif
    0,
    &operand_data[299],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5237 */
  {
    "*iorv2si3_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_174 },
#else
    { 0, output_174, 0 },
#endif
    0,
    &operand_data[302],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5237 */
  {
    "*iorv4hi3_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_175 },
#else
    { 0, output_175, 0 },
#endif
    0,
    &operand_data[305],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5237 */
  {
    "*iorv8qi3_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_176 },
#else
    { 0, output_176, 0 },
#endif
    0,
    &operand_data[308],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5260 */
  {
    "iorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_177 },
#else
    { 0, output_177, 0 },
#endif
    (insn_gen_fn) gen_iorsi3,
    &operand_data[311],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5260 */
  {
    "iorv2hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_178 },
#else
    { 0, output_178, 0 },
#endif
    (insn_gen_fn) gen_iorv2hi3,
    &operand_data[314],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5260 */
  {
    "iorv4qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_179 },
#else
    { 0, output_179, 0 },
#endif
    (insn_gen_fn) gen_iorv4qi3,
    &operand_data[317],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5283 */
  {
    "*or_not_di_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_180 },
#else
    { 0, output_180, 0 },
#endif
    0,
    &operand_data[341],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5283 */
  {
    "*or_not_v2si_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_181 },
#else
    { 0, output_181, 0 },
#endif
    0,
    &operand_data[344],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5283 */
  {
    "*or_not_v4hi_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_182 },
#else
    { 0, output_182, 0 },
#endif
    0,
    &operand_data[347],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5283 */
  {
    "*or_not_v8qi_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_183 },
#else
    { 0, output_183, 0 },
#endif
    0,
    &operand_data[350],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5320 */
  {
    "*or_not_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_184 },
#else
    { 0, output_184, 0 },
#endif
    0,
    &operand_data[353],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5320 */
  {
    "*or_not_v2hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_185 },
#else
    { 0, output_185, 0 },
#endif
    0,
    &operand_data[356],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5320 */
  {
    "*or_not_v4qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_186 },
#else
    { 0, output_186, 0 },
#endif
    0,
    &operand_data[359],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5338 */
  {
    "*xordi3_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_187 },
#else
    { 0, output_187, 0 },
#endif
    0,
    &operand_data[299],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5338 */
  {
    "*xorv2si3_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_188 },
#else
    { 0, output_188, 0 },
#endif
    0,
    &operand_data[302],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5338 */
  {
    "*xorv4hi3_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_189 },
#else
    { 0, output_189, 0 },
#endif
    0,
    &operand_data[305],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5338 */
  {
    "*xorv8qi3_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_190 },
#else
    { 0, output_190, 0 },
#endif
    0,
    &operand_data[308],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5361 */
  {
    "xorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_191 },
#else
    { 0, output_191, 0 },
#endif
    (insn_gen_fn) gen_xorsi3,
    &operand_data[362],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5361 */
  {
    "xorv2hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_192 },
#else
    { 0, output_192, 0 },
#endif
    (insn_gen_fn) gen_xorv2hi3,
    &operand_data[365],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5361 */
  {
    "xorv4qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_193 },
#else
    { 0, output_193, 0 },
#endif
    (insn_gen_fn) gen_xorv4qi3,
    &operand_data[368],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5432 */
  {
    "*xor_not_di_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_194 },
#else
    { 0, output_194, 0 },
#endif
    0,
    &operand_data[341],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5432 */
  {
    "*xor_not_v2si_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_195 },
#else
    { 0, output_195, 0 },
#endif
    0,
    &operand_data[344],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5432 */
  {
    "*xor_not_v4hi_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_196 },
#else
    { 0, output_196, 0 },
#endif
    0,
    &operand_data[347],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5432 */
  {
    "*xor_not_v8qi_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_197 },
#else
    { 0, output_197, 0 },
#endif
    0,
    &operand_data[350],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5469 */
  {
    "*xor_not_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_198 },
#else
    { 0, output_198, 0 },
#endif
    0,
    &operand_data[371],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5469 */
  {
    "*xor_not_v2hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_199 },
#else
    { 0, output_199, 0 },
#endif
    0,
    &operand_data[374],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5469 */
  {
    "*xor_not_v4qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_200 },
#else
    { 0, output_200, 0 },
#endif
    0,
    &operand_data[377],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5483 */
  {
    "*cmp_cc_arith_op",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%A2cc\t%0, %1, %%g0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[380],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5505 */
  {
    "*cmp_cc_arith_op_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%A3cc\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[383],
    5,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5531 */
  {
    "*cmp_cc_xor_not",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xnorcc\t%r0, %1, %%g0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[208],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5551 */
  {
    "*cmp_cc_xor_not_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xnorcc\t%r1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[388],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5575 */
  {
    "*cmp_cc_arith_op_not",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%B2cc\t%r1, %0, %%g0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[390],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5597 */
  {
    "*cmp_cc_arith_op_not_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%B3cc\t%r2, %1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[393],
    5,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5647 */
  {
    "*negdi2_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[74],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5672 */
  {
    "negsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub\t%%g0, %1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_negsi2,
    &operand_data[24],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5678 */
  {
    "*cmp_cc_neg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subcc\t%%g0, %0, %%g0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5694 */
  {
    "*cmp_cc_set_neg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subcc\t%%g0, %1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[24],
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5722 */
  {
    "*one_cmpldi2_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_211 },
#else
    { 0, output_211, 0 },
#endif
    0,
    &operand_data[341],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5722 */
  {
    "*one_cmplv2si2_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_212 },
#else
    { 0, output_212, 0 },
#endif
    0,
    &operand_data[344],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5722 */
  {
    "*one_cmplv4hi2_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_213 },
#else
    { 0, output_213, 0 },
#endif
    0,
    &operand_data[347],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5722 */
  {
    "*one_cmplv8qi2_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_214 },
#else
    { 0, output_214, 0 },
#endif
    0,
    &operand_data[350],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5755 */
  {
    "one_cmplsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_215 },
#else
    { 0, output_215, 0 },
#endif
    (insn_gen_fn) gen_one_cmplsi2,
    &operand_data[398],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5755 */
  {
    "one_cmplv2hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_216 },
#else
    { 0, output_216, 0 },
#endif
    (insn_gen_fn) gen_one_cmplv2hi2,
    &operand_data[400],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5755 */
  {
    "one_cmplv4qi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_217 },
#else
    { 0, output_217, 0 },
#endif
    (insn_gen_fn) gen_one_cmplv4qi2,
    &operand_data[402],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5765 */
  {
    "*cmp_cc_not",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xnorcc\t%%g0, %0, %%g0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5781 */
  {
    "*cmp_cc_set_not",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xnorcc\t%%g0, %1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[24],
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5801 */
  {
    "*cmp_cc_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orcc\t%1, 0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[21],
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5831 */
  {
    "*addtf3_hq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "faddq\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[404],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5839 */
  {
    "adddf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "faddd\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_adddf3,
    &operand_data[407],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5848 */
  {
    "addsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fadds\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addsf3,
    &operand_data[410],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5863 */
  {
    "*subtf3_hq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsubq\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[404],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5871 */
  {
    "subdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsubd\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subdf3,
    &operand_data[407],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5880 */
  {
    "subsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsubs\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subsf3,
    &operand_data[410],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5895 */
  {
    "*multf3_hq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmulq\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[404],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5903 */
  {
    "muldf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmuld\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_muldf3,
    &operand_data[407],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5912 */
  {
    "mulsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmuls\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulsf3,
    &operand_data[410],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5920 */
  {
    "*muldf3_extend",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsmuld\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[413],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5929 */
  {
    "*multf3_extend",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fdmulq\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[416],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5945 */
  {
    "*divtf3_hq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fdivq\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[404],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5953 */
  {
    "divdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fdivd\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_divdf3,
    &operand_data[407],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5962 */
  {
    "divsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fdivs\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_divsf3,
    &operand_data[410],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5976 */
  {
    "*negtf2_notv9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_235 },
#else
    { 0, output_235, 0 },
#endif
    0,
    &operand_data[419],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5999 */
  {
    "*negtf2_v9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_236 },
#else
    { 0, output_236, 0 },
#endif
    0,
    &operand_data[419],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6025 */
  {
    "*negdf2_notv9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_237 },
#else
    { 0, output_237, 0 },
#endif
    0,
    &operand_data[421],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6043 */
  {
    "*negdf2_v9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnegd\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[407],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6051 */
  {
    "negsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnegs\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_negsf2,
    &operand_data[410],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6064 */
  {
    "*abstf2_notv9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_240 },
#else
    { 0, output_240, 0 },
#endif
    0,
    &operand_data[419],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6086 */
  {
    "*abstf2_hq_v9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_241 },
#else
    { 0, output_241, 0 },
#endif
    0,
    &operand_data[419],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6096 */
  {
    "*abstf2_v9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_242 },
#else
    { 0, output_242, 0 },
#endif
    0,
    &operand_data[419],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6121 */
  {
    "*absdf2_notv9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_243 },
#else
    { 0, output_243, 0 },
#endif
    0,
    &operand_data[421],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6139 */
  {
    "*absdf2_v9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabsd\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[407],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6147 */
  {
    "abssf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabss\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_abssf2,
    &operand_data[410],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6160 */
  {
    "*sqrttf2_hq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrtq\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[404],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6167 */
  {
    "sqrtdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrtd\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sqrtdf2,
    &operand_data[407],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6175 */
  {
    "sqrtsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrts\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sqrtsf2,
    &operand_data[410],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6185 */
  {
    "ashlsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_249 },
#else
    { 0, 0, output_249 },
#endif
    (insn_gen_fn) gen_ashlsi3,
    &operand_data[284],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6229 */
  {
    "ashldi3_v8plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_250 },
#else
    { 0, 0, output_250 },
#endif
    (insn_gen_fn) gen_ashldi3_v8plus,
    &operand_data[423],
    4,
    0,
    3,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6256 */
  {
    "*cmp_cc_ashift_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addcc\t%0, %0, %%g0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6265 */
  {
    "*cmp_cc_set_ashift_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addcc\t%1, %1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[21],
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6276 */
  {
    "ashrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_253 },
#else
    { 0, 0, output_253 },
#endif
    (insn_gen_fn) gen_ashrsi3,
    &operand_data[284],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6339 */
  {
    "ashrdi3_v8plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_254 },
#else
    { 0, 0, output_254 },
#endif
    (insn_gen_fn) gen_ashrdi3_v8plus,
    &operand_data[423],
    4,
    0,
    3,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6349 */
  {
    "lshrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_255 },
#else
    { 0, 0, output_255 },
#endif
    (insn_gen_fn) gen_lshrsi3,
    &operand_data[284],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6416 */
  {
    "lshrdi3_v8plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_256 },
#else
    { 0, 0, output_256 },
#endif
    (insn_gen_fn) gen_lshrdi3_v8plus,
    &operand_data[423],
    4,
    0,
    3,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6485 */
  {
    "jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_257 },
#else
    { 0, 0, output_257 },
#endif
    (insn_gen_fn) gen_jump,
    &operand_data[33],
    1,
    0,
    0,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6513 */
  {
    "*tablejump_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%a0%#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[427],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6600 */
  {
    "*call_address_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "call\t%a0, %1%#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[427],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6609 */
  {
    "*call_symbolic_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "call\t%a0, %1%#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[429],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6638 */
  {
    "*call_address_struct_value_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_261 },
#else
    { 0, 0, output_261 },
#endif
    0,
    &operand_data[431],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6654 */
  {
    "*call_symbolic_struct_value_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_262 },
#else
    { 0, 0, output_262 },
#endif
    0,
    &operand_data[434],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6670 */
  {
    "*call_address_untyped_struct_value_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "call\t%a0, %1\n\t nop\n\tnop",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[431],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6683 */
  {
    "*call_symbolic_untyped_struct_value_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "call\t%a0, %1\n\t nop\n\tnop",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[434],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6721 */
  {
    "*call_value_address_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "call\t%a1, %2%#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[437],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6731 */
  {
    "*call_value_symbolic_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "call\t%a1, %2%#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[440],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6798 */
  {
    "*sibcall_symbolic_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_267 },
#else
    { 0, 0, output_267 },
#endif
    0,
    &operand_data[429],
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6821 */
  {
    "*sibcall_value_symbolic_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_268 },
#else
    { 0, 0, output_268 },
#endif
    0,
    &operand_data[440],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6858 */
  {
    "save_register_windowsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "save\t%%sp, %0, %%sp",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_save_register_windowsi,
    &operand_data[2],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6887 */
  {
    "*return_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_270 },
#else
    { 0, 0, output_270 },
#endif
    0,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6912 */
  {
    "blockage",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_blockage,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6967 */
  {
    "update_return",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_272 },
#else
    { 0, 0, output_272 },
#endif
    (insn_gen_fn) gen_update_return,
    &operand_data[22],
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6983 */
  {
    "nop",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nop",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_nop,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6993 */
  {
    "*branch_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%a0%#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[427],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7047 */
  {
    "flush_register_windows",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_275 },
#else
    { 0, 0, output_275 },
#endif
    (insn_gen_fn) gen_flush_register_windows,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7053 */
  {
    "goto_handler_and_restore",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_276 },
#else
    { 0, 0, output_276 },
#endif
    (insn_gen_fn) gen_goto_handler_and_restore,
    &operand_data[443],
    1,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7079 */
  {
    "do_builtin_setjmp_setup",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_277 },
#else
    { 0, 0, output_277 },
#endif
    (insn_gen_fn) gen_do_builtin_setjmp_setup,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7144 */
  {
    "flush",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_278 },
#else
    { 0, 0, output_278 },
#endif
    (insn_gen_fn) gen_flush,
    &operand_data[444],
    1,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7150 */
  {
    "flushdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_279 },
#else
    { 0, 0, output_279 },
#endif
    (insn_gen_fn) gen_flushdi,
    &operand_data[445],
    1,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7165 */
  {
    "ffssi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_280 },
#else
    { 0, 0, output_280 },
#endif
    (insn_gen_fn) gen_ffssi2,
    &operand_data[446],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7373 */
  {
    "prefetch_64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_281 },
#else
    { 0, 0, output_281 },
#endif
    (insn_gen_fn) gen_prefetch_64,
    &operand_data[449],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7398 */
  {
    "prefetch_32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_282 },
#else
    { 0, 0, output_282 },
#endif
    (insn_gen_fn) gen_prefetch_32,
    &operand_data[452],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7426 */
  {
    "trap",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ta\t5",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_trap,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7441 */
  {
    "*sparc.md:7441",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_284 },
#else
    { 0, 0, output_284 },
#endif
    0,
    &operand_data[455],
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7453 */
  {
    "*sparc.md:7453",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "t%C0\t%%xcc, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[455],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7463 */
  {
    "tgd_hi22",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sethi\t%%tgd_hi22(%a1), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tgd_hi22,
    &operand_data[457],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7470 */
  {
    "tgd_lo10",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t%1, %%tgd_lo10(%a2), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tgd_lo10,
    &operand_data[459],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7478 */
  {
    "tgd_add32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t%1, %2, %0, %%tgd_add(%a3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tgd_add32,
    &operand_data[462],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7496 */
  {
    "tgd_call32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "call\t%a1, %%tgd_call(%a2)%#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tgd_call32,
    &operand_data[466],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7518 */
  {
    "tldm_hi22",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sethi\t%%tldm_hi22(%&), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tldm_hi22,
    &operand_data[21],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7524 */
  {
    "tldm_lo10",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t%1, %%tldm_lo10(%&), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tldm_lo10,
    &operand_data[21],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7531 */
  {
    "tldm_add32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t%1, %2, %0, %%tldm_add(%&)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tldm_add32,
    &operand_data[21],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7547 */
  {
    "tldm_call32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "call\t%a1, %%tldm_call(%&)%#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tldm_call32,
    &operand_data[470],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7567 */
  {
    "tldo_hix22",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sethi\t%%tldo_hix22(%a1), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tldo_hix22,
    &operand_data[473],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7574 */
  {
    "tldo_lox10",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor\t%1, %%tldo_lox10(%a2), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tldo_lox10,
    &operand_data[475],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7582 */
  {
    "tldo_add32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t%1, %2, %0, %%tldo_add(%a3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tldo_add32,
    &operand_data[478],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7600 */
  {
    "tie_hi22",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sethi\t%%tie_hi22(%a1), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tie_hi22,
    &operand_data[482],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7607 */
  {
    "tie_lo10",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t%1, %%tie_lo10(%a2), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tie_lo10,
    &operand_data[484],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7615 */
  {
    "tie_ld32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ld\t[%1 + %2], %0, %%tie_ld(%a3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tie_ld32,
    &operand_data[487],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7635 */
  {
    "tie_add32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t%1, %2, %0, %%tie_add(%a3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tie_add32,
    &operand_data[487],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7653 */
  {
    "tle_hix22_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sethi\t%%tle_hix22(%a1), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tle_hix22_sp32,
    &operand_data[491],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7660 */
  {
    "tle_lox10_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor\t%1, %%tle_lox10(%a2), %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tle_lox10_sp32,
    &operand_data[493],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7684 */
  {
    "*tldo_ldub_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldub\t[%1 + %2], %0, %%tldo_add(%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[496],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7695 */
  {
    "*tldo_ldub1_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldub\t[%1 + %2], %0, %%tldo_add(%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[500],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7706 */
  {
    "*tldo_ldub2_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldub\t[%1 + %2], %0, %%tldo_add(%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[478],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7717 */
  {
    "*tldo_ldsb1_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldsb\t[%1 + %2], %0, %%tldo_add(%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[500],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7728 */
  {
    "*tldo_ldsb2_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldsb\t[%1 + %2], %0, %%tldo_add(%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[478],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7816 */
  {
    "*tldo_lduh_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lduh\t[%1 + %2], %0, %%tldo_add(%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[500],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7827 */
  {
    "*tldo_lduh1_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lduh\t[%1 + %2], %0, %%tldo_add(%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[478],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7838 */
  {
    "*tldo_ldsh1_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldsh\t[%1 + %2], %0, %%tldo_add(%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[478],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7904 */
  {
    "*tldo_lduw_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ld\t[%1 + %2], %0, %%tldo_add(%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[478],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7955 */
  {
    "*tldo_stb_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stb\t%0, [%1 + %2], %%tldo_add(%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[496],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7975 */
  {
    "*tldo_sth_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sth\t%0, [%1 + %2], %%tldo_add(%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[500],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7995 */
  {
    "*tldo_stw_sp32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "st\t%0, [%1 + %2], %%tldo_add(%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[478],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8045 */
  {
    "stack_protect_setsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ld\t%1, %2\n\tst\t%2, %0\n\tmov\t0, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_setsi,
    &operand_data[504],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8092 */
  {
    "stack_protect_testsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ld\t%0, %2\n\tld\t%1, %3\n\txorcc\t%2, %3, %2\n\tmov\t0, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_testsi,
    &operand_data[507],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8118 */
  {
    "addv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpadd32\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addv2si3,
    &operand_data[511],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8127 */
  {
    "addv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpadd16\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addv4hi3,
    &operand_data[514],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8138 */
  {
    "addv2hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpadd16s\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addv2hi3,
    &operand_data[517],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8147 */
  {
    "subv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpsub32\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subv2si3,
    &operand_data[511],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8156 */
  {
    "subv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpsub16\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subv4hi3,
    &operand_data[514],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8167 */
  {
    "subv2hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpsub16s\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subv2hi3,
    &operand_data[517],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8181 */
  {
    "*nand<V64mode>_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnand\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[407],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8181 */
  {
    "*nand<V64mode>_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnand\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[511],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8181 */
  {
    "*nand<V64mode>_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnand\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[514],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8181 */
  {
    "*nand<V64mode>_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnand\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[520],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8190 */
  {
    "*nand<V32mode>_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnands\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[410],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8190 */
  {
    "*nand<V32mode>_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnands\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[517],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8190 */
  {
    "*nand<V32mode>_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnands\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[523],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8201 */
  {
    "fpack16_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpack16\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fpack16_vis,
    &operand_data[526],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8210 */
  {
    "fpackfix_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpackfix\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fpackfix_vis,
    &operand_data[528],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8219 */
  {
    "fpack32_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpack32\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fpack32_vis,
    &operand_data[530],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8229 */
  {
    "fexpand_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fexpand\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fexpand_vis,
    &operand_data[533],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8243 */
  {
    "fpmerge_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fpmerge\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fpmerge_vis,
    &operand_data[535],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8254 */
  {
    "fmul8x16_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmul8x16\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fmul8x16_vis,
    &operand_data[538],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8264 */
  {
    "fmul8x16au_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmul8x16au\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fmul8x16au_vis,
    &operand_data[541],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8273 */
  {
    "fmul8x16al_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmul8x16al\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fmul8x16al_vis,
    &operand_data[541],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8284 */
  {
    "fmul8sux16_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmul8sux16\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fmul8sux16_vis,
    &operand_data[544],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8293 */
  {
    "fmul8ulx16_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmul8ulx16\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fmul8ulx16_vis,
    &operand_data[544],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8304 */
  {
    "fmuld8sux16_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmuld8sux16\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fmuld8sux16_vis,
    &operand_data[547],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8313 */
  {
    "fmuld8ulx16_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmuld8ulx16\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fmuld8ulx16_vis,
    &operand_data[547],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8326 */
  {
    "faligndatadi_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "faligndata\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_faligndatadi_vis,
    &operand_data[550],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8326 */
  {
    "faligndatav2si_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "faligndata\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_faligndatav2si_vis,
    &operand_data[511],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8326 */
  {
    "faligndatav4hi_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "faligndata\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_faligndatav4hi_vis,
    &operand_data[514],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8326 */
  {
    "faligndatav8qi_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "faligndata\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_faligndatav8qi_vis,
    &operand_data[520],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8336 */
  {
    "alignaddrsi_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "alignaddr\t%r1, %r2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_alignaddrsi_vis,
    &operand_data[553],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8344 */
  {
    "pdist_vis",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pdist\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_pdist_vis,
    &operand_data[556],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sync.md:36 */
  {
    "*stbar",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stbar",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[560],
    1,
    1,
    0,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sync.md:44 */
  {
    "*membar",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "membar\t15",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[560],
    1,
    1,
    0,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sync.md:82 */
  {
    "*sync_compare_and_swapsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cas\t%1, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[561],
    4,
    1,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sync.md:94 */
  {
    "*sync_compare_and_swapdi_v8plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_351 },
#else
    { 0, 0, output_351 },
#endif
    0,
    &operand_data[565],
    4,
    1,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sync.md:155 */
  {
    "*swapsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "swap\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[569],
    3,
    1,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sync.md:182 */
  {
    "*ldstubqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldstub\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[572],
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sync.md:191 */
  {
    "*ldstubhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldstub\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[574],
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sync.md:191 */
  {
    "*ldstubsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldstub\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[576],
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:346 */
  {
    "cmpsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpsi,
    &operand_data[578],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:374 */
  {
    "cmpsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpsf,
    &operand_data[580],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:386 */
  {
    "cmpdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpdf,
    &operand_data[582],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:398 */
  {
    "cmptf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmptf,
    &operand_data[584],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:512 */
  {
    "seqsi_special",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_seqsi_special,
    &operand_data[586],
    3,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:531 */
  {
    "snesi_special",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_snesi_special,
    &operand_data[586],
    3,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:590 */
  {
    "seq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_seq,
    &operand_data[589],
    1,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:644 */
  {
    "sne",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sne,
    &operand_data[589],
    1,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:696 */
  {
    "sgt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sgt,
    &operand_data[589],
    1,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:718 */
  {
    "slt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_slt,
    &operand_data[589],
    1,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:740 */
  {
    "sge",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sge,
    &operand_data[589],
    1,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:762 */
  {
    "sle",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sle,
    &operand_data[589],
    1,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:784 */
  {
    "sgtu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sgtu,
    &operand_data[589],
    1,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:818 */
  {
    "sltu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sltu,
    &operand_data[589],
    1,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:831 */
  {
    "sgeu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sgeu,
    &operand_data[589],
    1,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:844 */
  {
    "sleu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sleu,
    &operand_data[589],
    1,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:885 */
  {
    "sleu+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[586],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:899 */
  {
    "sleu+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[586],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:976 */
  {
    "sleu+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[586],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:990 */
  {
    "sleu+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[586],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1071 */
  {
    "sleu+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[586],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1087 */
  {
    "beq-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[586],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1103 */
  {
    "beq-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[586],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1119 */
  {
    "beq-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[586],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1248 */
  {
    "beq-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[590],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1272 */
  {
    "beq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_beq,
    &operand_data[33],
    1,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1297 */
  {
    "bne",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bne,
    &operand_data[33],
    1,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1322 */
  {
    "bgt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bgt,
    &operand_data[33],
    1,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1347 */
  {
    "bgtu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bgtu,
    &operand_data[33],
    1,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1357 */
  {
    "blt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_blt,
    &operand_data[33],
    1,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1382 */
  {
    "bltu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bltu,
    &operand_data[33],
    1,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1392 */
  {
    "bge",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bge,
    &operand_data[33],
    1,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1417 */
  {
    "bgeu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bgeu,
    &operand_data[33],
    1,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1427 */
  {
    "ble",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ble,
    &operand_data[33],
    1,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1452 */
  {
    "bleu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bleu,
    &operand_data[33],
    1,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1462 */
  {
    "bunordered",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bunordered,
    &operand_data[33],
    1,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1480 */
  {
    "bordered",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bordered,
    &operand_data[33],
    1,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1498 */
  {
    "bungt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bungt,
    &operand_data[33],
    1,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1516 */
  {
    "bunlt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bunlt,
    &operand_data[33],
    1,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1534 */
  {
    "buneq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_buneq,
    &operand_data[33],
    1,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1552 */
  {
    "bunge",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bunge,
    &operand_data[33],
    1,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1570 */
  {
    "bunle",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bunle,
    &operand_data[33],
    1,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1588 */
  {
    "bltgt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bltgt,
    &operand_data[33],
    1,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1775 */
  {
    "movqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movqi,
    &operand_data[593],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1796 */
  {
    "movhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movhi,
    &operand_data[595],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1826 */
  {
    "movsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsi,
    &operand_data[597],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1879 */
  {
    "movsi_pic_label_ref",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsi_pic_label_ref,
    &operand_data[59],
    2,
    8,
    1,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1936 */
  {
    "movdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdi,
    &operand_data[599],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2196 */
  {
    "reload_indi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_reload_indi,
    &operand_data[601],
    3,
    0,
    1,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2208 */
  {
    "reload_outdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_reload_outdi,
    &operand_data[601],
    3,
    0,
    1,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2221 */
  {
    "reload_outdi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[604],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2254 */
  {
    "reload_outdi+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[606],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2287 */
  {
    "reload_outdi+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[608],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2327 */
  {
    "movsf-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[609],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2353 */
  {
    "movsf-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[610],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2368 */
  {
    "movsf-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[612],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2387 */
  {
    "movsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsf,
    &operand_data[614],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2387 */
  {
    "movv2hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv2hi,
    &operand_data[616],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2387 */
  {
    "movv4qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv4qi,
    &operand_data[618],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2516 */
  {
    "movv4qi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[620],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2523 */
  {
    "movdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdf,
    &operand_data[622],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2523 */
  {
    "movv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv2si,
    &operand_data[624],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2523 */
  {
    "movv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv4hi,
    &operand_data[626],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2523 */
  {
    "movv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv8qi,
    &operand_data[628],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2649 */
  {
    "movv8qi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[630],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2649 */
  {
    "movv8qi+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[632],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2649 */
  {
    "movv8qi+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[634],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2649 */
  {
    "movv8qi+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[636],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2704 */
  {
    "movv8qi+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[582],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2704 */
  {
    "movv8qi+6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[638],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2704 */
  {
    "movv8qi+7",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[640],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2704 */
  {
    "movv8qi+8",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[642],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2749 */
  {
    "movv8qi+9",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[644],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2749 */
  {
    "movv8qi+10",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[646],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2749 */
  {
    "movv8qi+11",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[648],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2749 */
  {
    "movv8qi+12",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[650],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2784 */
  {
    "movtf-12",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[652],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2784 */
  {
    "movtf-11",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[654],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2784 */
  {
    "movtf-10",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[656],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2784 */
  {
    "movtf-9",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[658],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2811 */
  {
    "movtf-8",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[660],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2811 */
  {
    "movtf-7",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[662],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2811 */
  {
    "movtf-6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[664],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2811 */
  {
    "movtf-5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[666],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2838 */
  {
    "movtf-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[668],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2838 */
  {
    "movtf-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[670],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2838 */
  {
    "movtf-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[672],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2838 */
  {
    "movtf-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[674],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2867 */
  {
    "movtf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movtf,
    &operand_data[676],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2940 */
  {
    "movtf+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[584],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2975 */
  {
    "movtf+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[678],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3003 */
  {
    "movqicc-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[680],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3038 */
  {
    "movqicc-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[681],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3066 */
  {
    "movqicc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movqicc,
    &operand_data[683],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3066 */
  {
    "movhicc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movhicc,
    &operand_data[687],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3066 */
  {
    "movsicc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsicc,
    &operand_data[691],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3090 */
  {
    "movsfcc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsfcc,
    &operand_data[695],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3090 */
  {
    "movdfcc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdfcc,
    &operand_data[699],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3090 */
  {
    "movtfcc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movtfcc,
    &operand_data[703],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3224 */
  {
    "movtfcc+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[706],
    5,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3317 */
  {
    "zero_extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendhisi2,
    &operand_data[711],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3348 */
  {
    "zero_extendqihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqihi2,
    &operand_data[712],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3364 */
  {
    "zero_extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqisi2,
    &operand_data[714],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3429 */
  {
    "zero_extendsidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendsidi2,
    &operand_data[716],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3444 */
  {
    "zero_extendsidi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[716],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3597 */
  {
    "extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendhisi2,
    &operand_data[711],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3628 */
  {
    "extendqihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendqihi2,
    &operand_data[712],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3668 */
  {
    "extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendqisi2,
    &operand_data[714],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3827 */
  {
    "extendsftf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendsftf2,
    &operand_data[718],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3842 */
  {
    "extenddftf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extenddftf2,
    &operand_data[720],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3866 */
  {
    "trunctfsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_trunctfsf2,
    &operand_data[722],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3881 */
  {
    "trunctfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_trunctfdf2,
    &operand_data[724],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3915 */
  {
    "floatsitf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatsitf2,
    &operand_data[726],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3964 */
  {
    "floatditf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatditf2,
    &operand_data[728],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4002 */
  {
    "fix_trunctfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_trunctfsi2,
    &operand_data[730],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4051 */
  {
    "fix_trunctfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_trunctfdi2,
    &operand_data[732],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4073 */
  {
    "adddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_adddi3,
    &operand_data[734],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4091 */
  {
    "adddi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[737],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4139 */
  {
    "adddi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[740],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4164 */
  {
    "subdi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[743],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4246 */
  {
    "subdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subdi3,
    &operand_data[734],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4264 */
  {
    "subdi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[745],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4321 */
  {
    "subdi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[740],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4336 */
  {
    "muldi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[748],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4432 */
  {
    "muldi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_muldi3,
    &operand_data[751],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4502 */
  {
    "mulsidi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulsidi3,
    &operand_data[754],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4610 */
  {
    "smulsi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_smulsi3_highpart,
    &operand_data[757],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4711 */
  {
    "umulsidi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_umulsidi3,
    &operand_data[760],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4817 */
  {
    "umulsi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_umulsi3_highpart,
    &operand_data[763],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4900 */
  {
    "divsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divsi3,
    &operand_data[766],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4999 */
  {
    "udivsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_udivsi3,
    &operand_data[770],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5126 */
  {
    "anddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_anddi3,
    &operand_data[737],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5126 */
  {
    "andv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_andv2si3,
    &operand_data[773],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5126 */
  {
    "andv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_andv4hi3,
    &operand_data[776],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5126 */
  {
    "andv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_andv8qi3,
    &operand_data[779],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5170 */
  {
    "andv8qi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[782],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5182 */
  {
    "andv8qi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[786],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5182 */
  {
    "andv8qi3+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[789],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5182 */
  {
    "iordi3-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[792],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5182 */
  {
    "iordi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[795],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5230 */
  {
    "iordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iordi3,
    &operand_data[737],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5230 */
  {
    "iorv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iorv2si3,
    &operand_data[773],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5230 */
  {
    "iorv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iorv4hi3,
    &operand_data[776],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5230 */
  {
    "iorv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iorv8qi3,
    &operand_data[779],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5271 */
  {
    "iorv8qi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[782],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5283 */
  {
    "iorv8qi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[786],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5283 */
  {
    "iorv8qi3+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[789],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5283 */
  {
    "xordi3-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[792],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5283 */
  {
    "xordi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[795],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5331 */
  {
    "xordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xordi3,
    &operand_data[737],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5331 */
  {
    "xorv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorv2si3,
    &operand_data[773],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5331 */
  {
    "xorv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorv4hi3,
    &operand_data[776],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5331 */
  {
    "xorv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorv8qi3,
    &operand_data[779],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5372 */
  {
    "xorv8qi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[782],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5384 */
  {
    "xorv8qi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[782],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5397 */
  {
    "xorv8qi3+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[798],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5397 */
  {
    "xorv8qi3+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[802],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5397 */
  {
    "xorv8qi3+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[806],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5397 */
  {
    "negdi2-5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[810],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5432 */
  {
    "negdi2-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[786],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5432 */
  {
    "negdi2-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[789],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5432 */
  {
    "negdi2-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[792],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5432 */
  {
    "negdi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[795],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5628 */
  {
    "negdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negdi2,
    &operand_data[74],
    2,
    0,
    1,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5647 */
  {
    "negdi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[608],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5716 */
  {
    "one_cmpldi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_one_cmpldi2,
    &operand_data[608],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5716 */
  {
    "one_cmplv2si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplv2si2,
    &operand_data[638],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5716 */
  {
    "one_cmplv4hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplv4hi2,
    &operand_data[640],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5716 */
  {
    "one_cmplv8qi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplv8qi2,
    &operand_data[642],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5722 */
  {
    "one_cmplv8qi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[608],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5722 */
  {
    "one_cmplv8qi2+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[638],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5722 */
  {
    "addtf3-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[640],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5722 */
  {
    "addtf3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[642],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5824 */
  {
    "addtf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addtf3,
    &operand_data[814],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5856 */
  {
    "subtf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subtf3,
    &operand_data[814],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5888 */
  {
    "multf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_multf3,
    &operand_data[814],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5937 */
  {
    "divtf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divtf3,
    &operand_data[814],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5970 */
  {
    "negtf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negtf2,
    &operand_data[419],
    2,
    0,
    2,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5976 */
  {
    "negtf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[584],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5999 */
  {
    "negdf2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[584],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6019 */
  {
    "negdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negdf2,
    &operand_data[582],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6025 */
  {
    "negdf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[582],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6058 */
  {
    "abstf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_abstf2,
    &operand_data[584],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6064 */
  {
    "abstf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[584],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6096 */
  {
    "absdf2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[584],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6115 */
  {
    "absdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_absdf2,
    &operand_data[582],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6121 */
  {
    "absdf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[582],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6154 */
  {
    "sqrttf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sqrttf2,
    &operand_data[676],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6199 */
  {
    "ashldi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashldi3,
    &operand_data[817],
    3,
    0,
    1,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6310 */
  {
    "ashrdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashrdi3,
    &operand_data[817],
    3,
    0,
    1,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6388 */
  {
    "lshrdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lshrdi3,
    &operand_data[817],
    3,
    0,
    1,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6491 */
  {
    "tablejump",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tablejump,
    &operand_data[820],
    2,
    0,
    1,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6530 */
  {
    "call",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_call,
    &operand_data[822],
    4,
    0,
    1,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6694 */
  {
    "call_value",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_call_value,
    &operand_data[826],
    5,
    0,
    1,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6761 */
  {
    "untyped_call",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_untyped_call,
    &operand_data[830],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6792 */
  {
    "sibcall",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sibcall,
    &operand_data[822],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6814 */
  {
    "sibcall_value",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sibcall_value,
    &operand_data[826],
    2,
    0,
    1,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6842 */
  {
    "prologue",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_prologue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6867 */
  {
    "epilogue",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_epilogue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6874 */
  {
    "sibcall_epilogue",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sibcall_epilogue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6882 */
  {
    "return",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_return,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6920 */
  {
    "untyped_return",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_untyped_return,
    &operand_data[831],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6988 */
  {
    "indirect_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_indirect_jump,
    &operand_data[833],
    1,
    0,
    1,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7005 */
  {
    "nonlocal_goto",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_nonlocal_goto,
    &operand_data[834],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7071 */
  {
    "builtin_setjmp_setup",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_builtin_setjmp_setup,
    &operand_data[820],
    1,
    0,
    1,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7111 */
  {
    "setjmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_setjmp,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7199 */
  {
    "setjmp+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[838],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7210 */
  {
    "setjmp+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[838],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7221 */
  {
    "setjmp+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[840],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7233 */
  {
    "setjmp+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[839],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7245 */
  {
    "setjmp+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[844],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7257 */
  {
    "setjmp+6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[845],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7269 */
  {
    "prefetch-5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[840],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7281 */
  {
    "prefetch-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[839],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7294 */
  {
    "prefetch-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[844],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7306 */
  {
    "prefetch-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[845],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7322 */
  {
    "prefetch-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[586],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7360 */
  {
    "prefetch",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_prefetch,
    &operand_data[849],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7432 */
  {
    "conditional_trap",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_conditional_trap,
    &operand_data[852],
    2,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8028 */
  {
    "stack_protect_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_set,
    &operand_data[854],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8063 */
  {
    "stack_protect_test",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_test,
    &operand_data[854],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sync.md:21 */
  {
    "memory_barrier",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_memory_barrier,
    &operand_data[0],
    0,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sync.md:51 */
  {
    "sync_compare_and_swapqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_compare_and_swapqi,
    &operand_data[857],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sync.md:51 */
  {
    "sync_compare_and_swaphi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_compare_and_swaphi,
    &operand_data[861],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sync.md:63 */
  {
    "sync_compare_and_swapsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_compare_and_swapsi,
    &operand_data[865],
    4,
    1,
    1,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sync.md:63 */
  {
    "sync_compare_and_swapdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_compare_and_swapdi,
    &operand_data[869],
    4,
    1,
    1,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sync.md:118 */
  {
    "sync_lock_test_and_setqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_lock_test_and_setqi,
    &operand_data[873],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sync.md:118 */
  {
    "sync_lock_test_and_sethi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_lock_test_and_sethi,
    &operand_data[876],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sync.md:134 */
  {
    "sync_lock_test_and_setsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_lock_test_and_setsi,
    &operand_data[879],
    3,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sync.md:165 */
  {
    "ldstubqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ldstubqi,
    &operand_data[857],
    2,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sync.md:173 */
  {
    "ldstubhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ldstubhi,
    &operand_data[882],
    2,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/sparc/sync.md:173 */
  {
    "ldstubsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ldstubsi,
    &operand_data[884],
    2,
    1,
    0,
    0
  },
};


const char *
get_insn_name (int code)
{
  if (code == NOOP_MOVE_INSN_CODE)
    return "NOOP_MOVE";
  else
    return insn_data[code].name;
}
