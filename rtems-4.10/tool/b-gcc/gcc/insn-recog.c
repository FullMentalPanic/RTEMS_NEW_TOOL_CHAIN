/* Generated automatically by the program `genrecog' from the target
   machine description file.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"
#include "insn-config.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "toplev.h"
#include "reload.h"
#include "regs.h"
#include "tm-constrs.h"



/* `recog' contains a decision tree that recognizes whether the rtx
   X0 is a valid instruction.

   recog returns -1 if the rtx is not valid.  If the rtx is valid, recog
   returns a nonnegative number which is the insn code number for the
   pattern that matched.  This is the same as the order in the machine
   description of the entry that matched.  This number can be used as an
   index into `insn_data' and other tables.

   The third argument to recog is an optional pointer to an int.  If
   present, recog will accept a pattern if it matches except for missing
   CLOBBER expressions at the end.  In that case, the value pointed to by
   the optional pointer will be set to the number of CLOBBERs that need
   to be added (it should be initialized to zero by the caller).  If it
   is set nonzero, the caller should allocate a PARALLEL of the
   appropriate size, copy the initial entries, and call add_clobbers
   (found in insn-emit.c) to fill in the CLOBBERs.


   The function split_insns returns 0 if the rtl could not
   be split or the split rtl as an INSN list if it can be.

   The function peephole2_insns returns 0 if the rtl could not
   be matched. If there was a match, the new rtl is returned in an INSN list,
   and LAST_INSN will point to the last recognized insn in the old sequence.
*/


extern rtx gen_split_372 (rtx, rtx *);
extern rtx gen_split_373 (rtx, rtx *);
extern rtx gen_split_374 (rtx, rtx *);
extern rtx gen_split_375 (rtx, rtx *);
extern rtx gen_split_376 (rtx, rtx *);
extern rtx gen_split_377 (rtx, rtx *);
extern rtx gen_split_378 (rtx, rtx *);
extern rtx gen_split_379 (rtx, rtx *);
extern rtx gen_split_380 (rtx, rtx *);
extern rtx gen_split_406 (rtx, rtx *);
extern rtx gen_split_407 (rtx, rtx *);
extern rtx gen_split_408 (rtx, rtx *);
extern rtx gen_split_409 (rtx, rtx *);
extern rtx gen_split_410 (rtx, rtx *);
extern rtx gen_split_411 (rtx, rtx *);
extern rtx gen_split_415 (rtx, rtx *);
extern rtx gen_split_420 (rtx, rtx *);
extern rtx gen_split_421 (rtx, rtx *);
extern rtx gen_split_422 (rtx, rtx *);
extern rtx gen_split_423 (rtx, rtx *);
extern rtx gen_split_424 (rtx, rtx *);
extern rtx gen_split_425 (rtx, rtx *);
extern rtx gen_split_426 (rtx, rtx *);
extern rtx gen_split_427 (rtx, rtx *);
extern rtx gen_split_428 (rtx, rtx *);
extern rtx gen_split_429 (rtx, rtx *);
extern rtx gen_split_430 (rtx, rtx *);
extern rtx gen_split_431 (rtx, rtx *);
extern rtx gen_split_432 (rtx, rtx *);
extern rtx gen_split_433 (rtx, rtx *);
extern rtx gen_split_434 (rtx, rtx *);
extern rtx gen_split_435 (rtx, rtx *);
extern rtx gen_split_436 (rtx, rtx *);
extern rtx gen_split_437 (rtx, rtx *);
extern rtx gen_split_438 (rtx, rtx *);
extern rtx gen_split_439 (rtx, rtx *);
extern rtx gen_split_440 (rtx, rtx *);
extern rtx gen_split_441 (rtx, rtx *);
extern rtx gen_split_442 (rtx, rtx *);
extern rtx gen_split_443 (rtx, rtx *);
extern rtx gen_split_445 (rtx, rtx *);
extern rtx gen_split_446 (rtx, rtx *);
extern rtx gen_split_447 (rtx, rtx *);
extern rtx gen_split_448 (rtx, rtx *);
extern rtx gen_split_455 (rtx, rtx *);
extern rtx gen_split_460 (rtx, rtx *);
extern rtx gen_split_473 (rtx, rtx *);
extern rtx gen_split_474 (rtx, rtx *);
extern rtx gen_split_475 (rtx, rtx *);
extern rtx gen_split_477 (rtx, rtx *);
extern rtx gen_split_478 (rtx, rtx *);
extern rtx gen_split_479 (rtx, rtx *);
extern rtx gen_split_491 (rtx, rtx *);
extern rtx gen_split_492 (rtx, rtx *);
extern rtx gen_split_493 (rtx, rtx *);
extern rtx gen_split_494 (rtx, rtx *);
extern rtx gen_split_495 (rtx, rtx *);
extern rtx gen_split_500 (rtx, rtx *);
extern rtx gen_split_501 (rtx, rtx *);
extern rtx gen_split_502 (rtx, rtx *);
extern rtx gen_split_503 (rtx, rtx *);
extern rtx gen_split_504 (rtx, rtx *);
extern rtx gen_split_509 (rtx, rtx *);
extern rtx gen_split_510 (rtx, rtx *);
extern rtx gen_split_511 (rtx, rtx *);
extern rtx gen_split_512 (rtx, rtx *);
extern rtx gen_split_513 (rtx, rtx *);
extern rtx gen_split_514 (rtx, rtx *);
extern rtx gen_split_515 (rtx, rtx *);
extern rtx gen_split_516 (rtx, rtx *);
extern rtx gen_split_517 (rtx, rtx *);
extern rtx gen_split_518 (rtx, rtx *);
extern rtx gen_split_520 (rtx, rtx *);
extern rtx gen_split_525 (rtx, rtx *);
extern rtx gen_split_526 (rtx, rtx *);
extern rtx gen_split_527 (rtx, rtx *);
extern rtx gen_split_528 (rtx, rtx *);
extern rtx gen_split_534 (rtx, rtx *);
extern rtx gen_split_535 (rtx, rtx *);
extern rtx gen_split_537 (rtx, rtx *);
extern rtx gen_split_539 (rtx, rtx *);
extern rtx gen_split_540 (rtx, rtx *);
extern rtx gen_split_542 (rtx, rtx *);
extern rtx gen_peephole2_562 (rtx, rtx *);
extern rtx gen_peephole2_563 (rtx, rtx *);
extern rtx gen_peephole2_564 (rtx, rtx *);
extern rtx gen_peephole2_565 (rtx, rtx *);
extern rtx gen_peephole2_566 (rtx, rtx *);
extern rtx gen_peephole2_567 (rtx, rtx *);
extern rtx gen_peephole2_568 (rtx, rtx *);
extern rtx gen_peephole2_569 (rtx, rtx *);
extern rtx gen_peephole2_570 (rtx, rtx *);
extern rtx gen_peephole2_571 (rtx, rtx *);
extern rtx gen_peephole2_572 (rtx, rtx *);



static int
recog_1 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case NE:
      goto L52;
    case NEG:
      goto L66;
    case EQ:
      goto L80;
    case PLUS:
      goto L110;
    case MINUS:
      goto L128;
    case LTU:
      goto L170;
    case GEU:
      goto L197;
    case UNSPEC:
      goto L3338;
    case LO_SUM:
      goto L348;
    case HIGH:
      goto L364;
    case IF_THEN_ELSE:
      goto L574;
    case ZERO_EXTEND:
      goto L619;
    case SIGN_EXTEND:
      goto L689;
    case FIX:
      goto L769;
    case MULT:
      goto L951;
    case TRUNCATE:
      goto L1052;
    default:
     break;
   }
  goto ret0;

 L52: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L53;
    }
  goto ret0;

 L53: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 7;  /* *snesi_zero */
    }
  goto ret0;

 L66: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L3339;
  goto ret0;

 L3339: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NE:
      goto L67;
    case EQ:
      goto L95;
    case LTU:
      goto L176;
    case PLUS:
      goto L190;
    case GEU:
      goto L203;
    default:
     break;
   }
  goto ret0;

 L67: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L68;
    }
  goto ret0;

 L68: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 8;  /* *neg_snesi_zero */
    }
  goto ret0;

 L95: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L96;
    }
  goto ret0;

 L96: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 10;  /* *neg_seqsi_zero */
    }
  goto ret0;

 L176: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CCmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 100)
    goto L177;
  goto ret0;

 L177: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 16;  /* *neg_sltu_insn */
    }
  goto ret0;

 L190: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == LTU)
    goto L191;
  goto ret0;

 L191: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == CCmode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 100)
    goto L192;
  goto ret0;

 L192: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L193;
  goto ret0;

 L193: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[1] = x3;
      return 18;  /* *neg_sltu_plus_x */
    }
  goto ret0;

 L203: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CCmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 100)
    goto L204;
  goto ret0;

 L204: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 20;  /* *neg_sgeu_insn */
    }
  goto ret0;

 L80: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L81;
    }
  goto ret0;

 L81: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 9;  /* *seqsi_zero */
    }
  goto ret0;

 L110: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L3344;
  goto ret0;

 L3344: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NE:
      goto L111;
    case EQ:
      goto L146;
    case LTU:
      goto L209;
    case GEU:
      goto L250;
    case PLUS:
      goto L818;
    case REG:
    case SUBREG:
      goto L3349;
    default:
      goto ret0;
   }
 L3349: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L853;
    }
  goto ret0;

 L111: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L112;
    }
  goto ret0;

 L112: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L113;
  goto ret0;

 L113: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L114;
    }
  goto ret0;

 L114: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 11;  /* *x_plus_i_ne_0 */
    }
  goto ret0;

 L146: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L147;
    }
  goto ret0;

 L147: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L148;
  goto ret0;

 L148: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L149;
    }
  goto ret0;

 L149: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 13;  /* *x_plus_i_eq_0 */
    }
  goto ret0;

 L209: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CCmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 100)
    goto L210;
  goto ret0;

 L210: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L218;
  goto ret0;

 L218: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L219;
  if (arith_operand (x2, SImode))
    {
      operands[1] = x2;
      return 21;  /* *sltu_plus_x */
    }
  goto ret0;

 L219: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arith_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L220;
    }
  goto ret0;

 L220: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      return 22;  /* *sltu_plus_x_plus_y */
    }
  goto ret0;

 L250: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CCmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 100)
    goto L251;
  goto ret0;

 L251: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L252;
  goto ret0;

 L252: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      return 26;  /* *sgeu_plus_x */
    }
  goto ret0;

 L818: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arith_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L819;
    }
  goto ret0;

 L819: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L820;
    }
  goto ret0;

 L820: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == LTU)
    goto L821;
  goto ret0;

 L821: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CC_NOOVmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 100)
    goto L822;
  goto ret0;

 L822: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 119;  /* addx */
    }
  goto ret0;

 L853: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_add_operand (x2, SImode))
    {
      operands[2] = x2;
      return 122;  /* addsi3 */
    }
  goto ret0;

 L128: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L3351;
 L240: ATTRIBUTE_UNUSED_LABEL
  if (register_or_zero_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L241;
    }
  goto ret0;

 L3351: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L182;
    case MINUS:
      goto L232;
    case REG:
    case SUBREG:
      goto L3350;
    default:
      goto L3352;
   }
 L3350: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L129;
    }
 L3352: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L225;
    }
  goto L240;

 L182: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == LTU)
    goto L183;
  goto L240;

 L183: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == CCmode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 100)
    goto L184;
  goto L240;

 L184: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L185;
  goto L240;

 L185: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[1] = x2;
      return 17;  /* *neg_sltu_minus_x */
    }
  x2 = XEXP (x1, 0);
  goto L240;

 L232: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_or_zero_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L233;
    }
  goto L240;

 L233: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L234;
    }
  goto L240;

 L234: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == LTU)
    goto L235;
  x2 = XEXP (x1, 0);
  goto L240;

 L235: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case CCmode:
      goto L3354;
    case CC_NOOVmode:
      goto L3355;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L240;

 L3354: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 100)
    goto L236;
  x2 = XEXP (x1, 0);
  goto L240;

 L236: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 24;  /* *x_minus_y_minus_sltu */
    }
  x2 = XEXP (x1, 0);
  goto L240;

 L3355: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 100)
    goto L896;
  x2 = XEXP (x1, 0);
  goto L240;

 L896: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 126;  /* subx */
    }
  x2 = XEXP (x1, 0);
  goto L240;

 L129: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L3356;
  x2 = XEXP (x1, 0);
  goto L3352;

 L3356: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NE:
      goto L130;
    case EQ:
      goto L165;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3352;

 L130: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L131;
    }
  x2 = XEXP (x1, 0);
  goto L3352;

 L131: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 12;  /* *x_minus_i_ne_0 */
    }
  x2 = XEXP (x1, 0);
  goto L3352;

 L165: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L166;
    }
  x2 = XEXP (x1, 0);
  goto L3352;

 L166: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 14;  /* *x_minus_i_eq_0 */
    }
  x2 = XEXP (x1, 0);
  goto L3352;

 L225: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L3358;
 L927: ATTRIBUTE_UNUSED_LABEL
  if (arith_add_operand (x2, SImode))
    {
      operands[2] = x2;
      return 129;  /* subsi3 */
    }
  x2 = XEXP (x1, 0);
  goto L240;

 L3358: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case LTU:
      goto L226;
    case GEU:
      goto L258;
    default:
     break;
   }
  goto L927;

 L226: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CCmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 100)
    goto L227;
  goto L927;

 L227: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 23;  /* *x_minus_sltu */
    }
  goto L927;

 L258: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CCmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 100)
    goto L259;
  goto L927;

 L259: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 27;  /* *x_minus_sgeu */
    }
  goto L927;

 L241: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L242;
  goto ret0;

 L242: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == LTU)
    goto L243;
  goto ret0;

 L243: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == CCmode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 100)
    goto L244;
  goto ret0;

 L244: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L245;
  goto ret0;

 L245: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      return 25;  /* *x_minus_sltu_plus_y */
    }
  goto ret0;

 L170: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    goto L171;
  goto ret0;

 L171: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 15;  /* *sltu_insn */
    }
  goto ret0;

 L197: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    goto L198;
  goto ret0;

 L198: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 19;  /* *sgeu_insn */
    }
  goto ret0;

 L3338: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 2)
    goto L325;
  goto ret0;

 L325: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (symbolic_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L326;
    }
  goto ret0;

 L326: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (call_address_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L327;
    }
  goto ret0;

 L327: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 34;  /* load_pcrel_symsi */
    }
  goto ret0;

 L348: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L358;
    }
  goto ret0;

 L358: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L3360;
 L349: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      return 39;  /* *movsi_lo_sum */
    }
  goto ret0;

 L3360: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC)
    goto L3362;
  goto L349;

 L3362: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 1:
      goto L3364;
    case 2:
      goto L3365;
    default:
      break;
    }
  goto L349;

 L3364: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 0)
    goto L359;
  goto L349;

 L359: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (immediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L360;
    }
  goto L349;

 L360: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1870 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(flag_pic))
    {
      return 41;  /* movsi_lo_sum_pic */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L349;

 L3365: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 5)
    goto L379;
  goto L349;

 L379: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (label_ref_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L380;
    }
  goto L349;

 L380: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  operands[3] = x3;
  goto L381;

 L381: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1917 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(flag_pic))
    {
      return 44;  /* *movsi_lo_sum_pic_label_ref */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L349;

 L364: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L3366;
 L353: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x2, SImode))
    {
      operands[1] = x2;
      return 40;  /* *movsi_high */
    }
  goto ret0;

 L3366: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC)
    goto L3368;
  goto L353;

 L3368: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 1:
      goto L3370;
    case 2:
      goto L3371;
    default:
      break;
    }
  goto L353;

 L3370: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 0)
    goto L365;
  goto L353;

 L365: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  operands[1] = x3;
  goto L366;

 L366: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1876 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(flag_pic && check_pic (1)))
    {
      return 42;  /* movsi_high_pic */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L353;

 L3371: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 5)
    goto L371;
  goto L353;

 L371: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (label_ref_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L372;
    }
  goto L353;

 L372: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  operands[2] = x3;
  goto L373;

 L373: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1909 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(flag_pic))
    {
      return 43;  /* *movsi_high_pic_label_ref */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L353;

 L574: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L575;
    }
  goto ret0;

 L575: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (icc_or_fcc_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L576;
    }
  goto ret0;

 L576: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L577;
  goto ret0;

 L577: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith11_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L578;
    }
  goto ret0;

 L578: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (arith11_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L579;
    }
  goto ret0;

 L579: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3123 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9 && !(SImode == DImode && TARGET_ARCH32)))
    {
      return 81;  /* *movsi_cc_v9 */
    }
  goto ret0;

 L619: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      return 86;  /* *zero_extendhisi2_insn */
    }
  if (input_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L629;
    }
  goto ret0;

 L629: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3373 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(GET_CODE (operands[1]) != CONST_INT))
    {
      return 88;  /* *zero_extendqisi2_insn */
    }
  goto ret0;

 L689: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L3372;
    case QImode:
      goto L3373;
    default:
      break;
    }
  goto ret0;

 L3372: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      return 96;  /* *sign_extendhisi2_insn */
    }
  goto ret0;

 L3373: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      return 98;  /* *sign_extendqisi2_insn */
    }
  goto ret0;

 L769: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L3374;
    case DFmode:
      goto L3375;
    case TFmode:
      goto L3376;
    default:
      break;
    }
  goto ret0;

 L3374: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FIX)
    goto L770;
  goto ret0;

 L770: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L771;
    }
  goto ret0;

 L771: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3989 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 112;  /* fix_truncsfsi2 */
    }
  goto ret0;

 L3375: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FIX)
    goto L776;
  goto ret0;

 L776: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L777;
    }
  goto ret0;

 L777: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3997 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 113;  /* fix_truncdfsi2 */
    }
  goto ret0;

 L3376: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L782;
    }
  goto ret0;

 L782: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4011 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 114;  /* *fix_trunctfsi2_hq */
    }
  goto ret0;

 L951: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arith_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L952;
    }
  goto ret0;

 L952: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L953;
    }
  goto ret0;

 L953: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4428 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_HARD_MUL))
    {
      return 132;  /* mulsi3 */
    }
  goto ret0;

 L1052: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L1053;
  goto ret0;

 L1053: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MULT)
    goto L1054;
  goto ret0;

 L1054: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L1055;
  goto ret0;

 L1055: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L1056;
    }
  goto ret0;

 L1056: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L1057;
  goto ret0;

 L1057: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L1058;
    }
  goto ret0;

 L1058: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (small_int_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1059;
    }
  goto ret0;

 L1059: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4647 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 139;  /* smulsi3_highpart_v8plus */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_2 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case HIGH:
      goto L393;
    case LO_SUM:
      goto L403;
    case UNSPEC:
      goto L3419;
    case ZERO_EXTEND:
      goto L633;
    case FIX:
      goto L786;
    case PLUS:
      goto L845;
    case MINUS:
      goto L885;
    case MULT:
      goto L998;
    case AND:
      goto L1374;
    case IOR:
      goto L1451;
    case XOR:
      goto L1493;
    case NOT:
      goto L1528;
    case NEG:
      goto L1643;
    case ASHIFT:
      goto L1895;
    case ASHIFTRT:
      goto L1935;
    case LSHIFTRT:
      goto L1955;
    default:
     break;
   }
  goto ret0;

 L393: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L3420;
  goto ret0;

 L3420: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case CONST:
      goto L3428;
    case UNSPEC:
      goto L3429;
    default:
     break;
   }
 L3421: ATTRIBUTE_UNUSED_LABEL
  if (symbolic_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L399;
    }
  goto ret0;

 L3428: ATTRIBUTE_UNUSED_LABEL
  if (medium_pic_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L394;
    }
  goto L3421;

 L394: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2088 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
