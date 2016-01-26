/* Prototypes of target machine functions, Lattice Mico32 architecture.
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

extern int lm32_return_in_memory (tree type);
extern void lm32_declare_object (FILE *stream, char *name, char *init_string, 
                                 char *final_string, int size);
extern int symbolic_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED);
extern int register_or_zero_operand (rtx op, enum machine_mode mode);
extern int register_or_K_operand (rtx op, enum machine_mode mode);
extern int constant_K_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED);
extern int register_or_L_operand (rtx op, enum machine_mode mode);
extern int constant_L_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED);
extern int register_or_memory_operand (rtx op, enum machine_mode mode);
extern int register_operand (rtx op, enum machine_mode mode);
extern int const_ok_for_base_offset (rtx op, enum machine_mode mode);
extern void lm32_expand_prologue (void);
extern void lm32_expand_epilogue (void);
extern HOST_WIDE_INT lm32_compute_frame_size (int size);
extern void lm32_print_operand (FILE *file, rtx op, int letter);
extern void lm32_print_operand_address (FILE *file, rtx addr);
extern rtx lm32_function_arg (CUMULATIVE_ARGS cum, enum machine_mode mode,
                              tree type, int named);
extern void lm32_override_options (void);
extern HOST_WIDE_INT lm32_compute_initial_elimination_offset (int from, 
                                                             int to);
extern int lm32_can_use_return (void);
extern rtx lm32_return_addr_rtx (int count, rtx frame);
#ifdef RTX_CODE
extern void gen_int_relational (enum rtx_code code, rtx result, rtx cmp0, 
                                rtx cmp1, rtx destination);
#endif
extern int lm32_expand_block_move (rtx *);
extern int nonpic_symbol_mentioned_p (rtx);
extern rtx lm32_legitimize_pic_address (rtx, enum machine_mode, rtx);
