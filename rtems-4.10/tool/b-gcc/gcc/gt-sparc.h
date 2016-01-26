/* Type information for config/sparc/sparc.c.
   Copyright (C) 2004, 2007 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

/* This file is machine generated.  Do not edit.  */

void
gt_ggc_mx_machine_function (void *x_p)
{
  struct machine_function * const x = (struct machine_function *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_S ((*x).some_ld_name);
    }
}

void
gt_pch_nx_machine_function (void *x_p)
{
  struct machine_function * const x = (struct machine_function *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_16machine_function, gt_ggc_e_16machine_function))
    {
      gt_pch_n_S ((*x).some_ld_name);
    }
}

void
gt_pch_p_16machine_function (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct machine_function * const x ATTRIBUTE_UNUSED = (struct machine_function *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).some_ld_name), cookie);
}

/* GC roots.  */

const struct ggc_root_tab gt_ggc_r_gt_sparc_h[] = {
  {
    &sparc_addr_list,
    1,
    sizeof (sparc_addr_list),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  {
    &sparc_addr_diff_list,
    1,
    sizeof (sparc_addr_diff_list),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  {
    &sparc_tls_symbol,
    1,
    sizeof (sparc_tls_symbol),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  {
    &global_offset_table,
    1,
    sizeof (global_offset_table),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  {
    &pic_helper_symbol,
    1,
    sizeof (pic_helper_symbol),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  LAST_GGC_ROOT_TAB
};

const struct ggc_root_tab gt_pch_rs_gt_sparc_h[] = {
  { &pic_helper_emitted_p, 1, sizeof (pic_helper_emitted_p), NULL, NULL },
  { &pic_helper_symbol_name, 1, sizeof (pic_helper_symbol_name), NULL, NULL },
  { &struct_value_alias_set, 1, sizeof (struct_value_alias_set), NULL, NULL },
  { &sparc_sr_alias_set, 1, sizeof (sparc_sr_alias_set), NULL, NULL },
  LAST_GGC_ROOT_TAB
};