((TARGET_CM_MEDLOW || TARGET_CM_EMBMEDANY) && check_pic (1)))
    {
      return 47;  /* *sethi_di_medlow_embmedany_pic */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3421;

 L3429: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1)
    goto L3435;
  goto ret0;

 L3435: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 6LL:
      goto L410;
    case 9LL:
      goto L429;
    case 10LL:
      goto L435;
    case 11LL:
      goto L454;
    case 13LL:
      goto L471;
    case 14LL:
      goto L477;
    default:
      break;
    }
  goto ret0;

 L410: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (symbolic_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L411;
    }
  goto ret0;

 L411: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2107 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_CM_MEDMID))
    {
      return 50;  /* seth44 */
    }
  goto ret0;

 L429: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (symbolic_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L430;
    }
  goto ret0;

 L430: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2127 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_CM_MEDANY))
    {
      return 53;  /* sethh */
    }
  goto ret0;

 L435: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (symbolic_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L436;
    }
  goto ret0;

 L436: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2133 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_CM_MEDANY))
    {
      return 54;  /* setlm */
    }
  goto ret0;

 L454: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (data_segment_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L455;
    }
  goto ret0;

 L455: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2153 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_CM_EMBMEDANY && check_pic (1)))
    {
      return 57;  /* embmedany_sethi */
    }
  goto ret0;

 L471: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (text_segment_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L472;
    }
  goto ret0;

 L472: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2172 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_CM_EMBMEDANY && check_pic (1)))
    {
      return 60;  /* embmedany_textuhi */
    }
  goto ret0;

 L477: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (text_segment_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L478;
    }
  goto ret0;

 L478: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2178 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_CM_EMBMEDANY && check_pic (1)))
    {
      return 61;  /* embmedany_texthi */
    }
  goto ret0;

 L399: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2094 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_CM_MEDLOW && check_pic (1)))
    {
      return 48;  /* *sethi_di_medlow */
    }
  goto ret0;

 L403: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L404;
    }
  goto ret0;

 L404: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L3442;
  goto ret0;

 L3442: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC)
    goto L3447;
  if (symbolic_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L405;
    }
 L3444: ATTRIBUTE_UNUSED_LABEL
  if (data_segment_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L461;
    }
 L3446: ATTRIBUTE_UNUSED_LABEL
  if (text_segment_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L491;
    }
  goto ret0;

 L3447: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1)
    goto L3450;
  goto ret0;

 L3450: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 7LL:
      goto L417;
    case 18LL:
      goto L442;
    case 15LL:
      goto L484;
    default:
      break;
    }
  goto ret0;

 L417: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (symbolic_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L418;
    }
  goto ret0;

 L418: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2114 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_CM_MEDMID))
    {
      return 51;  /* setm44 */
    }
  goto ret0;

 L442: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (symbolic_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L443;
    }
  goto ret0;

 L443: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2140 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_CM_MEDANY))
    {
      return 55;  /* sethm */
    }
  goto ret0;

 L484: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (text_segment_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L485;
    }
  goto ret0;

 L485: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2185 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_CM_EMBMEDANY))
    {
      return 62;  /* embmedany_textulo */
    }
  goto ret0;

 L405: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2101 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_CM_MEDLOW))
    {
      return 49;  /* *losum_di_medlow */
    }
 L424: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2121 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_CM_MEDMID))
    {
      return 52;  /* setl44 */
    }
 L449: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2147 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_CM_MEDANY))
    {
      return 56;  /* setlo */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3444;

 L461: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2160 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_CM_EMBMEDANY))
    {
      return 58;  /* embmedany_losum */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3446;

 L491: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2192 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_CM_EMBMEDANY))
    {
      return 63;  /* embmedany_textlo */
    }
  goto ret0;

 L3419: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 11)
    goto L465;
  goto ret0;

 L465: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L466;
    }
  goto ret0;

 L466: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2166 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_CM_EMBMEDANY))
    {
      return 59;  /* embmedany_brsum */
    }
  goto ret0;

 L633: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L3454;
  goto ret0;

 L3454: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L827;
    case MINUS:
      goto L901;
    case REG:
    case SUBREG:
      goto L3453;
    default:
      goto ret0;
   }
 L3453: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      return 89;  /* *zero_extendsidi2_insn_sp32 */
    }
  goto ret0;

 L827: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L828;
  goto ret0;

 L828: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_or_zero_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L829;
    }
  goto ret0;

 L829: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L830;
    }
  goto ret0;

 L830: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == LTU)
    goto L831;
  goto ret0;

 L831: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == CC_NOOVmode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 100)
    goto L832;
  goto ret0;

 L832: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 120;  /* *addx_extend_sp32 */
    }
  goto ret0;

 L901: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MINUS)
    goto L902;
  goto ret0;

 L902: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_or_zero_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L903;
    }
  goto ret0;

 L903: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L904;
    }
  goto ret0;

 L904: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == LTU)
    goto L905;
  goto ret0;

 L905: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == CC_NOOVmode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 100)
    goto L906;
  goto ret0;

 L906: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 127;  /* *subx_extend */
    }
  goto ret0;

 L786: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L3456;
    case DFmode:
      goto L3457;
    case TFmode:
      goto L3458;
    default:
      break;
    }
  goto ret0;

 L3456: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FIX)
    goto L787;
  goto ret0;

 L787: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L788;
    }
  goto ret0;

 L788: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4026 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9 && TARGET_FPU))
    {
      return 115;  /* fix_truncsfdi2 */
    }
  goto ret0;

 L3457: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FIX)
    goto L793;
  goto ret0;

 L793: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L794;
    }
  goto ret0;

 L794: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4040 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9 && TARGET_FPU))
    {
      return 116;  /* fix_truncdfdi2 */
    }
  goto ret0;

 L3458: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L799;
    }
  goto ret0;

 L799: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4060 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9 && TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 117;  /* *fix_trunctfdi2_hq */
    }
  goto ret0;

 L845: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L3459;
 L811: ATTRIBUTE_UNUSED_LABEL
  if (arith_double_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L812;
    }
  goto ret0;

 L3459: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L846;
    case MULT:
      goto L1320;
    default:
     break;
   }
  goto L811;

 L846: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L847;
    }
  goto L811;

 L847: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L848;
    }
  x2 = XEXP (x1, 0);
  goto L811;

 L848: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 121;  /* *sparc.md:4164 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L811;

 L1320: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L3461;
  goto L811;

 L3461: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L1321;
    case ZERO_EXTEND:
      goto L1331;
    default:
     break;
   }
  goto L811;

 L1321: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1322;
    }
  goto L811;

 L1322: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L1323;
  goto L811;

 L1323: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1324;
    }
  goto L811;

 L1324: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L1325;
    }
  x2 = XEXP (x1, 0);
  goto L811;

 L1325: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5105 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET))
    {
      return 157;  /* *smacdi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L811;

 L1331: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1332;
    }
  goto L811;

 L1332: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L1333;
  goto L811;

 L1333: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1334;
    }
  goto L811;

 L1334: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L1335;
    }
  x2 = XEXP (x1, 0);
  goto L811;

 L1335: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5116 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET))
    {
      return 158;  /* *umacdi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L811;

 L812: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_double_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L813;
    }
  goto ret0;

 L813: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 118;  /* adddi3_insn_sp32 */
    }
  goto ret0;

 L885: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L920;
    }
  goto ret0;

 L920: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L921;
  if (arith_double_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L887;
    }
  goto ret0;

 L921: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L922;
    }
  goto ret0;

 L922: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 128;  /* *sparc.md:4336 */
    }
  goto ret0;

 L887: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 125;  /* subdi3_insn_sp32 */
    }
  goto ret0;

 L998: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L3463;
 L968: ATTRIBUTE_UNUSED_LABEL
  if (arith_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L969;
    }
  goto ret0;

 L3463: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SIGN_EXTEND:
      goto L999;
    case ZERO_EXTEND:
      goto L1142;
    default:
     break;
   }
  goto L968;

 L999: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1000;
    }
  goto L968;

 L1000: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L1001;
  if (small_int_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1019;
    }
  x2 = XEXP (x1, 0);
  goto L968;

 L1001: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1002;
    }
  x2 = XEXP (x1, 0);
  goto L968;

 L1002: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4536 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 135;  /* mulsidi3_v8plus */
    }
 L1027: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4561 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_HARD_MUL32))
    {
      return 137;  /* *mulsidi3_sp32 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L968;

 L1019: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4549 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 136;  /* const_mulsidi3_v8plus */
    }
 L1034: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4589 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_HARD_MUL32))
    {
      return 138;  /* const_mulsidi3_sp32 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L968;

 L1142: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1143;
    }
  goto L968;

 L1143: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L1144;
  if (uns_small_int_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1160;
    }
  x2 = XEXP (x1, 0);
  goto L968;

 L1144: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1145;
    }
  x2 = XEXP (x1, 0);
  goto L968;

 L1145: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4743 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 144;  /* umulsidi3_v8plus */
    }
 L1153: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4755 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_HARD_MUL32))
    {
      return 145;  /* *umulsidi3_sp32 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L968;

 L1160: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4783 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_HARD_MUL32))
    {
      return 146;  /* const_umulsidi3_sp32 */
    }
 L1177: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4810 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 147;  /* const_umulsidi3_v8plus */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L968;

 L969: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L970;
    }
  goto ret0;

 L970: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4461 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 133;  /* muldi3_v8plus */
    }
  goto ret0;

 L1374: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == NOT)
    goto L1375;
  if (arith_double_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1340;
    }
  goto ret0;

 L1375: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1376;
    }
  goto ret0;

 L1376: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      return 166;  /* *and_not_di_sp32 */
    }
  goto ret0;

 L1340: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_double_operand (x2, DImode))
    {
      operands[2] = x2;
      return 159;  /* *anddi3_sp32 */
    }
  goto ret0;

 L1451: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == NOT)
    goto L1452;
  if (arith_double_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1417;
    }
  goto ret0;

 L1452: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1453;
    }
  goto ret0;

 L1453: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      return 180;  /* *or_not_di_sp32 */
    }
  goto ret0;

 L1417: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_double_operand (x2, DImode))
    {
      operands[2] = x2;
      return 173;  /* *iordi3_sp32 */
    }
  goto ret0;

 L1493: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arith_double_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1494;
    }
  goto ret0;

 L1494: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_double_operand (x2, DImode))
    {
      operands[2] = x2;
      return 187;  /* *xordi3_sp32 */
    }
  goto ret0;

 L1528: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L3465;
  goto ret0;

 L3465: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == XOR)
    goto L1529;
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      return 211;  /* *one_cmpldi2_sp32 */
    }
  goto ret0;

 L1529: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1530;
    }
  goto ret0;

 L1530: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      return 194;  /* *xor_not_di_sp32 */
    }
  goto ret0;

 L1643: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1644;
    }
  goto ret0;

 L1644: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 207;  /* *negdi2_sp32 */
    }
  goto ret0;

 L1895: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arith_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1896;
    }
  goto ret0;

 L1896: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1897;
    }
  goto ret0;

 L1897: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6234 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 250;  /* ashldi3_v8plus */
    }
  goto ret0;

 L1935: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arith_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1936;
    }
  goto ret0;

 L1936: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1937;
    }
  goto ret0;

 L1937: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6344 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 254;  /* ashrdi3_v8plus */
    }
  goto ret0;

 L1955: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arith_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1956;
    }
  goto ret0;

 L1956: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1957;
    }
  goto ret0;

 L1957: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6421 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 256;  /* lshrdi3_v8plus */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_3 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  if (GET_CODE (x1) == MEM)
    goto L2389;
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2142;
    }
  goto ret0;

 L2389: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L2390;
  goto ret0;

 L2390: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == UNSPEC
      && XVECLEN (x3, 0) == 2
      && XINT (x3, 1) == 32)
    goto L2391;
  goto ret0;

 L2391: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2392;
    }
  goto ret0;

 L2392: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (tld_symbolic_operand (x4, VOIDmode))
    {
      operands[3] = x4;
      goto L2393;
    }
  goto ret0;

 L2393: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2394;
    }
  goto ret0;

 L2394: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      return 314;  /* *tldo_stw_sp32 */
    }
  goto ret0;

 L2142: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L3546;
  goto ret0;

 L3546: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FFS:
      goto L2143;
    case HIGH:
      goto L2170;
    case LO_SUM:
      goto L2175;
    case PLUS:
      goto L2181;
    case UNSPEC:
      goto L3555;
    case ZERO_EXTEND:
      goto L2313;
    case SIGN_EXTEND:
      goto L2331;
    case MEM:
      goto L2366;
    default:
     break;
   }
  goto ret0;

 L2143: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2144;
    }
  goto ret0;

 L2144: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7169 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLITE || TARGET_SPARCLET)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 280;  /* ffssi2 */
    }
  goto ret0;

 L2170: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L3557;
  goto ret0;

 L3557: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC)
    goto L3562;
  goto ret0;

 L3562: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1)
    goto L3567;
  goto ret0;

 L3567: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 30LL:
      goto L2171;
    case 31LL:
      goto L2209;
    case 32LL:
      goto L2244;
    case 33LL:
      goto L2262;
    case 34LL:
      goto L2286;
    default:
      break;
    }
  goto ret0;

 L2171: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (tgd_symbolic_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      return 286;  /* tgd_hi22 */
    }
  goto ret0;

 L2209: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 290;  /* tldm_hi22 */
    }
  goto ret0;

 L2244: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (tld_symbolic_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      return 294;  /* tldo_hix22 */
    }
  goto ret0;

 L2262: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (tie_symbolic_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      return 297;  /* tie_hi22 */
    }
  goto ret0;

 L2286: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (tle_symbolic_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      return 301;  /* tle_hix22_sp32 */
    }
  goto ret0;

 L2175: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2176;
    }
  goto ret0;

 L2176: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L3572;
  goto ret0;

 L3572: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC)
    goto L3577;
  goto ret0;

 L3577: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1)
    goto L3582;
  goto ret0;

 L3582: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 30LL:
      goto L2177;
    case 31LL:
      goto L2215;
    case 32LL:
      goto L2250;
    case 33LL:
      goto L2268;
    case 34LL:
      goto L2292;
    default:
      break;
    }
  goto ret0;

 L2177: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (tgd_symbolic_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      return 287;  /* tgd_lo10 */
    }
  goto ret0;

 L2215: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 291;  /* tldm_lo10 */
    }
  goto ret0;

 L2250: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (tld_symbolic_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      return 295;  /* tldo_lox10 */
    }
  goto ret0;

 L2268: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (tie_symbolic_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      return 298;  /* tie_lo10 */
    }
  goto ret0;

 L2292: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (tle_symbolic_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      return 302;  /* tle_lox10_sp32 */
    }
  goto ret0;

 L2181: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2182;
    }
  goto ret0;

 L2182: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L3587;
  goto ret0;

 L3587: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC)
    goto L3591;
  goto ret0;

 L3591: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 2:
      goto L3595;
    case 1:
      goto L3596;
    default:
      break;
    }
  goto ret0;

 L3595: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 30LL:
      goto L2183;
    case 32LL:
      goto L2256;
    case 33LL:
      goto L2280;
    default:
      break;
    }
  goto ret0;

 L2183: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2184;
    }
  goto ret0;

 L2184: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (tgd_symbolic_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      return 288;  /* tgd_add32 */
    }
  goto ret0;

 L2256: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2257;
    }
  goto ret0;

 L2257: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (tld_symbolic_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      return 296;  /* tldo_add32 */
    }
  goto ret0;

 L2280: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2281;
    }
  goto ret0;

 L2281: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (tie_symbolic_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      return 300;  /* tie_add32 */
    }
  goto ret0;

 L3596: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 31)
    goto L2221;
  goto ret0;

 L2221: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      return 292;  /* tldm_add32 */
    }
  goto ret0;

 L3555: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 3:
      goto L3599;
    case 2:
      goto L3600;
    default:
      break;
    }
  goto ret0;

 L3599: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 33)
    goto L2272;
  goto ret0;

 L2272: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2273;
    }
  goto ret0;

 L2273: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2274;
    }
  goto ret0;

 L2274: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (tie_symbolic_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      return 299;  /* tie_ld32 */
    }
  goto ret0;

 L3600: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 49)
    goto L2611;
  goto ret0;

 L2611: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_or_zero_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2612;
    }
  goto ret0;

 L2612: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_or_zero_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2613;
    }
  goto ret0;

 L2613: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 8341 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_VIS) && 
