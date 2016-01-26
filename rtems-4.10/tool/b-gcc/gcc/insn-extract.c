/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "toplev.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

#ifdef ENABLE_CHECKING
  memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
  memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
#endif

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 355:  /* *ldstubsi */
    case 354:  /* *ldstubhi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 353:  /* *ldstubqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 352:  /* *swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 351:  /* *sync_compare_and_swapdi_v8plus */
    case 350:  /* *sync_compare_and_swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 349:  /* *membar */
    case 348:  /* *stbar */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 346:  /* alignaddrsi_vis */
    case 345:  /* faligndatav8qi_vis */
    case 344:  /* faligndatav4hi_vis */
    case 343:  /* faligndatav2si_vis */
    case 342:  /* faligndatadi_vis */
    case 341:  /* fmuld8ulx16_vis */
    case 339:  /* fmul8ulx16_vis */
    case 337:  /* fmul8x16al_vis */
    case 334:  /* fpmerge_vis */
    case 332:  /* fpack32_vis */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 316:  /* stack_protect_testsi */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 315:  /* stack_protect_setsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 314:  /* *tldo_stw_sp32 */
    case 313:  /* *tldo_sth_sp32 */
    case 312:  /* *tldo_stb_sp32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 0), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 0), 0), 0), 0, 1));
      break;

    case 310:  /* *tldo_ldsh1_sp32 */
    case 309:  /* *tldo_lduh1_sp32 */
    case 307:  /* *tldo_ldsb2_sp32 */
    case 306:  /* *tldo_ldsb1_sp32 */
    case 305:  /* *tldo_ldub2_sp32 */
    case 304:  /* *tldo_ldub1_sp32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0, 1));
      break;

    case 311:  /* *tldo_lduw_sp32 */
    case 308:  /* *tldo_lduh_sp32 */
    case 303:  /* *tldo_ldub_sp32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      break;

    case 347:  /* pdist_vis */
    case 299:  /* tie_ld32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 293:  /* tldm_call32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 289:  /* tgd_call32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 282:  /* prefetch_32 */
    case 281:  /* prefetch_64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 2));
      break;

    case 280:  /* ffssi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 279:  /* flushdi */
    case 278:  /* flush */
    case 276:  /* goto_handler_and_restore */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 274:  /* *branch_sp32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 272:  /* update_return */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 283:  /* trap */
    case 277:  /* do_builtin_setjmp_setup */
    case 275:  /* flush_register_windows */
    case 273:  /* nop */
    case 271:  /* blockage */
    case 270:  /* *return_internal */
      break;

    case 269:  /* save_register_windowsi */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      break;

    case 264:  /* *call_symbolic_untyped_struct_value_sp32 */
    case 263:  /* *call_address_untyped_struct_value_sp32 */
    case 262:  /* *call_symbolic_struct_value_sp32 */
    case 261:  /* *call_address_struct_value_sp32 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 1));
      break;

    case 267:  /* *sibcall_symbolic_sp32 */
    case 260:  /* *call_symbolic_sp32 */
    case 259:  /* *call_address_sp32 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 258:  /* *tablejump_sp32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 220:  /* *cmp_cc_set */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 206:  /* *cmp_cc_arith_op_not_set */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 205:  /* *cmp_cc_arith_op_not */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 204:  /* *cmp_cc_xor_not_set */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 203:  /* *cmp_cc_xor_not */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 202:  /* *cmp_cc_arith_op_set */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 201:  /* *cmp_cc_arith_op */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 158:  /* *umacdi */
    case 157:  /* *smacdi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 156:  /* *smacsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 153:  /* *cmp_sdiv_cc_set */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 256:  /* lshrdi3_v8plus */
    case 254:  /* ashrdi3_v8plus */
    case 250:  /* ashldi3_v8plus */
    case 152:  /* divsi3_sp32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 151:  /* const_umulsi3_highpart */
    case 143:  /* const_smulsi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 150:  /* *umulsi3_highpart_sp32 */
    case 142:  /* *smulsi3_highpart_sp32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 149:  /* const_umulsi3_highpart_v8plus */
    case 141:  /* const_smulsi3_highpart_v8plus */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 148:  /* umulsi3_highpart_v8plus */
    case 140:  /* *sparc.md:4656 */
    case 139:  /* smulsi3_highpart_v8plus */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 186:  /* *or_not_v4qi */
    case 185:  /* *or_not_v2hi */
    case 184:  /* *or_not_si */
    case 183:  /* *or_not_v8qi_sp32 */
    case 182:  /* *or_not_v4hi_sp32 */
    case 181:  /* *or_not_v2si_sp32 */
    case 180:  /* *or_not_di_sp32 */
    case 172:  /* *and_not_v4qi */
    case 171:  /* *and_not_v2hi */
    case 170:  /* *and_not_si */
    case 169:  /* *and_not_v8qi_sp32 */
    case 168:  /* *and_not_v4hi_sp32 */
    case 167:  /* *and_not_v2si_sp32 */
    case 166:  /* *and_not_di_sp32 */
    case 146:  /* const_umulsidi3_sp32 */
    case 138:  /* const_mulsidi3_sp32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 329:  /* *nand<V32mode>_vis */
    case 328:  /* *nand<V32mode>_vis */
    case 327:  /* *nand<V32mode>_vis */
    case 326:  /* *nand<V64mode>_vis */
    case 325:  /* *nand<V64mode>_vis */
    case 324:  /* *nand<V64mode>_vis */
    case 323:  /* *nand<V64mode>_vis */
    case 231:  /* *multf3_extend */
    case 230:  /* *muldf3_extend */
    case 145:  /* *umulsidi3_sp32 */
    case 137:  /* *mulsidi3_sp32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 147:  /* const_umulsidi3_v8plus */
    case 136:  /* const_mulsidi3_v8plus */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 144:  /* umulsidi3_v8plus */
    case 135:  /* mulsidi3_v8plus */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 133:  /* muldi3_v8plus */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 128:  /* *sparc.md:4336 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 155:  /* *cmp_udiv_cc_set */
    case 134:  /* *cmp_mul_set */
    case 131:  /* cmp_minus_cc_set */
    case 124:  /* *cmp_cc_plus_set */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 130:  /* *cmp_minus_cc */
    case 123:  /* *cmp_cc_plus */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 127:  /* *subx_extend */
    case 120:  /* *addx_extend_sp32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 125:  /* subdi3_insn_sp32 */
    case 118:  /* adddi3_insn_sp32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 116:  /* fix_truncdfdi2 */
    case 115:  /* fix_truncsfdi2 */
    case 113:  /* fix_truncdfsi2 */
    case 112:  /* fix_truncsfsi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 99:  /* *cmp_zero_extract */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 93:  /* *cmp_zero_extendqisi2_andcc_set */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 252:  /* *cmp_cc_set_ashift_1 */
    case 219:  /* *cmp_cc_set_not */
    case 210:  /* *cmp_cc_set_neg */
    case 95:  /* *cmp_siqi_trunc_set */
    case 92:  /* *cmp_zero_extendqisi2_set */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 257:  /* jump */
    case 91:  /* *cmp_zero_qi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 251:  /* *cmp_cc_ashift_1 */
    case 218:  /* *cmp_cc_not */
    case 209:  /* *cmp_cc_neg */
    case 94:  /* *cmp_siqi_trunc */
    case 90:  /* *cmp_zero_extendqisi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 85:  /* *movtf_cc_v9 */
    case 84:  /* *movtf_cc_hq_v9 */
    case 83:  /* movdf_cc_v9 */
    case 82:  /* *movsf_cc_v9 */
    case 81:  /* *movsi_cc_v9 */
    case 80:  /* *movhi_cc_v9 */
    case 79:  /* *movqi_cc_v9 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 333:  /* fexpand_vis */
    case 331:  /* fpackfix_vis */
    case 330:  /* fpack16_vis */
    case 59:  /* embmedany_brsum */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 300:  /* tie_add32 */
    case 296:  /* tldo_add32 */
    case 288:  /* tgd_add32 */
    case 44:  /* *movsi_lo_sum_pic_label_ref */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 43:  /* *movsi_high_pic_label_ref */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 301:  /* tle_hix22_sp32 */
    case 297:  /* tie_hi22 */
    case 294:  /* tldo_hix22 */
    case 286:  /* tgd_hi22 */
    case 61:  /* embmedany_texthi */
    case 60:  /* embmedany_textuhi */
    case 57:  /* embmedany_sethi */
    case 54:  /* setlm */
    case 53:  /* sethh */
    case 50:  /* seth44 */
    case 42:  /* movsi_high_pic */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 302:  /* tle_lox10_sp32 */
    case 298:  /* tie_lo10 */
    case 295:  /* tldo_lox10 */
    case 292:  /* tldm_add32 */
    case 287:  /* tgd_lo10 */
    case 62:  /* embmedany_textulo */
    case 55:  /* sethm */
    case 51:  /* setm44 */
    case 41:  /* movsi_lo_sum_pic */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 285:  /* *sparc.md:7453 */
    case 284:  /* *sparc.md:7441 */
    case 78:  /* *movtf_insn_sp32_no_fpu */
    case 77:  /* *movtf_insn_sp32 */
    case 76:  /* *movdf_insn_sp32_v9_no_fpu */
    case 75:  /* *movdf_insn_sp32_v9 */
    case 74:  /* *movdf_insn_sp32_v9 */
    case 73:  /* *movdf_insn_sp32_v9 */
    case 72:  /* *movdf_insn_sp32_v9 */
    case 71:  /* *movdf_insn_sp32_no_fpu */
    case 70:  /* *movdf_insn_sp32 */
    case 67:  /* *movsf_insn_no_fpu */
    case 66:  /* *movsf_insn */
    case 65:  /* *movsf_insn */
    case 64:  /* *movsf_insn */
    case 46:  /* *movdi_insn_sp32_v9 */
    case 45:  /* *movdi_insn_sp32 */
    case 38:  /* *movsi_insn */
    case 36:  /* *movhi_insn */
    case 35:  /* *movqi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 34:  /* load_pcrel_symsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 33:  /* *inverted_fpe_branch */
    case 31:  /* *inverted_fp_branch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 32:  /* *normal_fpe_branch */
    case 30:  /* *normal_fp_branch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 29:  /* *inverted_branch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 28:  /* *normal_branch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 25:  /* *x_minus_sltu_plus_y */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 200:  /* *xor_not_v4qi */
    case 199:  /* *xor_not_v2hi */
    case 198:  /* *xor_not_si */
    case 197:  /* *xor_not_v8qi_sp32 */
    case 196:  /* *xor_not_v4hi_sp32 */
    case 195:  /* *xor_not_v2si_sp32 */
    case 194:  /* *xor_not_di_sp32 */
    case 126:  /* subx */
    case 119:  /* addx */
    case 24:  /* *x_minus_y_minus_sltu */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 291:  /* tldm_lo10 */
    case 248:  /* sqrtsf2 */
    case 247:  /* sqrtdf2 */
    case 246:  /* *sqrttf2_hq */
    case 245:  /* abssf2 */
    case 244:  /* *absdf2_v9 */
    case 243:  /* *absdf2_notv9 */
    case 242:  /* *abstf2_v9 */
    case 241:  /* *abstf2_hq_v9 */
    case 240:  /* *abstf2_notv9 */
    case 239:  /* negsf2 */
    case 238:  /* *negdf2_v9 */
    case 237:  /* *negdf2_notv9 */
    case 236:  /* *negtf2_v9 */
    case 235:  /* *negtf2_notv9 */
    case 217:  /* one_cmplv4qi2 */
    case 216:  /* one_cmplv2hi2 */
    case 215:  /* one_cmplsi2 */
    case 214:  /* *one_cmplv8qi2_sp32 */
    case 213:  /* *one_cmplv4hi2_sp32 */
    case 212:  /* *one_cmplv2si2_sp32 */
    case 211:  /* *one_cmpldi2_sp32 */
    case 208:  /* negsi2 */
    case 117:  /* *fix_trunctfdi2_hq */
    case 114:  /* *fix_trunctfsi2_hq */
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
    case 98:  /* *sign_extendqisi2_insn */
    case 97:  /* *sign_extendqihi2_insn */
    case 96:  /* *sign_extendhisi2_insn */
    case 89:  /* *zero_extendsidi2_insn_sp32 */
    case 88:  /* *zero_extendqisi2_insn */
    case 87:  /* *zero_extendqihi2_insn */
    case 86:  /* *zero_extendhisi2_insn */
    case 69:  /* *movsf_high */
    case 48:  /* *sethi_di_medlow */
    case 47:  /* *sethi_di_medlow_embmedany_pic */
    case 40:  /* *movsi_high */
    case 27:  /* *x_minus_sgeu */
    case 23:  /* *x_minus_sltu */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 22:  /* *sltu_plus_x_plus_y */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 18:  /* *neg_sltu_plus_x */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 26:  /* *sgeu_plus_x */
    case 21:  /* *sltu_plus_x */
    case 17:  /* *neg_sltu_minus_x */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 290:  /* tldm_hi22 */
    case 20:  /* *neg_sgeu_insn */
    case 19:  /* *sgeu_insn */
    case 16:  /* *neg_sltu_insn */
    case 15:  /* *sltu_insn */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 14:  /* *x_minus_i_eq_0 */
    case 12:  /* *x_minus_i_ne_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 268:  /* *sibcall_value_symbolic_sp32 */
    case 266:  /* *call_value_symbolic_sp32 */
    case 265:  /* *call_value_address_sp32 */
    case 121:  /* *sparc.md:4164 */
    case 13:  /* *x_plus_i_eq_0 */
    case 11:  /* *x_plus_i_ne_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 10:  /* *neg_seqsi_zero */
    case 8:  /* *neg_snesi_zero */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 207:  /* *negdi2_sp32 */
    case 9:  /* *seqsi_zero */
    case 7:  /* *snesi_zero */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 340:  /* fmuld8sux16_vis */
    case 338:  /* fmul8sux16_vis */
    case 336:  /* fmul8x16au_vis */
    case 335:  /* fmul8x16_vis */
    case 322:  /* subv2hi3 */
    case 321:  /* subv4hi3 */
    case 320:  /* subv2si3 */
    case 319:  /* addv2hi3 */
    case 318:  /* addv4hi3 */
    case 317:  /* addv2si3 */
    case 255:  /* lshrsi3 */
    case 253:  /* ashrsi3 */
    case 249:  /* ashlsi3 */
    case 234:  /* divsf3 */
    case 233:  /* divdf3 */
    case 232:  /* *divtf3_hq */
    case 229:  /* mulsf3 */
    case 228:  /* muldf3 */
    case 227:  /* *multf3_hq */
    case 226:  /* subsf3 */
    case 225:  /* subdf3 */
    case 224:  /* *subtf3_hq */
    case 223:  /* addsf3 */
    case 222:  /* adddf3 */
    case 221:  /* *addtf3_hq */
    case 193:  /* xorv4qi3 */
    case 192:  /* xorv2hi3 */
    case 191:  /* xorsi3 */
    case 190:  /* *xorv8qi3_sp32 */
    case 189:  /* *xorv4hi3_sp32 */
    case 188:  /* *xorv2si3_sp32 */
    case 187:  /* *xordi3_sp32 */
    case 179:  /* iorv4qi3 */
    case 178:  /* iorv2hi3 */
    case 177:  /* iorsi3 */
    case 176:  /* *iorv8qi3_sp32 */
    case 175:  /* *iorv4hi3_sp32 */
    case 174:  /* *iorv2si3_sp32 */
    case 173:  /* *iordi3_sp32 */
    case 165:  /* andv4qi3 */
    case 164:  /* andv2hi3 */
    case 163:  /* andsi3 */
    case 162:  /* *andv8qi3_sp32 */
    case 161:  /* *andv4hi3_sp32 */
    case 160:  /* *andv2si3_sp32 */
    case 159:  /* *anddi3_sp32 */
    case 154:  /* udivsi3_sp32 */
    case 132:  /* mulsi3 */
    case 129:  /* subsi3 */
    case 122:  /* addsi3 */
    case 68:  /* *movsf_lo_sum */
    case 63:  /* embmedany_textlo */
    case 58:  /* embmedany_losum */
    case 56:  /* setlo */
    case 52:  /* setl44 */
    case 49:  /* *losum_di_medlow */
    case 39:  /* *movsi_lo_sum */
    case 37:  /* *movhi_lo_sum */
    case 6:  /* *cmptf_fp */
    case 5:  /* *cmpdf_fp */
    case 4:  /* *cmpsf_fp */
    case 3:  /* *cmptf_fpe */
    case 2:  /* *cmpdf_fpe */
    case 1:  /* *cmpsf_fpe */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 0:  /* *cmpsi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    }
}
