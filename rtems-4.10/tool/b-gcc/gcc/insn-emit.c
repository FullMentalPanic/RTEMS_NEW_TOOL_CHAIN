/* Generated automatically by the program `genemit'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"
#include "expr.h"
#include "optabs.h"
#include "real.h"
#include "dfp.h"
#include "flags.h"
#include "output.h"
#include "insn-config.h"
#include "hard-reg-set.h"
#include "recog.h"
#include "resource.h"
#include "reload.h"
#include "toplev.h"
#include "regs.h"
#include "tm-constrs.h"
#include "ggc.h"
#include "basic-block.h"
#include "integrate.h"

#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1748 */
rtx
gen_load_pcrel_symsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	2)),
		gen_hard_reg_clobber (SImode, 15)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1866 */
rtx
gen_movsi_lo_sum_pic (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LO_SUM (SImode,
	operand1,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand2),
	0)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1873 */
rtx
gen_movsi_high_pic (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (SImode,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	0)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2104 */
rtx
gen_seth44 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	6)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2110 */
rtx
gen_setm44 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LO_SUM (DImode,
	operand1,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand2),
	7)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2117 */
rtx
gen_setl44 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LO_SUM (DImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2124 */
rtx
gen_sethh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	9)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2130 */
rtx
gen_setlm (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	10)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2136 */
rtx
gen_sethm (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LO_SUM (DImode,
	operand1,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand2),
	18)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2143 */
rtx
gen_setlo (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LO_SUM (DImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2150 */
rtx
gen_embmedany_sethi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	11)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2156 */
rtx
gen_embmedany_losum (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LO_SUM (DImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2163 */
rtx
gen_embmedany_brsum (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	11));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2169 */
rtx
gen_embmedany_textuhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	13)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2175 */
rtx
gen_embmedany_texthi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	14)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2181 */
rtx
gen_embmedany_textulo (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LO_SUM (DImode,
	operand1,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand2),
	15)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2188 */
rtx
gen_embmedany_textlo (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LO_SUM (DImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3169 */
rtx
gen_movdf_cc_v9 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand2,
		const0_rtx),
	operand3,
	operand4));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3818 */
rtx
gen_extendsfdf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (DFmode,
	operand1));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3857 */
rtx
gen_truncdfsf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3899 */
rtx
gen_floatsisf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (SFmode,
	operand1));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3907 */
rtx
gen_floatsidf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	operand1));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3936 */
rtx
gen_floatdisf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (SFmode,
	operand1));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3950 */
rtx
gen_floatdidf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	operand1));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3986 */
rtx
gen_fix_truncsfsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	gen_rtx_FIX (SFmode,
	operand1)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3994 */
rtx
gen_fix_truncdfsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	gen_rtx_FIX (DFmode,
	operand1)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4023 */
rtx
gen_fix_truncsfdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	gen_rtx_FIX (SFmode,
	operand1)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4037 */
rtx
gen_fix_truncdfdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	gen_rtx_FIX (DFmode,
	operand1)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4091 */
rtx
gen_adddi3_insn_sp32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 100)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4130 */
rtx
gen_addx (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2),
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	const0_rtx)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4194 */
rtx
gen_addsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4264 */
rtx
gen_subdi3_insn_sp32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 100)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4303 */
rtx
gen_subx (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2),
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	const0_rtx)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4366 */
rtx
gen_subsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4396 */
rtx
gen_cmp_minus_cc_set (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	gen_rtx_COMPARE (CC_NOOVmode,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2)))));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4424 */
rtx
gen_mulsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4455 */
rtx
gen_muldi3_v8plus (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4531 */
rtx
gen_mulsidi3_v8plus (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4544 */
rtx
gen_const_mulsidi3_v8plus (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4585 */
rtx
gen_const_mulsidi3_sp32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4640 */
rtx
gen_smulsi3_highpart_v8plus (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	operand3))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4673 */
rtx
gen_const_smulsi3_highpart_v8plus (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	operand2),
	operand3))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4700 */
rtx
gen_const_smulsi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	operand2),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4738 */
rtx
gen_umulsidi3_v8plus (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4779 */
rtx
gen_const_umulsidi3_sp32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4805 */
rtx
gen_const_umulsidi3_v8plus (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4847 */
rtx
gen_umulsi3_highpart_v8plus (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)),
	operand3))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4862 */
rtx
gen_const_umulsi3_highpart_v8plus (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	operand2),
	operand3))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4889 */
rtx
gen_const_umulsi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	operand2),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4921 */
rtx
gen_divsi3_sp32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5010 */
rtx
gen_udivsi3_sp32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5159 */
rtx
gen_andsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5159 */
rtx
gen_andv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V2HImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5159 */
rtx
gen_andv4qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V4QImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5260 */
rtx
gen_iorsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5260 */
rtx
gen_iorv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V2HImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5260 */
rtx
gen_iorv4qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V4QImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5361 */
rtx
gen_xorsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5361 */
rtx
gen_xorv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V2HImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5361 */
rtx
gen_xorv4qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V4QImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5672 */
rtx
gen_negsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	operand1));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5755 */
rtx
gen_one_cmplsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (SImode,
	operand1));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5755 */
rtx
gen_one_cmplv2hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (V2HImode,
	operand1));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5755 */
rtx
gen_one_cmplv4qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (V4QImode,
	operand1));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5839 */
rtx
gen_adddf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DFmode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5848 */
rtx
gen_addsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SFmode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5871 */
rtx
gen_subdf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DFmode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5880 */
rtx
gen_subsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SFmode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5903 */
rtx
gen_muldf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DFmode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5912 */
rtx
gen_mulsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SFmode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5953 */
rtx
gen_divdf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (DFmode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5962 */
rtx
gen_divsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SFmode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6051 */
rtx
gen_negsf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SFmode,
	operand1));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6147 */
rtx
gen_abssf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (SFmode,
	operand1));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6167 */
rtx
gen_sqrtdf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (DFmode,
	operand1));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6175 */
rtx
gen_sqrtsf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (SFmode,
	operand1));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6185 */
rtx
gen_ashlsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6229 */
rtx
gen_ashldi3_v8plus (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6276 */
rtx
gen_ashrsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6339 */
rtx
gen_ashrdi3_v8plus (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6349 */
rtx
gen_lshrsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6416 */
rtx
gen_lshrdi3_v8plus (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6485 */
rtx
gen_jump (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6858 */
rtx
gen_save_register_windowsi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	30),
	gen_rtx_REG (SImode,
	14)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	14),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		gen_rtx_REG (SImode,
	14),
		operand0),
	6)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	31),
	gen_rtx_REG (SImode,
	15))));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6912 */
rtx
gen_blockage (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	0);
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6967 */
rtx
gen_update_return (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	1);
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6983 */
rtx
gen_nop (void)
{
  return const0_rtx;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7047 */
rtx
gen_flush_register_windows (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	1);
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7053 */
rtx
gen_goto_handler_and_restore (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	2);
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7079 */
rtx
gen_do_builtin_setjmp_setup (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	5);
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7144 */
rtx
gen_flush (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	4);
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7150 */
rtx
gen_flushdi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	4);
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7165 */
rtx
gen_ffssi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FFS (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7373 */
rtx
gen_prefetch_64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PREFETCH (VOIDmode,
	operand0,
	operand1,
	operand2);
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7398 */
rtx
gen_prefetch_32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PREFETCH (VOIDmode,
	operand0,
	operand1,
	operand2);
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7426 */
rtx
gen_trap (void)
{
  return gen_rtx_TRAP_IF (VOIDmode,
	const1_rtx,
	const_int_rtx[MAX_SAVED_CONST_INT + (5)]);
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7463 */
rtx
gen_tgd_hi22 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (SImode,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	30)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7470 */
rtx
gen_tgd_lo10 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LO_SUM (SImode,
	operand1,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand2),
	30)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7478 */
rtx
gen_tgd_add32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand2,
		operand3),
	30)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7496 */
rtx
gen_tgd_call32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	30)),
	operand3)),
		gen_hard_reg_clobber (SImode, 15)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7518 */
rtx
gen_tldm_hi22 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (SImode,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	31)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7524 */
rtx
gen_tldm_lo10 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LO_SUM (SImode,
	operand1,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	31)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7531 */
rtx
gen_tldm_add32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand2),
	31)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7547 */
rtx
gen_tldm_call32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	31)),
	operand2)),
		gen_hard_reg_clobber (SImode, 15)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7567 */
rtx
gen_tldo_hix22 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (SImode,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	32)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7574 */
rtx
gen_tldo_lox10 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LO_SUM (SImode,
	operand1,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand2),
	32)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7582 */
rtx
gen_tldo_add32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand2,
		operand3),
	32)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7600 */
rtx
gen_tie_hi22 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (SImode,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	33)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7607 */
rtx
gen_tie_lo10 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LO_SUM (SImode,
	operand1,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand2),
	33)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7615 */
rtx
gen_tie_ld32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	33));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7635 */
rtx
gen_tie_add32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand2,
		operand3),
	33)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7653 */
rtx
gen_tle_hix22_sp32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (SImode,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	34)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7660 */
rtx
gen_tle_lox10_sp32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LO_SUM (SImode,
	operand1,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand2),
	34)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8045 */
rtx
gen_stack_protect_setsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	60)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_SCRATCH (SImode),
	const0_rtx)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8092 */
rtx
gen_stack_protect_testsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	100),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (2,
		operand0,
		operand1),
	61)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_SCRATCH (SImode),
	const0_rtx),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8118 */
rtx
gen_addv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8127 */
rtx
gen_addv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4HImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8138 */
rtx
gen_addv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2HImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8147 */
rtx
gen_subv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8156 */
rtx
gen_subv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V4HImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8167 */
rtx
gen_subv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2HImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8201 */
rtx
gen_fpack16_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (1,
		operand1),
	40));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8210 */
rtx
gen_fpackfix_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (1,
		operand1),
	42));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8219 */
rtx
gen_fpack32_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	41));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8229 */
rtx
gen_fexpand_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (1,
		operand1),
	43));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8243 */
rtx
gen_fpmerge_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	44));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8254 */
rtx
gen_fmul8x16_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V4HImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8264 */
rtx
gen_fmul8x16au_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V4HImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8273 */
rtx
gen_fmul8x16al_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	45));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8284 */
rtx
gen_fmul8sux16_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V4HImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8293 */
rtx
gen_fmul8ulx16_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	46));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8304 */
rtx
gen_fmuld8sux16_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V2SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8313 */
rtx
gen_fmuld8ulx16_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	47));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8326 */
rtx
gen_faligndatadi_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	48));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8326 */
rtx
gen_faligndatav2si_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	48));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8326 */
rtx
gen_faligndatav4hi_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	48));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8326 */
rtx
gen_faligndatav8qi_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	48));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8336 */
rtx
gen_alignaddrsi_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	49));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8344 */
rtx
gen_pdist_vis (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	50));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:346 */
rtx
gen_cmpsi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 351 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (GET_CODE (operands[0]) == ZERO_EXTRACT && operands[1] != const0_rtx)
    operands[0] = force_reg (SImode, operands[0]);

  sparc_compare_op0 = operands[0];
  sparc_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	100),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:374 */
rtx
gen_cmpsf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 380 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  sparc_compare_op0 = operands[0];
  sparc_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPmode,
	96),
	gen_rtx_COMPARE (CCFPmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:386 */
rtx
gen_cmpdf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 392 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  sparc_compare_op0 = operands[0];
  sparc_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPmode,
	96),
	gen_rtx_COMPARE (CCFPmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:398 */
rtx
gen_cmptf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 404 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  sparc_compare_op0 = operands[0];
  sparc_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPmode,
	96),
	gen_rtx_COMPARE (CCFPmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:512 */
rtx
gen_seqsi_special (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 520 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{ operands[3] = gen_reg_rtx (SImode); }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_XOR (SImode,
	operand1,
	operand2)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (SImode,
	copy_rtx (operand3),
	const0_rtx)),
		gen_hard_reg_clobber (CCmode, 100))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:531 */
rtx
gen_snesi_special (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 539 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{ operands[3] = gen_reg_rtx (SImode); }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_XOR (SImode,
	operand1,
	operand2)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NE (SImode,
	copy_rtx (operand3),
	const0_rtx)),
		gen_hard_reg_clobber (CCmode, 100))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:590 */