#line 1748 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(Pmode == SImode)))
    {
      return 346;  /* alignaddrsi_vis */
    }
  goto ret0;

 L2313: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L3601;
    case HImode:
      goto L3602;
    default:
      break;
    }
  goto ret0;

 L3601: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L2314;
  goto ret0;

 L2314: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L2315;
  goto ret0;

 L2315: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == UNSPEC
      && XVECLEN (x4, 0) == 2
      && XINT (x4, 1) == 32)
    goto L2316;
  goto ret0;

 L2316: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2317;
    }
  goto ret0;

 L2317: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (tld_symbolic_operand (x5, VOIDmode))
    {
      operands[3] = x5;
      goto L2318;
    }
  goto ret0;

 L2318: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      return 305;  /* *tldo_ldub2_sp32 */
    }
  goto ret0;

 L3602: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L2349;
  goto ret0;

 L2349: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L2350;
  goto ret0;

 L2350: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == UNSPEC
      && XVECLEN (x4, 0) == 2
      && XINT (x4, 1) == 32)
    goto L2351;
  goto ret0;

 L2351: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2352;
    }
  goto ret0;

 L2352: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (tld_symbolic_operand (x5, VOIDmode))
    {
      operands[3] = x5;
      goto L2353;
    }
  goto ret0;

 L2353: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      return 309;  /* *tldo_lduh1_sp32 */
    }
  goto ret0;

 L2331: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L3603;
    case HImode:
      goto L3604;
    default:
      break;
    }
  goto ret0;

 L3603: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L2332;
  goto ret0;

 L2332: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L2333;
  goto ret0;

 L2333: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == UNSPEC
      && XVECLEN (x4, 0) == 2
      && XINT (x4, 1) == 32)
    goto L2334;
  goto ret0;

 L2334: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2335;
    }
  goto ret0;

 L2335: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (tld_symbolic_operand (x5, VOIDmode))
    {
      operands[3] = x5;
      goto L2336;
    }
  goto ret0;

 L2336: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      return 307;  /* *tldo_ldsb2_sp32 */
    }
  goto ret0;

 L3604: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L2358;
  goto ret0;

 L2358: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L2359;
  goto ret0;

 L2359: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == UNSPEC
      && XVECLEN (x4, 0) == 2
      && XINT (x4, 1) == 32)
    goto L2360;
  goto ret0;

 L2360: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2361;
    }
  goto ret0;

 L2361: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (tld_symbolic_operand (x5, VOIDmode))
    {
      operands[3] = x5;
      goto L2362;
    }
  goto ret0;

 L2362: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      return 310;  /* *tldo_ldsh1_sp32 */
    }
  goto ret0;

 L2366: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L2367;
  goto ret0;

 L2367: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == UNSPEC
      && XVECLEN (x3, 0) == 2
      && XINT (x3, 1) == 32)
    goto L2368;
  goto ret0;

 L2368: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2369;
    }
  goto ret0;

 L2369: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (tld_symbolic_operand (x4, VOIDmode))
    {
      operands[3] = x4;
      goto L2370;
    }
  goto ret0;

 L2370: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      return 311;  /* *tldo_lduw_sp32 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_4 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case CCmode:
      goto L3265;
    case CCFPEmode:
      goto L3266;
    case CCFPmode:
      goto L3267;
    case SImode:
      goto L3268;
    case QImode:
      goto L3269;
    case HImode:
      goto L3270;
    case DImode:
      goto L3273;
    case SFmode:
      goto L3275;
    case V2HImode:
      goto L3276;
    case V4QImode:
      goto L3277;
    case DFmode:
      goto L3279;
    case V2SImode:
      goto L3280;
    case V4HImode:
      goto L3281;
    case V8QImode:
      goto L3282;
    case TFmode:
      goto L3283;
    case CC_NOOVmode:
      goto L3287;
    default:
      break;
    }
 L261: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == PC)
    goto L262;
 L2063: ATTRIBUTE_UNUSED_LABEL
  operands[0] = x1;
  goto L2064;
 L2141: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L3299;
    case QImode:
      goto L3297;
    case HImode:
      goto L3298;
    case V2SImode:
      goto L3300;
    case V4HImode:
      goto L3301;
    case V2HImode:
      goto L3302;
    case DFmode:
      goto L3303;
    case V8QImode:
      goto L3304;
    case SFmode:
      goto L3305;
    case V4QImode:
      goto L3306;
    case DImode:
      goto L3307;
    default:
      break;
    }
 L2119: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == PC)
    goto L2120;
  if (register_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L2198;
    }
 L2622: ATTRIBUTE_UNUSED_LABEL
  operands[0] = x1;
  goto L2623;

 L3265: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 100)
    goto L2;
  goto L261;

 L2: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCmode
      && GET_CODE (x1) == COMPARE)
    goto L3;
  x1 = XEXP (x0, 0);
  goto L261;

 L3: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3309;
    case QImode:
      goto L3310;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L3309: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L638;
    case ZERO_EXTRACT:
      goto L702;
    case NOT:
      goto L1591;
    case REG:
    case SUBREG:
      goto L3308;
    case AND:
    case IOR:
    case XOR:
      goto L3313;
    default:
      goto L3315;
   }
 L3308: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4;
    }
 L3313: ATTRIBUTE_UNUSED_LABEL
  if (cc_arith_operator (x2, SImode))
    {
      operands[2] = x2;
      goto L1571;
    }
 L3315: ATTRIBUTE_UNUSED_LABEL
  if (cc_arith_not_operator (x2, SImode))
    {
      operands[2] = x2;
      goto L1614;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L638: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[0] = x3;
      goto L639;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L639: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 90;  /* *cmp_zero_extendqisi2 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L702: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L703;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L703: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (small_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L704;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L704: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (small_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L705;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L705: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 3788 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(INTVAL (operands[2]) > 19))
    {
      return 99;  /* *cmp_zero_extract */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1591: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == XOR)
    goto L1592;
  if (arith_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L1699;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1592: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_or_zero_operand (x4, SImode))
    {
      operands[0] = x4;
      goto L1593;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1593: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1594;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1594: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 203;  /* *cmp_cc_xor_not */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1699: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 218;  /* *cmp_cc_not */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L4: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[1] = x2;
      return 0;  /* *cmpsi_insn */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1571: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arith_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L1572;
    }
  goto L3315;

 L1572: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1573;
    }
  goto L3315;

 L1573: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 201;  /* *cmp_cc_arith_op */
    }
  x2 = XEXP (x1, 0);
  goto L3315;

 L1614: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == NOT)
    goto L1615;
  x1 = XEXP (x0, 0);
  goto L261;

 L1615: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (arith_operand (x4, SImode))
    {
      operands[0] = x4;
      goto L1616;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1616: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_or_zero_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1617;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1617: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 205;  /* *cmp_cc_arith_op_not */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L3310: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L644;
    }
 L3311: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 3)
    goto L673;
  x1 = XEXP (x0, 0);
  goto L261;

 L644: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 91;  /* *cmp_zero_qi */
    }
  x2 = XEXP (x1, 0);
  goto L3311;

 L673: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L674;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L674: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 94;  /* *cmp_siqi_trunc */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L3266: ATTRIBUTE_UNUSED_LABEL
  if (fcc_register_operand (x1, CCFPEmode))
    {
      operands[0] = x1;
      goto L7;
    }
  goto L261;

 L7: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCFPEmode
      && GET_CODE (x1) == COMPARE)
    goto L8;
  x1 = XEXP (x0, 0);
  goto L261;

 L8: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L3316;
    case DFmode:
      goto L3317;
    case TFmode:
      goto L3318;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L3316: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L9;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L9: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L10;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L10: ATTRIBUTE_UNUSED_LABEL
  if (
#line 432 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 1;  /* *cmpsf_fpe */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L3317: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L15;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L15: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L16;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L16: ATTRIBUTE_UNUSED_LABEL
  if (
#line 444 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 2;  /* *cmpdf_fpe */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L3318: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L21;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L21: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, TFmode))
    {
      operands[2] = x2;
      goto L22;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L22: ATTRIBUTE_UNUSED_LABEL
  if (
#line 457 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 3;  /* *cmptf_fpe */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L3267: ATTRIBUTE_UNUSED_LABEL
  if (fcc_register_operand (x1, CCFPmode))
    {
      operands[0] = x1;
      goto L25;
    }
  goto L261;

 L25: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCFPmode
      && GET_CODE (x1) == COMPARE)
    goto L26;
  x1 = XEXP (x0, 0);
  goto L261;

 L26: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L3319;
    case DFmode:
      goto L3320;
    case TFmode:
      goto L3321;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L3319: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L27;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L27: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L28;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L28: ATTRIBUTE_UNUSED_LABEL
  if (
#line 469 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 4;  /* *cmpsf_fp */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L3320: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L33;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L33: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L34;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L34: ATTRIBUTE_UNUSED_LABEL
  if (
#line 481 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 5;  /* *cmpdf_fp */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L3321: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L39;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L39: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, TFmode))
    {
      operands[2] = x2;
      goto L40;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L40: ATTRIBUTE_UNUSED_LABEL
  if (
#line 494 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 6;  /* *cmptf_fp */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L3268: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L51;
    }
 L3272: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L343;
    }
 L3288: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1076;
    }
  goto L261;

 L51: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L3322;
  x1 = XEXP (x0, 0);
  goto L3272;

 L3322: ATTRIBUTE_UNUSED_LABEL
  tem = recog_1 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L3272;

 L343: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (input_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L344;
    }
  x1 = XEXP (x0, 0);
  goto L3288;

 L344: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1838 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
((register_operand (operands[0], SImode)
    || register_or_zero_operand (operands[1], SImode))))
    {
      return 38;  /* *movsi_insn */
    }
  x1 = XEXP (x0, 0);
  goto L3288;

 L1076: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L3377;
  x1 = XEXP (x0, 0);
  goto L261;

 L3377: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case SUBREG:
      goto L3390;
    case TRUNCATE:
      goto L1101;
    case DIV:
      goto L1257;
    case UDIV:
      goto L1292;
    case PLUS:
      goto L1311;
    case AND:
      goto L1398;
    case IOR:
      goto L1475;
    case XOR:
      goto L1513;
    case NOT:
      goto L1552;
    case NEG:
      goto L1648;
    case ASHIFT:
      goto L1881;
    case ASHIFTRT:
      goto L1921;
    case LSHIFTRT:
      goto L1941;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L261;

 L3390: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 4)
    goto L1077;
  x1 = XEXP (x0, 0);
  goto L261;

 L1077: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L1078;
  x1 = XEXP (x0, 0);
  goto L261;

 L1078: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MULT)
    goto L1079;
  x1 = XEXP (x0, 0);
  goto L261;

 L1079: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L1080;
  x1 = XEXP (x0, 0);
  goto L261;

 L1080: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L1081;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1081: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L1082;
  x1 = XEXP (x0, 0);
  goto L261;

 L1082: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L1083;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1083: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (small_int_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1084;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1084: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4665 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 140;  /* *sparc.md:4656 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1101: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L1102;
  x1 = XEXP (x0, 0);
  goto L261;

 L1102: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MULT)
    goto L1103;
  x1 = XEXP (x0, 0);
  goto L261;

 L1103: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode)
    goto L3391;
  x1 = XEXP (x0, 0);
  goto L261;

 L3391: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case SIGN_EXTEND:
      goto L1104;
    case ZERO_EXTEND:
      goto L1198;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L261;

 L1104: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L1115;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1115: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L1116;
  if (small_int_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L1106;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1116: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L1117;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1117: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (32)]
      && 
#line 4694 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_HARD_MUL32))
    {
      return 142;  /* *smulsi3_highpart_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1106: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L3393;
  x1 = XEXP (x0, 0);
  goto L261;

 L3393: ATTRIBUTE_UNUSED_LABEL
  if (small_int_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1107;
    }
 L3394: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x3, 0) == 32LL
      && 
#line 4706 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_HARD_MUL32))
    {
      return 143;  /* const_smulsi3_highpart */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1107: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4680 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 141;  /* const_smulsi3_highpart_v8plus */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L3394;

 L1198: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L1199;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1199: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L1200;
  if (uns_small_int_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L1224;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1200: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L1201;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1201: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L3395;
  x1 = XEXP (x0, 0);
  goto L261;

 L3395: ATTRIBUTE_UNUSED_LABEL
  if (small_int_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1202;
    }
 L3396: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x3, 0) == 32LL
      && 
#line 4883 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_HARD_MUL32))
    {
      return 150;  /* *umulsi3_highpart_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1202: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4854 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 148;  /* umulsi3_highpart_v8plus */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L3396;

 L1224: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L3397;
  x1 = XEXP (x0, 0);
  goto L261;

 L3397: ATTRIBUTE_UNUSED_LABEL
  if (small_int_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1225;
    }
 L3398: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x3, 0) == 32LL
      && 
#line 4895 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_HARD_MUL32))
    {
      return 151;  /* const_umulsi3_highpart */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1225: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4869 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 149;  /* const_umulsi3_highpart_v8plus */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L3398;

 L1257: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1258;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1258: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (input_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1259;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1259: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4926 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
((TARGET_V8 || TARGET_DEPRECATED_V8_INSNS) && TARGET_ARCH32)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 152;  /* divsi3_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1292: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1293;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1293: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (input_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1294;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1294: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5014 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
((TARGET_V8 || TARGET_DEPRECATED_V8_INSNS) && TARGET_ARCH32))
    {
      return 154;  /* udivsi3_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1311: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MULT)
    goto L1312;
  x1 = XEXP (x0, 0);
  goto L261;

 L1312: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1313;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1313: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1314;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1314: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1315;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1315: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5094 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLET))
    {
      return 156;  /* *smacsi */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1398: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NOT)
    goto L1399;
  if (arith_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1360;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1399: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1400;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1400: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      return 170;  /* *and_not_si */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1360: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      return 163;  /* andsi3 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1475: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NOT)
    goto L1476;
  if (arith_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1437;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1476: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1477;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1477: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      return 184;  /* *or_not_si */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1437: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      return 177;  /* iorsi3 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1513: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arith_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1514;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1514: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      return 191;  /* xorsi3 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1552: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == XOR)
    goto L1553;
  if (arith_operand (x2, SImode))
    {
      operands[1] = x2;
      return 215;  /* one_cmplsi2 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1553: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_or_zero_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1554;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1554: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      return 198;  /* *xor_not_si */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1648: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arith_operand (x2, SImode))
    {
      operands[1] = x2;
      return 208;  /* negsi2 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1881: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1882;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1882: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      return 249;  /* ashlsi3 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1921: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1922;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1922: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      return 253;  /* ashrsi3 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1941: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1942;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1942: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      return 255;  /* lshrsi3 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L3269: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L330;
    }
 L3284: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L555;
    }
  goto L261;

 L330: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (input_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L331;
    }
  x1 = XEXP (x0, 0);
  goto L3284;

 L331: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1787 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
((register_operand (operands[0], QImode)
    || register_or_zero_operand (operands[1], QImode))))
    {
      return 35;  /* *movqi_insn */
    }
  x1 = XEXP (x0, 0);
  goto L3284;

 L555: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode
      && GET_CODE (x1) == IF_THEN_ELSE)
    goto L556;
  x1 = XEXP (x0, 0);
  goto L261;

 L556: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L557;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L557: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (icc_or_fcc_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L558;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L558: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L559;
  x1 = XEXP (x0, 0);
  goto L261;

 L559: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith11_operand (x2, QImode))
    {
      operands[3] = x2;
      goto L560;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L560: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (arith11_operand (x2, QImode))
    {
      operands[4] = x2;
      goto L561;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L561: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3123 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9 && !(QImode == DImode && TARGET_ARCH32)))
    {
      return 79;  /* *movqi_cc_v9 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L3270: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L334;
    }
 L3271: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L338;
    }
  goto L261;

 L334: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (input_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L335;
    }
  x1 = XEXP (x0, 0);
  goto L3271;

 L335: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1808 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
((register_operand (operands[0], HImode)
    || register_or_zero_operand (operands[1], HImode))))
    {
      return 36;  /* *movhi_insn */
    }
  x1 = XEXP (x0, 0);
  goto L3271;

 L338: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L3399;
  x1 = XEXP (x0, 0);
  goto L261;

 L3399: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case IOR:
      goto L339;
    case IF_THEN_ELSE:
      goto L565;
    case ZERO_EXTEND:
      goto L623;
    case SIGN_EXTEND:
      goto L693;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L261;

 L339: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L340;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L340: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (small_int_operand (x2, HImode))
    {
      operands[2] = x2;
      return 37;  /* *movhi_lo_sum */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L565: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L566;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L566: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (icc_or_fcc_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L567;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L567: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L568;
  x1 = XEXP (x0, 0);
  goto L261;

 L568: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith11_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L569;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L569: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (arith11_operand (x2, HImode))
    {
      operands[4] = x2;
      goto L570;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L570: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3123 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9 && !(HImode == DImode && TARGET_ARCH32)))
    {
      return 80;  /* *movhi_cc_v9 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L623: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (input_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L624;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L624: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3357 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(GET_CODE (operands[1]) != CONST_INT))
    {
      return 87;  /* *zero_extendqihi2_insn */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L693: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      return 97;  /* *sign_extendqihi2_insn */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L3273: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L384;
    }
 L3274: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L392;
    }
  goto L261;

 L384: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (input_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L385;
    }
  x1 = XEXP (x0, 0);
  goto L3274;

 L385: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1962 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_V9
   && (register_operand (operands[0], DImode)
       || register_or_zero_operand (operands[1], DImode))))
    {
      return 45;  /* *movdi_insn_sp32 */
    }
 L389: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1986 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64
   && TARGET_V9
   && (register_operand (operands[0], DImode)
       || register_or_zero_operand (operands[1], DImode))))
    {
      return 46;  /* *movdi_insn_sp32_v9 */
    }
  x1 = XEXP (x0, 0);
  goto L3274;

 L392: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L3403;
  x1 = XEXP (x0, 0);
  goto L261;

 L3403: ATTRIBUTE_UNUSED_LABEL
  tem = recog_2 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L261;

 L3275: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L494;
    }
 L3278: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L510;
    }
  goto L261;

 L494: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (input_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L495;
    }
  x1 = XEXP (x0, 0);
  goto L3278;

 L495: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2402 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && (register_operand (operands[0], SFmode)
       || register_or_zero_operand (operands[1], SFmode))))
    {
      return 64;  /* *movsf_insn */
    }
 L507: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2450 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_FPU
   && (register_operand (operands[0], SFmode)
       || register_or_zero_operand (operands[1], SFmode))))
    {
      return 67;  /* *movsf_insn_no_fpu */
    }
  x1 = XEXP (x0, 0);
  goto L3278;

 L510: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode)
    goto L3467;
  x1 = XEXP (x0, 0);
  goto L261;

 L3467: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case LO_SUM:
      goto L511;
    case HIGH:
      goto L516;
    case IF_THEN_ELSE:
      goto L583;
    case FLOAT_TRUNCATE:
      goto L724;
    case FLOAT:
      goto L739;
    case PLUS:
      goto L1735;
    case MINUS:
      goto L1753;
    case MULT:
      goto L1771;
    case DIV:
      goto L1805;
    case NEG:
      goto L1831;
    case ABS:
      goto L1861;
    case SQRT:
      goto L1876;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L261;

 L511: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L512;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L512: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (fp_const_high_losum_operand (x2, SFmode))
    {
      operands[2] = x2;
      return 68;  /* *movsf_lo_sum */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L516: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (fp_const_high_losum_operand (x2, SFmode))
    {
      operands[1] = x2;
      return 69;  /* *movsf_high */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L583: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L584;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L584: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (icc_or_fcc_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L585;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L585: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L586;
  x1 = XEXP (x0, 0);
  goto L261;

 L586: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L587;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L587: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      operands[4] = x2;
      goto L588;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L588: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3149 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9 && TARGET_FPU))
    {
      return 82;  /* *movsf_cc_v9 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L724: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L3479;
    case TFmode:
      goto L3480;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L3479: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L725;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L725: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3861 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 103;  /* truncdfsf2 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L3480: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L730;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L730: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3877 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 104;  /* *trunctfsf2_hq */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L739: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3481;
    case DImode:
      goto L3482;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L3481: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L740;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L740: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3902 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 106;  /* floatsisf2 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L3482: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L755;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L755: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3939 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9 && TARGET_FPU))
    {
      return 109;  /* floatdisf2 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1735: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1736;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1736: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L1737;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1737: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5852 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 223;  /* addsf3 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1753: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1754;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1754: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L1755;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1755: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5884 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 226;  /* subsf3 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1771: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1772;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1772: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L1773;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1773: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5916 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 229;  /* mulsf3 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1805: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1806;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1806: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L1807;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1807: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5966 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 234;  /* divsf3 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1831: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1832;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1832: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6054 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 239;  /* negsf2 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1861: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1862;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1862: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6150 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 245;  /* abssf2 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1876: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1877;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1877: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6178 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 248;  /* sqrtsf2 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L3276: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2HImode))
    {
      operands[0] = x1;
      goto L498;
    }
 L3292: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2HImode))
    {
      operands[0] = x1;
      goto L1363;
    }
  goto L261;

 L498: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (input_operand (x1, V2HImode))
    {
      operands[1] = x1;
      goto L499;
    }
  x1 = XEXP (x0, 0);
  goto L3292;

 L499: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2402 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && (register_operand (operands[0], V2HImode)
       || register_or_zero_operand (operands[1], V2HImode))))
    {
      return 65;  /* *movsf_insn */
    }
  x1 = XEXP (x0, 0);
  goto L3292;

 L1363: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2HImode)
    goto L3483;
  x1 = XEXP (x0, 0);
  goto L261;

 L3483: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L1404;
    case IOR:
      goto L1481;
    case XOR:
      goto L1518;
    case NOT:
      goto L1558;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L261;

 L1404: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2HImode
      && GET_CODE (x2) == NOT)
    goto L1405;
  if (arith_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L1365;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1405: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L1406;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1406: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[2] = x2;
      return 171;  /* *and_not_v2hi */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1365: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, V2HImode))
    {
      operands[2] = x2;
      return 164;  /* andv2hi3 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1481: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2HImode
      && GET_CODE (x2) == NOT)
    goto L1482;
  if (arith_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L1442;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1482: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L1483;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1483: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[2] = x2;
      return 185;  /* *or_not_v2hi */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1442: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, V2HImode))
    {
      operands[2] = x2;
      return 178;  /* iorv2hi3 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1518: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arith_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L1519;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1519: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, V2HImode))
    {
      operands[2] = x2;
      return 192;  /* xorv2hi3 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1558: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2HImode
      && GET_CODE (x2) == XOR)
    goto L1559;
  if (arith_operand (x2, V2HImode))
    {
      operands[1] = x2;
      return 216;  /* one_cmplv2hi2 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1559: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_or_zero_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L1560;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1560: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, V2HImode))
    {
      operands[2] = x3;
      return 199;  /* *xor_not_v2hi */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L3277: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V4QImode))
    {
      operands[0] = x1;
      goto L502;
    }
 L3293: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4QImode))
    {
      operands[0] = x1;
      goto L1368;
    }
  goto L261;

 L502: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (input_operand (x1, V4QImode))
    {
      operands[1] = x1;
      goto L503;
    }
  x1 = XEXP (x0, 0);
  goto L3293;

 L503: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2402 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && (register_operand (operands[0], V4QImode)
       || register_or_zero_operand (operands[1], V4QImode))))
    {
      return 66;  /* *movsf_insn */
    }
  x1 = XEXP (x0, 0);
  goto L3293;

 L1368: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4QImode)
    goto L3487;
  x1 = XEXP (x0, 0);
  goto L261;

 L3487: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L1410;
    case IOR:
      goto L1487;
    case XOR:
      goto L1523;
    case NOT:
      goto L1564;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L261;

 L1410: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4QImode
      && GET_CODE (x2) == NOT)
    goto L1411;
  if (arith_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L1370;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1411: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L1412;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1412: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      return 172;  /* *and_not_v4qi */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1370: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, V4QImode))
    {
      operands[2] = x2;
      return 165;  /* andv4qi3 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1487: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4QImode
      && GET_CODE (x2) == NOT)
    goto L1488;
  if (arith_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L1447;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1488: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L1489;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1489: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      return 186;  /* *or_not_v4qi */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1447: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, V4QImode))
    {
      operands[2] = x2;
      return 179;  /* iorv4qi3 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1523: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arith_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L1524;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1524: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, V4QImode))
    {
      operands[2] = x2;
      return 193;  /* xorv4qi3 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1564: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4QImode
      && GET_CODE (x2) == XOR)
    goto L1565;
  if (arith_operand (x2, V4QImode))
    {
      operands[1] = x2;
      return 217;  /* one_cmplv4qi2 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1565: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_or_zero_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L1566;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1566: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, V4QImode))
    {
      operands[2] = x3;
      return 200;  /* *xor_not_v4qi */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L3279: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L519;
    }
 L3285: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L591;
    }
  goto L261;

 L519: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (input_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L520;
    }
  x1 = XEXP (x0, 0);
  goto L3285;

 L520: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2539 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && ! TARGET_V9
   && (register_operand (operands[0], DFmode)
       || register_or_zero_operand (operands[1], DFmode))))
    {
      return 70;  /* *movdf_insn_sp32 */
    }
 L524: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2560 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_FPU
   && ! TARGET_V9
   && (register_operand (operands[0], DFmode)
       || register_or_zero_operand (operands[1], DFmode))))
    {
      return 71;  /* *movdf_insn_sp32_no_fpu */
    }
 L528: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2577 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && TARGET_V9
   && ! TARGET_ARCH64
   && (register_operand (operands[0], DFmode)
       || register_or_zero_operand (operands[1], DFmode))))
    {
      return 72;  /* *movdf_insn_sp32_v9 */
    }
 L544: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2600 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_FPU
   && TARGET_V9
   && ! TARGET_ARCH64
   && (register_operand (operands[0], DFmode)
       || register_or_zero_operand (operands[1], DFmode))))
    {
      return 76;  /* *movdf_insn_sp32_v9_no_fpu */
    }
  x1 = XEXP (x0, 0);
  goto L3285;

 L591: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode)
    goto L3491;
  x1 = XEXP (x0, 0);
  goto L261;

 L3491: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case IF_THEN_ELSE:
      goto L592;
    case FLOAT_EXTEND:
      goto L709;
    case FLOAT_TRUNCATE:
      goto L734;
    case FLOAT:
      goto L744;
    case PLUS:
      goto L1729;
    case MINUS:
      goto L1747;
    case MULT:
      goto L1765;
    case DIV:
      goto L1799;
    case NEG:
      goto L1821;
    case ABS:
      goto L1851;
    case SQRT:
      goto L1871;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L261;

 L592: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L593;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L593: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (icc_or_fcc_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L594;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L594: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L595;
  x1 = XEXP (x0, 0);
  goto L261;

 L595: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L596;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L596: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, DFmode))
    {
      operands[4] = x2;
      goto L597;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L597: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3176 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9 && TARGET_FPU))
    {
      return 83;  /* movdf_cc_v9 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L709: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L710;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L710: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3822 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 100;  /* extendsfdf2 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L734: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L735;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L735: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3892 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 105;  /* *trunctfdf2_hq */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L744: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3502;
    case DImode:
      goto L3503;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L3502: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L745;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L745: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3910 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 107;  /* floatsidf2 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L3503: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L760;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L760: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3953 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9 && TARGET_FPU))
    {
      return 110;  /* floatdidf2 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1729: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1730;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1730: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L1731;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1731: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5843 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 222;  /* adddf3 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1747: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1748;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1748: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L1749;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1749: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5875 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 225;  /* subdf3 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1765: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L3505;
  x1 = XEXP (x0, 0);
  goto L261;

 L3505: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L1778;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1766;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1778: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L1779;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1779: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == FLOAT_EXTEND)
    goto L1780;
  x1 = XEXP (x0, 0);
  goto L261;

 L1780: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L1781;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1781: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5924 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
((TARGET_V8 || TARGET_V9) && TARGET_FPU))
    {
      return 230;  /* *muldf3_extend */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1766: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L1767;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1767: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5907 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 228;  /* muldf3 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1799: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1800;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1800: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L1801;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1801: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5957 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 233;  /* divdf3 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1821: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1822;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1822: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6028 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU && ! TARGET_V9))
    {
      return 237;  /* *negdf2_notv9 */
    }
 L1827: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6046 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_V9))
    {
      return 238;  /* *negdf2_v9 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1851: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1852;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1852: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6124 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU && ! TARGET_V9))
    {
      return 243;  /* *absdf2_notv9 */
    }
 L1857: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6142 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_V9))
    {
      return 244;  /* *absdf2_v9 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1871: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1872;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1872: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6170 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU))
    {
      return 247;  /* sqrtdf2 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L3280: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L531;
    }
 L3289: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L1343;
    }
  goto L261;

 L531: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (input_operand (x1, V2SImode))
    {
      operands[1] = x1;
      goto L532;
    }
  x1 = XEXP (x0, 0);
  goto L3289;

 L532: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2577 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && TARGET_V9
   && ! TARGET_ARCH64
   && (register_operand (operands[0], V2SImode)
       || register_or_zero_operand (operands[1], V2SImode))))
    {
      return 73;  /* *movdf_insn_sp32_v9 */
    }
  x1 = XEXP (x0, 0);
  goto L3289;

 L1343: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SImode)
    goto L3506;
  x1 = XEXP (x0, 0);
  goto L261;

 L3506: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L1380;
    case IOR:
      goto L1457;
    case XOR:
      goto L1498;
    case NOT:
      goto L1534;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L261;

 L1380: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SImode
      && GET_CODE (x2) == NOT)
    goto L1381;
  if (arith_double_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L1345;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1381: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L1382;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1382: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      return 167;  /* *and_not_v2si_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1345: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_double_operand (x2, V2SImode))
    {
      operands[2] = x2;
      return 160;  /* *andv2si3_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1457: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SImode
      && GET_CODE (x2) == NOT)
    goto L1458;
  if (arith_double_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L1422;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1458: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L1459;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1459: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      return 181;  /* *or_not_v2si_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1422: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_double_operand (x2, V2SImode))
    {
      operands[2] = x2;
      return 174;  /* *iorv2si3_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1498: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arith_double_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L1499;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1499: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_double_operand (x2, V2SImode))
    {
      operands[2] = x2;
      return 188;  /* *xorv2si3_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1534: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SImode)
    goto L3510;
  x1 = XEXP (x0, 0);
  goto L261;

 L3510: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == XOR)
    goto L1535;
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      return 212;  /* *one_cmplv2si2_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1535: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L1536;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1536: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SImode))
    {
      operands[2] = x3;
      return 195;  /* *xor_not_v2si_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L3281: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L535;
    }
 L3290: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L1348;
    }
  goto L261;

 L535: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (input_operand (x1, V4HImode))
    {
      operands[1] = x1;
      goto L536;
    }
  x1 = XEXP (x0, 0);
  goto L3290;

 L536: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2577 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && TARGET_V9
   && ! TARGET_ARCH64
   && (register_operand (operands[0], V4HImode)
       || register_or_zero_operand (operands[1], V4HImode))))
    {
      return 74;  /* *movdf_insn_sp32_v9 */
    }
  x1 = XEXP (x0, 0);
  goto L3290;

 L1348: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4HImode)
    goto L3512;
  x1 = XEXP (x0, 0);
  goto L261;

 L3512: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L1386;
    case IOR:
      goto L1463;
    case XOR:
      goto L1503;
    case NOT:
      goto L1540;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L261;

 L1386: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4HImode
      && GET_CODE (x2) == NOT)
    goto L1387;
  if (arith_double_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L1350;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1387: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L1388;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1388: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      return 168;  /* *and_not_v4hi_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1350: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_double_operand (x2, V4HImode))
    {
      operands[2] = x2;
      return 161;  /* *andv4hi3_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1463: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4HImode
      && GET_CODE (x2) == NOT)
    goto L1464;
  if (arith_double_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L1427;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1464: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L1465;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1465: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      return 182;  /* *or_not_v4hi_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1427: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_double_operand (x2, V4HImode))
    {
      operands[2] = x2;
      return 175;  /* *iorv4hi3_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1503: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arith_double_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L1504;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1504: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_double_operand (x2, V4HImode))
    {
      operands[2] = x2;
      return 189;  /* *xorv4hi3_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1540: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4HImode)
    goto L3516;
  x1 = XEXP (x0, 0);
  goto L261;

 L3516: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == XOR)
    goto L1541;
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      return 213;  /* *one_cmplv4hi2_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1541: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L1542;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1542: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      return 196;  /* *xor_not_v4hi_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L3282: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L539;
    }
 L3291: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L1353;
    }
  goto L261;

 L539: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (input_operand (x1, V8QImode))
    {
      operands[1] = x1;
      goto L540;
    }
  x1 = XEXP (x0, 0);
  goto L3291;

 L540: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2577 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && TARGET_V9
   && ! TARGET_ARCH64
   && (register_operand (operands[0], V8QImode)
       || register_or_zero_operand (operands[1], V8QImode))))
    {
      return 75;  /* *movdf_insn_sp32_v9 */
    }
  x1 = XEXP (x0, 0);
  goto L3291;

 L1353: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V8QImode)
    goto L3518;
  x1 = XEXP (x0, 0);
  goto L261;

 L3518: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L1392;
    case IOR:
      goto L1469;
    case XOR:
      goto L1508;
    case NOT:
      goto L1546;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L261;

 L1392: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == NOT)
    goto L1393;
  if (arith_double_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L1355;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1393: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L1394;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1394: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      return 169;  /* *and_not_v8qi_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1355: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_double_operand (x2, V8QImode))
    {
      operands[2] = x2;
      return 162;  /* *andv8qi3_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1469: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == NOT)
    goto L1470;
  if (arith_double_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L1432;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1470: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L1471;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1471: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      return 183;  /* *or_not_v8qi_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1432: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_double_operand (x2, V8QImode))
    {
      operands[2] = x2;
      return 176;  /* *iorv8qi3_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1508: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arith_double_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L1509;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1509: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_double_operand (x2, V8QImode))
    {
      operands[2] = x2;
      return 190;  /* *xorv8qi3_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1546: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8QImode)
    goto L3522;
  x1 = XEXP (x0, 0);
  goto L261;

 L3522: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == XOR)
    goto L1547;
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      return 214;  /* *one_cmplv8qi2_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1547: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L1548;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1548: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V8QImode))
    {
      operands[2] = x3;
      return 197;  /* *xor_not_v8qi_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L3283: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, TFmode))
    {
      operands[0] = x1;
      goto L547;
    }
 L3286: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, TFmode))
    {
      operands[0] = x1;
      goto L600;
    }
  goto L261;

 L547: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (input_operand (x1, TFmode))
    {
      operands[1] = x1;
      goto L548;
    }
  x1 = XEXP (x0, 0);
  goto L3286;

 L548: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2879 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && ! TARGET_ARCH64
   && (register_operand (operands[0], TFmode)
       || register_or_zero_operand (operands[1], TFmode))))
    {
      return 77;  /* *movtf_insn_sp32 */
    }
 L552: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2893 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_FPU
   && ! TARGET_ARCH64
   && (register_operand (operands[0], TFmode)
       || register_or_zero_operand (operands[1], TFmode))))
    {
      return 78;  /* *movtf_insn_sp32_no_fpu */
    }
  x1 = XEXP (x0, 0);
  goto L3286;

 L600: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == TFmode)
    goto L3524;
  x1 = XEXP (x0, 0);
  goto L261;

 L3524: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case IF_THEN_ELSE:
      goto L601;
    case FLOAT_EXTEND:
      goto L714;
    case FLOAT:
      goto L749;
    case PLUS:
      goto L1723;
    case MINUS:
      goto L1741;
    case MULT:
      goto L1759;
    case DIV:
      goto L1793;
    case NEG:
      goto L1811;
    case ABS:
      goto L1836;
    case SQRT:
      goto L1866;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L261;

 L601: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L602;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L602: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (icc_or_fcc_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L603;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L603: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L604;
  x1 = XEXP (x0, 0);
  goto L261;

 L604: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, TFmode))
    {
      operands[3] = x2;
      goto L605;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L605: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, TFmode))
    {
      operands[4] = x2;
      goto L606;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L606: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3205 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9 && TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 84;  /* *movtf_cc_hq_v9 */
    }
 L615: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3231 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9 && TARGET_FPU && !TARGET_HARD_QUAD))
    {
      return 85;  /* *movtf_cc_v9 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L714: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L3534;
    case DFmode:
      goto L3535;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L3534: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L715;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L715: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3838 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 101;  /* *extendsftf2_hq */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L3535: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L720;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L720: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3853 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 102;  /* *extenddftf2_hq */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L749: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3536;
    case DImode:
      goto L3537;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L3536: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L750;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L750: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3924 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 108;  /* *floatsitf2_hq */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L3537: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L765;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L765: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3973 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9 && TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 111;  /* *floatditf2_hq */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1723: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L1724;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1724: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, TFmode))
    {
      operands[2] = x2;
      goto L1725;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1725: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5835 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 221;  /* *addtf3_hq */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1741: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L1742;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1742: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, TFmode))
    {
      operands[2] = x2;
      goto L1743;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1743: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5867 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 224;  /* *subtf3_hq */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1759: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TFmode)
    goto L3539;
  x1 = XEXP (x0, 0);
  goto L261;

 L3539: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L1786;
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L1760;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1786: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L1787;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1787: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == TFmode
      && GET_CODE (x2) == FLOAT_EXTEND)
    goto L1788;
  x1 = XEXP (x0, 0);
  goto L261;

 L1788: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L1789;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1789: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5933 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
