/*
 *  COPYRIGHT (c) 1989-2007.
 *  On-Line Applications Research Corporation (OAR).
 *
 *  The license and distribution terms for this file may be
 *  found in the file LICENSE in this distribution or at
 *  http://www.rtems.com/license/LICENSE.
 *
 *  $Id$
 */

#if HAVE_CONFIG_H
#include "config.h"
#endif

#include <rtems/itron.h>

#include <rtems/itron/sysmgmt.h>

/*
 *  def_exc - Define Exception Handler
 */

ER def_exc(
  UINT    exckind,
  T_DEXC *pk_dexc
)
{
  return E_OK;
}