rtx
gen_seq (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 594 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (GET_MODE (sparc_compare_op0) == SImode)
    {
      rtx pat;

      if (GET_MODE (operands[0]) == SImode)
	pat = gen_seqsi_special (operands[0], sparc_compare_op0,
				 sparc_compare_op1);
      else if (! TARGET_ARCH64)
	FAIL;
      else
	pat = gen_seqsi_special_extend (operands[0], sparc_compare_op0,
					sparc_compare_op1);
      emit_insn (pat);
      DONE;
    }
  else if (GET_MODE (sparc_compare_op0) == DImode)
    {
      rtx pat;

      if (! TARGET_ARCH64)
	FAIL;
      else if (GET_MODE (operands[0]) == SImode)
	pat = gen_seqdi_special_trunc (operands[0], sparc_compare_op0,
				       sparc_compare_op1);
      else
	pat = gen_seqdi_special (operands[0], sparc_compare_op0,
				 sparc_compare_op1);
      emit_insn (pat);
      DONE;
    }
  else if (GET_MODE (sparc_compare_op0) == TFmode && ! TARGET_HARD_QUAD)
    {
      enum rtx_code code
        = sparc_emit_float_lib_cmp (sparc_compare_op0, sparc_compare_op1, EQ);
      gcc_assert (code == NE);
      emit_insn (gen_sne (operands[0]));
      DONE;
    }
  else if (TARGET_V9)
    {
      if (gen_v9_scc (EQ, operands))
	DONE;
      /* fall through */
    }
  FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (SImode,
	operand1,
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:644 */
rtx
gen_sne (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 648 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (GET_MODE (sparc_compare_op0) == SImode)
    {
      rtx pat;

      if (GET_MODE (operands[0]) == SImode)
	pat = gen_snesi_special (operands[0], sparc_compare_op0,
				 sparc_compare_op1);
      else if (! TARGET_ARCH64)
	FAIL;
      else
	pat = gen_snesi_special_extend (operands[0], sparc_compare_op0,
					sparc_compare_op1);
      emit_insn (pat);
      DONE;
    }
  else if (GET_MODE (sparc_compare_op0) == DImode)
    {
      rtx pat;

      if (! TARGET_ARCH64)
	FAIL;
      else if (GET_MODE (operands[0]) == SImode)
	pat = gen_snedi_special_trunc (operands[0], sparc_compare_op0,
				       sparc_compare_op1);
      else
	pat = gen_snedi_special (operands[0], sparc_compare_op0,
				 sparc_compare_op1);
      emit_insn (pat);
      DONE;
    }
  else if (GET_MODE (sparc_compare_op0) == TFmode && ! TARGET_HARD_QUAD)
    {
      enum rtx_code code
        = sparc_emit_float_lib_cmp (sparc_compare_op0, sparc_compare_op1, NE);
      gcc_assert (code == NE);
      emit_insn (gen_sne (operands[0]));
      DONE;
    }
  else if (TARGET_V9)
    {
      if (gen_v9_scc (NE, operands))
	DONE;
      /* fall through */
    }
  FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NE (SImode,
	operand1,
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:696 */
rtx
gen_sgt (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 700 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (GET_MODE (sparc_compare_op0) == TFmode && ! TARGET_HARD_QUAD)
    {
      enum rtx_code code
        = sparc_emit_float_lib_cmp (sparc_compare_op0, sparc_compare_op1, GT);
      gcc_assert (code == NE);
      emit_insn (gen_sne (operands[0]));
      DONE;
    }
  else if (TARGET_V9)
    {
      if (gen_v9_scc (GT, operands))
	DONE;
      /* fall through */
    }
  FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (SImode,
	operand1,
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:718 */
rtx
gen_slt (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 722 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (GET_MODE (sparc_compare_op0) == TFmode && ! TARGET_HARD_QUAD)
    {
      enum rtx_code code
        = sparc_emit_float_lib_cmp (sparc_compare_op0, sparc_compare_op1, LT);
      gcc_assert (code == NE);
      emit_insn (gen_sne (operands[0]));
      DONE;
    }
  else if (TARGET_V9)
    {
      if (gen_v9_scc (LT, operands))
	DONE;
      /* fall through */
    }
  FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LT (SImode,
	operand1,
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:740 */
rtx
gen_sge (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 744 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (GET_MODE (sparc_compare_op0) == TFmode && ! TARGET_HARD_QUAD)
    {
      enum rtx_code code
        = sparc_emit_float_lib_cmp (sparc_compare_op0, sparc_compare_op1, GE);
      gcc_assert (code == NE);
      emit_insn (gen_sne (operands[0]));
      DONE;
    }
  else if (TARGET_V9)
    {
      if (gen_v9_scc (GE, operands))
	DONE;
      /* fall through */
    }
  FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GE (SImode,
	operand1,
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:762 */
rtx
gen_sle (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 766 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (GET_MODE (sparc_compare_op0) == TFmode && ! TARGET_HARD_QUAD)
    {
      enum rtx_code code
        = sparc_emit_float_lib_cmp (sparc_compare_op0, sparc_compare_op1, LE);
      gcc_assert (code == NE);
      emit_insn (gen_sne (operands[0]));
      DONE;
    }
  else if (TARGET_V9)
    {
      if (gen_v9_scc (LE, operands))
	DONE;
      /* fall through */
    }
  FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LE (SImode,
	operand1,
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:784 */
rtx
gen_sgtu (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 788 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (! TARGET_V9)
    {
      rtx tem, pat;

      /* We can do ltu easily, so if both operands are registers, swap them and
	 do a LTU.  */
      if ((GET_CODE (sparc_compare_op0) == REG
	   || GET_CODE (sparc_compare_op0) == SUBREG)
	  && (GET_CODE (sparc_compare_op1) == REG
	      || GET_CODE (sparc_compare_op1) == SUBREG))
	{
	  tem = sparc_compare_op0;
	  sparc_compare_op0 = sparc_compare_op1;
	  sparc_compare_op1 = tem;
	  pat = gen_sltu (operands[0]);
          if (pat == NULL_RTX)
            FAIL;
          emit_insn (pat);
	  DONE;
	}
    }
  else
    {
      if (gen_v9_scc (GTU, operands))
	DONE;
    }
  FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GTU (SImode,
	operand1,
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:818 */
rtx
gen_sltu (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 822 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (TARGET_V9)
    {
      if (gen_v9_scc (LTU, operands))
	DONE;
    }
  operands[1] = gen_compare_reg (LTU);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LTU (SImode,
	operand1,
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:831 */
rtx
gen_sgeu (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 835 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (TARGET_V9)
    {
      if (gen_v9_scc (GEU, operands))
	DONE;
    }
  operands[1] = gen_compare_reg (GEU);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GEU (SImode,
	operand1,
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:844 */
rtx
gen_sleu (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 848 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (! TARGET_V9)
    {
      rtx tem, pat;

      /* We can do geu easily, so if both operands are registers, swap them and
	 do a GEU.  */
      if ((GET_CODE (sparc_compare_op0) == REG
	   || GET_CODE (sparc_compare_op0) == SUBREG)
	  && (GET_CODE (sparc_compare_op1) == REG
	      || GET_CODE (sparc_compare_op1) == SUBREG))
	{
	  tem = sparc_compare_op0;
	  sparc_compare_op0 = sparc_compare_op1;
	  sparc_compare_op1 = tem;
	  pat = gen_sgeu (operands[0]);
          if (pat == NULL_RTX)
            FAIL;
          emit_insn (pat);
	  DONE;
	}
    }
  else
    {
      if (gen_v9_scc (LEU, operands))
	DONE;
    }
  FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LEU (SImode,
	operand1,
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:885 */
extern rtx gen_split_372 (rtx, rtx *);
rtx
gen_split_372 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 896 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	gen_rtx_COMPARE (CC_NOOVmode,
	gen_rtx_NEG (SImode,
	operand1),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CCmode,
	100),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:899 */
extern rtx gen_split_373 (rtx, rtx *);
rtx
gen_split_373 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 910 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	gen_rtx_COMPARE (CC_NOOVmode,
	gen_rtx_NEG (SImode,
	operand1),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CCmode,
	100),
	const0_rtx))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:976 */
extern rtx gen_split_374 (rtx, rtx *);
rtx
gen_split_374 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 987 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	gen_rtx_COMPARE (CC_NOOVmode,
	gen_rtx_NEG (SImode,
	operand1),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GEU (SImode,
	gen_rtx_REG (CCmode,
	100),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:990 */
extern rtx gen_split_375 (rtx, rtx *);
rtx
gen_split_375 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 1001 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	gen_rtx_COMPARE (CC_NOOVmode,
	gen_rtx_NEG (SImode,
	operand1),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	gen_rtx_GEU (SImode,
	gen_rtx_REG (CCmode,
	100),
	const0_rtx))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1071 */
extern rtx gen_split_376 (rtx, rtx *);
rtx
gen_split_376 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 1084 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	gen_rtx_COMPARE (CC_NOOVmode,
	gen_rtx_NEG (SImode,
	operand1),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CCmode,
	100),
	const0_rtx),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1087 */
extern rtx gen_split_377 (rtx, rtx *);
rtx
gen_split_377 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 1100 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	gen_rtx_COMPARE (CC_NOOVmode,
	gen_rtx_NEG (SImode,
	operand1),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand2,
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CCmode,
	100),
	const0_rtx))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1103 */
extern rtx gen_split_378 (rtx, rtx *);
rtx
gen_split_378 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 1116 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	gen_rtx_COMPARE (CC_NOOVmode,
	gen_rtx_NEG (SImode,
	operand1),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_GEU (SImode,
	gen_rtx_REG (CCmode,
	100),
	const0_rtx),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1119 */
extern rtx gen_split_379 (rtx, rtx *);
rtx
gen_split_379 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 1132 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	gen_rtx_COMPARE (CC_NOOVmode,
	gen_rtx_NEG (SImode,
	operand1),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand2,
	gen_rtx_GEU (SImode,
	gen_rtx_REG (CCmode,
	100),
	const0_rtx))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1248 */
extern rtx gen_split_380 (rtx, rtx *);
rtx
gen_split_380 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 1263 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand2), SImode,
		operand1,
		const0_rtx),
	const1_rtx,
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1272 */
rtx
gen_beq (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 1278 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (TARGET_ARCH64 && sparc_compare_op1 == const0_rtx
      && GET_CODE (sparc_compare_op0) == REG
      && GET_MODE (sparc_compare_op0) == DImode)
    {
      emit_v9_brxx_insn (EQ, sparc_compare_op0, operands[0]);
      DONE;
    }
  else if (GET_MODE (sparc_compare_op0) == TFmode && ! TARGET_HARD_QUAD)
    {
      enum rtx_code code
        = sparc_emit_float_lib_cmp (sparc_compare_op0, sparc_compare_op1, EQ);
      gcc_assert (code == NE);
      emit_jump_insn (gen_bne (operands[0]));
      DONE;
    }
  operands[1] = gen_compare_reg (EQ);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_EQ (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1297 */
rtx
gen_bne (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 1303 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (TARGET_ARCH64 && sparc_compare_op1 == const0_rtx
      && GET_CODE (sparc_compare_op0) == REG
      && GET_MODE (sparc_compare_op0) == DImode)
    {
      emit_v9_brxx_insn (NE, sparc_compare_op0, operands[0]);
      DONE;
    }
  else if (GET_MODE (sparc_compare_op0) == TFmode && ! TARGET_HARD_QUAD)
    {
      enum rtx_code code
        = sparc_emit_float_lib_cmp (sparc_compare_op0, sparc_compare_op1, NE);
      gcc_assert (code == NE);
      emit_jump_insn (gen_bne (operands[0]));
      DONE;
    }
  operands[1] = gen_compare_reg (NE);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1322 */
rtx
gen_bgt (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 1328 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (TARGET_ARCH64 && sparc_compare_op1 == const0_rtx
      && GET_CODE (sparc_compare_op0) == REG
      && GET_MODE (sparc_compare_op0) == DImode)
    {
      emit_v9_brxx_insn (GT, sparc_compare_op0, operands[0]);
      DONE;
    }
  else if (GET_MODE (sparc_compare_op0) == TFmode && ! TARGET_HARD_QUAD)
    {
      enum rtx_code code
        = sparc_emit_float_lib_cmp (sparc_compare_op0, sparc_compare_op1, GT);
      gcc_assert (code == NE);
      emit_jump_insn (gen_bne (operands[0]));
      DONE;
    }
  operands[1] = gen_compare_reg (GT);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GT (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1347 */
rtx
gen_bgtu (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 1353 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  operands[1] = gen_compare_reg (GTU);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GTU (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1357 */
rtx
gen_blt (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 1363 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (TARGET_ARCH64 && sparc_compare_op1 == const0_rtx
      && GET_CODE (sparc_compare_op0) == REG
      && GET_MODE (sparc_compare_op0) == DImode)
    {
      emit_v9_brxx_insn (LT, sparc_compare_op0, operands[0]);
      DONE;
    }
  else if (GET_MODE (sparc_compare_op0) == TFmode && ! TARGET_HARD_QUAD)
    {
      enum rtx_code code
        = sparc_emit_float_lib_cmp (sparc_compare_op0, sparc_compare_op1, LT);
      gcc_assert (code == NE);
      emit_jump_insn (gen_bne (operands[0]));
      DONE;
    }
  operands[1] = gen_compare_reg (LT);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LT (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1382 */
rtx
gen_bltu (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 1388 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  operands[1] = gen_compare_reg (LTU);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LTU (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1392 */
rtx
gen_bge (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 1398 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (TARGET_ARCH64 && sparc_compare_op1 == const0_rtx
      && GET_CODE (sparc_compare_op0) == REG
      && GET_MODE (sparc_compare_op0) == DImode)
    {
      emit_v9_brxx_insn (GE, sparc_compare_op0, operands[0]);
      DONE;
    }
  else if (GET_MODE (sparc_compare_op0) == TFmode && ! TARGET_HARD_QUAD)
    {
      enum rtx_code code
        = sparc_emit_float_lib_cmp (sparc_compare_op0, sparc_compare_op1, GE);
      gcc_assert (code == NE);
      emit_jump_insn (gen_bne (operands[0]));
      DONE;
    }
  operands[1] = gen_compare_reg (GE);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GE (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1417 */
rtx
gen_bgeu (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 1423 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  operands[1] = gen_compare_reg (GEU);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GEU (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1427 */
rtx
gen_ble (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 1433 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (TARGET_ARCH64 && sparc_compare_op1 == const0_rtx
      && GET_CODE (sparc_compare_op0) == REG
      && GET_MODE (sparc_compare_op0) == DImode)
    {
      emit_v9_brxx_insn (LE, sparc_compare_op0, operands[0]);
      DONE;
    }
  else if (GET_MODE (sparc_compare_op0) == TFmode && ! TARGET_HARD_QUAD)
    {
      enum rtx_code code
        = sparc_emit_float_lib_cmp (sparc_compare_op0, sparc_compare_op1, LE);
      gcc_assert (code == NE);
      emit_jump_insn (gen_bne (operands[0]));
      DONE;
    }
  operands[1] = gen_compare_reg (LE);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LE (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1452 */
rtx
gen_bleu (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 1458 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  operands[1] = gen_compare_reg (LEU);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LEU (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1462 */
rtx
gen_bunordered (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 1468 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (GET_MODE (sparc_compare_op0) == TFmode && ! TARGET_HARD_QUAD)
    {
      enum rtx_code code
        = sparc_emit_float_lib_cmp (sparc_compare_op0, sparc_compare_op1, UNORDERED);
      gcc_assert (code == EQ);
      emit_jump_insn (gen_beq (operands[0]));
      DONE;
    }
  operands[1] = gen_compare_reg (UNORDERED);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_UNORDERED (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1480 */
rtx
gen_bordered (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 1486 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (GET_MODE (sparc_compare_op0) == TFmode && ! TARGET_HARD_QUAD)
    {
      enum rtx_code code
        = sparc_emit_float_lib_cmp (sparc_compare_op0, sparc_compare_op1, ORDERED);
      gcc_assert (code == NE);
      emit_jump_insn (gen_bne (operands[0]));
      DONE;
    }
  operands[1] = gen_compare_reg (ORDERED);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_ORDERED (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1498 */
rtx
gen_bungt (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 1504 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (GET_MODE (sparc_compare_op0) == TFmode && ! TARGET_HARD_QUAD)
    {
      enum rtx_code code
        = sparc_emit_float_lib_cmp (sparc_compare_op0, sparc_compare_op1, UNGT);
      gcc_assert (code == GT);
      emit_jump_insn (gen_bgt (operands[0]));
      DONE;
    }
  operands[1] = gen_compare_reg (UNGT);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_UNGT (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1516 */
rtx
gen_bunlt (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 1522 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (GET_MODE (sparc_compare_op0) == TFmode && ! TARGET_HARD_QUAD)
    {
      enum rtx_code code
        = sparc_emit_float_lib_cmp (sparc_compare_op0, sparc_compare_op1, UNLT);
      gcc_assert (code == NE);
      emit_jump_insn (gen_bne (operands[0]));
      DONE;
    }
  operands[1] = gen_compare_reg (UNLT);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_UNLT (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1534 */
rtx
gen_buneq (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 1540 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (GET_MODE (sparc_compare_op0) == TFmode && ! TARGET_HARD_QUAD)
    {
      enum rtx_code code
        = sparc_emit_float_lib_cmp (sparc_compare_op0, sparc_compare_op1, UNEQ);
      gcc_assert (code == EQ);
      emit_jump_insn (gen_beq (operands[0]));
      DONE;
    }
  operands[1] = gen_compare_reg (UNEQ);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_UNEQ (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1552 */
rtx
gen_bunge (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 1558 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (GET_MODE (sparc_compare_op0) == TFmode && ! TARGET_HARD_QUAD)
    {
      enum rtx_code code
        = sparc_emit_float_lib_cmp (sparc_compare_op0, sparc_compare_op1, UNGE);
      gcc_assert (code == NE);
      emit_jump_insn (gen_bne (operands[0]));
      DONE;
    }
  operands[1] = gen_compare_reg (UNGE);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_UNGE (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1570 */
rtx
gen_bunle (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 1576 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (GET_MODE (sparc_compare_op0) == TFmode && ! TARGET_HARD_QUAD)
    {
      enum rtx_code code
        = sparc_emit_float_lib_cmp (sparc_compare_op0, sparc_compare_op1, UNLE);
      gcc_assert (code == NE);
      emit_jump_insn (gen_bne (operands[0]));
      DONE;
    }
  operands[1] = gen_compare_reg (UNLE);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_UNLE (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1588 */
rtx
gen_bltgt (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 1594 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (GET_MODE (sparc_compare_op0) == TFmode && ! TARGET_HARD_QUAD)
    {
      enum rtx_code code
        = sparc_emit_float_lib_cmp (sparc_compare_op0, sparc_compare_op1, LTGT);
      gcc_assert (code == NE);
      emit_jump_insn (gen_bne (operands[0]));
      DONE;
    }
  operands[1] = gen_compare_reg (LTGT);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LTGT (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1775 */
rtx
gen_movqi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1779 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (sparc_expand_move (QImode, operands))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1796 */
rtx
gen_movhi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1800 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (sparc_expand_move (HImode, operands))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1826 */
rtx
gen_movsi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1830 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (sparc_expand_move (SImode, operands))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1879 */
rtx
gen_movsi_pic_label_ref (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1888 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  crtl->uses_pic_offset_table = 1;
  operands[2] = gen_rtx_SYMBOL_REF (Pmode, "_GLOBAL_OFFSET_TABLE_");
  if (!can_create_pseudo_p ())
    {
      operands[3] = operands[0];
      operands[4] = operands[0];
    }
  else
    {
      operands[3] = gen_reg_rtx (SImode);
      operands[4] = gen_reg_rtx (SImode);
    }
  operands[5] = pic_offset_table_rtx;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_HIGH (SImode,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	5))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_LO_SUM (SImode,
	copy_rtx (operand3),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		copy_rtx (operand1),
		copy_rtx (operand2)),
	5))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand5,
	copy_rtx (operand4))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:1936 */
rtx
gen_movdi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1940 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (sparc_expand_move (DImode, operands))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2196 */
rtx
gen_reload_indi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2203 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  sparc_emit_set_symbolic_const64 (operands[0], operands[1], operands[2]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2208 */
rtx
gen_reload_outdi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2215 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  sparc_emit_set_symbolic_const64 (operands[0], operands[1], operands[2]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2221 */
extern rtx gen_split_406 (rtx, rtx *);
rtx
gen_split_406 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2226 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
#if HOST_BITS_PER_WIDE_INT == 32
  emit_insn (gen_movsi (gen_highpart (SImode, operands[0]),
			(INTVAL (operands[1]) < 0) ?
			constm1_rtx :
			const0_rtx));
  emit_insn (gen_movsi (gen_lowpart (SImode, operands[0]),
			operands[1]));
#else
  unsigned int low, high;

  low = trunc_int_for_mode (INTVAL (operands[1]), SImode);
  high = trunc_int_for_mode (INTVAL (operands[1]) >> 32, SImode);
  emit_insn (gen_movsi (gen_highpart (SImode, operands[0]), GEN_INT (high)));

  /* Slick... but this trick loses if this subreg constant part
     can be done in one insn.  */
  if (low == high
      && ! SPARC_SETHI32_P (high)
      && ! SPARC_SIMM13_P (high))
    emit_insn (gen_movsi (gen_lowpart (SImode, operands[0]),
			  gen_highpart (SImode, operands[0])));
  else
    emit_insn (gen_movsi (gen_lowpart (SImode, operands[0]), GEN_INT (low)));
#endif
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2254 */
extern rtx gen_split_407 (rtx, rtx *);
rtx
gen_split_407 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2266 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  emit_insn (gen_movsi (gen_highpart (SImode, operands[0]),
			GEN_INT (CONST_DOUBLE_HIGH (operands[1]))));

  /* Slick... but this trick loses if this subreg constant part
     can be done in one insn.  */
  if (CONST_DOUBLE_LOW (operands[1]) == CONST_DOUBLE_HIGH (operands[1])
      && ! SPARC_SETHI32_P (CONST_DOUBLE_HIGH (operands[1]))
      && ! SPARC_SIMM13_P (CONST_DOUBLE_HIGH (operands[1])))
    {
      emit_insn (gen_movsi (gen_lowpart (SImode, operands[0]),
			    gen_highpart (SImode, operands[0])));
    }
  else
    {
      emit_insn (gen_movsi (gen_lowpart (SImode, operands[0]),
			    GEN_INT (CONST_DOUBLE_LOW (operands[1]))));
    }
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2287 */
extern rtx gen_split_408 (rtx, rtx *);
rtx
gen_split_408 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2299 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  rtx set_dest = operands[0];
  rtx set_src = operands[1];
  rtx dest1, dest2;
  rtx src1, src2;

  dest1 = gen_highpart (SImode, set_dest);
  dest2 = gen_lowpart (SImode, set_dest);
  src1 = gen_highpart (SImode, set_src);
  src2 = gen_lowpart (SImode, set_src);

  /* Now emit using the real source and destination we found, swapping
     the order if we detect overlap.  */
  if (reg_overlap_mentioned_p (dest1, src2))
    {
      emit_insn (gen_movsi (dest2, src2));
      emit_insn (gen_movsi (dest1, src1));
    }
  else
    {
      emit_insn (gen_movsi (dest1, src1));
      emit_insn (gen_movsi (dest2, src2));
    }
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2327 */
extern rtx gen_split_409 (rtx, rtx *);
rtx
gen_split_409 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2334 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  rtx word0 = adjust_address (operands[1], SImode, 0);
  rtx word1 = adjust_address (operands[1], SImode, 4);
  rtx high_part = gen_highpart (SImode, operands[0]);
  rtx low_part = gen_lowpart (SImode, operands[0]);

  if (reg_overlap_mentioned_p (high_part, word1))
    {
      emit_insn (gen_movsi (low_part, word1));
      emit_insn (gen_movsi (high_part, word0));
    }
  else
    {
      emit_insn (gen_movsi (high_part, word0));
      emit_insn (gen_movsi (low_part, word1));
    }
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2353 */
extern rtx gen_split_410 (rtx, rtx *);
rtx
gen_split_410 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2360 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  emit_insn (gen_movsi (adjust_address (operands[0], SImode, 0),
			gen_highpart (SImode, operands[1])));
  emit_insn (gen_movsi (adjust_address (operands[0], SImode, 4),
			gen_lowpart (SImode, operands[1])));
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2368 */
extern rtx gen_split_411 (rtx, rtx *);
rtx
gen_split_411 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2377 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  emit_insn (gen_movsi (adjust_address (operands[0], SImode, 0), const0_rtx));
  emit_insn (gen_movsi (adjust_address (operands[0], SImode, 4), const0_rtx));
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2387 */
rtx
gen_movsf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2394 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (sparc_expand_move (SFmode, operands))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2387 */
rtx
gen_movv2hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2394 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (sparc_expand_move (V2HImode, operands))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2387 */
rtx
gen_movv4qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2394 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (sparc_expand_move (V4QImode, operands))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2516 */
extern rtx gen_split_415 (rtx, rtx *);
rtx
gen_split_415 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (SFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LO_SUM (SFmode,
	copy_rtx (operand0),
	copy_rtx (operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2523 */
rtx
gen_movdf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2530 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (sparc_expand_move (DFmode, operands))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2523 */
rtx
gen_movv2si (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2530 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (sparc_expand_move (V2SImode, operands))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2523 */
rtx
gen_movv4hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2530 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (sparc_expand_move (V4HImode, operands))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2523 */
rtx
gen_movv8qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2530 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (sparc_expand_move (V8QImode, operands))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2649 */
extern rtx gen_split_420 (rtx, rtx *);
rtx
gen_split_420 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2658 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  operands[0] = gen_rtx_raw_REG (DImode, REGNO (operands[0]));

  if (TARGET_ARCH64)
    {
#if HOST_BITS_PER_WIDE_INT == 32
      gcc_unreachable ();
#else
      enum machine_mode mode = GET_MODE (operands[1]);
      rtx tem = simplify_subreg (DImode, operands[1], mode, 0);
      emit_insn (gen_movdi (operands[0], tem));
#endif
    }
  else
    {
      enum machine_mode mode = GET_MODE (operands[1]);
      rtx hi = simplify_subreg (SImode, operands[1], mode, 0);
      rtx lo = simplify_subreg (SImode, operands[1], mode, 4);

      gcc_assert (GET_CODE (hi) == CONST_INT);
      gcc_assert (GET_CODE (lo) == CONST_INT);

      emit_insn (gen_movsi (gen_highpart (SImode, operands[0]), hi));

      /* Slick... but this trick loses if this subreg constant part
         can be done in one insn.  */
      if (lo == hi
	  && ! SPARC_SETHI32_P (INTVAL (hi))
	  && ! SPARC_SIMM13_P (INTVAL (hi)))
        {
          emit_insn (gen_movsi (gen_lowpart (SImode, operands[0]),
			        gen_highpart (SImode, operands[0])));
        }
      else
        {
          emit_insn (gen_movsi (gen_lowpart (SImode, operands[0]), lo));
        }
    }
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2649 */
extern rtx gen_split_421 (rtx, rtx *);
rtx
gen_split_421 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2658 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  operands[0] = gen_rtx_raw_REG (DImode, REGNO (operands[0]));

  if (TARGET_ARCH64)
    {
#if HOST_BITS_PER_WIDE_INT == 32
      gcc_unreachable ();
#else
      enum machine_mode mode = GET_MODE (operands[1]);
      rtx tem = simplify_subreg (DImode, operands[1], mode, 0);
      emit_insn (gen_movdi (operands[0], tem));
#endif
    }
  else
    {
      enum machine_mode mode = GET_MODE (operands[1]);
      rtx hi = simplify_subreg (SImode, operands[1], mode, 0);
      rtx lo = simplify_subreg (SImode, operands[1], mode, 4);

      gcc_assert (GET_CODE (hi) == CONST_INT);
      gcc_assert (GET_CODE (lo) == CONST_INT);

      emit_insn (gen_movsi (gen_highpart (SImode, operands[0]), hi));

      /* Slick... but this trick loses if this subreg constant part
         can be done in one insn.  */
      if (lo == hi
	  && ! SPARC_SETHI32_P (INTVAL (hi))
	  && ! SPARC_SIMM13_P (INTVAL (hi)))
        {
          emit_insn (gen_movsi (gen_lowpart (SImode, operands[0]),
			        gen_highpart (SImode, operands[0])));
        }
      else
        {
          emit_insn (gen_movsi (gen_lowpart (SImode, operands[0]), lo));
        }
    }
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2649 */
extern rtx gen_split_422 (rtx, rtx *);
rtx
gen_split_422 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2658 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  operands[0] = gen_rtx_raw_REG (DImode, REGNO (operands[0]));

  if (TARGET_ARCH64)
    {
#if HOST_BITS_PER_WIDE_INT == 32
      gcc_unreachable ();
#else
      enum machine_mode mode = GET_MODE (operands[1]);
      rtx tem = simplify_subreg (DImode, operands[1], mode, 0);
      emit_insn (gen_movdi (operands[0], tem));
#endif
    }
  else
    {
      enum machine_mode mode = GET_MODE (operands[1]);
      rtx hi = simplify_subreg (SImode, operands[1], mode, 0);
      rtx lo = simplify_subreg (SImode, operands[1], mode, 4);

      gcc_assert (GET_CODE (hi) == CONST_INT);
      gcc_assert (GET_CODE (lo) == CONST_INT);

      emit_insn (gen_movsi (gen_highpart (SImode, operands[0]), hi));

      /* Slick... but this trick loses if this subreg constant part
         can be done in one insn.  */
      if (lo == hi
	  && ! SPARC_SETHI32_P (INTVAL (hi))
	  && ! SPARC_SIMM13_P (INTVAL (hi)))
        {
          emit_insn (gen_movsi (gen_lowpart (SImode, operands[0]),
			        gen_highpart (SImode, operands[0])));
        }
      else
        {
          emit_insn (gen_movsi (gen_lowpart (SImode, operands[0]), lo));
        }
    }
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2649 */
extern rtx gen_split_423 (rtx, rtx *);
rtx
gen_split_423 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2658 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  operands[0] = gen_rtx_raw_REG (DImode, REGNO (operands[0]));

  if (TARGET_ARCH64)
    {
#if HOST_BITS_PER_WIDE_INT == 32
      gcc_unreachable ();
#else
      enum machine_mode mode = GET_MODE (operands[1]);
      rtx tem = simplify_subreg (DImode, operands[1], mode, 0);
      emit_insn (gen_movdi (operands[0], tem));
#endif
    }
  else
    {
      enum machine_mode mode = GET_MODE (operands[1]);
      rtx hi = simplify_subreg (SImode, operands[1], mode, 0);
      rtx lo = simplify_subreg (SImode, operands[1], mode, 4);

      gcc_assert (GET_CODE (hi) == CONST_INT);
      gcc_assert (GET_CODE (lo) == CONST_INT);

      emit_insn (gen_movsi (gen_highpart (SImode, operands[0]), hi));

      /* Slick... but this trick loses if this subreg constant part
         can be done in one insn.  */
      if (lo == hi
	  && ! SPARC_SETHI32_P (INTVAL (hi))
	  && ! SPARC_SIMM13_P (INTVAL (hi)))
        {
          emit_insn (gen_movsi (gen_lowpart (SImode, operands[0]),
			        gen_highpart (SImode, operands[0])));
        }
      else
        {
          emit_insn (gen_movsi (gen_lowpart (SImode, operands[0]), lo));
        }
    }
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2704 */
extern rtx gen_split_424 (rtx, rtx *);
rtx
gen_split_424 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2716 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  rtx set_dest = operands[0];
  rtx set_src = operands[1];
  rtx dest1, dest2;
  rtx src1, src2;
  enum machine_mode half_mode;

  /* We can be expanded for DFmode or integral vector modes.  */
  if (DFmode == DFmode)
    half_mode = SFmode;
  else
    half_mode = SImode;
  
  dest1 = gen_highpart (half_mode, set_dest);
  dest2 = gen_lowpart (half_mode, set_dest);
  src1 = gen_highpart (half_mode, set_src);
  src2 = gen_lowpart (half_mode, set_src);

  /* Now emit using the real source and destination we found, swapping
     the order if we detect overlap.  */
  if (reg_overlap_mentioned_p (dest1, src2))
    {
      emit_move_insn_1 (dest2, src2);
      emit_move_insn_1 (dest1, src1);
    }
  else
    {
      emit_move_insn_1 (dest1, src1);
      emit_move_insn_1 (dest2, src2);
    }
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2704 */
extern rtx gen_split_425 (rtx, rtx *);
rtx
gen_split_425 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2716 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  rtx set_dest = operands[0];
  rtx set_src = operands[1];
  rtx dest1, dest2;
  rtx src1, src2;
  enum machine_mode half_mode;

  /* We can be expanded for DFmode or integral vector modes.  */
  if (V2SImode == DFmode)
    half_mode = SFmode;
  else
    half_mode = SImode;
  
  dest1 = gen_highpart (half_mode, set_dest);
  dest2 = gen_lowpart (half_mode, set_dest);
  src1 = gen_highpart (half_mode, set_src);
  src2 = gen_lowpart (half_mode, set_src);

  /* Now emit using the real source and destination we found, swapping
     the order if we detect overlap.  */
  if (reg_overlap_mentioned_p (dest1, src2))
    {
      emit_move_insn_1 (dest2, src2);
      emit_move_insn_1 (dest1, src1);
    }
  else
    {
      emit_move_insn_1 (dest1, src1);
      emit_move_insn_1 (dest2, src2);
    }
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2704 */
extern rtx gen_split_426 (rtx, rtx *);
rtx
gen_split_426 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2716 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  rtx set_dest = operands[0];
  rtx set_src = operands[1];
  rtx dest1, dest2;
  rtx src1, src2;
  enum machine_mode half_mode;

  /* We can be expanded for DFmode or integral vector modes.  */
  if (V4HImode == DFmode)
    half_mode = SFmode;
  else
    half_mode = SImode;
  
  dest1 = gen_highpart (half_mode, set_dest);
  dest2 = gen_lowpart (half_mode, set_dest);
  src1 = gen_highpart (half_mode, set_src);
  src2 = gen_lowpart (half_mode, set_src);

  /* Now emit using the real source and destination we found, swapping
     the order if we detect overlap.  */
  if (reg_overlap_mentioned_p (dest1, src2))
    {
      emit_move_insn_1 (dest2, src2);
      emit_move_insn_1 (dest1, src1);
    }
  else
    {
      emit_move_insn_1 (dest1, src1);
      emit_move_insn_1 (dest2, src2);
    }
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2704 */
extern rtx gen_split_427 (rtx, rtx *);
rtx
gen_split_427 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2716 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  rtx set_dest = operands[0];
  rtx set_src = operands[1];
  rtx dest1, dest2;
  rtx src1, src2;
  enum machine_mode half_mode;

  /* We can be expanded for DFmode or integral vector modes.  */
  if (V8QImode == DFmode)
    half_mode = SFmode;
  else
    half_mode = SImode;
  
  dest1 = gen_highpart (half_mode, set_dest);
  dest2 = gen_lowpart (half_mode, set_dest);
  src1 = gen_highpart (half_mode, set_src);
  src2 = gen_lowpart (half_mode, set_src);

  /* Now emit using the real source and destination we found, swapping
     the order if we detect overlap.  */
  if (reg_overlap_mentioned_p (dest1, src2))
    {
      emit_move_insn_1 (dest2, src2);
      emit_move_insn_1 (dest1, src1);
    }
  else
    {
      emit_move_insn_1 (dest1, src1);
      emit_move_insn_1 (dest2, src2);
    }
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2749 */
extern rtx gen_split_428 (rtx, rtx *);
rtx
gen_split_428 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2758 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  enum machine_mode half_mode;
  rtx word0, word1;

  /* We can be expanded for DFmode or integral vector modes.  */
  if (DFmode == DFmode)
    half_mode = SFmode;
  else
    half_mode = SImode;

  word0 = adjust_address (operands[1], half_mode, 0);
  word1 = adjust_address (operands[1], half_mode, 4);

  if (reg_overlap_mentioned_p (gen_highpart (half_mode, operands[0]), word1))
    {
      emit_move_insn_1 (gen_lowpart (half_mode, operands[0]), word1);
      emit_move_insn_1 (gen_highpart (half_mode, operands[0]), word0);
    }
  else
    {
      emit_move_insn_1 (gen_highpart (half_mode, operands[0]), word0);
      emit_move_insn_1 (gen_lowpart (half_mode, operands[0]), word1);
    }
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2749 */
extern rtx gen_split_429 (rtx, rtx *);
rtx
gen_split_429 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2758 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  enum machine_mode half_mode;
  rtx word0, word1;

  /* We can be expanded for DFmode or integral vector modes.  */
  if (V2SImode == DFmode)
    half_mode = SFmode;
  else
    half_mode = SImode;

  word0 = adjust_address (operands[1], half_mode, 0);
  word1 = adjust_address (operands[1], half_mode, 4);

  if (reg_overlap_mentioned_p (gen_highpart (half_mode, operands[0]), word1))
    {
      emit_move_insn_1 (gen_lowpart (half_mode, operands[0]), word1);
      emit_move_insn_1 (gen_highpart (half_mode, operands[0]), word0);
    }
  else
    {
      emit_move_insn_1 (gen_highpart (half_mode, operands[0]), word0);
      emit_move_insn_1 (gen_lowpart (half_mode, operands[0]), word1);
    }
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2749 */
extern rtx gen_split_430 (rtx, rtx *);
rtx
gen_split_430 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2758 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  enum machine_mode half_mode;
  rtx word0, word1;

  /* We can be expanded for DFmode or integral vector modes.  */
  if (V4HImode == DFmode)
    half_mode = SFmode;
  else
    half_mode = SImode;

  word0 = adjust_address (operands[1], half_mode, 0);
  word1 = adjust_address (operands[1], half_mode, 4);

  if (reg_overlap_mentioned_p (gen_highpart (half_mode, operands[0]), word1))
    {
      emit_move_insn_1 (gen_lowpart (half_mode, operands[0]), word1);
      emit_move_insn_1 (gen_highpart (half_mode, operands[0]), word0);
    }
  else
    {
      emit_move_insn_1 (gen_highpart (half_mode, operands[0]), word0);
      emit_move_insn_1 (gen_lowpart (half_mode, operands[0]), word1);
    }
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2749 */
extern rtx gen_split_431 (rtx, rtx *);
rtx
gen_split_431 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2758 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  enum machine_mode half_mode;
  rtx word0, word1;

  /* We can be expanded for DFmode or integral vector modes.  */
  if (V8QImode == DFmode)
    half_mode = SFmode;
  else
    half_mode = SImode;

  word0 = adjust_address (operands[1], half_mode, 0);
  word1 = adjust_address (operands[1], half_mode, 4);

  if (reg_overlap_mentioned_p (gen_highpart (half_mode, operands[0]), word1))
    {
      emit_move_insn_1 (gen_lowpart (half_mode, operands[0]), word1);
      emit_move_insn_1 (gen_highpart (half_mode, operands[0]), word0);
    }
  else
    {
      emit_move_insn_1 (gen_highpart (half_mode, operands[0]), word0);
      emit_move_insn_1 (gen_lowpart (half_mode, operands[0]), word1);
    }
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2784 */
extern rtx gen_split_432 (rtx, rtx *);
rtx
gen_split_432 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2793 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  enum machine_mode half_mode;
  rtx word0, word1;

  /* We can be expanded for DFmode or integral vector modes.  */
  if (DFmode == DFmode)
    half_mode = SFmode;
  else
    half_mode = SImode;

  word0 = adjust_address (operands[0], half_mode, 0);
  word1 = adjust_address (operands[0], half_mode, 4);

  emit_move_insn_1 (word0, gen_highpart (half_mode, operands[1]));
  emit_move_insn_1 (word1, gen_lowpart (half_mode, operands[1]));
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2784 */
extern rtx gen_split_433 (rtx, rtx *);
rtx
gen_split_433 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2793 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  enum machine_mode half_mode;
  rtx word0, word1;

  /* We can be expanded for DFmode or integral vector modes.  */
  if (V2SImode == DFmode)
    half_mode = SFmode;
  else
    half_mode = SImode;

  word0 = adjust_address (operands[0], half_mode, 0);
  word1 = adjust_address (operands[0], half_mode, 4);

  emit_move_insn_1 (word0, gen_highpart (half_mode, operands[1]));
  emit_move_insn_1 (word1, gen_lowpart (half_mode, operands[1]));
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2784 */
extern rtx gen_split_434 (rtx, rtx *);
rtx
gen_split_434 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2793 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  enum machine_mode half_mode;
  rtx word0, word1;

  /* We can be expanded for DFmode or integral vector modes.  */
  if (V4HImode == DFmode)
    half_mode = SFmode;
  else
    half_mode = SImode;

  word0 = adjust_address (operands[0], half_mode, 0);
  word1 = adjust_address (operands[0], half_mode, 4);

  emit_move_insn_1 (word0, gen_highpart (half_mode, operands[1]));
  emit_move_insn_1 (word1, gen_lowpart (half_mode, operands[1]));
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2784 */
extern rtx gen_split_435 (rtx, rtx *);
rtx
gen_split_435 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2793 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  enum machine_mode half_mode;
  rtx word0, word1;

  /* We can be expanded for DFmode or integral vector modes.  */
  if (V8QImode == DFmode)
    half_mode = SFmode;
  else
    half_mode = SImode;

  word0 = adjust_address (operands[0], half_mode, 0);
  word1 = adjust_address (operands[0], half_mode, 4);

  emit_move_insn_1 (word0, gen_highpart (half_mode, operands[1]));
  emit_move_insn_1 (word1, gen_lowpart (half_mode, operands[1]));
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2811 */
extern rtx gen_split_436 (rtx, rtx *);
rtx
gen_split_436 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2820 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  enum machine_mode half_mode;
  rtx dest1, dest2;

  /* We can be expanded for DFmode or integral vector modes.  */
  if (DFmode == DFmode)
    half_mode = SFmode;
  else
    half_mode = SImode;

  dest1 = adjust_address (operands[0], half_mode, 0);
  dest2 = adjust_address (operands[0], half_mode, 4);

  emit_move_insn_1 (dest1, CONST0_RTX (half_mode));
  emit_move_insn_1 (dest2, CONST0_RTX (half_mode));
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2811 */
extern rtx gen_split_437 (rtx, rtx *);
rtx
gen_split_437 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2820 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  enum machine_mode half_mode;
  rtx dest1, dest2;

  /* We can be expanded for DFmode or integral vector modes.  */
  if (V2SImode == DFmode)
    half_mode = SFmode;
  else
    half_mode = SImode;

  dest1 = adjust_address (operands[0], half_mode, 0);
  dest2 = adjust_address (operands[0], half_mode, 4);

  emit_move_insn_1 (dest1, CONST0_RTX (half_mode));
  emit_move_insn_1 (dest2, CONST0_RTX (half_mode));
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2811 */
extern rtx gen_split_438 (rtx, rtx *);
rtx
gen_split_438 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2820 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  enum machine_mode half_mode;
  rtx dest1, dest2;

  /* We can be expanded for DFmode or integral vector modes.  */
  if (V4HImode == DFmode)
    half_mode = SFmode;
  else
    half_mode = SImode;

  dest1 = adjust_address (operands[0], half_mode, 0);
  dest2 = adjust_address (operands[0], half_mode, 4);

  emit_move_insn_1 (dest1, CONST0_RTX (half_mode));
  emit_move_insn_1 (dest2, CONST0_RTX (half_mode));
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2811 */
extern rtx gen_split_439 (rtx, rtx *);
rtx
gen_split_439 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2820 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  enum machine_mode half_mode;
  rtx dest1, dest2;

  /* We can be expanded for DFmode or integral vector modes.  */
  if (V8QImode == DFmode)
    half_mode = SFmode;
  else
    half_mode = SImode;

  dest1 = adjust_address (operands[0], half_mode, 0);
  dest2 = adjust_address (operands[0], half_mode, 4);

  emit_move_insn_1 (dest1, CONST0_RTX (half_mode));
  emit_move_insn_1 (dest2, CONST0_RTX (half_mode));
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2838 */
extern rtx gen_split_440 (rtx, rtx *);
rtx
gen_split_440 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2849 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  enum machine_mode half_mode;
  rtx set_dest = operands[0];
  rtx dest1, dest2;

  /* We can be expanded for DFmode or integral vector modes.  */
  if (DFmode == DFmode)
    half_mode = SFmode;
  else
    half_mode = SImode;

  dest1 = gen_highpart (half_mode, set_dest);
  dest2 = gen_lowpart (half_mode, set_dest);
  emit_move_insn_1 (dest1, CONST0_RTX (half_mode));
  emit_move_insn_1 (dest2, CONST0_RTX (half_mode));
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2838 */
extern rtx gen_split_441 (rtx, rtx *);
rtx
gen_split_441 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2849 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  enum machine_mode half_mode;
  rtx set_dest = operands[0];
  rtx dest1, dest2;

  /* We can be expanded for DFmode or integral vector modes.  */
  if (V2SImode == DFmode)
    half_mode = SFmode;
  else
    half_mode = SImode;

  dest1 = gen_highpart (half_mode, set_dest);
  dest2 = gen_lowpart (half_mode, set_dest);
  emit_move_insn_1 (dest1, CONST0_RTX (half_mode));
  emit_move_insn_1 (dest2, CONST0_RTX (half_mode));
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2838 */
extern rtx gen_split_442 (rtx, rtx *);
rtx
gen_split_442 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2849 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  enum machine_mode half_mode;
  rtx set_dest = operands[0];
  rtx dest1, dest2;

  /* We can be expanded for DFmode or integral vector modes.  */
  if (V4HImode == DFmode)
    half_mode = SFmode;
  else
    half_mode = SImode;

  dest1 = gen_highpart (half_mode, set_dest);
  dest2 = gen_lowpart (half_mode, set_dest);
  emit_move_insn_1 (dest1, CONST0_RTX (half_mode));
  emit_move_insn_1 (dest2, CONST0_RTX (half_mode));
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2838 */
extern rtx gen_split_443 (rtx, rtx *);
rtx
gen_split_443 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2849 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  enum machine_mode half_mode;
  rtx set_dest = operands[0];
  rtx dest1, dest2;

  /* We can be expanded for DFmode or integral vector modes.  */
  if (V8QImode == DFmode)
    half_mode = SFmode;
  else
    half_mode = SImode;

  dest1 = gen_highpart (half_mode, set_dest);
  dest2 = gen_lowpart (half_mode, set_dest);
  emit_move_insn_1 (dest1, CONST0_RTX (half_mode));
  emit_move_insn_1 (dest2, CONST0_RTX (half_mode));
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2867 */
rtx
gen_movtf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2871 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (sparc_expand_move (TFmode, operands))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2940 */
extern rtx gen_split_445 (rtx, rtx *);
rtx
gen_split_445 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2949 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  rtx set_dest = operands[0];
  rtx set_src = operands[1];
  rtx dest1, dest2;
  rtx src1, src2;

  dest1 = gen_df_reg (set_dest, 0);
  dest2 = gen_df_reg (set_dest, 1);
  src1 = gen_df_reg (set_src, 0);
  src2 = gen_df_reg (set_src, 1);

  /* Now emit using the real source and destination we found, swapping
     the order if we detect overlap.  */
  if (reg_overlap_mentioned_p (dest1, src2))
    {
      emit_insn (gen_movdf (dest2, src2));
      emit_insn (gen_movdf (dest1, src1));
    }
  else
    {
      emit_insn (gen_movdf (dest1, src1));
      emit_insn (gen_movdf (dest2, src2));
    }
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:2975 */
extern rtx gen_split_446 (rtx, rtx *);
rtx
gen_split_446 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2980 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  rtx set_dest = operands[0];
  rtx dest1, dest2;

  switch (GET_CODE (set_dest))
    {
    case REG:
      dest1 = gen_df_reg (set_dest, 0);
      dest2 = gen_df_reg (set_dest, 1);
      break;
    case MEM:
      dest1 = adjust_address (set_dest, DFmode, 0);
      dest2 = adjust_address (set_dest, DFmode, 8);
      break;
    default:
      gcc_unreachable ();      
    }

  emit_insn (gen_movdf (dest1, CONST0_RTX (DFmode)));
  emit_insn (gen_movdf (dest2, CONST0_RTX (DFmode)));
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3003 */
extern rtx gen_split_447 (rtx, rtx *);
rtx
gen_split_447 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 3012 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  rtx word0 = adjust_address (operands[1], DFmode, 0);
  rtx word1 = adjust_address (operands[1], DFmode, 8);
  rtx set_dest, dest1, dest2;

  set_dest = operands[0];

  dest1 = gen_df_reg (set_dest, 0);
  dest2 = gen_df_reg (set_dest, 1);

  /* Now output, ordering such that we don't clobber any registers
     mentioned in the address.  */
  if (reg_overlap_mentioned_p (dest1, word1))

    {
      emit_insn (gen_movdf (dest2, word1));
      emit_insn (gen_movdf (dest1, word0));
    }
  else
   {
      emit_insn (gen_movdf (dest1, word0));
      emit_insn (gen_movdf (dest2, word1));
   }
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3038 */
extern rtx gen_split_448 (rtx, rtx *);
rtx
gen_split_448 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 3047 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  rtx set_src = operands[1];

  emit_insn (gen_movdf (adjust_address (operands[0], DFmode, 0),
			gen_df_reg (set_src, 0)));
  emit_insn (gen_movdf (adjust_address (operands[0], DFmode, 8),
			gen_df_reg (set_src, 1)));
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3066 */
rtx
gen_movqicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 3074 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  enum rtx_code code = GET_CODE (operands[1]);

  if (GET_MODE (sparc_compare_op0) == DImode
      && ! TARGET_ARCH64)
    FAIL;

  if (sparc_compare_op1 == const0_rtx
      && GET_CODE (sparc_compare_op0) == REG
      && GET_MODE (sparc_compare_op0) == DImode
      && v9_regcmp_p (code))
    operands[1] = gen_rtx_fmt_ee (code, DImode, sparc_compare_op0, const0_rtx);
  else
    operands[1] = gen_compare_operator (code);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (QImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3066 */
rtx
gen_movhicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 3074 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  enum rtx_code code = GET_CODE (operands[1]);

  if (GET_MODE (sparc_compare_op0) == DImode
      && ! TARGET_ARCH64)
    FAIL;

  if (sparc_compare_op1 == const0_rtx
      && GET_CODE (sparc_compare_op0) == REG
      && GET_MODE (sparc_compare_op0) == DImode
      && v9_regcmp_p (code))
    operands[1] = gen_rtx_fmt_ee (code, DImode, sparc_compare_op0, const0_rtx);
  else
    operands[1] = gen_compare_operator (code);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (HImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3066 */
rtx
gen_movsicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 3074 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  enum rtx_code code = GET_CODE (operands[1]);

  if (GET_MODE (sparc_compare_op0) == DImode
      && ! TARGET_ARCH64)
    FAIL;

  if (sparc_compare_op1 == const0_rtx
      && GET_CODE (sparc_compare_op0) == REG
      && GET_MODE (sparc_compare_op0) == DImode
      && v9_regcmp_p (code))
    operands[1] = gen_rtx_fmt_ee (code, DImode, sparc_compare_op0, const0_rtx);
  else
    operands[1] = gen_compare_operator (code);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3090 */
rtx
gen_movsfcc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 3098 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  enum rtx_code code = GET_CODE (operands[1]);

  if (GET_MODE (sparc_compare_op0) == DImode
      && ! TARGET_ARCH64)
    FAIL;

  if (sparc_compare_op1 == const0_rtx
      && GET_CODE (sparc_compare_op0) == REG
      && GET_MODE (sparc_compare_op0) == DImode
      && v9_regcmp_p (code))
    operands[1] = gen_rtx_fmt_ee (code, DImode, sparc_compare_op0, const0_rtx);
  else
    operands[1] = gen_compare_operator (code);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3090 */
rtx
gen_movdfcc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 3098 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  enum rtx_code code = GET_CODE (operands[1]);

  if (GET_MODE (sparc_compare_op0) == DImode
      && ! TARGET_ARCH64)
    FAIL;

  if (sparc_compare_op1 == const0_rtx
      && GET_CODE (sparc_compare_op0) == REG
      && GET_MODE (sparc_compare_op0) == DImode
      && v9_regcmp_p (code))
    operands[1] = gen_rtx_fmt_ee (code, DImode, sparc_compare_op0, const0_rtx);
  else
    operands[1] = gen_compare_operator (code);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3090 */
rtx
gen_movtfcc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 3098 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  enum rtx_code code = GET_CODE (operands[1]);

  if (GET_MODE (sparc_compare_op0) == DImode
      && ! TARGET_ARCH64)
    FAIL;

  if (sparc_compare_op1 == const0_rtx
      && GET_CODE (sparc_compare_op0) == REG
      && GET_MODE (sparc_compare_op0) == DImode
      && v9_regcmp_p (code))
    operands[1] = gen_rtx_fmt_ee (code, DImode, sparc_compare_op0, const0_rtx);
  else
    operands[1] = gen_compare_operator (code);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (TFmode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3224 */
extern rtx gen_split_455 (rtx, rtx *);
rtx
gen_split_455 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 3235 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  rtx set_dest = operands[0];
  rtx set_srca = operands[3];
  rtx set_srcb = operands[4];
  int third = rtx_equal_p (set_dest, set_srca);
  rtx dest1, dest2;
  rtx srca1, srca2, srcb1, srcb2;

  dest1 = gen_df_reg (set_dest, 0);
  dest2 = gen_df_reg (set_dest, 1);
  srca1 = gen_df_reg (set_srca, 0);
  srca2 = gen_df_reg (set_srca, 1);
  srcb1 = gen_df_reg (set_srcb, 0);
  srcb2 = gen_df_reg (set_srcb, 1);

  /* Now emit using the real source and destination we found, swapping
     the order if we detect overlap.  */
  if ((third && reg_overlap_mentioned_p (dest1, srcb2))
      || (!third && reg_overlap_mentioned_p (dest1, srca2)))
    {
      emit_insn (gen_movdf_cc_v9 (dest2, operands[1], operands[2], srca2, srcb2));
      emit_insn (gen_movdf_cc_v9 (dest1, operands[1], operands[2], srca1, srcb1));
    }
  else
    {
      emit_insn (gen_movdf_cc_v9 (dest1, operands[1], operands[2], srca1, srcb1));
      emit_insn (gen_movdf_cc_v9 (dest2, operands[1], operands[2], srca2, srcb2));
    }
  DONE;
}
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3317 */
rtx
gen_zero_extendhisi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3321 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  rtx temp = gen_reg_rtx (SImode);
  rtx shift_16 = GEN_INT (16);
  int op1_subbyte = 0;

  if (GET_CODE (operand1) == SUBREG)
    {
      op1_subbyte = SUBREG_BYTE (operand1);
      op1_subbyte /= GET_MODE_SIZE (SImode);
      op1_subbyte *= GET_MODE_SIZE (SImode);
      operand1 = XEXP (operand1, 0);
    }

  emit_insn (gen_ashlsi3 (temp, gen_rtx_SUBREG (SImode, operand1, op1_subbyte),
			  shift_16));
  emit_insn (gen_lshrsi3 (operand0, temp, shift_16));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3348 */
rtx
gen_zero_extendqihi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3364 */
rtx
gen_zero_extendqisi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3429 */
rtx
gen_zero_extendsidi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3444 */
extern rtx gen_split_460 (rtx, rtx *);
rtx
gen_split_460 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 3452 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  rtx dest1, dest2;

  dest1 = gen_highpart (SImode, operands[0]);
  dest2 = gen_lowpart (SImode, operands[0]);

  /* Swap the order in case of overlap.  */
  if (REGNO (dest1) == REGNO (operands[1]))
    {
      operands[2] = dest2;
      operands[3] = operands[1];
      operands[4] = dest1;
      operands[5] = const0_rtx;
    }
  else
    {
      operands[2] = dest1;
      operands[3] = const0_rtx;
      operands[4] = dest2;
      operands[5] = operands[1];
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand3));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3597 */
rtx
gen_extendhisi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3601 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  rtx temp = gen_reg_rtx (SImode);
  rtx shift_16 = GEN_INT (16);
  int op1_subbyte = 0;

  if (GET_CODE (operand1) == SUBREG)
    {
      op1_subbyte = SUBREG_BYTE (operand1);
      op1_subbyte /= GET_MODE_SIZE (SImode);
      op1_subbyte *= GET_MODE_SIZE (SImode);
      operand1 = XEXP (operand1, 0);
    }

  emit_insn (gen_ashlsi3 (temp, gen_rtx_SUBREG (SImode, operand1, op1_subbyte),
			  shift_16));
  emit_insn (gen_ashrsi3 (operand0, temp, shift_16));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3628 */
rtx
gen_extendqihi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3632 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  rtx temp = gen_reg_rtx (SImode);
  rtx shift_24 = GEN_INT (24);
  int op1_subbyte = 0;
  int op0_subbyte = 0;

  if (GET_CODE (operand1) == SUBREG)
    {
      op1_subbyte = SUBREG_BYTE (operand1);
      op1_subbyte /= GET_MODE_SIZE (SImode);
      op1_subbyte *= GET_MODE_SIZE (SImode);
      operand1 = XEXP (operand1, 0);
    }
  if (GET_CODE (operand0) == SUBREG)
    {
      op0_subbyte = SUBREG_BYTE (operand0);
      op0_subbyte /= GET_MODE_SIZE (SImode);
      op0_subbyte *= GET_MODE_SIZE (SImode);
      operand0 = XEXP (operand0, 0);
    }
  emit_insn (gen_ashlsi3 (temp, gen_rtx_SUBREG (SImode, operand1, op1_subbyte),
			  shift_24));
  if (GET_MODE (operand0) != SImode)
    operand0 = gen_rtx_SUBREG (SImode, operand0, op0_subbyte);
  emit_insn (gen_ashrsi3 (operand0, temp, shift_24));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3668 */
rtx
gen_extendqisi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3672 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  rtx temp = gen_reg_rtx (SImode);
  rtx shift_24 = GEN_INT (24);
  int op1_subbyte = 0;

  if (GET_CODE (operand1) == SUBREG)
    {
      op1_subbyte = SUBREG_BYTE (operand1);
      op1_subbyte /= GET_MODE_SIZE (SImode);
      op1_subbyte *= GET_MODE_SIZE (SImode);
      operand1 = XEXP (operand1, 0);
    }

  emit_insn (gen_ashlsi3 (temp, gen_rtx_SUBREG (SImode, operand1, op1_subbyte),
			  shift_24));
  emit_insn (gen_ashrsi3 (operand0, temp, shift_24));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3827 */
rtx
gen_extendsftf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3832 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
emit_tfmode_cvt (FLOAT_EXTEND, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (TFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3842 */
rtx
gen_extenddftf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3847 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
emit_tfmode_cvt (FLOAT_EXTEND, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (TFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3866 */
rtx
gen_trunctfsf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3871 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
emit_tfmode_cvt (FLOAT_TRUNCATE, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3881 */
rtx
gen_trunctfdf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3886 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
emit_tfmode_cvt (FLOAT_TRUNCATE, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3915 */
rtx
gen_floatsitf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3919 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
emit_tfmode_cvt (FLOAT, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (TFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:3964 */
rtx
gen_floatditf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3968 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
emit_tfmode_cvt (FLOAT, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (TFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4002 */
rtx
gen_fix_trunctfsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4006 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
emit_tfmode_cvt (FIX, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4051 */
rtx
gen_fix_trunctfdi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4055 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
emit_tfmode_cvt (FIX, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4073 */
rtx
gen_adddi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 4078 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (! TARGET_ARCH64)
    {
      emit_insn (gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
			  gen_rtx_SET (VOIDmode, operands[0],
				   gen_rtx_PLUS (DImode, operands[1],
						 operands[2])),
			  gen_rtx_CLOBBER (VOIDmode,
				   gen_rtx_REG (CCmode, SPARC_ICC_REG)))));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4091 */
extern rtx gen_split_473 (rtx, rtx *);
rtx
gen_split_473 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx _val = 0;
  start_sequence ();
#line 4109 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  operands[3] = gen_lowpart (SImode, operands[0]);
  operands[4] = gen_lowpart (SImode, operands[1]);
  operands[5] = gen_lowpart (SImode, operands[2]);
  operands[6] = gen_highpart (SImode, operands[0]);
  operands[7] = gen_highpart_mode (SImode, DImode, operands[1]);
#if HOST_BITS_PER_WIDE_INT == 32
  if (GET_CODE (operands[2]) == CONST_INT)
    {
      if (INTVAL (operands[2]) < 0)
	operands[8] = constm1_rtx;
      else
	operands[8] = const0_rtx;
    }
  else
#endif
    operands[8] = gen_highpart_mode (SImode, DImode, operands[2]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  operand8 = operands[8];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	gen_rtx_COMPARE (CC_NOOVmode,
	gen_rtx_PLUS (SImode,
	operand4,
	operand5),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand4),
	copy_rtx (operand5))))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	operand7,
	operand8),
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	const0_rtx))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4139 */
extern rtx gen_split_474 (rtx, rtx *);
rtx
gen_split_474 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 4151 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[3] = gen_lowpart (SImode, operands[0]);
   operands[4] = gen_highpart_mode (SImode, DImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2),
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	const0_rtx))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4164 */
extern rtx gen_split_475 (rtx, rtx *);
rtx
gen_split_475 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 4179 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[3] = gen_lowpart (SImode, operands[2]);
   operands[4] = gen_highpart (SImode, operands[2]);
   operands[5] = gen_lowpart (SImode, operands[0]);
   operands[6] = gen_highpart (SImode, operands[0]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	gen_rtx_COMPARE (CC_NOOVmode,
	gen_rtx_PLUS (SImode,
	operand3,
	operand1),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand3),
	copy_rtx (operand1))))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	operand4,
	const0_rtx),
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	const0_rtx))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4246 */
rtx
gen_subdi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 4251 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (! TARGET_ARCH64)
    {
      emit_insn (gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
			  gen_rtx_SET (VOIDmode, operands[0],
				   gen_rtx_MINUS (DImode, operands[1],
						  operands[2])),
			  gen_rtx_CLOBBER (VOIDmode,
				   gen_rtx_REG (CCmode, SPARC_ICC_REG)))));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4264 */
extern rtx gen_split_477 (rtx, rtx *);
rtx
gen_split_477 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx _val = 0;
  start_sequence ();
#line 4282 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  operands[3] = gen_lowpart (SImode, operands[0]);
  operands[4] = gen_lowpart (SImode, operands[1]);
  operands[5] = gen_lowpart (SImode, operands[2]);
  operands[6] = gen_highpart (SImode, operands[0]);
  operands[7] = gen_highpart (SImode, operands[1]);
#if HOST_BITS_PER_WIDE_INT == 32
  if (GET_CODE (operands[2]) == CONST_INT)
    {
      if (INTVAL (operands[2]) < 0)
	operands[8] = constm1_rtx;
      else
	operands[8] = const0_rtx;
    }
  else
#endif
    operands[8] = gen_highpart_mode (SImode, DImode, operands[2]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  operand8 = operands[8];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	gen_rtx_COMPARE (CC_NOOVmode,
	gen_rtx_MINUS (SImode,
	operand4,
	operand5),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MINUS (SImode,
	copy_rtx (operand4),
	copy_rtx (operand5))))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_MINUS (SImode,
	gen_rtx_MINUS (SImode,
	operand7,
	operand8),
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	const0_rtx))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4321 */
extern rtx gen_split_478 (rtx, rtx *);
rtx
gen_split_478 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 4332 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[3] = gen_lowpart (SImode, operands[0]);
   operands[4] = gen_highpart (SImode, operands[0]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MINUS (SImode,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2),
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	const0_rtx))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4336 */
extern rtx gen_split_479 (rtx, rtx *);
rtx
gen_split_479 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
#line 4351 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[3] = gen_lowpart (SImode, operands[1]);
   operands[4] = gen_highpart (SImode, operands[1]);
   operands[5] = gen_lowpart (SImode, operands[0]);
   operands[6] = gen_highpart (SImode, operands[0]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	gen_rtx_COMPARE (CC_NOOVmode,
	gen_rtx_MINUS (SImode,
	operand3,
	operand2),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_MINUS (SImode,
	copy_rtx (operand3),
	copy_rtx (operand2))))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_MINUS (SImode,
	gen_rtx_MINUS (SImode,
	operand4,
	const0_rtx),
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	const0_rtx))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4432 */
rtx
gen_muldi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 4437 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (TARGET_V8PLUS)
    {
      emit_insn (gen_muldi3_v8plus (operands[0], operands[1], operands[2]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4502 */
rtx
gen_mulsidi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 4507 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (CONSTANT_P (operands[2]))
    {
      if (TARGET_V8PLUS)
	emit_insn (gen_const_mulsidi3_v8plus (operands[0], operands[1],
					      operands[2]));
      else if (TARGET_ARCH32)
	emit_insn (gen_const_mulsidi3_sp32 (operands[0], operands[1],
					    operands[2]));
      else 
	emit_insn (gen_const_mulsidi3_sp64 (operands[0], operands[1],
					    operands[2]));
      DONE;
    }
  if (TARGET_V8PLUS)
    {
      emit_insn (gen_mulsidi3_v8plus (operands[0], operands[1], operands[2]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4610 */
rtx
gen_smulsi3_highpart (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 4617 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (CONSTANT_P (operands[2]))
    {
      if (TARGET_V8PLUS)
	{
	  emit_insn (gen_const_smulsi3_highpart_v8plus (operands[0],
							operands[1],
							operands[2],
							GEN_INT (32)));
	  DONE;
	}
      emit_insn (gen_const_smulsi3_highpart (operands[0], operands[1], operands[2]));
      DONE;
    }
  if (TARGET_V8PLUS)
    {
      emit_insn (gen_smulsi3_highpart_v8plus (operands[0], operands[1],
					      operands[2], GEN_INT (32)));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4711 */
rtx
gen_umulsidi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 4716 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (CONSTANT_P (operands[2]))
    {
      if (TARGET_V8PLUS)
	emit_insn (gen_const_umulsidi3_v8plus (operands[0], operands[1],
					       operands[2]));
      else if (TARGET_ARCH32)
	emit_insn (gen_const_umulsidi3_sp32 (operands[0], operands[1],
					     operands[2]));
      else 
	emit_insn (gen_const_umulsidi3_sp64 (operands[0], operands[1],
					     operands[2]));
      DONE;
    }
  if (TARGET_V8PLUS)
    {
      emit_insn (gen_umulsidi3_v8plus (operands[0], operands[1], operands[2]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4817 */
rtx
gen_umulsi3_highpart (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 4824 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (CONSTANT_P (operands[2]))
    {
      if (TARGET_V8PLUS)
	{
	  emit_insn (gen_const_umulsi3_highpart_v8plus (operands[0],
							operands[1],
							operands[2],
							GEN_INT (32)));
	  DONE;
	}
      emit_insn (gen_const_umulsi3_highpart (operands[0], operands[1], operands[2]));
      DONE;
    }
  if (TARGET_V8PLUS)
    {
      emit_insn (gen_umulsi3_highpart_v8plus (operands[0], operands[1],
					      operands[2], GEN_INT (32)));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4900 */
rtx
gen_divsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 4906 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (TARGET_ARCH64)
    {
      operands[3] = gen_reg_rtx(SImode);
      emit_insn (gen_ashrsi3 (operands[3], operands[1], GEN_INT (31)));
      emit_insn (gen_divsi3_sp64 (operands[0], operands[1], operands[2],
				  operands[3]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:4999 */
rtx
gen_udivsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5126 */
rtx
gen_anddi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (DImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5126 */
rtx
gen_andv2si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V2SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5126 */
rtx
gen_andv4hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V4HImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5126 */
rtx
gen_andv8qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V8QImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5170 */
extern rtx gen_split_491 (rtx, rtx *);
rtx
gen_split_491 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 5178 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  operands[4] = GEN_INT (~INTVAL (operands[2]));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand4));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	gen_rtx_NOT (SImode,
	copy_rtx (operand3)),
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5182 */
extern rtx gen_split_492 (rtx, rtx *);
rtx
gen_split_492 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx _val = 0;
  start_sequence ();
#line 5198 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[3] = gen_highpart (SImode, operands[0]);
   operands[4] = gen_highpart (SImode, operands[1]);
   operands[5] = gen_highpart (SImode, operands[2]);
   operands[6] = gen_lowpart (SImode, operands[0]);
   operands[7] = gen_lowpart (SImode, operands[1]);
   operands[8] = gen_lowpart (SImode, operands[2]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  operand8 = operands[8];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_AND (SImode,
	gen_rtx_NOT (SImode,
	operand4),
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_AND (SImode,
	gen_rtx_NOT (SImode,
	operand7),
	operand8)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5182 */
extern rtx gen_split_493 (rtx, rtx *);
rtx
gen_split_493 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx _val = 0;
  start_sequence ();
#line 5198 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[3] = gen_highpart (SImode, operands[0]);
   operands[4] = gen_highpart (SImode, operands[1]);
   operands[5] = gen_highpart (SImode, operands[2]);
   operands[6] = gen_lowpart (SImode, operands[0]);
   operands[7] = gen_lowpart (SImode, operands[1]);
   operands[8] = gen_lowpart (SImode, operands[2]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  operand8 = operands[8];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_AND (SImode,
	gen_rtx_NOT (SImode,
	operand4),
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_AND (SImode,
	gen_rtx_NOT (SImode,
	operand7),
	operand8)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5182 */
extern rtx gen_split_494 (rtx, rtx *);
rtx
gen_split_494 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx _val = 0;
  start_sequence ();
#line 5198 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[3] = gen_highpart (SImode, operands[0]);
   operands[4] = gen_highpart (SImode, operands[1]);
   operands[5] = gen_highpart (SImode, operands[2]);
   operands[6] = gen_lowpart (SImode, operands[0]);
   operands[7] = gen_lowpart (SImode, operands[1]);
   operands[8] = gen_lowpart (SImode, operands[2]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  operand8 = operands[8];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_AND (SImode,
	gen_rtx_NOT (SImode,
	operand4),
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_AND (SImode,
	gen_rtx_NOT (SImode,
	operand7),
	operand8)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5182 */
extern rtx gen_split_495 (rtx, rtx *);
rtx
gen_split_495 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx _val = 0;
  start_sequence ();
#line 5198 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[3] = gen_highpart (SImode, operands[0]);
   operands[4] = gen_highpart (SImode, operands[1]);
   operands[5] = gen_highpart (SImode, operands[2]);
   operands[6] = gen_lowpart (SImode, operands[0]);
   operands[7] = gen_lowpart (SImode, operands[1]);
   operands[8] = gen_lowpart (SImode, operands[2]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  operand8 = operands[8];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_AND (SImode,
	gen_rtx_NOT (SImode,
	operand4),
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_AND (SImode,
	gen_rtx_NOT (SImode,
	operand7),
	operand8)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5230 */
rtx
gen_iordi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (DImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5230 */
rtx
gen_iorv2si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V2SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5230 */
rtx
gen_iorv4hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V4HImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5230 */
rtx
gen_iorv8qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V8QImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5271 */
extern rtx gen_split_500 (rtx, rtx *);
rtx
gen_split_500 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 5279 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  operands[4] = GEN_INT (~INTVAL (operands[2]));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand4));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	gen_rtx_NOT (SImode,
	copy_rtx (operand3)),
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5283 */
extern rtx gen_split_501 (rtx, rtx *);
rtx
gen_split_501 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx _val = 0;
  start_sequence ();
#line 5299 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[3] = gen_highpart (SImode, operands[0]);
   operands[4] = gen_highpart (SImode, operands[1]);
   operands[5] = gen_highpart (SImode, operands[2]);
   operands[6] = gen_lowpart (SImode, operands[0]);
   operands[7] = gen_lowpart (SImode, operands[1]);
   operands[8] = gen_lowpart (SImode, operands[2]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  operand8 = operands[8];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_IOR (SImode,
	gen_rtx_NOT (SImode,
	operand4),
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_IOR (SImode,
	gen_rtx_NOT (SImode,
	operand7),
	operand8)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5283 */
extern rtx gen_split_502 (rtx, rtx *);
rtx
gen_split_502 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx _val = 0;
  start_sequence ();
#line 5299 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[3] = gen_highpart (SImode, operands[0]);
   operands[4] = gen_highpart (SImode, operands[1]);
   operands[5] = gen_highpart (SImode, operands[2]);
   operands[6] = gen_lowpart (SImode, operands[0]);
   operands[7] = gen_lowpart (SImode, operands[1]);
   operands[8] = gen_lowpart (SImode, operands[2]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  operand8 = operands[8];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_IOR (SImode,
	gen_rtx_NOT (SImode,
	operand4),
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_IOR (SImode,
	gen_rtx_NOT (SImode,
	operand7),
	operand8)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5283 */
extern rtx gen_split_503 (rtx, rtx *);
rtx
gen_split_503 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx _val = 0;
  start_sequence ();
#line 5299 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[3] = gen_highpart (SImode, operands[0]);
   operands[4] = gen_highpart (SImode, operands[1]);
   operands[5] = gen_highpart (SImode, operands[2]);
   operands[6] = gen_lowpart (SImode, operands[0]);
   operands[7] = gen_lowpart (SImode, operands[1]);
   operands[8] = gen_lowpart (SImode, operands[2]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  operand8 = operands[8];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_IOR (SImode,
	gen_rtx_NOT (SImode,
	operand4),
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_IOR (SImode,
	gen_rtx_NOT (SImode,
	operand7),
	operand8)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5283 */
extern rtx gen_split_504 (rtx, rtx *);
rtx
gen_split_504 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx _val = 0;
  start_sequence ();
#line 5299 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[3] = gen_highpart (SImode, operands[0]);
   operands[4] = gen_highpart (SImode, operands[1]);
   operands[5] = gen_highpart (SImode, operands[2]);
   operands[6] = gen_lowpart (SImode, operands[0]);
   operands[7] = gen_lowpart (SImode, operands[1]);
   operands[8] = gen_lowpart (SImode, operands[2]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  operand8 = operands[8];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_IOR (SImode,
	gen_rtx_NOT (SImode,
	operand4),
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_IOR (SImode,
	gen_rtx_NOT (SImode,
	operand7),
	operand8)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5331 */
rtx
gen_xordi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (DImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5331 */
rtx
gen_xorv2si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V2SImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5331 */
rtx
gen_xorv4hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V4HImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5331 */
rtx
gen_xorv8qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V8QImode,
	operand1,
	operand2));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5372 */
extern rtx gen_split_509 (rtx, rtx *);
rtx
gen_split_509 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 5380 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  operands[4] = GEN_INT (~INTVAL (operands[2]));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand4));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (SImode,
	gen_rtx_XOR (SImode,
	copy_rtx (operand3),
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5384 */
extern rtx gen_split_510 (rtx, rtx *);
rtx
gen_split_510 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 5392 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  operands[4] = GEN_INT (~INTVAL (operands[2]));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand4));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	copy_rtx (operand3),
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5397 */
extern rtx gen_split_511 (rtx, rtx *);
rtx
gen_split_511 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx _val = 0;
  start_sequence ();
#line 5411 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  operands[4] = gen_highpart (SImode, operands[0]);
  operands[5] = gen_lowpart (SImode, operands[0]);
  operands[6] = gen_highpart (SImode, operands[2]);
  operands[7] = gen_lowpart (SImode, operands[2]);
#if HOST_BITS_PER_WIDE_INT == 32
  if (GET_CODE (operands[3]) == CONST_INT && DImode == DImode)
    {
      if (INTVAL (operands[3]) < 0)
	operands[8] = constm1_rtx;
      else
	operands[8] = const0_rtx;
    }
  else
#endif
    operands[8] = gen_highpart_mode (SImode, DImode, operands[3]);
  operands[9] = gen_lowpart (SImode, operands[3]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  operand8 = operands[8];
  operand9 = operands[9];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_fmt_ee (GET_CODE (operand1), SImode,
		operand6,
		operand8)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_fmt_ee (GET_CODE (operand1), SImode,
		operand7,
		operand9)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5397 */
extern rtx gen_split_512 (rtx, rtx *);
rtx
gen_split_512 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx _val = 0;
  start_sequence ();
#line 5411 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  operands[4] = gen_highpart (SImode, operands[0]);
  operands[5] = gen_lowpart (SImode, operands[0]);
  operands[6] = gen_highpart (SImode, operands[2]);
  operands[7] = gen_lowpart (SImode, operands[2]);
#if HOST_BITS_PER_WIDE_INT == 32
  if (GET_CODE (operands[3]) == CONST_INT && V2SImode == DImode)
    {
      if (INTVAL (operands[3]) < 0)
	operands[8] = constm1_rtx;
      else
	operands[8] = const0_rtx;
    }
  else
#endif
    operands[8] = gen_highpart_mode (SImode, V2SImode, operands[3]);
  operands[9] = gen_lowpart (SImode, operands[3]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  operand8 = operands[8];
  operand9 = operands[9];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_fmt_ee (GET_CODE (operand1), SImode,
		operand6,
		operand8)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_fmt_ee (GET_CODE (operand1), SImode,
		operand7,
		operand9)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5397 */
extern rtx gen_split_513 (rtx, rtx *);
rtx
gen_split_513 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx _val = 0;
  start_sequence ();
#line 5411 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  operands[4] = gen_highpart (SImode, operands[0]);
  operands[5] = gen_lowpart (SImode, operands[0]);
  operands[6] = gen_highpart (SImode, operands[2]);
  operands[7] = gen_lowpart (SImode, operands[2]);
#if HOST_BITS_PER_WIDE_INT == 32
  if (GET_CODE (operands[3]) == CONST_INT && V4HImode == DImode)
    {
      if (INTVAL (operands[3]) < 0)
	operands[8] = constm1_rtx;
      else
	operands[8] = const0_rtx;
    }
  else
#endif
    operands[8] = gen_highpart_mode (SImode, V4HImode, operands[3]);
  operands[9] = gen_lowpart (SImode, operands[3]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  operand8 = operands[8];
  operand9 = operands[9];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_fmt_ee (GET_CODE (operand1), SImode,
		operand6,
		operand8)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_fmt_ee (GET_CODE (operand1), SImode,
		operand7,
		operand9)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5397 */
extern rtx gen_split_514 (rtx, rtx *);
rtx
gen_split_514 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx _val = 0;
  start_sequence ();
#line 5411 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  operands[4] = gen_highpart (SImode, operands[0]);
  operands[5] = gen_lowpart (SImode, operands[0]);
  operands[6] = gen_highpart (SImode, operands[2]);
  operands[7] = gen_lowpart (SImode, operands[2]);
#if HOST_BITS_PER_WIDE_INT == 32
  if (GET_CODE (operands[3]) == CONST_INT && V8QImode == DImode)
    {
      if (INTVAL (operands[3]) < 0)
	operands[8] = constm1_rtx;
      else
	operands[8] = const0_rtx;
    }
  else
#endif
    operands[8] = gen_highpart_mode (SImode, V8QImode, operands[3]);
  operands[9] = gen_lowpart (SImode, operands[3]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  operand8 = operands[8];
  operand9 = operands[9];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_fmt_ee (GET_CODE (operand1), SImode,
		operand6,
		operand8)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_fmt_ee (GET_CODE (operand1), SImode,
		operand7,
		operand9)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5432 */
extern rtx gen_split_515 (rtx, rtx *);
rtx
gen_split_515 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx _val = 0;
  start_sequence ();
#line 5448 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[3] = gen_highpart (SImode, operands[0]);
   operands[4] = gen_highpart (SImode, operands[1]);
   operands[5] = gen_highpart (SImode, operands[2]);
   operands[6] = gen_lowpart (SImode, operands[0]);
   operands[7] = gen_lowpart (SImode, operands[1]);
   operands[8] = gen_lowpart (SImode, operands[2]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  operand8 = operands[8];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_NOT (SImode,
	gen_rtx_XOR (SImode,
	operand4,
	operand5))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_NOT (SImode,
	gen_rtx_XOR (SImode,
	operand7,
	operand8))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5432 */
extern rtx gen_split_516 (rtx, rtx *);
rtx
gen_split_516 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx _val = 0;
  start_sequence ();
#line 5448 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[3] = gen_highpart (SImode, operands[0]);
   operands[4] = gen_highpart (SImode, operands[1]);
   operands[5] = gen_highpart (SImode, operands[2]);
   operands[6] = gen_lowpart (SImode, operands[0]);
   operands[7] = gen_lowpart (SImode, operands[1]);
   operands[8] = gen_lowpart (SImode, operands[2]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  operand8 = operands[8];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_NOT (SImode,
	gen_rtx_XOR (SImode,
	operand4,
	operand5))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_NOT (SImode,
	gen_rtx_XOR (SImode,
	operand7,
	operand8))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5432 */
extern rtx gen_split_517 (rtx, rtx *);
rtx
gen_split_517 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx _val = 0;
  start_sequence ();
#line 5448 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[3] = gen_highpart (SImode, operands[0]);
   operands[4] = gen_highpart (SImode, operands[1]);
   operands[5] = gen_highpart (SImode, operands[2]);
   operands[6] = gen_lowpart (SImode, operands[0]);
   operands[7] = gen_lowpart (SImode, operands[1]);
   operands[8] = gen_lowpart (SImode, operands[2]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  operand8 = operands[8];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_NOT (SImode,
	gen_rtx_XOR (SImode,
	operand4,
	operand5))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_NOT (SImode,
	gen_rtx_XOR (SImode,
	operand7,
	operand8))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5432 */
extern rtx gen_split_518 (rtx, rtx *);
rtx
gen_split_518 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx _val = 0;
  start_sequence ();
#line 5448 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[3] = gen_highpart (SImode, operands[0]);
   operands[4] = gen_highpart (SImode, operands[1]);
   operands[5] = gen_highpart (SImode, operands[2]);
   operands[6] = gen_lowpart (SImode, operands[0]);
   operands[7] = gen_lowpart (SImode, operands[1]);
   operands[8] = gen_lowpart (SImode, operands[2]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  operand8 = operands[8];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_NOT (SImode,
	gen_rtx_XOR (SImode,
	operand4,
	operand5))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_NOT (SImode,
	gen_rtx_XOR (SImode,
	operand7,
	operand8))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5628 */
rtx
gen_negdi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 5632 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (! TARGET_ARCH64)
    {
      emit_insn (gen_rtx_PARALLEL
		 (VOIDmode,
		  gen_rtvec (2,
			     gen_rtx_SET (VOIDmode, operand0,
					  gen_rtx_NEG (DImode, operand1)),
			     gen_rtx_CLOBBER (VOIDmode,
					      gen_rtx_REG (CCmode,
							   SPARC_ICC_REG)))));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5647 */
extern rtx gen_split_520 (rtx, rtx *);
rtx
gen_split_520 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 5660 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[2] = gen_highpart (SImode, operands[0]);
   operands[3] = gen_highpart (SImode, operands[1]);
   operands[4] = gen_lowpart (SImode, operands[0]);
   operands[5] = gen_lowpart (SImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CC_NOOVmode,
	100),
	gen_rtx_COMPARE (CC_NOOVmode,
	gen_rtx_MINUS (SImode,
	const0_rtx,
	operand5),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MINUS (SImode,
	const0_rtx,
	copy_rtx (operand5))))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_MINUS (SImode,
	gen_rtx_MINUS (SImode,
	const0_rtx,
	operand3),
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CCmode,
	100),
	const0_rtx))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5716 */
rtx
gen_one_cmpldi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (DImode,
	operand1));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5716 */
rtx
gen_one_cmplv2si2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (V2SImode,
	operand1));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5716 */
rtx
gen_one_cmplv4hi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (V4HImode,
	operand1));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5716 */
rtx
gen_one_cmplv8qi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (V8QImode,
	operand1));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5722 */
extern rtx gen_split_525 (rtx, rtx *);
rtx
gen_split_525 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 5737 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[2] = gen_highpart (SImode, operands[0]);
   operands[3] = gen_highpart (SImode, operands[1]);
   operands[4] = gen_lowpart (SImode, operands[0]);
   operands[5] = gen_lowpart (SImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_NOT (SImode,
	gen_rtx_XOR (SImode,
	operand3,
	const0_rtx))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_NOT (SImode,
	gen_rtx_XOR (SImode,
	operand5,
	const0_rtx))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5722 */
extern rtx gen_split_526 (rtx, rtx *);
rtx
gen_split_526 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 5737 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[2] = gen_highpart (SImode, operands[0]);
   operands[3] = gen_highpart (SImode, operands[1]);
   operands[4] = gen_lowpart (SImode, operands[0]);
   operands[5] = gen_lowpart (SImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_NOT (SImode,
	gen_rtx_XOR (SImode,
	operand3,
	const0_rtx))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_NOT (SImode,
	gen_rtx_XOR (SImode,
	operand5,
	const0_rtx))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5722 */
extern rtx gen_split_527 (rtx, rtx *);
rtx
gen_split_527 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 5737 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[2] = gen_highpart (SImode, operands[0]);
   operands[3] = gen_highpart (SImode, operands[1]);
   operands[4] = gen_lowpart (SImode, operands[0]);
   operands[5] = gen_lowpart (SImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_NOT (SImode,
	gen_rtx_XOR (SImode,
	operand3,
	const0_rtx))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_NOT (SImode,
	gen_rtx_XOR (SImode,
	operand5,
	const0_rtx))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5722 */
extern rtx gen_split_528 (rtx, rtx *);
rtx
gen_split_528 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 5737 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[2] = gen_highpart (SImode, operands[0]);
   operands[3] = gen_highpart (SImode, operands[1]);
   operands[4] = gen_lowpart (SImode, operands[0]);
   operands[5] = gen_lowpart (SImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_NOT (SImode,
	gen_rtx_XOR (SImode,
	operand3,
	const0_rtx))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_NOT (SImode,
	gen_rtx_XOR (SImode,
	operand5,
	const0_rtx))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5824 */
rtx
gen_addtf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 5829 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
emit_tfmode_binop (PLUS, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (TFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5856 */
rtx
gen_subtf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 5861 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
emit_tfmode_binop (MINUS, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (TFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5888 */
rtx
gen_multf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 5893 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
emit_tfmode_binop (MULT, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (TFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5937 */
rtx
gen_divtf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 5942 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
emit_tfmode_binop (DIV, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (TFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5970 */
rtx
gen_negtf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (TFmode,
	operand1));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5976 */
extern rtx gen_split_534 (rtx, rtx *);
rtx
gen_split_534 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx _val = 0;
  start_sequence ();
#line 5990 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[2] = gen_rtx_raw_REG (SFmode, REGNO (operands[0]));
   operands[3] = gen_rtx_raw_REG (SFmode, REGNO (operands[1]));
   operands[4] = gen_rtx_raw_REG (SFmode, REGNO (operands[0]) + 1);
   operands[5] = gen_rtx_raw_REG (SFmode, REGNO (operands[1]) + 1);
   operands[6] = gen_rtx_raw_REG (DFmode, REGNO (operands[0]) + 2);
   operands[7] = gen_rtx_raw_REG (DFmode, REGNO (operands[1]) + 2);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_NEG (SFmode,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand5));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	operand7));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:5999 */
extern rtx gen_split_535 (rtx, rtx *);
rtx
gen_split_535 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 6011 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[2] = gen_rtx_raw_REG (DFmode, REGNO (operands[0]));
   operands[3] = gen_rtx_raw_REG (DFmode, REGNO (operands[1]));
   operands[4] = gen_rtx_raw_REG (DFmode, REGNO (operands[0]) + 2);
   operands[5] = gen_rtx_raw_REG (DFmode, REGNO (operands[1]) + 2);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_NEG (DFmode,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6019 */
rtx
gen_negdf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DFmode,
	operand1));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6025 */
extern rtx gen_split_537 (rtx, rtx *);
rtx
gen_split_537 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 6036 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[2] = gen_rtx_raw_REG (SFmode, REGNO (operands[0]));
   operands[3] = gen_rtx_raw_REG (SFmode, REGNO (operands[1]));
   operands[4] = gen_rtx_raw_REG (SFmode, REGNO (operands[0]) + 1);
   operands[5] = gen_rtx_raw_REG (SFmode, REGNO (operands[1]) + 1);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_NEG (SFmode,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6058 */
rtx
gen_abstf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (TFmode,
	operand1));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6064 */
extern rtx gen_split_539 (rtx, rtx *);
rtx
gen_split_539 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx _val = 0;
  start_sequence ();
#line 6077 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[2] = gen_rtx_raw_REG (SFmode, REGNO (operands[0]));
   operands[3] = gen_rtx_raw_REG (SFmode, REGNO (operands[1]));
   operands[4] = gen_rtx_raw_REG (SFmode, REGNO (operands[0]) + 1);
   operands[5] = gen_rtx_raw_REG (SFmode, REGNO (operands[1]) + 1);
   operands[6] = gen_rtx_raw_REG (DFmode, REGNO (operands[0]) + 2);
   operands[7] = gen_rtx_raw_REG (DFmode, REGNO (operands[1]) + 2);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ABS (SFmode,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand5));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	operand7));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6096 */
extern rtx gen_split_540 (rtx, rtx *);
rtx
gen_split_540 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 6107 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[2] = gen_rtx_raw_REG (DFmode, REGNO (operands[0]));
   operands[3] = gen_rtx_raw_REG (DFmode, REGNO (operands[1]));
   operands[4] = gen_rtx_raw_REG (DFmode, REGNO (operands[0]) + 2);
   operands[5] = gen_rtx_raw_REG (DFmode, REGNO (operands[1]) + 2);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ABS (DFmode,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6115 */
rtx
gen_absdf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (DFmode,
	operand1));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6121 */
extern rtx gen_split_542 (rtx, rtx *);
rtx
gen_split_542 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 6132 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[2] = gen_rtx_raw_REG (SFmode, REGNO (operands[0]));
   operands[3] = gen_rtx_raw_REG (SFmode, REGNO (operands[1]));
   operands[4] = gen_rtx_raw_REG (SFmode, REGNO (operands[0]) + 1);
   operands[5] = gen_rtx_raw_REG (SFmode, REGNO (operands[1]) + 1);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ABS (SFmode,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6154 */
rtx
gen_sqrttf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 6158 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
emit_tfmode_unop (SQRT, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (TFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6199 */
rtx
gen_ashldi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 6204 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (! TARGET_ARCH64)
    {
      if (GET_CODE (operands[2]) == CONST_INT)
	FAIL;
      emit_insn (gen_ashldi3_v8plus (operands[0], operands[1], operands[2]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6310 */
rtx
gen_ashrdi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 6315 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (! TARGET_ARCH64)
    {
      if (GET_CODE (operands[2]) == CONST_INT)
        FAIL;	/* prefer generic code in this case */
      emit_insn (gen_ashrdi3_v8plus (operands[0], operands[1], operands[2]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6388 */
rtx
gen_lshrdi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 6393 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (! TARGET_ARCH64)
    {
      if (GET_CODE (operands[2]) == CONST_INT)
        FAIL;
      emit_insn (gen_lshrdi3_v8plus (operands[0], operands[1], operands[2]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6491 */
rtx
gen_tablejump (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 6495 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  gcc_assert (GET_MODE (operands[0]) == CASE_VECTOR_MODE);

  /* In pic mode, our address differences are against the base of the
     table.  Add that base value back in; CSE ought to be able to combine
     the two address loads.  */
  if (flag_pic)
    {
      rtx tmp, tmp2;
      tmp = gen_rtx_LABEL_REF (Pmode, operands[1]);
      tmp2 = operands[0];
      if (CASE_VECTOR_MODE != Pmode)
        tmp2 = gen_rtx_SIGN_EXTEND (Pmode, tmp2);
      tmp = gen_rtx_PLUS (Pmode, tmp2, tmp);
      operands[0] = memory_address (Pmode, tmp);
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6530 */
rtx
gen_call (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 6538 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  rtx fn_rtx;

  gcc_assert (MEM_P (operands[0]) && GET_MODE (operands[0]) == FUNCTION_MODE);

  gcc_assert (GET_CODE (operands[3]) == CONST_INT);

  if (GET_CODE (XEXP (operands[0], 0)) == LABEL_REF)
    {
      /* This is really a PIC sequence.  We want to represent
	 it as a funny jump so its delay slots can be filled. 

	 ??? But if this really *is* a CALL, will not it clobber the
	 call-clobbered registers?  We lose this if it is a JUMP_INSN.
	 Why cannot we have delay slots filled if it were a CALL?  */

      /* We accept negative sizes for untyped calls.  */
      if (! TARGET_ARCH64 && INTVAL (operands[3]) != 0)
	emit_jump_insn
	  (gen_rtx_PARALLEL
	   (VOIDmode,
	    gen_rtvec (3,
		       gen_rtx_SET (VOIDmode, pc_rtx, XEXP (operands[0], 0)),
		       operands[3],
		       gen_rtx_CLOBBER (VOIDmode, gen_rtx_REG (Pmode, 15)))));
      else
	emit_jump_insn
	  (gen_rtx_PARALLEL
	   (VOIDmode,
	    gen_rtvec (2,
		       gen_rtx_SET (VOIDmode, pc_rtx, XEXP (operands[0], 0)),
		       gen_rtx_CLOBBER (VOIDmode, gen_rtx_REG (Pmode, 15)))));
      goto finish_call;
    }

  fn_rtx = operands[0];

  /* We accept negative sizes for untyped calls.  */
  if (! TARGET_ARCH64 && INTVAL (operands[3]) != 0)
    sparc_emit_call_insn
      (gen_rtx_PARALLEL
       (VOIDmode,
	gen_rtvec (3, gen_rtx_CALL (VOIDmode, fn_rtx, const0_rtx),
		   operands[3],
		   gen_rtx_CLOBBER (VOIDmode, gen_rtx_REG (Pmode, 15)))),
       XEXP (fn_rtx, 0));
  else
    sparc_emit_call_insn
      (gen_rtx_PARALLEL
       (VOIDmode,
	gen_rtvec (2, gen_rtx_CALL (VOIDmode, fn_rtx, const0_rtx),
		   gen_rtx_CLOBBER (VOIDmode, gen_rtx_REG (Pmode, 15)))),
       XEXP (fn_rtx, 0));

 finish_call:

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_call_insn (gen_rtx_CALL (VOIDmode,
	operand0,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6694 */
rtx
gen_call_value (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
#line 6703 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  rtx fn_rtx;
  rtvec vec;

  gcc_assert (MEM_P (operands[1]) && GET_MODE (operands[1]) == FUNCTION_MODE);

  fn_rtx = operands[1];

  vec = gen_rtvec (2,
		   gen_rtx_SET (VOIDmode, operands[0],
				gen_rtx_CALL (VOIDmode, fn_rtx, const0_rtx)),
		   gen_rtx_CLOBBER (VOIDmode, gen_rtx_REG (Pmode, 15)));

  sparc_emit_call_insn (gen_rtx_PARALLEL (VOIDmode, vec), XEXP (fn_rtx, 0));

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_call_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6761 */
rtx
gen_untyped_call (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 6767 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  rtx valreg1 = gen_rtx_REG (DImode, 8);
  rtx valreg2 = gen_rtx_REG (TARGET_ARCH64 ? TFmode : DFmode, 32);
  rtx result = operands[1];

  /* Pass constm1 to indicate that it may expect a structure value, but
     we don't know what size it is.  */
  emit_call_insn (GEN_CALL (operands[0], const0_rtx, NULL, constm1_rtx));

  /* Save the function value registers.  */
  emit_move_insn (adjust_address (result, DImode, 0), valreg1);
  emit_move_insn (adjust_address (result, TARGET_ARCH64 ? TFmode : DFmode, 8),
				  valreg2);

  /* The optimizer does not know that the call sets the function value
     registers we stored in the result block.  We avoid problems by
     claiming that all hard registers are used and clobbered at this
     point.  */
  emit_insn (gen_blockage ());

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_CALL (VOIDmode,
	operand0,
	const0_rtx),
		operand1,
		operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6792 */
rtx
gen_sibcall (rtx operand0)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_CALL (VOIDmode,
	operand0,
	const0_rtx),
		gen_rtx_RETURN (VOIDmode)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6814 */
rtx
gen_sibcall_value (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	const0_rtx)),
		gen_rtx_RETURN (VOIDmode)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6842 */
rtx
gen_prologue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 6845 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  sparc_expand_prologue ();
  DONE;
}
  }
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6867 */
rtx
gen_epilogue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 6870 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  sparc_expand_epilogue ();
}
  }
  emit_jump_insn (gen_rtx_RETURN (VOIDmode));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6874 */
rtx
gen_sibcall_epilogue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 6877 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  sparc_expand_epilogue ();
  DONE;
}
  }
  emit_jump_insn (gen_rtx_RETURN (VOIDmode));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6882 */
rtx
gen_return (void)
{
  return gen_rtx_RETURN (VOIDmode);
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6920 */
rtx
gen_untyped_return (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 6924 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  rtx valreg1 = gen_rtx_REG (DImode, 24);
  rtx valreg2 = gen_rtx_REG (TARGET_ARCH64 ? TFmode : DFmode, 32);
  rtx result = operands[0];

  if (! TARGET_ARCH64)
    {
      rtx rtnreg = gen_rtx_REG (SImode, (current_function_uses_only_leaf_regs
					 ? 15 : 31));
      rtx value = gen_reg_rtx (SImode);

      /* Fetch the instruction where we will return to and see if it's an unimp
	 instruction (the most significant 10 bits will be zero).  If so,
	 update the return address to skip the unimp instruction.  */
      emit_move_insn (value,
		      gen_rtx_MEM (SImode, plus_constant (rtnreg, 8)));
      emit_insn (gen_lshrsi3 (value, value, GEN_INT (22)));
      emit_insn (gen_update_return (rtnreg, value));
    }

  /* Reload the function value registers.  */
  emit_move_insn (valreg1, adjust_address (result, DImode, 0));
  emit_move_insn (valreg2,
		  adjust_address (result, TARGET_ARCH64 ? TFmode : DFmode, 8));

  /* Put USE insns before the return.  */
  emit_use (valreg1);
  emit_use (valreg2);

  /* Construct the return.  */
  expand_naked_return ();

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:6988 */
rtx
gen_indirect_jump (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0);
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7005 */
rtx
gen_nonlocal_goto (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 7011 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  rtx lab = operands[1];
  rtx stack = operands[2];
  rtx fp = operands[3];
  rtx labreg;

  /* Trap instruction to flush all the register windows.  */
  emit_insn (gen_flush_register_windows ());

  /* Load the fp value for the containing fn into %fp.  This is needed
     because STACK refers to %fp.  Note that virtual register instantiation
     fails if the virtual %fp isn't set from a register.  */
  if (GET_CODE (fp) != REG)
    fp = force_reg (Pmode, fp);
  emit_move_insn (virtual_stack_vars_rtx, fp);

  /* Find the containing function's current nonlocal goto handler,
     which will do any cleanups and then jump to the label.  */
  labreg = gen_rtx_REG (Pmode, 8);
  emit_move_insn (labreg, lab);

  /* Restore %fp from stack pointer value for containing function.
     The restore insn that follows will move this to %sp,
     and reload the appropriate value into %fp.  */
  emit_move_insn (hard_frame_pointer_rtx, stack);

  emit_use (stack_pointer_rtx);
  emit_use (static_chain_rtx);

  /* ??? The V9-specific version was disabled in rev 1.65.  */
  emit_jump_insn (gen_goto_handler_and_restore (labreg));
  emit_barrier ();
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7071 */
rtx
gen_builtin_setjmp_setup (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 7074 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  emit_insn (gen_do_builtin_setjmp_setup ());
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7111 */
rtx
gen_setjmp (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 7114 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  rtx mem;

  if (flag_pic)
    {
      mem = gen_rtx_MEM (Pmode,
			 plus_constant (stack_pointer_rtx,
					SPARC_STACK_BIAS + 7 * UNITS_PER_WORD));
      emit_insn (gen_rtx_SET (VOIDmode, mem, pic_offset_table_rtx));
    }

  mem = gen_rtx_MEM (Pmode,
		     plus_constant (stack_pointer_rtx,
				    SPARC_STACK_BIAS + 14 * UNITS_PER_WORD));
  emit_insn (gen_rtx_SET (VOIDmode, mem, hard_frame_pointer_rtx));

  mem = gen_rtx_MEM (Pmode,
		     plus_constant (stack_pointer_rtx,
				    SPARC_STACK_BIAS + 15 * UNITS_PER_WORD));
  emit_insn (gen_rtx_SET (VOIDmode, mem, gen_rtx_REG (Pmode, 31)));
  DONE;
}
  }
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7199 */
extern rtx gen_peephole2_562 (rtx, rtx *);
rtx
gen_peephole2_562 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 7208 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[0] = widen_memory_access (operands[0], DImode, 0);
  operand0 = operands[0];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7210 */
extern rtx gen_peephole2_563 (rtx, rtx *);
rtx
gen_peephole2_563 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 7219 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[1] = widen_memory_access (operands[1], DImode, 0);
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7221 */
extern rtx gen_peephole2_564 (rtx, rtx *);
rtx
gen_peephole2_564 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 7230 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[1] = widen_memory_access (operands[1], DImode, 0);
   operands[0] = gen_rtx_REG (DImode, REGNO (operands[0]));
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7233 */
extern rtx gen_peephole2_565 (rtx, rtx *);
rtx
gen_peephole2_565 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 7242 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[0] = widen_memory_access (operands[0], DImode, 0);
   operands[1] = gen_rtx_REG (DImode, REGNO (operands[1]));
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7245 */
extern rtx gen_peephole2_566 (rtx, rtx *);
rtx
gen_peephole2_566 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 7254 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[1] = widen_memory_access (operands[1], DFmode, 0);
   operands[0] = gen_rtx_REG (DFmode, REGNO (operands[0]));
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7257 */
extern rtx gen_peephole2_567 (rtx, rtx *);
rtx
gen_peephole2_567 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 7266 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[0] = widen_memory_access (operands[0], DFmode, 0);
   operands[1] = gen_rtx_REG (DFmode, REGNO (operands[1]));
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7269 */
extern rtx gen_peephole2_568 (rtx, rtx *);
rtx
gen_peephole2_568 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 7278 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[3] = widen_memory_access (operands[3], DImode, 0);
    operands[2] = gen_rtx_REG (DImode, REGNO (operands[2]));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7281 */
extern rtx gen_peephole2_569 (rtx, rtx *);
rtx
gen_peephole2_569 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 7290 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[2] = widen_memory_access (operands[2], DImode, 0);
   operands[3] = gen_rtx_REG (DImode, REGNO (operands[3]));
   
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7294 */
extern rtx gen_peephole2_570 (rtx, rtx *);
rtx
gen_peephole2_570 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 7303 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[3] = widen_memory_access (operands[3], DFmode, 0);
   operands[2] = gen_rtx_REG (DFmode, REGNO (operands[2]));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7306 */
extern rtx gen_peephole2_571 (rtx, rtx *);
rtx
gen_peephole2_571 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 7315 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[2] = widen_memory_access (operands[2], DFmode, 0);
   operands[3] = gen_rtx_REG (DFmode, REGNO (operands[3]));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7322 */
extern rtx gen_peephole2_572 (rtx, rtx *);
rtx
gen_peephole2_572 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 7335 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	100),
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand1),
	const0_rtx)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7360 */
rtx
gen_prefetch (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 7365 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
  if (TARGET_ARCH64)
    emit_insn (gen_prefetch_64 (operands[0], operands[1], operands[2]));
  else
    emit_insn (gen_prefetch_32 (operands[0], operands[1], operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:7432 */
rtx
gen_conditional_trap (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
#line 7436 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
operands[2] = gen_compare_reg (GET_CODE (operands[0]));
   if (GET_MODE (operands[2]) != CCmode && GET_MODE (operands[2]) != CCXmode)
     FAIL;
   operands[3] = const0_rtx;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_TRAP_IF (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), VOIDmode,
		operand2,
		operand3),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8028 */
rtx
gen_stack_protect_set (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 8032 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
#ifdef TARGET_THREAD_SSP_OFFSET
  rtx tlsreg = gen_rtx_REG (Pmode, 7);
  rtx addr = gen_rtx_PLUS (Pmode, tlsreg, GEN_INT (TARGET_THREAD_SSP_OFFSET));
  operands[1] = gen_rtx_MEM (Pmode, addr);
#endif
  if (TARGET_ARCH64)
    emit_insn (gen_stack_protect_setdi (operands[0], operands[1]));
  else
    emit_insn (gen_stack_protect_setsi (operands[0], operands[1]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sparc.md:8063 */
rtx
gen_stack_protect_test (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 8068 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
{
#ifdef TARGET_THREAD_SSP_OFFSET
  rtx tlsreg = gen_rtx_REG (Pmode, 7);
  rtx addr = gen_rtx_PLUS (Pmode, tlsreg, GEN_INT (TARGET_THREAD_SSP_OFFSET));
  operands[1] = gen_rtx_MEM (Pmode, addr);
#endif
  if (TARGET_ARCH64)
    {
      rtx temp = gen_reg_rtx (Pmode);
      emit_insn (gen_stack_protect_testdi (temp, operands[0], operands[1]));
      sparc_compare_op0 = temp;
      sparc_compare_op1 = const0_rtx;
    }
  else
    {
      emit_insn (gen_stack_protect_testsi (operands[0], operands[1]));
      sparc_compare_op0 = operands[0];
      sparc_compare_op1 = operands[1];
      sparc_compare_emitted = gen_rtx_REG (CCmode, SPARC_ICC_REG);
    }
  emit_jump_insn (gen_beq (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sync.md:21 */
rtx
gen_memory_barrier (void)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
#line 30 "../../gcc-4.4.7/gcc/config/sparc/sync.md"
{
  operands[0] = gen_rtx_MEM (BLKmode, gen_rtx_SCRATCH (Pmode));
  MEM_VOLATILE_P (operands[0]) = 1;

}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (1,
		copy_rtx (operand0)),
	20)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sync.md:51 */
rtx
gen_sync_compare_and_swapqi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 57 "../../gcc-4.4.7/gcc/config/sparc/sync.md"
{
  sparc_expand_compare_and_swap_12 (operands[0], operands[1],
				    operands[2], operands[3]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sync.md:51 */
rtx
gen_sync_compare_and_swaphi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 57 "../../gcc-4.4.7/gcc/config/sparc/sync.md"
{
  sparc_expand_compare_and_swap_12 (operands[0], operands[1],
				    operands[2], operands[3]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sync.md:63 */
rtx
gen_sync_compare_and_swapsi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 73 "../../gcc-4.4.7/gcc/config/sparc/sync.md"
{
  if (! REG_P (XEXP (operands[1], 0)))
    {
      rtx addr = force_reg (Pmode, XEXP (operands[1], 0));
      operands[1] = replace_equiv_address (operands[1], addr);
    }
  emit_insn (gen_memory_barrier ());
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand2,
		operand3),
	8)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sync.md:63 */
rtx
gen_sync_compare_and_swapdi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 73 "../../gcc-4.4.7/gcc/config/sparc/sync.md"
{
  if (! REG_P (XEXP (operands[1], 0)))
    {
      rtx addr = force_reg (Pmode, XEXP (operands[1], 0));
      operands[1] = replace_equiv_address (operands[1], addr);
    }
  emit_insn (gen_memory_barrier ());
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (2,
		operand2,
		operand3),
	8)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sync.md:118 */
rtx
gen_sync_lock_test_and_setqi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 123 "../../gcc-4.4.7/gcc/config/sparc/sync.md"
{
  if (operands[2] != const1_rtx)
    FAIL;
  if (TARGET_V8)
    emit_insn (gen_memory_barrier ());
  if (QImode != QImode)
    operands[1] = adjust_address (operands[1], QImode, 0);
  emit_insn (gen_ldstubqi (operands[0], operands[1]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sync.md:118 */
rtx
gen_sync_lock_test_and_sethi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 123 "../../gcc-4.4.7/gcc/config/sparc/sync.md"
{
  if (operands[2] != const1_rtx)
    FAIL;
  if (TARGET_V8)
    emit_insn (gen_memory_barrier ());
  if (HImode != QImode)
    operands[1] = adjust_address (operands[1], QImode, 0);
  emit_insn (gen_ldstubhi (operands[0], operands[1]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sync.md:134 */
rtx
gen_sync_lock_test_and_setsi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 142 "../../gcc-4.4.7/gcc/config/sparc/sync.md"
{
  if (! TARGET_V8 && ! TARGET_V9)
    {
      if (operands[2] != const1_rtx)
	FAIL;
      operands[1] = adjust_address (operands[1], QImode, 0);
      emit_insn (gen_ldstubsi (operands[0], operands[1]));
      DONE;
    }
  emit_insn (gen_memory_barrier ());
  operands[2] = force_reg (SImode, operands[2]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	9)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../../gcc-4.4.7/gcc/config/sparc/sync.md:165 */
rtx
gen_ldstubqi (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		operand1),
	10)),
		gen_rtx_SET (VOIDmode,
	operand1,
	constm1_rtx)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sync.md:173 */
rtx
gen_ldstubhi (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		operand1),
	10))),
		gen_rtx_SET (VOIDmode,
	operand1,
	constm1_rtx)));
}

/* ../../gcc-4.4.7/gcc/config/sparc/sync.md:173 */
rtx
gen_ldstubsi (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		operand1),
	10))),
		gen_rtx_SET (VOIDmode,
	operand1,
	constm1_rtx)));
}



void
add_clobbers (rtx pattern ATTRIBUTE_UNUSED, int insn_code_number)
{
  switch (insn_code_number)
    {
    case 264:
    case 263:
    case 262:
    case 261:
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (SImode, 15);
      break;

    case 316:
    case 153:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 280:
    case 256:
    case 254:
    case 250:
    case 152:
    case 149:
    case 148:
    case 147:
    case 144:
    case 141:
    case 140:
    case 139:
    case 136:
    case 135:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 133:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 293:
    case 289:
    case 266:
    case 265:
    case 260:
    case 259:
    case 34:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (SImode, 15);
      break;

    case 207:
    case 128:
    case 125:
    case 121:
    case 118:
    case 14:
    case 13:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (CCmode, 100);
      break;

    default:
      gcc_unreachable ();
    }
}


int
added_clobbers_hard_reg_p (int insn_code_number)
{
  switch (insn_code_number)
    {
    case 316:
    case 153:
    case 280:
    case 256:
    case 254:
    case 250:
    case 152:
    case 149:
    case 148:
    case 147:
    case 144:
    case 141:
    case 140:
    case 139:
    case 136:
    case 135:
    case 133:
      return 0;

    case 264:
    case 263:
    case 262:
    case 261:
    case 293:
    case 289:
    case 266:
    case 265:
    case 260:
    case 259:
    case 34:
    case 207:
    case 128:
    case 125:
    case 121:
    case 118:
    case 14:
    case 13:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
      return 1;

    default:
      gcc_unreachable ();
    }
}