((TARGET_V8 || TARGET_V9) && TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 231;  /* *multf3_extend */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1760: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, TFmode))
    {
      operands[2] = x2;
      goto L1761;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1761: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5899 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 227;  /* *multf3_hq */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1793: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L1794;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1794: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, TFmode))
    {
      operands[2] = x2;
      goto L1795;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1795: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5949 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 232;  /* *divtf3_hq */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1811: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L1812;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1812: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5980 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && ! TARGET_V9))
    {
      return 235;  /* *negtf2_notv9 */
    }
 L1817: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6003 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_V9))
    {
      return 236;  /* *negtf2_v9 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1836: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L1837;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1837: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6068 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU && ! TARGET_V9))
    {
      return 240;  /* *abstf2_notv9 */
    }
 L1842: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6089 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_V9 && TARGET_HARD_QUAD))
    {
      return 241;  /* *abstf2_hq_v9 */
    }
 L1847: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6099 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_V9 && !TARGET_HARD_QUAD))
    {
      return 242;  /* *abstf2_v9 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1866: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L1867;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1867: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6163 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_HARD_QUAD))
    {
      return 246;  /* *sqrttf2_hq */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L3287: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 100)
    goto L856;
  goto L261;

 L856: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CC_NOOVmode
      && GET_CODE (x1) == COMPARE)
    goto L857;
  x1 = XEXP (x0, 0);
  goto L261;

 L857: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L3540;
  x1 = XEXP (x0, 0);
  goto L261;

 L3540: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L858;
    case MINUS:
      goto L932;
    case NEG:
      goto L1653;
    case ASHIFT:
      goto L1902;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L261;

 L858: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arith_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L859;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L859: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L860;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L860: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 123;  /* *cmp_cc_plus */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L932: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_or_zero_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L933;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L933: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L934;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L934: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 130;  /* *cmp_minus_cc */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1653: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arith_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L1654;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1654: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 209;  /* *cmp_cc_neg */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1902: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L1903;
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L1903: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L1904;
  x1 = XEXP (x0, 0);
  goto L261;

 L1904: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 251;  /* *cmp_cc_ashift_1 */
    }
  x1 = XEXP (x0, 0);
  goto L261;

 L262: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case IF_THEN_ELSE:
      goto L263;
    case LABEL_REF:
      goto L1961;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2063;

 L263: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (noov_compare_operator (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L264;
    }
 L281: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L282;
    }
  x1 = XEXP (x0, 0);
  goto L2063;

 L264: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 100)
    goto L265;
  goto L281;

 L265: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L266;
  goto L281;

 L266: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L267;
    case PC:
      goto L276;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L281;

 L267: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L268;

 L268: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 28;  /* *normal_branch */
    }
  x2 = XEXP (x1, 0);
  goto L281;

 L276: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L277;
  x2 = XEXP (x1, 0);
  goto L281;

 L277: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  return 29;  /* *inverted_branch */

 L282: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case CCFPmode:
      goto L3544;
    case CCFPEmode:
      goto L3545;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2063;

 L3544: ATTRIBUTE_UNUSED_LABEL
  if (fcc_register_operand (x3, CCFPmode))
    {
      operands[0] = x3;
      goto L283;
    }
  x1 = XEXP (x0, 0);
  goto L2063;

 L283: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L284;
  x1 = XEXP (x0, 0);
  goto L2063;

 L284: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L285;
    case PC:
      goto L294;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2063;

 L285: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  goto L286;

 L286: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 30;  /* *normal_fp_branch */
    }
  x1 = XEXP (x0, 0);
  goto L2063;

 L294: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L295;
  x1 = XEXP (x0, 0);
  goto L2063;

 L295: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  return 31;  /* *inverted_fp_branch */

 L3545: ATTRIBUTE_UNUSED_LABEL
  if (fcc_register_operand (x3, CCFPEmode))
    {
      operands[0] = x3;
      goto L301;
    }
  x1 = XEXP (x0, 0);
  goto L2063;

 L301: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L302;
  x1 = XEXP (x0, 0);
  goto L2063;

 L302: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L303;
    case PC:
      goto L312;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2063;

 L303: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  goto L304;

 L304: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 32;  /* *normal_fpe_branch */
    }
  x1 = XEXP (x0, 0);
  goto L2063;

 L312: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L313;
  x1 = XEXP (x0, 0);
  goto L2063;

 L313: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  return 33;  /* *inverted_fpe_branch */

 L1961: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  return 257;  /* jump */

 L2064: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CALL)
    goto L2065;
  x1 = XEXP (x0, 0);
  goto L2141;

 L2065: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L2066;
  x1 = XEXP (x0, 0);
  goto L2141;

 L2066: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (address_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2067;
    }
 L2082: ATTRIBUTE_UNUSED_LABEL
  if (symbolic_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2083;
    }
  x1 = XEXP (x0, 0);
  goto L2141;

 L2067: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  goto L2068;

 L2068: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 265;  /* *call_value_address_sp32 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2082;

 L2083: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  goto L2084;

 L2084: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 266;  /* *call_value_symbolic_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L2141;

 L3299: ATTRIBUTE_UNUSED_LABEL
  tem = recog_3 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L2119;

 L3297: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L2373;
  if (register_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L2295;
    }
  goto L2119;

 L2373: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L2374;
  goto L2119;

 L2374: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == UNSPEC
      && XVECLEN (x3, 0) == 2
      && XINT (x3, 1) == 32)
    goto L2375;
  goto L2119;

 L2375: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2376;
    }
  goto L2119;

 L2376: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (tld_symbolic_operand (x4, VOIDmode))
    {
      operands[3] = x4;
      goto L2377;
    }
  goto L2119;

 L2377: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2378;
    }
  goto L2119;

 L2378: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, QImode))
    {
      operands[0] = x1;
      return 312;  /* *tldo_stb_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2295: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode
      && GET_CODE (x1) == MEM)
    goto L2296;
  x1 = XEXP (x0, 0);
  goto L2119;

 L2296: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L2297;
  x1 = XEXP (x0, 0);
  goto L2119;

 L2297: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == UNSPEC
      && XVECLEN (x3, 0) == 2
      && XINT (x3, 1) == 32)
    goto L2298;
  x1 = XEXP (x0, 0);
  goto L2119;

 L2298: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2299;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2299: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (tld_symbolic_operand (x4, VOIDmode))
    {
      operands[3] = x4;
      goto L2300;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2300: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      return 303;  /* *tldo_ldub_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L3298: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L2381;
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L2303;
    }
  goto L2119;

 L2381: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L2382;
  goto L2119;

 L2382: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == UNSPEC
      && XVECLEN (x3, 0) == 2
      && XINT (x3, 1) == 32)
    goto L2383;
  goto L2119;

 L2383: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2384;
    }
  goto L2119;

 L2384: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (tld_symbolic_operand (x4, VOIDmode))
    {
      operands[3] = x4;
      goto L2385;
    }
  goto L2119;

 L2385: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2386;
    }
  goto L2119;

 L2386: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      return 313;  /* *tldo_sth_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2303: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L3605;
  x1 = XEXP (x0, 0);
  goto L2119;

 L3605: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case ZERO_EXTEND:
      goto L2304;
    case SIGN_EXTEND:
      goto L2322;
    case MEM:
      goto L2340;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2304: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == MEM)
    goto L2305;
  x1 = XEXP (x0, 0);
  goto L2119;

 L2305: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L2306;
  x1 = XEXP (x0, 0);
  goto L2119;

 L2306: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == UNSPEC
      && XVECLEN (x4, 0) == 2
      && XINT (x4, 1) == 32)
    goto L2307;
  x1 = XEXP (x0, 0);
  goto L2119;

 L2307: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2308;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2308: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (tld_symbolic_operand (x5, VOIDmode))
    {
      operands[3] = x5;
      goto L2309;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2309: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      return 304;  /* *tldo_ldub1_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2322: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == MEM)
    goto L2323;
  x1 = XEXP (x0, 0);
  goto L2119;

 L2323: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L2324;
  x1 = XEXP (x0, 0);
  goto L2119;

 L2324: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == UNSPEC
      && XVECLEN (x4, 0) == 2
      && XINT (x4, 1) == 32)
    goto L2325;
  x1 = XEXP (x0, 0);
  goto L2119;

 L2325: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2326;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2326: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (tld_symbolic_operand (x5, VOIDmode))
    {
      operands[3] = x5;
      goto L2327;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2327: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      return 306;  /* *tldo_ldsb1_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2340: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L2341;
  x1 = XEXP (x0, 0);
  goto L2119;

 L2341: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == UNSPEC
      && XVECLEN (x3, 0) == 2
      && XINT (x3, 1) == 32)
    goto L2342;
  x1 = XEXP (x0, 0);
  goto L2119;

 L2342: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2343;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2343: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (tld_symbolic_operand (x4, VOIDmode))
    {
      operands[3] = x4;
      goto L2344;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2344: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      return 308;  /* *tldo_lduh_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L3300: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L2425;
    }
  goto L2119;

 L2425: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SImode)
    goto L3608;
  x1 = XEXP (x0, 0);
  goto L2119;

 L3608: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L2426;
    case MINUS:
      goto L2444;
    case IOR:
      goto L2470;
    case MULT:
      goto L2575;
    case UNSPEC:
      goto L3614;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2426: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L2427;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2427: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L2428;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2428: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8122 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 317;  /* addv2si3 */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2444: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L2445;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2445: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L2446;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2446: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8151 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 320;  /* subv2si3 */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2470: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SImode
      && GET_CODE (x2) == NOT)
    goto L2471;
  x1 = XEXP (x0, 0);
  goto L2119;

 L2471: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L2472;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2472: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SImode
      && GET_CODE (x2) == NOT)
    goto L2473;
  x1 = XEXP (x0, 0);
  goto L2119;

 L2473: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[2] = x3;
      goto L2474;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2474: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8185 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 324;  /* *nand<V64mode>_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2575: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L2576;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2576: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L2577;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2577: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8308 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 340;  /* fmuld8sux16_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L3614: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2)
    goto L3616;
  x1 = XEXP (x0, 0);
  goto L2119;

 L3616: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 47LL:
      goto L2581;
    case 48LL:
      goto L2593;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2581: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L2582;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2582: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L2583;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2583: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8318 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 341;  /* fmuld8ulx16_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2593: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L2594;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2594: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L2595;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2595: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8331 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 343;  /* faligndatav2si_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L3301: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L2431;
    }
  goto L2119;

 L2431: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4HImode)
    goto L3618;
  x1 = XEXP (x0, 0);
  goto L2119;

 L3618: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L2432;
    case MINUS:
      goto L2450;
    case IOR:
      goto L2478;
    case UNSPEC:
      goto L3626;
    case MULT:
      goto L2545;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2432: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L2433;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2433: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L2434;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2434: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8131 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 318;  /* addv4hi3 */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2450: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L2451;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2451: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L2452;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2452: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8160 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 321;  /* subv4hi3 */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2478: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4HImode
      && GET_CODE (x2) == NOT)
    goto L2479;
  x1 = XEXP (x0, 0);
  goto L2119;

 L2479: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L2480;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2480: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4HImode
      && GET_CODE (x2) == NOT)
    goto L2481;
  x1 = XEXP (x0, 0);
  goto L2119;

 L2481: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L2482;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2482: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8185 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 325;  /* *nand<V64mode>_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L3626: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L3630;
    case 2:
      goto L3631;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L3630: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 43)
    goto L2534;
  x1 = XEXP (x0, 0);
  goto L2119;

 L2534: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L2535;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2535: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8233 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 333;  /* fexpand_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L3631: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 45LL:
      goto L2557;
    case 46LL:
      goto L2569;
    case 48LL:
      goto L2599;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2557: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L2558;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2558: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L2559;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2559: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8278 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 337;  /* fmul8x16al_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2569: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L2570;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2570: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L2571;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2571: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8298 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 339;  /* fmul8ulx16_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2599: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L2600;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2600: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L2601;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2601: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8331 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 344;  /* faligndatav4hi_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2545: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case V4QImode:
      goto L3634;
    case V8QImode:
      goto L3635;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L3634: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L2546;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2546: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    case V4HImode:
      goto L3636;
    case V2HImode:
      goto L3637;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L3636: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L2547;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2547: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8258 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 335;  /* fmul8x16_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L3637: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L2553;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2553: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8268 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 336;  /* fmul8x16au_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L3635: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L2564;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2564: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L2565;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2565: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8288 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 338;  /* fmul8sux16_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L3302: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2HImode))
    {
      operands[0] = x1;
      goto L2437;
    }
  goto L2119;

 L2437: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2HImode)
    goto L3638;
  x1 = XEXP (x0, 0);
  goto L2119;

 L3638: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L2438;
    case MINUS:
      goto L2456;
    case IOR:
      goto L2502;
    case UNSPEC:
      goto L3642;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2438: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L2439;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2439: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L2440;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2440: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8142 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 319;  /* addv2hi3 */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2456: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L2457;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2457: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L2458;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2458: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8171 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 322;  /* subv2hi3 */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2502: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2HImode
      && GET_CODE (x2) == NOT)
    goto L2503;
  x1 = XEXP (x0, 0);
  goto L2119;

 L2503: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L2504;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2504: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2HImode
      && GET_CODE (x2) == NOT)
    goto L2505;
  x1 = XEXP (x0, 0);
  goto L2119;

 L2505: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L2506;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2506: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8194 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 328;  /* *nand<V32mode>_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L3642: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 42)
    goto L2523;
  x1 = XEXP (x0, 0);
  goto L2119;

 L2523: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L2524;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2524: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8214 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 331;  /* fpackfix_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L3303: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L2461;
    }
  goto L2119;

 L2461: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode
      && GET_CODE (x1) == IOR)
    goto L2462;
  x1 = XEXP (x0, 0);
  goto L2119;

 L2462: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == NOT)
    goto L2463;
  x1 = XEXP (x0, 0);
  goto L2119;

 L2463: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L2464;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2464: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == NOT)
    goto L2465;
  x1 = XEXP (x0, 0);
  goto L2119;

 L2465: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L2466;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2466: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8185 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 323;  /* *nand<V64mode>_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L3304: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L2485;
    }
  goto L2119;

 L2485: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V8QImode)
    goto L3643;
  x1 = XEXP (x0, 0);
  goto L2119;

 L3643: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case IOR:
      goto L2486;
    case UNSPEC:
      goto L3647;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2486: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == NOT)
    goto L2487;
  x1 = XEXP (x0, 0);
  goto L2119;

 L2487: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L2488;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2488: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == NOT)
    goto L2489;
  x1 = XEXP (x0, 0);
  goto L2119;

 L2489: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[2] = x3;
      goto L2490;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2490: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8185 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 326;  /* *nand<V64mode>_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L3647: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2)
    goto L3650;
  x1 = XEXP (x0, 0);
  goto L2119;

 L3650: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 41LL:
      goto L2528;
    case 44LL:
      goto L2539;
    case 48LL:
      goto L2605;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2528: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L2529;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2529: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L2530;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2530: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8224 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 332;  /* fpack32_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2539: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L2540;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2540: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L2541;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2541: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8248 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 334;  /* fpmerge_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2605: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L2606;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2606: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L2607;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2607: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8331 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 345;  /* faligndatav8qi_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L3305: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L2493;
    }
  goto L2119;

 L2493: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode
      && GET_CODE (x1) == IOR)
    goto L2494;
  x1 = XEXP (x0, 0);
  goto L2119;

 L2494: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode
      && GET_CODE (x2) == NOT)
    goto L2495;
  x1 = XEXP (x0, 0);
  goto L2119;

 L2495: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L2496;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2496: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode
      && GET_CODE (x2) == NOT)
    goto L2497;
  x1 = XEXP (x0, 0);
  goto L2119;

 L2497: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L2498;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2498: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8194 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 327;  /* *nand<V32mode>_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L3306: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4QImode))
    {
      operands[0] = x1;
      goto L2509;
    }
  goto L2119;

 L2509: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4QImode)
    goto L3653;
  x1 = XEXP (x0, 0);
  goto L2119;

 L3653: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case IOR:
      goto L2510;
    case UNSPEC:
      goto L3655;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2510: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4QImode
      && GET_CODE (x2) == NOT)
    goto L2511;
  x1 = XEXP (x0, 0);
  goto L2119;

 L2511: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L2512;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2512: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4QImode
      && GET_CODE (x2) == NOT)
    goto L2513;
  x1 = XEXP (x0, 0);
  goto L2119;

 L2513: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[2] = x3;
      goto L2514;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2514: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8194 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 329;  /* *nand<V32mode>_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L3655: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 40)
    goto L2518;
  x1 = XEXP (x0, 0);
  goto L2119;

 L2518: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L2519;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2519: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8205 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 330;  /* fpack16_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L3307: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L2586;
    }
  goto L2119;

 L2586: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L3656;
  x1 = XEXP (x0, 0);
  goto L2119;

 L3656: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L3658;
  x1 = XEXP (x0, 0);
  goto L2119;

 L3658: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L3660;
    case 3:
      goto L3661;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L3660: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 48)
    goto L2587;
  x1 = XEXP (x0, 0);
  goto L2119;

 L2587: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2588;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2588: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2589;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2589: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8331 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 342;  /* faligndatadi_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L3661: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 50)
    goto L2617;
  x1 = XEXP (x0, 0);
  goto L2119;

 L2617: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L2618;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2618: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L2619;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2619: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L2620;
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2620: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8350 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_VIS))
    {
      return 347;  /* pdist_vis */
    }
  x1 = XEXP (x0, 0);
  goto L2119;

 L2120: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (address_operand (x1, SImode))
    {
      operands[0] = x1;
      return 274;  /* *branch_sp32 */
    }
  x1 = XEXP (x0, 0);
  goto L2622;

 L2198: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CALL)
    goto L2199;
  x1 = XEXP (x0, 0);
  goto L2622;

 L2199: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L2200;
  x1 = XEXP (x0, 0);
  goto L2622;

 L2200: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L3662;
  x1 = XEXP (x0, 0);
  goto L2622;

 L3662: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == UNSPEC)
    goto L3664;
  x1 = XEXP (x0, 0);
  goto L2622;

 L3664: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x3, 0))
    {
    case 2:
      goto L3666;
    case 1:
      goto L3667;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2622;

 L3666: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x3, 1) == 30)
    goto L2201;
  x1 = XEXP (x0, 0);
  goto L2622;

 L2201: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (symbolic_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2202;
    }
  x1 = XEXP (x0, 0);
  goto L2622;

 L2202: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (tgd_symbolic_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L2203;
    }
  x1 = XEXP (x0, 0);
  goto L2622;

 L2203: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[3] = x2;
  goto L2204;

 L2204: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 289;  /* tgd_call32 */
    }
  x1 = XEXP (x0, 0);
  goto L2622;

 L3667: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x3, 1) == 31)
    goto L2237;
  x1 = XEXP (x0, 0);
  goto L2622;

 L2237: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (symbolic_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2238;
    }
  x1 = XEXP (x0, 0);
  goto L2622;

 L2238: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  goto L2239;

 L2239: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 293;  /* tldm_call32 */
    }
  x1 = XEXP (x0, 0);
  goto L2622;

 L2623: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == BLKmode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 20)
    goto L2624;
  goto ret0;

 L2624: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 39 "../../gcc-4.4.7/gcc/config/sparc/sync.md"
(TARGET_V8))
    {
      return 348;  /* *stbar */
    }
 L2628: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0])
      && 
#line 47 "../../gcc-4.4.7/gcc/config/sparc/sync.md"
(TARGET_V9))
    {
      return 349;  /* *membar */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_5 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case NE:
      goto L45;
    case NEG:
      goto L58;
    case EQ:
      goto L73;
    case PLUS:
      goto L101;
    case MINUS:
      goto L119;
    case UNSPEC:
      goto L3688;
    case TRUNCATE:
      goto L1039;
    case SUBREG:
      goto L3689;
    case DIV:
      goto L1249;
    default:
     break;
   }
 L3687: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1715;
    }
  goto ret0;

 L45: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L46;
    }
  goto ret0;

 L46: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L47;
  goto ret0;

 L47: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L48;
  goto ret0;

 L48: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return 7;  /* *snesi_zero */
    }
  goto ret0;

 L58: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L3690;
  goto ret0;

 L3690: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case NE:
      goto L59;
    case EQ:
      goto L87;
    default:
     break;
   }
  goto ret0;

 L59: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L60;
    }
  goto ret0;

 L60: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L61;
  goto ret0;

 L61: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L62;
  goto ret0;

 L62: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return 8;  /* *neg_snesi_zero */
    }
  goto ret0;

 L87: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L88;
    }
  goto ret0;

 L88: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L89;
  goto ret0;

 L89: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L90;
  goto ret0;

 L90: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return 10;  /* *neg_seqsi_zero */
    }
  goto ret0;

 L73: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L74;
    }
  goto ret0;

 L74: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L75;
  goto ret0;

 L75: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L76;
  goto ret0;

 L76: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return 9;  /* *seqsi_zero */
    }
  goto ret0;

 L101: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L3692;
  goto ret0;

 L3692: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case NE:
      goto L102;
    case EQ:
      goto L137;
    default:
     break;
   }
  goto ret0;

 L102: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L103;
    }
  goto ret0;

 L103: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L104;
  goto ret0;

 L104: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L105;
    }
  goto ret0;

 L105: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L106;
  goto ret0;

 L106: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return 11;  /* *x_plus_i_ne_0 */
    }
  goto ret0;

 L137: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L138;
    }
  goto ret0;

 L138: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L139;
  goto ret0;

 L139: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L140;
    }
  goto ret0;

 L140: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L141;
  goto ret0;

 L141: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return 13;  /* *x_plus_i_eq_0 */
    }
  goto ret0;

 L119: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L120;
    }
  goto ret0;

 L120: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L3694;
  goto ret0;

 L3694: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case NE:
      goto L121;
    case EQ:
      goto L156;
    default:
     break;
   }
  goto ret0;

 L121: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L122;
    }
  goto ret0;

 L122: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L123;
  goto ret0;

 L123: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L124;
  goto ret0;

 L124: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return 12;  /* *x_minus_i_ne_0 */
    }
  goto ret0;

 L156: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L157;
    }
  goto ret0;

 L157: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L158;
  goto ret0;

 L158: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L159;
  goto ret0;

 L159: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return 14;  /* *x_minus_i_eq_0 */
    }
  goto ret0;

 L3688: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 2)
    goto L318;
  goto ret0;

 L318: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (symbolic_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L319;
    }
  goto ret0;

 L319: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (call_address_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L320;
    }
  goto ret0;

 L320: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L321;
  goto ret0;

 L321: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 15)
    {
      return 34;  /* load_pcrel_symsi */
    }
  goto ret0;

 L1039: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L1040;
  goto ret0;

 L1040: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == MULT)
    goto L1041;
  goto ret0;

 L1041: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode)
    goto L3696;
  goto ret0;

 L3696: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case SIGN_EXTEND:
      goto L1042;
    case ZERO_EXTEND:
      goto L1185;
    default:
     break;
   }
  goto ret0;

 L1042: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L1043;
    }
  goto ret0;

 L1043: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L1044;
  if (small_int_operand (x5, DImode))
    {
      operands[2] = x5;
      goto L1094;
    }
  goto ret0;

 L1044: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L1045;
    }
  goto ret0;

 L1045: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (small_int_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L1046;
    }
  goto ret0;

 L1046: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1047;
  goto ret0;

 L1047: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L1048;
    }
  goto ret0;

 L1048: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4647 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS))
    {
      return 139;  /* smulsi3_highpart_v8plus */
    }
  goto ret0;

 L1094: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (small_int_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L1095;
    }
  goto ret0;

 L1095: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1096;
  goto ret0;

 L1096: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L1097;
    }
  goto ret0;

 L1097: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4680 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS))
    {
      return 141;  /* const_smulsi3_highpart_v8plus */
    }
  goto ret0;

 L1185: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L1186;
    }
  goto ret0;

 L1186: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L1187;
  if (uns_small_int_operand (x5, DImode))
    {
      operands[2] = x5;
      goto L1212;
    }
  goto ret0;

 L1187: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L1188;
    }
  goto ret0;

 L1188: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (small_int_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L1189;
    }
  goto ret0;

 L1189: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1190;
  goto ret0;

 L1190: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L1191;
    }
  goto ret0;

 L1191: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4854 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS))
    {
      return 148;  /* umulsi3_highpart_v8plus */
    }
  goto ret0;

 L1212: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (small_int_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L1213;
    }
  goto ret0;

 L1213: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1214;
  goto ret0;

 L1214: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L1215;
    }
  goto ret0;

 L1215: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4869 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS))
    {
      return 149;  /* const_umulsi3_highpart_v8plus */
    }
  goto ret0;

 L3689: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 4)
    goto L1064;
  goto L3687;

 L1064: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L1065;
  goto L3687;

 L1065: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == MULT)
    goto L1066;
  goto L3687;

 L1066: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L1067;
  goto L3687;

 L1067: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L1068;
    }
  goto L3687;

 L1068: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L1069;
  goto L3687;

 L1069: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L1070;
    }
  goto L3687;

 L1070: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (small_int_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L1071;
    }
  goto L3687;

 L1071: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1072;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L3687;

 L1072: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L1073;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L3687;

 L1073: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4665 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS))
    {
      return 140;  /* *sparc.md:4656 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L3687;

 L1249: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1250;
    }
  goto ret0;

 L1250: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (input_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1251;
    }
  goto ret0;

 L1251: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1252;
  goto ret0;

 L1252: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1253;
    }
  goto ret0;

 L1253: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4926 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
((TARGET_V8 || TARGET_DEPRECATED_V8_INSNS) && TARGET_ARCH32))
    {
      return 152;  /* divsi3_sp32 */
    }
  goto ret0;

 L1715: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1716;
  goto ret0;

 L1716: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    goto L1717;
  goto ret0;

 L1717: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == COMPARE)
    goto L1718;
  goto ret0;

 L1718: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1719;
  goto ret0;

 L1719: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 220;  /* *cmp_cc_set */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_6 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3668;
    case CCmode:
      goto L3669;
    case DImode:
      goto L3670;
    case CC_NOOVmode:
      goto L3671;
    default:
      break;
    }
 L1964: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PC)
    goto L1965;
 L2055: ATTRIBUTE_UNUSED_LABEL
  operands[0] = x2;
  goto L2056;
 L2134: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3672;
    case CCmode:
      goto L3674;
    case DImode:
      goto L3675;
    case QImode:
      goto L3676;
    case HImode:
      goto L3677;
    default:
      break;
    }
 L2187: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L2188;
    }
  goto ret0;

 L3668: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L44;
    }
  goto L1964;

 L44: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L3678;
  x2 = XEXP (x1, 0);
  goto L1964;

 L3678: ATTRIBUTE_UNUSED_LABEL
  tem = recog_5 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L1964;

 L3669: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    goto L648;
  goto L1964;

 L648: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == COMPARE)
    goto L649;
  x2 = XEXP (x1, 0);
  goto L1964;

 L649: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L3698;
    case QImode:
      goto L3700;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L3698: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L650;
    case AND:
      goto L661;
    case MULT:
      goto L976;
    case DIV:
      goto L1281;
    case UDIV:
      goto L1300;
    case NOT:
      goto L1600;
    default:
     break;
   }
 L3704: ATTRIBUTE_UNUSED_LABEL
  if (cc_arith_operator (x3, SImode))
    {
      operands[3] = x3;
      goto L1579;
    }
 L3706: ATTRIBUTE_UNUSED_LABEL
  if (cc_arith_not_operator (x3, SImode))
    {
      operands[3] = x3;
      goto L1623;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L650: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L651;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L651: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L652;
  x2 = XEXP (x1, 0);
  goto L1964;

 L652: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L653;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L653: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L654;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L654: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L655;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L655: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    {
      return 92;  /* *cmp_zero_extendqisi2_set */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L661: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L662;
    }
  goto L3704;

 L662: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 255LL)
    goto L663;
  goto L3704;

 L663: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L664;
  x3 = XEXP (x2, 0);
  goto L3704;

 L664: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L665;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L3704;

 L665: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L666;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L3704;

 L666: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L667;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L3704;

 L667: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == SUBREG
      && XINT (x3, 1) == 0)
    goto L668;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L3704;

 L668: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    {
      return 93;  /* *cmp_zero_extendqisi2_andcc_set */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L3704;

 L976: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (arith_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L977;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L977: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L978;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L978: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L979;
  x2 = XEXP (x1, 0);
  goto L1964;

 L979: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L980;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L980: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L981;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L981: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MULT)
    goto L982;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L982: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L983;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L983: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 4498 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8 || TARGET_SPARCLITE || TARGET_DEPRECATED_V8_INSNS))
    {
      return 134;  /* *cmp_mul_set */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1281: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1282;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L1282: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1283;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L1283: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1284;
  x2 = XEXP (x1, 0);
  goto L1964;

 L1284: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1285;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1285: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1286;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1286: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == DIV)
    goto L1287;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1287: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1288;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1288: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 4983 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8 || TARGET_DEPRECATED_V8_INSNS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 153;  /* *cmp_sdiv_cc_set */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1300: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1301;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L1301: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1302;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L1302: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1303;
  x2 = XEXP (x1, 0);
  goto L1964;

 L1303: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1304;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1304: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1305;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1305: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UDIV)
    goto L1306;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1306: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1307;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1307: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 5073 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8 || TARGET_DEPRECATED_V8_INSNS))
    {
      return 155;  /* *cmp_udiv_cc_set */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1600: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == XOR)
    goto L1601;
  if (arith_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1706;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L1601: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_or_zero_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L1602;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L1602: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (arith_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L1603;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L1603: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1604;
  x2 = XEXP (x1, 0);
  goto L1964;

 L1604: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1605;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1605: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1606;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1606: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NOT)
    goto L1607;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1607: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == XOR)
    goto L1608;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1608: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L1609;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1609: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2]))
    {
      return 204;  /* *cmp_cc_xor_not_set */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1706: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1707;
  x2 = XEXP (x1, 0);
  goto L1964;

 L1707: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1708;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1708: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1709;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1709: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NOT)
    goto L1710;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1710: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    {
      return 219;  /* *cmp_cc_set_not */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1579: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (arith_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1580;
    }
  goto L3706;

 L1580: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1581;
    }
  goto L3706;

 L1581: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1582;
  x3 = XEXP (x2, 0);
  goto L3706;

 L1582: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1583;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L3706;

 L1583: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1584;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L3706;

 L1584: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (cc_arith_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L1585;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L3706;

 L1585: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1586;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L3706;

 L1586: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 5514 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(GET_CODE (operands[3]) == GET_CODE (operands[4])))
    {
      return 202;  /* *cmp_cc_arith_op_set */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L3706;

 L1623: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == NOT)
    goto L1624;
  x2 = XEXP (x1, 0);
  goto L1964;

 L1624: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (arith_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L1625;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L1625: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_or_zero_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1626;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L1626: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1627;
  x2 = XEXP (x1, 0);
  goto L1964;

 L1627: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1628;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1628: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1629;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1629: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (cc_arith_not_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L1630;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1630: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == NOT)
    goto L1631;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1631: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L1632;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1632: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 5607 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(GET_CODE (operands[3]) == GET_CODE (operands[4])))
    {
      return 206;  /* *cmp_cc_arith_op_not_set */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L3700: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == SUBREG
      && XINT (x3, 1) == 3)
    goto L680;
  x2 = XEXP (x1, 0);
  goto L1964;

 L680: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L681;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L681: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L682;
  x2 = XEXP (x1, 0);
  goto L1964;

 L682: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L683;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L683: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L684;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L684: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 3)
    goto L685;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L685: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    {
      return 95;  /* *cmp_siqi_trunc_set */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L3670: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L803;
    }
  goto L1964;

 L803: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L3707;
  x2 = XEXP (x1, 0);
  goto L1964;

 L3707: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L837;
    case MINUS:
      goto L878;
    case MULT:
      goto L988;
    case NEG:
      goto L1637;
    case ASHIFT:
      goto L1887;
    case ASHIFTRT:
      goto L1927;
    case LSHIFTRT:
      goto L1947;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L1964;

 L837: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L838;
  if (arith_double_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L805;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L838: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L839;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L839: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L840;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L840: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L841;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L841: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return 121;  /* *sparc.md:4164 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L805: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_double_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L806;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L806: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L807;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L807: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return 118;  /* adddi3_insn_sp32 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L878: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L912;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L912: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L913;
  if (arith_double_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L880;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L913: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L914;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L914: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L915;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L915: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return 128;  /* *sparc.md:4336 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L880: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L881;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L881: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return 125;  /* subdi3_insn_sp32 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L988: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L3714;
  x2 = XEXP (x1, 0);
  goto L1964;

 L3714: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L989;
    case ZERO_EXTEND:
      goto L1132;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L1964;

 L989: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L990;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L990: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L991;
  if (small_int_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1010;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L991: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L992;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L992: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L993;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L993: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L994;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L994: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4536 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS))
    {
      return 135;  /* mulsidi3_v8plus */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1010: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1011;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1011: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1012;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1012: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4549 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS))
    {
      return 136;  /* const_mulsidi3_v8plus */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1132: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1133;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L1133: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L1134;
  if (uns_small_int_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1168;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L1134: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1135;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L1135: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1136;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1136: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1137;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1137: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4743 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS))
    {
      return 144;  /* umulsidi3_v8plus */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1168: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1169;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1169: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1170;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1170: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4810 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS))
    {
      return 147;  /* const_umulsidi3_v8plus */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1637: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1638;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L1638: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1639;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1639: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return 207;  /* *negdi2_sp32 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1887: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arith_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1888;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L1888: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1889;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L1889: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1890;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1890: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1891;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1891: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6234 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS))
    {
      return 250;  /* ashldi3_v8plus */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1927: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arith_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1928;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L1928: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1929;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L1929: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1930;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1930: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1931;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1931: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6344 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS))
    {
      return 254;  /* ashrdi3_v8plus */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1947: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arith_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1948;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L1948: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1949;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L1949: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1950;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1950: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1951;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1951: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6421 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS))
    {
      return 256;  /* lshrdi3_v8plus */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L3671: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    goto L864;
  goto L1964;

 L864: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CC_NOOVmode
      && GET_CODE (x2) == COMPARE)
    goto L865;
  x2 = XEXP (x1, 0);
  goto L1964;

 L865: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L3716;
  x2 = XEXP (x1, 0);
  goto L1964;

 L3716: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L866;
    case MINUS:
      goto L940;
    case NEG:
      goto L1660;
    case ASHIFT:
      goto L1910;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L1964;

 L866: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (arith_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L867;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L867: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L868;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L868: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L869;
  x2 = XEXP (x1, 0);
  goto L1964;

 L869: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L870;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L870: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L871;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L871: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L872;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L872: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L873;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L873: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    {
      return 124;  /* *cmp_cc_plus_set */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L940: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_or_zero_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L941;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L941: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L942;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L942: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L943;
  x2 = XEXP (x1, 0);
  goto L1964;

 L943: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L944;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L944: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L945;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L945: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L946;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L946: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L947;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L947: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    {
      return 131;  /* cmp_minus_cc_set */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1660: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (arith_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1661;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L1661: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1662;
  x2 = XEXP (x1, 0);
  goto L1964;

 L1662: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1663;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1663: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1664;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1664: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NEG)
    goto L1665;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1665: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    {
      return 210;  /* *cmp_cc_set_neg */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1910: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1911;
    }
  x2 = XEXP (x1, 0);
  goto L1964;

 L1911: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L1912;
  x2 = XEXP (x1, 0);
  goto L1964;

 L1912: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1913;
  x2 = XEXP (x1, 0);
  goto L1964;

 L1913: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1914;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1914: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1915;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1915: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFT)
    goto L1916;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1916: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1917;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1917: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    {
      return 252;  /* *cmp_cc_set_ashift_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1964;

 L1965: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (address_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1966;
    }
  x2 = XEXP (x1, 0);
  goto L2055;

 L1966: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L1967;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2055;

 L1967: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1968;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2055;

 L1968: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  return 258;  /* *tablejump_sp32 */

 L2056: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L2057;
  x2 = XEXP (x1, 0);
  goto L2134;

 L2057: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L2058;
  x2 = XEXP (x1, 0);
  goto L2134;

 L2058: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (address_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2059;
    }
 L2074: ATTRIBUTE_UNUSED_LABEL
  if (symbolic_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2075;
    }
  x2 = XEXP (x1, 0);
  goto L2134;

 L2059: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L2060;

 L2060: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2061;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2074;

 L2061: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 15)
    {
      return 265;  /* *call_value_address_sp32 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2074;

 L2075: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L2076;

 L2076: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case CLOBBER:
      goto L2077;
    case RETURN:
      goto L3720;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2134;

 L2077: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 15)
    {
      return 266;  /* *call_value_symbolic_sp32 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2134;

 L3720: ATTRIBUTE_UNUSED_LABEL
  return 268;  /* *sibcall_value_symbolic_sp32 */

 L3672: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2135;
    }
 L3673: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2398;
    }
  goto L2187;

 L2135: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L3721;
  x2 = XEXP (x1, 0);
  goto L3673;

 L3721: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FFS:
      goto L2136;
    case MEM:
      goto L3725;
    case UNSPEC_VOLATILE:
      goto L3726;
    case ZERO_EXTEND:
      goto L2679;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3673;

 L2136: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2137;
    }
  x2 = XEXP (x1, 0);
  goto L3673;

 L2137: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2138;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3673;

 L2138: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2139;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3673;

 L2139: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7169 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_SPARCLITE || TARGET_SPARCLET))
    {
      return 280;  /* ffssi2 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3673;

 L3725: ATTRIBUTE_UNUSED_LABEL
  if (memory_reg_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2633;
    }
  x2 = XEXP (x1, 0);
  goto L3673;

 L2633: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2634;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3673;

 L2634: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L2635;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3673;

 L2635: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 8)
    goto L2636;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3673;

 L2636: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2637;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3673;

 L2637: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L2638;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3673;

 L2638: ATTRIBUTE_UNUSED_LABEL
  if (
#line 90 "../../gcc-4.4.7/gcc/config/sparc/sync.md"
(TARGET_V9 && (SImode == SImode || TARGET_ARCH64)))
    {
      return 350;  /* *sync_compare_and_swapsi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3673;

 L3726: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 9)
    goto L2653;
  x2 = XEXP (x1, 0);
  goto L3673;

 L2653: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (memory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2654;
    }
  x2 = XEXP (x1, 0);
  goto L3673;

 L2654: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2655;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3673;

 L2655: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L2656;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3673;

 L2656: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2657;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3673;

 L2657: ATTRIBUTE_UNUSED_LABEL
  if (
#line 161 "../../gcc-4.4.7/gcc/config/sparc/sync.md"
(TARGET_V8 || TARGET_V9))
    {
      return 352;  /* *swapsi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3673;

 L2679: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == UNSPEC_VOLATILE
      && XVECLEN (x3, 0) == 1
      && XINT (x3, 1) == 10)
    goto L2680;
  x2 = XEXP (x1, 0);
  goto L3673;

 L2680: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (memory_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L2681;
    }
  x2 = XEXP (x1, 0);
  goto L3673;

 L2681: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2682;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3673;

 L2682: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L2683;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3673;

 L2683: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (-1)])
    {
      return 355;  /* *ldstubsi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3673;

 L2398: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 60)
    goto L2399;
  x2 = XEXP (x1, 0);
  goto L2187;

 L2399: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (memory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2400;
    }
  x2 = XEXP (x1, 0);
  goto L2187;

 L2400: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2401;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2187;

 L2401: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2402;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2187;

 L2402: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 315;  /* stack_protect_setsi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2187;

 L3674: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    goto L2417;
  goto L2187;

 L2417: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 61)
    goto L2418;
  x2 = XEXP (x1, 0);
  goto L2187;

 L2418: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (memory_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L2419;
    }
  x2 = XEXP (x1, 0);
  goto L2187;

 L2419: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (memory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2420;
    }
  x2 = XEXP (x1, 0);
  goto L2187;

 L2420: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2421;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2187;

 L2421: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2422;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2187;

 L2422: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 316;  /* stack_protect_testsi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2187;

 L3675: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L2642;
    }
  goto L2187;

 L2642: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_reg_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2643;
    }
  x2 = XEXP (x1, 0);
  goto L2187;

 L2643: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2644;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2187;

 L2644: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L2645;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2187;

 L2645: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 8)
    goto L2646;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2187;

 L2646: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2647;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2187;

 L2647: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, DImode))
    {
      operands[3] = x3;
      goto L2648;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2187;

 L2648: ATTRIBUTE_UNUSED_LABEL
  if (
#line 102 "../../gcc-4.4.7/gcc/config/sparc/sync.md"
(TARGET_V8PLUS))
    {
      return 351;  /* *sync_compare_and_swapdi_v8plus */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2187;

 L3676: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L2661;
    }
  goto L2187;

 L2661: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 10)
    goto L2662;
  x2 = XEXP (x1, 0);
  goto L2187;

 L2662: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2663;
    }
  x2 = XEXP (x1, 0);
  goto L2187;

 L2663: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2664;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2187;

 L2664: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L2665;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2187;

 L2665: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (-1)])
    {
      return 353;  /* *ldstubqi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2187;

 L3677: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L2669;
    }
  goto L2187;

 L2669: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L2670;
  x2 = XEXP (x1, 0);
  goto L2187;

 L2670: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == UNSPEC_VOLATILE
      && XVECLEN (x3, 0) == 1
      && XINT (x3, 1) == 10)
    goto L2671;
  x2 = XEXP (x1, 0);
  goto L2187;

 L2671: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (memory_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L2672;
    }
  x2 = XEXP (x1, 0);
  goto L2187;

 L2672: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2673;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2187;

 L2673: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L2674;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2187;

 L2674: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (-1)])
    {
      return 354;  /* *ldstubhi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2187;

 L2188: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L2189;
  goto ret0;

 L2189: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L2190;
  goto ret0;

 L2190: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L3727;
  goto ret0;

 L3727: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x4) == UNSPEC)
    goto L3729;
  goto ret0;

 L3729: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x4, 0))
    {
    case 2:
      goto L3731;
    case 1:
      goto L3732;
    default:
      break;
    }
  goto ret0;

 L3731: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x4, 1) == 30)
    goto L2191;
  goto ret0;

 L2191: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (symbolic_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L2192;
    }
  goto ret0;

 L2192: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (tgd_symbolic_operand (x5, VOIDmode))
    {
      operands[2] = x5;
      goto L2193;
    }
  goto ret0;

 L2193: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[3] = x3;
  goto L2194;

 L2194: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2195;
  goto ret0;

 L2195: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 15)
    {
      return 289;  /* tgd_call32 */
    }
  goto ret0;

 L3732: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x4, 1) == 31)
    goto L2228;
  goto ret0;

 L2228: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (symbolic_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L2229;
    }
  goto ret0;

 L2229: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L2230;

 L2230: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2231;
  goto ret0;

 L2231: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 15)
    {
      return 293;  /* tldm_call32 */
    }
  goto ret0;
 ret0:
  return -1;
}

int
recog (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  if (GET_MODE (x0) == SImode
      && GET_CODE (x0) == UNSPEC
      && XVECLEN (x0, 0) == 2
      && XINT (x0, 1) == 1)
    goto L2115;
  switch (GET_CODE (x0))
    {
    case SET:
      goto L1;
    case PARALLEL:
      goto L3256;
    case CALL:
      goto L1977;
    case RETURN:
      goto L3258;
    case UNSPEC_VOLATILE:
      goto L3259;
    case CONST_INT:
      goto L3260;
    case PREFETCH:
      goto L2146;
    case TRAP_IF:
      goto L2154;
    default:
     break;
   }
  goto ret0;

 L2115: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2116;
    }
  goto ret0;

 L2116: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (register_operand (x1, SImode))
    {
      operands[1] = x1;
      return 272;  /* update_return */
    }
  goto ret0;

 L1: ATTRIBUTE_UNUSED_LABEL
  return recog_4 (x0, insn, pnum_clobbers);

 L3256: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x0, 0))
    {
    case 2:
      goto L42;
    case 3:
      goto L955;
    default:
      break;
    }
  goto ret0;

 L42: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L43;
    case CALL:
      goto L1971;
    default:
     break;
   }
  goto ret0;

 L43: ATTRIBUTE_UNUSED_LABEL
  return recog_6 (x0, insn, pnum_clobbers);

 L1971: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1972;
  goto ret0;

 L1972: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (address_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L1973;
    }
 L1984: ATTRIBUTE_UNUSED_LABEL
  if (symbolic_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L1985;
    }
 L2004: ATTRIBUTE_UNUSED_LABEL
  if (address_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L2005;
    }
 L2019: ATTRIBUTE_UNUSED_LABEL
  if (symbolic_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L2020;
    }
 L2034: ATTRIBUTE_UNUSED_LABEL
  if (address_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L2035;
    }
 L2049: ATTRIBUTE_UNUSED_LABEL
  if (symbolic_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L2050;
    }
  goto ret0;

 L1973: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L1974;

 L1974: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1975;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L1984;

 L1975: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 15)
    {
      return 259;  /* *call_address_sp32 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L1984;

 L1985: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L1986;

 L1986: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1987;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2004;

 L1987: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 15)
    {
      return 260;  /* *call_symbolic_sp32 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2004;

 L2005: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L2006;

 L2006: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (immediate_operand (x1, VOIDmode))
    {
      operands[2] = x1;
      goto L2007;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2019;

 L2007: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6644 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64 && GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) > 0)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 261;  /* *call_address_struct_value_sp32 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2019;

 L2020: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L2021;

 L2021: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (immediate_operand (x1, VOIDmode))
    {
      operands[2] = x1;
      goto L2022;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2034;

 L2022: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6660 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64 && GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) > 0)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 262;  /* *call_symbolic_struct_value_sp32 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2034;

 L2035: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L2036;

 L2036: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (immediate_operand (x1, VOIDmode))
    {
      operands[2] = x1;
      goto L2037;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2049;

 L2037: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6676 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64 && GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) < 0)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 263;  /* *call_address_untyped_struct_value_sp32 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2049;

 L2050: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L2090;

 L2090: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == RETURN)
    {
      return 267;  /* *sibcall_symbolic_sp32 */
    }
  if (immediate_operand (x1, VOIDmode))
    {
      operands[2] = x1;
      goto L2052;
    }
  goto ret0;

 L2052: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6689 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64 && GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) < 0)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 264;  /* *call_symbolic_untyped_struct_value_sp32 */
    }
  goto ret0;

 L955: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L956;
    case CALL:
      goto L1995;
    default:
     break;
   }
  goto ret0;

 L956: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DImode:
      goto L3733;
    case CCmode:
      goto L3734;
    case SImode:
      goto L3735;
    default:
      break;
    }
  goto ret0;

 L3733: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L957;
    }
  goto ret0;

 L957: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MULT)
    goto L958;
  goto ret0;

 L958: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arith_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L959;
    }
  goto ret0;

 L959: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L960;
    }
  goto ret0;

 L960: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L961;
  goto ret0;

 L961: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L962;
    }
  goto ret0;

 L962: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L963;
  goto ret0;

 L963: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L964;
    }
  goto ret0;

 L964: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4461 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8PLUS))
    {
      return 133;  /* muldi3_v8plus */
    }
  goto ret0;

 L3734: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    goto L1263;
  goto ret0;

 L1263: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCmode)
    goto L3736;
  goto ret0;

 L3736: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case COMPARE:
      goto L1264;
    case UNSPEC:
      goto L3738;
    default:
     break;
   }
  goto ret0;

 L1264: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == DIV)
    goto L1265;
  goto ret0;

 L1265: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1266;
    }
  goto ret0;

 L1266: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1267;
    }
  goto ret0;

 L1267: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1268;
  goto ret0;

 L1268: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1269;
  goto ret0;

 L1269: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1270;
    }
  goto ret0;

 L1270: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == DIV)
    goto L1271;
  goto ret0;

 L1271: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1272;
  goto ret0;

 L1272: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L1273;
  goto ret0;

 L1273: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L1274;
  goto ret0;

 L1274: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1275;
    }
  goto ret0;

 L1275: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4983 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V8 || TARGET_DEPRECATED_V8_INSNS))
    {
      return 153;  /* *cmp_sdiv_cc_set */
    }
  goto ret0;

 L3738: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 61)
    goto L2407;
  goto ret0;

 L2407: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (memory_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L2408;
    }
  goto ret0;

 L2408: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (memory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2409;
    }
  goto ret0;

 L2409: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2410;
  goto ret0;

 L2410: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2411;
    }
  goto ret0;

 L2411: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2412;
  goto ret0;

 L2412: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2413;
  goto ret0;

 L2413: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[2] = x2;
      return 316;  /* stack_protect_testsi */
    }
  goto ret0;

 L3735: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 30)
    goto L2102;
  goto ret0;

 L2102: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 14)
    goto L2103;
  goto ret0;

 L2103: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2104;
  goto ret0;

 L2104: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 14)
    goto L2105;
  goto ret0;

 L2105: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 6)
    goto L2106;
  goto ret0;

 L2106: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 14)
    goto L2107;
  goto ret0;

 L2107: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L2108;
    }
  goto ret0;

 L2108: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L2109;
  goto ret0;

 L2109: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    goto L2110;
  goto ret0;

 L2110: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 15)
    {
      return 269;  /* save_register_windowsi */
    }
  goto ret0;

 L1995: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1996;
  goto ret0;

 L1996: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (address_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L1997;
    }
 L2011: ATTRIBUTE_UNUSED_LABEL
  if (symbolic_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L2012;
    }
 L2026: ATTRIBUTE_UNUSED_LABEL
  if (address_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L2027;
    }
 L2041: ATTRIBUTE_UNUSED_LABEL
  if (symbolic_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L2042;
    }
  goto ret0;

 L1997: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L1998;

 L1998: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (immediate_operand (x1, VOIDmode))
    {
      operands[2] = x1;
      goto L1999;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2011;

 L1999: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2000;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2011;

 L2000: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 15
      && 
#line 6644 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64 && GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) > 0))
    {
      return 261;  /* *call_address_struct_value_sp32 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2011;

 L2012: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L2013;

 L2013: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (immediate_operand (x1, VOIDmode))
    {
      operands[2] = x1;
      goto L2014;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2026;

 L2014: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2015;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2026;

 L2015: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 15
      && 
#line 6660 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64 && GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) > 0))
    {
      return 262;  /* *call_symbolic_struct_value_sp32 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2026;

 L2027: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L2028;

 L2028: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (immediate_operand (x1, VOIDmode))
    {
      operands[2] = x1;
      goto L2029;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2041;

 L2029: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2030;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2041;

 L2030: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 15
      && 
#line 6676 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64 && GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) < 0))
    {
      return 263;  /* *call_address_untyped_struct_value_sp32 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2041;

 L2042: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L2043;

 L2043: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (immediate_operand (x1, VOIDmode))
    {
      operands[2] = x1;
      goto L2044;
    }
  goto ret0;

 L2044: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2045;
  goto ret0;

 L2045: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 15
      && 
#line 6689 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64 && GET_CODE (operands[2]) == CONST_INT && INTVAL (operands[2]) < 0))
    {
      return 264;  /* *call_symbolic_untyped_struct_value_sp32 */
    }
  goto ret0;

 L1977: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == MEM)
    goto L1978;
  goto ret0;

 L1978: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (address_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1979;
    }
 L1990: ATTRIBUTE_UNUSED_LABEL
  if (symbolic_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1991;
    }
  goto ret0;

 L1979: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  operands[1] = x1;
  goto L1980;

 L1980: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 259;  /* *call_address_sp32 */
    }
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  goto L1990;

 L1991: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  operands[1] = x1;
  goto L1992;

 L1992: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 260;  /* *call_symbolic_sp32 */
    }
  goto ret0;

 L3258: ATTRIBUTE_UNUSED_LABEL
  return 270;  /* *return_internal */

 L3259: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) == 1)
    goto L3739;
  goto ret0;

 L3739: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x0, 1))
    {
    case 0LL:
      goto L2113;
    case 1LL:
      goto L2122;
    case 2LL:
      goto L2124;
    case 5LL:
      goto L2127;
    case 4LL:
      goto L2129;
    default:
      break;
    }
  goto ret0;

 L2113: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 271;  /* blockage */
    }
  goto ret0;

 L2122: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 275;  /* flush_register_windows */
    }
  goto ret0;

 L2124: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (register_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L2125;
    }
  goto ret0;

 L2125: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7055 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(GET_MODE (operands[0]) == Pmode))
    {
      return 276;  /* goto_handler_and_restore */
    }
  goto ret0;

 L2127: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 277;  /* do_builtin_setjmp_setup */
    }
  goto ret0;

 L2129: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L3744;
    case DImode:
      goto L3745;
    default:
      break;
    }
  goto ret0;

 L3744: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SImode))
    {
      operands[0] = x1;
      return 278;  /* flush */
    }
  goto ret0;

 L3745: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, DImode))
    {
      operands[0] = x1;
      return 279;  /* flushdi */
    }
  goto ret0;

 L3260: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x0, 0) == 0LL)
    {
      return 273;  /* nop */
    }
  goto ret0;

 L2146: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (address_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L2147;
    }
 L2150: ATTRIBUTE_UNUSED_LABEL
  if (address_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2151;
    }
  goto ret0;

 L2147: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L2148;
    }
  x1 = XEXP (x0, 0);
  goto L2150;

 L2148: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 2);
  if (const_int_operand (x1, DImode))
    {
      operands[2] = x1;
      return 281;  /* prefetch_64 */
    }
  x1 = XEXP (x0, 0);
  goto L2150;

 L2151: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L2152;
    }
  goto ret0;

 L2152: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 2);
  if (const_int_operand (x1, SImode))
    {
      operands[2] = x1;
      return 282;  /* prefetch_32 */
    }
  goto ret0;

 L2154: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L2155;
  if (noov_compare_operator (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L2158;
    }
  goto ret0;

 L2155: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (5)])
    {
      return 283;  /* trap */
    }
  goto ret0;

 L2158: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case CCmode:
      goto L3746;
    case CCXmode:
      goto L3747;
    default:
      break;
    }
  goto ret0;

 L3746: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    goto L2159;
  goto ret0;

 L2159: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2160;
  goto ret0;

 L2160: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (arith_operand (x1, SImode))
    {
      operands[1] = x1;
      return 284;  /* *sparc.md:7441 */
    }
  goto ret0;

 L3747: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    goto L2164;
  goto ret0;

 L2164: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2165;
  goto ret0;

 L2165: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (arith_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L2166;
    }
  goto ret0;

 L2166: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7456 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9))
    {
      return 285;  /* *sparc.md:7453 */
    }
  goto ret0;
 ret0:
  return -1;
}

static rtx
split_1 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  if (XVECLEN (x0, 0) == 2)
    goto L2685;
  goto ret0;

 L2685: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L2686;
  goto ret0;

 L2686: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3749;
    case DImode:
      goto L3750;
    default:
      break;
    }
  goto ret0;

 L3749: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2687;
    }
  goto ret0;

 L2687: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L3751;
  goto ret0;

 L3751: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NE:
      goto L2688;
    case NEG:
      goto L2696;
    case EQ:
      goto L2705;
    case PLUS:
      goto L2722;
    case MINUS:
      goto L2732;
    case AND:
      goto L2975;
    case IOR:
      goto L3011;
    case XOR:
      goto L3047;
    case NOT:
      goto L3055;
    default:
     break;
   }
  goto ret0;

 L2688: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2689;
    }
  goto ret0;

 L2689: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2690;
  goto ret0;

 L2690: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2691;
  goto ret0;

 L2691: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return gen_split_372 (insn, operands);
    }
  goto ret0;

 L2696: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L3760;
  goto ret0;

 L3760: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case NE:
      goto L2697;
    case EQ:
      goto L2714;
    default:
     break;
   }
  goto ret0;

 L2697: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2698;
    }
  goto ret0;

 L2698: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2699;
  goto ret0;

 L2699: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2700;
  goto ret0;

 L2700: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return gen_split_373 (insn, operands);
    }
  goto ret0;

 L2714: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2715;
    }
  goto ret0;

 L2715: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2716;
  goto ret0;

 L2716: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2717;
  goto ret0;

 L2717: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return gen_split_375 (insn, operands);
    }
  goto ret0;

 L2705: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2706;
    }
  goto ret0;

 L2706: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2707;
  goto ret0;

 L2707: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2708;
  goto ret0;

 L2708: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return gen_split_374 (insn, operands);
    }
  goto ret0;

 L2722: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L3762;
  goto ret0;

 L3762: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case NE:
      goto L2723;
    case EQ:
      goto L2743;
    default:
     break;
   }
  goto ret0;

 L2723: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2724;
    }
  goto ret0;

 L2724: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2725;
  goto ret0;

 L2725: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2726;
    }
  goto ret0;

 L2726: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2727;
  goto ret0;

 L2727: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return gen_split_376 (insn, operands);
    }
  goto ret0;

 L2743: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2744;
    }
  goto ret0;

 L2744: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2745;
  goto ret0;

 L2745: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2746;
    }
  goto ret0;

 L2746: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2747;
  goto ret0;

 L2747: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return gen_split_378 (insn, operands);
    }
  goto ret0;

 L2732: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2733;
    }
  goto ret0;

 L2733: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L3764;
  goto ret0;

 L3764: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case NE:
      goto L2734;
    case EQ:
      goto L2754;
    default:
     break;
   }
  goto ret0;

 L2734: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2735;
    }
  goto ret0;

 L2735: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2736;
  goto ret0;

 L2736: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2737;
  goto ret0;

 L2737: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return gen_split_377 (insn, operands);
    }
  goto ret0;

 L2754: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2755;
    }
  goto ret0;

 L2755: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2756;
  goto ret0;

 L2756: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2757;
  goto ret0;

 L2757: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    {
      return gen_split_379 (insn, operands);
    }
  goto ret0;

 L2975: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2976;
    }
  goto ret0;

 L2976: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_compl_high_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2977;
    }
  goto ret0;

 L2977: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2978;
  goto ret0;

 L2978: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      return gen_split_491 (insn, operands);
    }
  goto ret0;

 L3011: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3012;
    }
  goto ret0;

 L3012: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_compl_high_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3013;
    }
  goto ret0;

 L3013: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3014;
  goto ret0;

 L3014: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      return gen_split_500 (insn, operands);
    }
  goto ret0;

 L3047: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3048;
    }
  goto ret0;

 L3048: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_compl_high_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3049;
    }
  goto ret0;

 L3049: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3050;
  goto ret0;

 L3050: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      return gen_split_509 (insn, operands);
    }
  goto ret0;

 L3055: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == XOR)
    goto L3056;
  goto ret0;

 L3056: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3057;
    }
  goto ret0;

 L3057: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_compl_high_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3058;
    }
  goto ret0;

 L3058: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3059;
  goto ret0;

 L3059: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      return gen_split_510 (insn, operands);
    }
  goto ret0;

 L3750: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L2920;
    }
  goto ret0;

 L2920: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L3766;
  goto ret0;

 L3766: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L2939;
    case MINUS:
      goto L2948;
    case NEG:
      goto L3116;
    default:
     break;
   }
  goto ret0;

 L2939: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L2940;
  if (arith_double_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2922;
    }
  goto ret0;

 L2940: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2941;
    }
  goto ret0;

 L2941: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2942;
    }
  goto ret0;

 L2942: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2943;
  goto ret0;

 L2943: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100
      && (
#line 4169 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64) && 
#line 4171 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
( reload_completed)))
    {
      return gen_split_475 (insn, operands);
    }
  goto ret0;

 L2922: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_double_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2923;
    }
  goto ret0;

 L2923: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2924;
  goto ret0;

 L2924: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100
      && (
#line 4096 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64) && 
#line 4098 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
( reload_completed)))
    {
      return gen_split_473 (insn, operands);
    }
  goto ret0;

 L2948: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2967;
    }
  goto ret0;

 L2967: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L2968;
  if (arith_double_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2950;
    }
  goto ret0;

 L2968: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2969;
    }
  goto ret0;

 L2969: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2970;
  goto ret0;

 L2970: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100
      && (
#line 4341 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64) && 
#line 4343 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
( reload_completed)))
    {
      return gen_split_479 (insn, operands);
    }
  goto ret0;

 L2950: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2951;
  goto ret0;

 L2951: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100
      && (
#line 4269 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64) && 
#line 4271 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
( reload_completed)))
    {
      return gen_split_477 (insn, operands);
    }
  goto ret0;

 L3116: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3117;
    }
  goto ret0;

 L3117: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3118;
  goto ret0;

 L3118: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100
      && (
#line 5651 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_ARCH32) && 
#line 5653 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
( reload_completed)))
    {
      return gen_split_520 (insn, operands);
    }
  goto ret0;
 ret0:
  return 0;
}

static rtx
split_2 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L3769;
    case DImode:
      goto L3770;
    case SFmode:
      goto L3772;
    case DFmode:
      goto L3773;
    case V2SImode:
      goto L3774;
    case V4HImode:
      goto L3775;
    case V8QImode:
      goto L3776;
    case TFmode:
      goto L3785;
    default:
      break;
    }
  goto ret0;

 L3769: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2760;
    }
  goto ret0;

 L2760: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (noov_compare_operator (x1, SImode))
    {
      operands[2] = x1;
      goto L2761;
    }
  goto ret0;

 L2761: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (icc_or_fcc_register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L2762;
    }
  goto ret0;

 L2762: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 1253 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9
   && REGNO (operands[1]) == SPARC_ICC_REG
   && (GET_MODE (operands[1]) == CCXmode
       /* 32-bit LTU/GEU are better implemented using addx/subx.  */
       || (GET_CODE (operands[2]) != LTU && GET_CODE (operands[2]) != GEU))))
    {
      return gen_split_380 (insn, operands);
    }
  goto ret0;

 L3770: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L2773;
    }
 L3771: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L2781;
    }
  goto ret0;

 L2773: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L3790;
 L2765: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L2766;
    }
 L2769: ATTRIBUTE_UNUSED_LABEL
  if (const_double_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L2770;
    }
  x1 = XEXP (x0, 0);
  goto L3771;

 L3790: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case ZERO_EXTEND:
      goto L2915;
    case AND:
      goto L2982;
    case IOR:
      goto L3018;
    case NOT:
      goto L3087;
    case REG:
    case SUBREG:
      goto L3788;
    default:
      goto L3789;
   }
 L3788: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L2774;
    }
 L3789: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L2778;
    }
 L3793: ATTRIBUTE_UNUSED_LABEL
  if (cc_arith_operator (x1, DImode))
    {
      operands[1] = x1;
      goto L3063;
    }
  goto L2765;

 L2915: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L3796;
  goto L2765;

 L3796: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L2929;
    case MINUS:
      goto L2956;
    case REG:
    case SUBREG:
      goto L3795;
    default:
      goto L2765;
   }
 L3795: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2916;
    }
  goto L2765;

 L2929: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L2930;
  goto L2765;

 L2930: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_or_zero_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2931;
    }
  goto L2765;

 L2931: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2932;
    }
  goto L2765;

 L2932: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == LTU)
    goto L2933;
  goto L2765;

 L2933: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == CC_NOOVmode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 100)
    goto L2934;
  goto L2765;

 L2934: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 4145 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64) && 
#line 4147 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
( reload_completed)))
    {
      return gen_split_474 (insn, operands);
    }
  goto L2765;

 L2956: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MINUS)
    goto L2957;
  goto L2765;

 L2957: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_or_zero_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2958;
    }
  goto L2765;

 L2958: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2959;
    }
  goto L2765;

 L2959: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == LTU)
    goto L2960;
  goto L2765;

 L2960: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == CC_NOOVmode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 100)
    goto L2961;
  goto L2765;

 L2961: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 4326 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64) && 
#line 4328 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
( reload_completed)))
    {
      return gen_split_478 (insn, operands);
    }
  goto L2765;

 L2916: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3447 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64) && 
#line 3449 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
( reload_completed)))
    {
      return gen_split_460 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L2765;

 L2982: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == NOT)
    goto L2983;
  goto L3793;

 L2983: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2984;
    }
  goto L3793;

 L2984: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2985;
    }
  goto L3793;

 L2985: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5186 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64) && 
#line 5190 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
( reload_completed
   && ((GET_CODE (operands[0]) == REG
        && REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
           && GET_CODE (SUBREG_REG (operands[0])) == REG
           && REGNO (SUBREG_REG (operands[0])) < 32)))))
    {
      return gen_split_492 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L3793;

 L3018: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == NOT)
    goto L3019;
  goto L3793;

 L3019: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3020;
    }
  goto L3793;

 L3020: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3021;
    }
  goto L3793;

 L3021: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5287 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64) && 
#line 5291 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
( reload_completed
   && ((GET_CODE (operands[0]) == REG
        && REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
           && GET_CODE (SUBREG_REG (operands[0])) == REG
           && REGNO (SUBREG_REG (operands[0])) < 32)))))
    {
      return gen_split_501 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L3793;

 L3087: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L3798;
  goto L2765;

 L3798: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == XOR)
    goto L3088;
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3123;
    }
  goto L2765;

 L3088: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3089;
    }
  goto L2765;

 L3089: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L3090;
    }
  goto L2765;

 L3090: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5436 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64) && 
#line 5440 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
( reload_completed
   && ((GET_CODE (operands[0]) == REG
        && REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
           && GET_CODE (SUBREG_REG (operands[0])) == REG
           && REGNO (SUBREG_REG (operands[0])) < 32)))))
    {
      return gen_split_515 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L2765;

 L3123: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5725 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64) && 
#line 5729 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
( reload_completed
   && ((GET_CODE (operands[0]) == REG
        && REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
           && GET_CODE (SUBREG_REG (operands[0])) == REG
           && REGNO (SUBREG_REG (operands[0])) < 32)))))
    {
      return gen_split_525 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L2765;

 L2774: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2290 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(reload_completed
   && (! TARGET_V9
       || (! TARGET_ARCH64
           && ((GET_CODE (operands[0]) == REG
                && REGNO (operands[0]) < 32)
               || (GET_CODE (operands[0]) == SUBREG
                   && GET_CODE (SUBREG_REG (operands[0])) == REG
                   && REGNO (SUBREG_REG (operands[0])) < 32))))))
    {
      return gen_split_408 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L3789;

 L2778: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2330 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
((! TARGET_ARCH64
    && reload_completed
    && sparc_splitdi_legitimate (operands[0], operands[1]))))
    {
      return gen_split_409 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L2765;

 L3063: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3064;
    }
  goto L2765;

 L3064: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_double_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L3065;
    }
  goto L2765;

 L3065: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5402 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64
   && reload_completed
   && ((GET_CODE (operands[0]) == REG
        && REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
           && GET_CODE (SUBREG_REG (operands[0])) == REG
           && REGNO (SUBREG_REG (operands[0])) < 32))))
    {
      return gen_split_511 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L2765;

 L2766: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2224 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64 && reload_completed))
    {
      return gen_split_406 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L2769;

 L2770: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2257 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(reload_completed
   && (! TARGET_V9
       || (! TARGET_ARCH64
           && ((GET_CODE (operands[0]) == REG
                && REGNO (operands[0]) < 32)
               || (GET_CODE (operands[0]) == SUBREG
                   && GET_CODE (SUBREG_REG (operands[0])) == REG
                   && REGNO (SUBREG_REG (operands[0])) < 32))))))
    {
      return gen_split_407 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L3771;

 L2781: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L2782;
    }
  if (const_zero_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L2786;
    }
  goto ret0;

 L2782: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2356 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
((! TARGET_ARCH64
    && reload_completed
    && sparc_splitdi_legitimate (operands[1], operands[0]))))
    {
      return gen_split_410 (insn, operands);
    }
  goto ret0;

 L2786: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2371 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(reload_completed
   && (! TARGET_V9
       || (! TARGET_ARCH64
	   && ! mem_min_alignment (operands[0], 8)))
   && offsettable_memref_p (operands[0])))
    {
      return gen_split_411 (insn, operands);
    }
  goto ret0;

 L3772: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L2789;
    }
  goto ret0;

 L2789: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (fp_const_high_losum_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L2790;
    }
  goto ret0;

 L2790: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2519 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(REG_P (operands[0]) && REGNO (operands[0]) < 32))
    {
      return gen_split_415 (insn, operands);
    }
  goto ret0;

 L3773: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L2793;
    }
 L3777: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L2841;
    }
 L3781: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L3151;
    }
  goto ret0;

 L2793: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode)
    goto L3800;
  x1 = XEXP (x0, 0);
  goto L3777;

 L3800: ATTRIBUTE_UNUSED_LABEL
  if (const_double_or_vector_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L2794;
    }
  if (register_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L2810;
    }
 L3802: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L2826;
    }
  x1 = XEXP (x0, 0);
  goto L3777;

 L2794: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2652 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && (GET_CODE (operands[0]) == REG
       && REGNO (operands[0]) < 32)
   && ! const_zero_operand (operands[1], GET_MODE (operands[0]))
   && reload_completed))
    {
      return gen_split_420 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L3777;

 L2810: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2707 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
((! TARGET_V9
    || (! TARGET_ARCH64
        && ((GET_CODE (operands[0]) == REG
             && REGNO (operands[0]) < 32)
            || (GET_CODE (operands[0]) == SUBREG
                && GET_CODE (SUBREG_REG (operands[0])) == REG
                && REGNO (SUBREG_REG (operands[0])) < 32))))
   && reload_completed))
    {
      return gen_split_424 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L3802;

 L2826: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2752 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(reload_completed
   && ! TARGET_ARCH64
   && (((REGNO (operands[0]) % 2) != 0)
       || ! mem_min_alignment (operands[1], 8))
   && offsettable_memref_p (operands[1])))
    {
      return gen_split_428 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L3777;

 L2841: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L2842;
    }
  if (const_zero_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L2858;
    }
  x1 = XEXP (x0, 0);
  goto L3781;

 L2842: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2787 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(reload_completed
   && ! TARGET_ARCH64
   && (((REGNO (operands[1]) % 2) != 0)
       || ! mem_min_alignment (operands[0], 8))
   && offsettable_memref_p (operands[0])))
    {
      return gen_split_432 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L3781;

 L2858: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2814 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(reload_completed
   && (! TARGET_V9
       || (! TARGET_ARCH64
	   && ! mem_min_alignment (operands[0], 8)))
   && offsettable_memref_p (operands[0])))
    {
      return gen_split_436 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L3781;

 L3151: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode)
    goto L3803;
 L2873: ATTRIBUTE_UNUSED_LABEL
  if (const_zero_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L2874;
    }
  goto ret0;

 L3803: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case NEG:
      goto L3152;
    case ABS:
      goto L3167;
    default:
     break;
   }
  goto L2873;

 L3152: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3153;
    }
  goto L2873;

 L3153: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6028 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU && ! TARGET_V9) && 
#line 6032 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
( reload_completed
   && sparc_absnegfloat_split_legitimate (operands[0], operands[1]))))
    {
      return gen_split_537 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L2873;

 L3167: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3168;
    }
  goto L2873;

 L3168: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6124 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU && ! TARGET_V9) && 
#line 6128 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
( reload_completed
   && sparc_absnegfloat_split_legitimate (operands[0], operands[1]))))
    {
      return gen_split_542 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L2873;

 L2874: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2841 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(reload_completed
   && ! TARGET_ARCH64
   && ((GET_CODE (operands[0]) == REG
	&& REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
	   && GET_CODE (SUBREG_REG (operands[0])) == REG
	   && REGNO (SUBREG_REG (operands[0])) < 32))))
    {
      return gen_split_440 (insn, operands);
    }
  goto ret0;

 L3774: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L2797;
    }
 L3778: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L2845;
    }
 L3782: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L2988;
    }
  goto ret0;

 L2797: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SImode)
    goto L3805;
  x1 = XEXP (x0, 0);
  goto L3778;

 L3805: ATTRIBUTE_UNUSED_LABEL
  if (const_double_or_vector_operand (x1, V2SImode))
    {
      operands[1] = x1;
      goto L2798;
    }
  if (register_operand (x1, V2SImode))
    {
      operands[1] = x1;
      goto L2814;
    }
 L3807: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, V2SImode))
    {
      operands[1] = x1;
      goto L2830;
    }
  x1 = XEXP (x0, 0);
  goto L3778;

 L2798: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2652 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && (GET_CODE (operands[0]) == REG
       && REGNO (operands[0]) < 32)
   && ! const_zero_operand (operands[1], GET_MODE (operands[0]))
   && reload_completed))
    {
      return gen_split_421 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L3778;

 L2814: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2707 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
((! TARGET_V9
    || (! TARGET_ARCH64
        && ((GET_CODE (operands[0]) == REG
             && REGNO (operands[0]) < 32)
            || (GET_CODE (operands[0]) == SUBREG
                && GET_CODE (SUBREG_REG (operands[0])) == REG
                && REGNO (SUBREG_REG (operands[0])) < 32))))
   && reload_completed))
    {
      return gen_split_425 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L3807;

 L2830: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2752 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(reload_completed
   && ! TARGET_ARCH64
   && (((REGNO (operands[0]) % 2) != 0)
       || ! mem_min_alignment (operands[1], 8))
   && offsettable_memref_p (operands[1])))
    {
      return gen_split_429 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L3778;

 L2845: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, V2SImode))
    {
      operands[1] = x1;
      goto L2846;
    }
  if (const_zero_operand (x1, V2SImode))
    {
      operands[1] = x1;
      goto L2862;
    }
  x1 = XEXP (x0, 0);
  goto L3782;

 L2846: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2787 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(reload_completed
   && ! TARGET_ARCH64
   && (((REGNO (operands[1]) % 2) != 0)
       || ! mem_min_alignment (operands[0], 8))
   && offsettable_memref_p (operands[0])))
    {
      return gen_split_433 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L3782;

 L2862: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2814 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(reload_completed
   && (! TARGET_V9
       || (! TARGET_ARCH64
	   && ! mem_min_alignment (operands[0], 8)))
   && offsettable_memref_p (operands[0])))
    {
      return gen_split_437 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L3782;

 L2988: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SImode)
    goto L3808;
 L2877: ATTRIBUTE_UNUSED_LABEL
  if (const_zero_operand (x1, V2SImode))
    {
      operands[1] = x1;
      goto L2878;
    }
  goto ret0;

 L3808: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L2989;
    case IOR:
      goto L3025;
    case NOT:
      goto L3094;
    default:
     break;
   }
 L3810: ATTRIBUTE_UNUSED_LABEL
  if (cc_arith_operator (x1, V2SImode))
    {
      operands[1] = x1;
      goto L3069;
    }
  goto L2877;

 L2989: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SImode
      && GET_CODE (x2) == NOT)
    goto L2990;
  goto L3810;

 L2990: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L2991;
    }
  goto L3810;

 L2991: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L2992;
    }
  goto L3810;

 L2992: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5186 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64) && 
#line 5190 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
( reload_completed
   && ((GET_CODE (operands[0]) == REG
        && REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
           && GET_CODE (SUBREG_REG (operands[0])) == REG
           && REGNO (SUBREG_REG (operands[0])) < 32)))))
    {
      return gen_split_493 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L3810;

 L3025: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SImode
      && GET_CODE (x2) == NOT)
    goto L3026;
  goto L3810;

 L3026: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L3027;
    }
  goto L3810;

 L3027: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L3028;
    }
  goto L3810;

 L3028: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5287 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64) && 
#line 5291 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
( reload_completed
   && ((GET_CODE (operands[0]) == REG
        && REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
           && GET_CODE (SUBREG_REG (operands[0])) == REG
           && REGNO (SUBREG_REG (operands[0])) < 32)))))
    {
      return gen_split_502 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L3810;

 L3094: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SImode)
    goto L3812;
  goto L2877;

 L3812: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == XOR)
    goto L3095;
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L3128;
    }
  goto L2877;

 L3095: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L3096;
    }
  goto L2877;

 L3096: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SImode))
    {
      operands[2] = x3;
      goto L3097;
    }
  goto L2877;

 L3097: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5436 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64) && 
#line 5440 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
( reload_completed
   && ((GET_CODE (operands[0]) == REG
        && REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
           && GET_CODE (SUBREG_REG (operands[0])) == REG
           && REGNO (SUBREG_REG (operands[0])) < 32)))))
    {
      return gen_split_516 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L2877;

 L3128: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5725 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64) && 
#line 5729 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
( reload_completed
   && ((GET_CODE (operands[0]) == REG
        && REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
           && GET_CODE (SUBREG_REG (operands[0])) == REG
           && REGNO (SUBREG_REG (operands[0])) < 32)))))
    {
      return gen_split_526 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L2877;

 L3069: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L3070;
    }
  goto L2877;

 L3070: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_double_operand (x2, V2SImode))
    {
      operands[3] = x2;
      goto L3071;
    }
  goto L2877;

 L3071: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5402 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64
   && reload_completed
   && ((GET_CODE (operands[0]) == REG
        && REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
           && GET_CODE (SUBREG_REG (operands[0])) == REG
           && REGNO (SUBREG_REG (operands[0])) < 32))))
    {
      return gen_split_512 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L2877;

 L2878: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2841 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(reload_completed
   && ! TARGET_ARCH64
   && ((GET_CODE (operands[0]) == REG
	&& REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
	   && GET_CODE (SUBREG_REG (operands[0])) == REG
	   && REGNO (SUBREG_REG (operands[0])) < 32))))
    {
      return gen_split_441 (insn, operands);
    }
  goto ret0;

 L3775: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L2801;
    }
 L3779: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L2849;
    }
 L3783: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L2995;
    }
  goto ret0;

 L2801: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4HImode)
    goto L3814;
  x1 = XEXP (x0, 0);
  goto L3779;

 L3814: ATTRIBUTE_UNUSED_LABEL
  if (const_double_or_vector_operand (x1, V4HImode))
    {
      operands[1] = x1;
      goto L2802;
    }
  if (register_operand (x1, V4HImode))
    {
      operands[1] = x1;
      goto L2818;
    }
 L3816: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, V4HImode))
    {
      operands[1] = x1;
      goto L2834;
    }
  x1 = XEXP (x0, 0);
  goto L3779;

 L2802: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2652 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && (GET_CODE (operands[0]) == REG
       && REGNO (operands[0]) < 32)
   && ! const_zero_operand (operands[1], GET_MODE (operands[0]))
   && reload_completed))
    {
      return gen_split_422 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L3779;

 L2818: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2707 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
((! TARGET_V9
    || (! TARGET_ARCH64
        && ((GET_CODE (operands[0]) == REG
             && REGNO (operands[0]) < 32)
            || (GET_CODE (operands[0]) == SUBREG
                && GET_CODE (SUBREG_REG (operands[0])) == REG
                && REGNO (SUBREG_REG (operands[0])) < 32))))
   && reload_completed))
    {
      return gen_split_426 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L3816;

 L2834: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2752 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(reload_completed
   && ! TARGET_ARCH64
   && (((REGNO (operands[0]) % 2) != 0)
       || ! mem_min_alignment (operands[1], 8))
   && offsettable_memref_p (operands[1])))
    {
      return gen_split_430 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L3779;

 L2849: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, V4HImode))
    {
      operands[1] = x1;
      goto L2850;
    }
  if (const_zero_operand (x1, V4HImode))
    {
      operands[1] = x1;
      goto L2866;
    }
  x1 = XEXP (x0, 0);
  goto L3783;

 L2850: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2787 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(reload_completed
   && ! TARGET_ARCH64
   && (((REGNO (operands[1]) % 2) != 0)
       || ! mem_min_alignment (operands[0], 8))
   && offsettable_memref_p (operands[0])))
    {
      return gen_split_434 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L3783;

 L2866: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2814 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(reload_completed
   && (! TARGET_V9
       || (! TARGET_ARCH64
	   && ! mem_min_alignment (operands[0], 8)))
   && offsettable_memref_p (operands[0])))
    {
      return gen_split_438 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L3783;

 L2995: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4HImode)
    goto L3817;
 L2881: ATTRIBUTE_UNUSED_LABEL
  if (const_zero_operand (x1, V4HImode))
    {
      operands[1] = x1;
      goto L2882;
    }
  goto ret0;

 L3817: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L2996;
    case IOR:
      goto L3032;
    case NOT:
      goto L3101;
    default:
     break;
   }
 L3819: ATTRIBUTE_UNUSED_LABEL
  if (cc_arith_operator (x1, V4HImode))
    {
      operands[1] = x1;
      goto L3075;
    }
  goto L2881;

 L2996: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4HImode
      && GET_CODE (x2) == NOT)
    goto L2997;
  goto L3819;

 L2997: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L2998;
    }
  goto L3819;

 L2998: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L2999;
    }
  goto L3819;

 L2999: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5186 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64) && 
#line 5190 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
( reload_completed
   && ((GET_CODE (operands[0]) == REG
        && REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
           && GET_CODE (SUBREG_REG (operands[0])) == REG
           && REGNO (SUBREG_REG (operands[0])) < 32)))))
    {
      return gen_split_494 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L3819;

 L3032: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4HImode
      && GET_CODE (x2) == NOT)
    goto L3033;
  goto L3819;

 L3033: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L3034;
    }
  goto L3819;

 L3034: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L3035;
    }
  goto L3819;

 L3035: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5287 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64) && 
#line 5291 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
( reload_completed
   && ((GET_CODE (operands[0]) == REG
        && REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
           && GET_CODE (SUBREG_REG (operands[0])) == REG
           && REGNO (SUBREG_REG (operands[0])) < 32)))))
    {
      return gen_split_503 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L3819;

 L3101: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4HImode)
    goto L3821;
  goto L2881;

 L3821: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == XOR)
    goto L3102;
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L3133;
    }
  goto L2881;

 L3102: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L3103;
    }
  goto L2881;

 L3103: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L3104;
    }
  goto L2881;

 L3104: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5436 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64) && 
#line 5440 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
( reload_completed
   && ((GET_CODE (operands[0]) == REG
        && REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
           && GET_CODE (SUBREG_REG (operands[0])) == REG
           && REGNO (SUBREG_REG (operands[0])) < 32)))))
    {
      return gen_split_517 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L2881;

 L3133: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5725 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64) && 
#line 5729 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
( reload_completed
   && ((GET_CODE (operands[0]) == REG
        && REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
           && GET_CODE (SUBREG_REG (operands[0])) == REG
           && REGNO (SUBREG_REG (operands[0])) < 32)))))
    {
      return gen_split_527 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L2881;

 L3075: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L3076;
    }
  goto L2881;

 L3076: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_double_operand (x2, V4HImode))
    {
      operands[3] = x2;
      goto L3077;
    }
  goto L2881;

 L3077: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5402 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64
   && reload_completed
   && ((GET_CODE (operands[0]) == REG
        && REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
           && GET_CODE (SUBREG_REG (operands[0])) == REG
           && REGNO (SUBREG_REG (operands[0])) < 32))))
    {
      return gen_split_513 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L2881;

 L2882: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2841 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(reload_completed
   && ! TARGET_ARCH64
   && ((GET_CODE (operands[0]) == REG
	&& REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
	   && GET_CODE (SUBREG_REG (operands[0])) == REG
	   && REGNO (SUBREG_REG (operands[0])) < 32))))
    {
      return gen_split_442 (insn, operands);
    }
  goto ret0;

 L3776: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L2805;
    }
 L3780: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L2853;
    }
 L3784: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L3002;
    }
  goto ret0;

 L2805: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V8QImode)
    goto L3823;
  x1 = XEXP (x0, 0);
  goto L3780;

 L3823: ATTRIBUTE_UNUSED_LABEL
  if (const_double_or_vector_operand (x1, V8QImode))
    {
      operands[1] = x1;
      goto L2806;
    }
  if (register_operand (x1, V8QImode))
    {
      operands[1] = x1;
      goto L2822;
    }
 L3825: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, V8QImode))
    {
      operands[1] = x1;
      goto L2838;
    }
  x1 = XEXP (x0, 0);
  goto L3780;

 L2806: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2652 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && (GET_CODE (operands[0]) == REG
       && REGNO (operands[0]) < 32)
   && ! const_zero_operand (operands[1], GET_MODE (operands[0]))
   && reload_completed))
    {
      return gen_split_423 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L3780;

 L2822: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2707 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
((! TARGET_V9
    || (! TARGET_ARCH64
        && ((GET_CODE (operands[0]) == REG
             && REGNO (operands[0]) < 32)
            || (GET_CODE (operands[0]) == SUBREG
                && GET_CODE (SUBREG_REG (operands[0])) == REG
                && REGNO (SUBREG_REG (operands[0])) < 32))))
   && reload_completed))
    {
      return gen_split_427 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L3825;

 L2838: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2752 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(reload_completed
   && ! TARGET_ARCH64
   && (((REGNO (operands[0]) % 2) != 0)
       || ! mem_min_alignment (operands[1], 8))
   && offsettable_memref_p (operands[1])))
    {
      return gen_split_431 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L3780;

 L2853: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, V8QImode))
    {
      operands[1] = x1;
      goto L2854;
    }
  if (const_zero_operand (x1, V8QImode))
    {
      operands[1] = x1;
      goto L2870;
    }
  x1 = XEXP (x0, 0);
  goto L3784;

 L2854: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2787 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(reload_completed
   && ! TARGET_ARCH64
   && (((REGNO (operands[1]) % 2) != 0)
       || ! mem_min_alignment (operands[0], 8))
   && offsettable_memref_p (operands[0])))
    {
      return gen_split_435 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L3784;

 L2870: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2814 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(reload_completed
   && (! TARGET_V9
       || (! TARGET_ARCH64
	   && ! mem_min_alignment (operands[0], 8)))
   && offsettable_memref_p (operands[0])))
    {
      return gen_split_439 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L3784;

 L3002: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V8QImode)
    goto L3826;
 L2885: ATTRIBUTE_UNUSED_LABEL
  if (const_zero_operand (x1, V8QImode))
    {
      operands[1] = x1;
      goto L2886;
    }
  goto ret0;

 L3826: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L3003;
    case IOR:
      goto L3039;
    case NOT:
      goto L3108;
    default:
     break;
   }
 L3828: ATTRIBUTE_UNUSED_LABEL
  if (cc_arith_operator (x1, V8QImode))
    {
      operands[1] = x1;
      goto L3081;
    }
  goto L2885;

 L3003: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == NOT)
    goto L3004;
  goto L3828;

 L3004: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L3005;
    }
  goto L3828;

 L3005: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L3006;
    }
  goto L3828;

 L3006: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5186 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64) && 
#line 5190 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
( reload_completed
   && ((GET_CODE (operands[0]) == REG
        && REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
           && GET_CODE (SUBREG_REG (operands[0])) == REG
           && REGNO (SUBREG_REG (operands[0])) < 32)))))
    {
      return gen_split_495 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L3828;

 L3039: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == NOT)
    goto L3040;
  goto L3828;

 L3040: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L3041;
    }
  goto L3828;

 L3041: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L3042;
    }
  goto L3828;

 L3042: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5287 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64) && 
#line 5291 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
( reload_completed
   && ((GET_CODE (operands[0]) == REG
        && REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
           && GET_CODE (SUBREG_REG (operands[0])) == REG
           && REGNO (SUBREG_REG (operands[0])) < 32)))))
    {
      return gen_split_504 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L3828;

 L3108: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8QImode)
    goto L3830;
  goto L2885;

 L3830: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == XOR)
    goto L3109;
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L3138;
    }
  goto L2885;

 L3109: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L3110;
    }
  goto L2885;

 L3110: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V8QImode))
    {
      operands[2] = x3;
      goto L3111;
    }
  goto L2885;

 L3111: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5436 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64) && 
#line 5440 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
( reload_completed
   && ((GET_CODE (operands[0]) == REG
        && REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
           && GET_CODE (SUBREG_REG (operands[0])) == REG
           && REGNO (SUBREG_REG (operands[0])) < 32)))))
    {
      return gen_split_518 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L2885;

 L3138: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5725 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64) && 
#line 5729 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
( reload_completed
   && ((GET_CODE (operands[0]) == REG
        && REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
           && GET_CODE (SUBREG_REG (operands[0])) == REG
           && REGNO (SUBREG_REG (operands[0])) < 32)))))
    {
      return gen_split_528 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L2885;

 L3081: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L3082;
    }
  goto L2885;

 L3082: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_double_operand (x2, V8QImode))
    {
      operands[3] = x2;
      goto L3083;
    }
  goto L2885;

 L3083: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5402 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(! TARGET_ARCH64
   && reload_completed
   && ((GET_CODE (operands[0]) == REG
        && REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
           && GET_CODE (SUBREG_REG (operands[0])) == REG
           && REGNO (SUBREG_REG (operands[0])) < 32))))
    {
      return gen_split_514 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L2885;

 L2886: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2841 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(reload_completed
   && ! TARGET_ARCH64
   && ((GET_CODE (operands[0]) == REG
	&& REGNO (operands[0]) < 32)
       || (GET_CODE (operands[0]) == SUBREG
	   && GET_CODE (SUBREG_REG (operands[0])) == REG
	   && REGNO (SUBREG_REG (operands[0])) < 32))))
    {
      return gen_split_443 (insn, operands);
    }
  goto ret0;

 L3785: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, TFmode))
    {
      operands[0] = x1;
      goto L2889;
    }
 L3786: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, TFmode))
    {
      operands[0] = x1;
      goto L2893;
    }
 L3787: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, TFmode))
    {
      operands[0] = x1;
      goto L2901;
    }
  goto ret0;

 L2889: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == TFmode)
    goto L3834;
  x1 = XEXP (x0, 0);
  goto L3786;

 L3834: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case IF_THEN_ELSE:
      goto L2906;
    case NEG:
      goto L3142;
    case ABS:
      goto L3157;
    case REG:
    case SUBREG:
      goto L3832;
    default:
      goto L3833;
   }
 L3832: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, TFmode))
    {
      operands[1] = x1;
      goto L2890;
    }
 L3833: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, TFmode))
    {
      operands[1] = x1;
      goto L2898;
    }
  x1 = XEXP (x0, 0);
  goto L3786;

 L2906: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L2907;
    }
  x1 = XEXP (x0, 0);
  goto L3786;

 L2907: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (icc_or_fcc_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L2908;
    }
  x1 = XEXP (x0, 0);
  goto L3786;

 L2908: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2909;
  x1 = XEXP (x0, 0);
  goto L3786;

 L2909: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, TFmode))
    {
      operands[3] = x2;
      goto L2910;
    }
  x1 = XEXP (x0, 0);
  goto L3786;

 L2910: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, TFmode))
    {
      operands[4] = x2;
      goto L2911;
    }
  x1 = XEXP (x0, 0);
  goto L3786;

 L2911: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3231 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9 && TARGET_FPU && !TARGET_HARD_QUAD) && 
#line 3233 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
( reload_completed)))
    {
      return gen_split_455 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L3786;

 L3142: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L3143;
    }
  x1 = XEXP (x0, 0);
  goto L3786;

 L3143: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5980 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU
   && ! TARGET_V9) && 
#line 5985 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
( reload_completed
   && sparc_absnegfloat_split_legitimate (operands[0], operands[1]))))
    {
      return gen_split_534 (insn, operands);
    }
 L3148: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6003 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_V9) && 
#line 6007 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
( reload_completed
   && sparc_absnegfloat_split_legitimate (operands[0], operands[1]))))
    {
      return gen_split_535 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L3786;

 L3157: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L3158;
    }
  x1 = XEXP (x0, 0);
  goto L3786;

 L3158: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6068 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU && ! TARGET_V9) && 
#line 6072 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
( reload_completed
   && sparc_absnegfloat_split_legitimate (operands[0], operands[1]))))
    {
      return gen_split_539 (insn, operands);
    }
 L3163: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6099 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_FPU && TARGET_V9 && !TARGET_HARD_QUAD) && 
#line 6103 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
( reload_completed
   && sparc_absnegfloat_split_legitimate (operands[0], operands[1]))))
    {
      return gen_split_540 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L3786;

 L2890: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2943 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(reload_completed
   && (! TARGET_ARCH64
       || (TARGET_FPU
           && ! TARGET_HARD_QUAD)
       || ! fp_register_operand (operands[0], TFmode))))
    {
      return gen_split_445 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L3833;

 L2898: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3006 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
((reload_completed
    && offsettable_memref_p (operands[1])
    && (! TARGET_ARCH64
	|| ! TARGET_HARD_QUAD
	|| ! fp_register_operand (operands[0], TFmode)))))
    {
      return gen_split_447 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L3786;

 L2893: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_zero_operand (x1, TFmode))
    {
      operands[1] = x1;
      goto L2894;
    }
  x1 = XEXP (x0, 0);
  goto L3787;

 L2894: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2978 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(reload_completed))
    {
      return gen_split_446 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L3787;

 L2901: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, TFmode))
    {
      operands[1] = x1;
      goto L2902;
    }
  goto ret0;

 L2902: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3041 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
((reload_completed
    && offsettable_memref_p (operands[0])
    && (! TARGET_ARCH64
	|| ! TARGET_HARD_QUAD
	|| ! fp_register_operand (operands[1], TFmode)))))
    {
      return gen_split_448 (insn, operands);
    }
  goto ret0;
 ret0:
  return 0;
}

rtx
split_insns (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  switch (GET_CODE (x0))
    {
    case PARALLEL:
      goto L3748;
    case SET:
      goto L2759;
    default:
     break;
   }
  goto ret0;

 L3748: ATTRIBUTE_UNUSED_LABEL
  return split_1 (x0, insn);

 L2759: ATTRIBUTE_UNUSED_LABEL
  return split_2 (x0, insn);
 ret0:
  return 0;
}

rtx
peephole2_insns (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *_pmatch_len ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  if (peep2_current_count >= 2)
    goto L3170;
  goto ret0;

 L3170: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x0) == SET)
    goto L3171;
  goto ret0;

 L3171: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L3837;
    case SFmode:
      goto L3840;
    default:
      break;
    }
  goto ret0;

 L3837: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L3172;
    }
 L3838: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L3186;
    }
 L3839: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L3194;
    }
 L3842: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L3218;
    }
 L3843: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L3226;
    }
  goto ret0;

 L3172: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3173;
  x1 = XEXP (x0, 0);
  goto L3838;

 L3173: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3174;
  x1 = XEXP (x0, 0);
  goto L3838;

 L3174: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3175;
    }
  x1 = XEXP (x0, 0);
  goto L3838;

 L3175: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L3846;
  x1 = XEXP (x0, 0);
  goto L3838;

 L3846: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x2, 0) == 0LL)
    goto L3848;
  x1 = XEXP (x0, 0);
  goto L3838;

 L3848: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7204 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9
   && mems_ok_for_ldd_peep (operands[0], operands[1], NULL_RTX)))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_562 (insn, operands);
      if (tem != 0)
        return tem;
    }
 L3849: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7215 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(TARGET_V9
   && mems_ok_for_ldd_peep (operands[1], operands[0], NULL_RTX)))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_563 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L3838;

 L3186: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (memory_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L3187;
    }
  x1 = XEXP (x0, 0);
  goto L3839;

 L3187: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3188;
  x1 = XEXP (x0, 0);
  goto L3839;

 L3188: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3189;
    }
  x1 = XEXP (x0, 0);
  goto L3839;

 L3189: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L3190;
    }
  x1 = XEXP (x0, 0);
  goto L3839;

 L3190: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7226 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(registers_ok_for_ldd_peep (operands[0], operands[2]) 
   && mems_ok_for_ldd_peep (operands[1], operands[3], operands[0])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_564 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L3839;

 L3194: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L3195;
    }
  x1 = XEXP (x0, 0);
  goto L3842;

 L3195: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3196;
  x1 = XEXP (x0, 0);
  goto L3842;

 L3196: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3197;
    }
  x1 = XEXP (x0, 0);
  goto L3842;

 L3197: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L3198;
    }
  x1 = XEXP (x0, 0);
  goto L3842;

 L3198: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7238 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(registers_ok_for_ldd_peep (operands[1], operands[3]) 
   && mems_ok_for_ldd_peep (operands[0], operands[2], NULL_RTX)))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_565 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L3842;

 L3218: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L3850;
  x1 = XEXP (x0, 0);
  goto L3843;

 L3850: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L3219;
    }
 L3851: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L3251;
    }
  x1 = XEXP (x0, 0);
  goto L3843;

 L3219: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3220;
  x1 = XEXP (x0, 1);
  goto L3851;

 L3220: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3221;
    }
  x1 = XEXP (x0, 1);
  goto L3851;

 L3221: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L3222;
    }
  x1 = XEXP (x0, 1);
  goto L3851;

 L3222: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7274 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(registers_ok_for_ldd_peep (operands[2], operands[0]) 
  && mems_ok_for_ldd_peep (operands[3], operands[1], operands[0])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_568 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  goto L3851;

 L3251: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3252;
  x1 = XEXP (x0, 0);
  goto L3843;

 L3252: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 100)
    goto L3253;
  x1 = XEXP (x0, 0);
  goto L3843;

 L3253: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == COMPARE)
    goto L3254;
  x1 = XEXP (x0, 0);
  goto L3843;

 L3254: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3255;
    }
  x1 = XEXP (x0, 0);
  goto L3843;

 L3255: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 7328 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
((rtx_equal_p (operands[2], operands[0])
    || rtx_equal_p (operands[2], operands[1]))
    && ! SPARC_FP_REG_P (REGNO (operands[0]))
    && ! SPARC_FP_REG_P (REGNO (operands[1]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_572 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L3843;

 L3226: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L3227;
    }
  goto ret0;

 L3227: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3228;
  goto ret0;

 L3228: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3229;
    }
  goto ret0;

 L3229: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L3230;
    }
  goto ret0;

 L3230: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7286 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(registers_ok_for_ldd_peep (operands[3], operands[1]) 
  && mems_ok_for_ldd_peep (operands[2], operands[0], NULL_RTX)))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_569 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L3840: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L3202;
    }
 L3841: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L3210;
    }
 L3844: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L3234;
    }
 L3845: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L3242;
    }
  goto ret0;

 L3202: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (memory_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L3203;
    }
  x1 = XEXP (x0, 0);
  goto L3841;

 L3203: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3204;
  x1 = XEXP (x0, 0);
  goto L3841;

 L3204: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3205;
    }
  x1 = XEXP (x0, 0);
  goto L3841;

 L3205: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L3206;
    }
  x1 = XEXP (x0, 0);
  goto L3841;

 L3206: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7250 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(registers_ok_for_ldd_peep (operands[0], operands[2]) 
   && mems_ok_for_ldd_peep (operands[1], operands[3], operands[0])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_566 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L3841;

 L3210: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L3211;
    }
  x1 = XEXP (x0, 0);
  goto L3844;

 L3211: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3212;
  x1 = XEXP (x0, 0);
  goto L3844;

 L3212: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3213;
    }
  x1 = XEXP (x0, 0);
  goto L3844;

 L3213: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L3214;
    }
  x1 = XEXP (x0, 0);
  goto L3844;

 L3214: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7262 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(registers_ok_for_ldd_peep (operands[1], operands[3]) 
  && mems_ok_for_ldd_peep (operands[0], operands[2], NULL_RTX)))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_567 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L3844;

 L3234: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (memory_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L3235;
    }
  x1 = XEXP (x0, 0);
  goto L3845;

 L3235: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3236;
  x1 = XEXP (x0, 0);
  goto L3845;

 L3236: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3237;
    }
  x1 = XEXP (x0, 0);
  goto L3845;

 L3237: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L3238;
    }
  x1 = XEXP (x0, 0);
  goto L3845;

 L3238: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7299 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(registers_ok_for_ldd_peep (operands[2], operands[0]) 
  && mems_ok_for_ldd_peep (operands[3], operands[1], operands[0])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_570 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L3845;

 L3242: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L3243;
    }
  goto ret0;

 L3243: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3244;
  goto ret0;

 L3244: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3245;
    }
  goto ret0;

 L3245: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L3246;
    }
  goto ret0;

 L3246: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7311 "../../gcc-4.4.7/gcc/config/sparc/sparc.md"
(registers_ok_for_ldd_peep (operands[3], operands[1]) 
  && mems_ok_for_ldd_peep (operands[2], operands[0], NULL_RTX)))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_571 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;
 ret0:
  return 0;
}

