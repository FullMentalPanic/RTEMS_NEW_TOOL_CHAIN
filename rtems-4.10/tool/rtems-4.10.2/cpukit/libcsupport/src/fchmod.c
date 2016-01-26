/*
 *  fchmod() - POSIX 1003.1b 5.6.4 - Change File Modes
 *
 *  COPYRIGHT (c) 1989-2011.
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

#include <unistd.h>
#include <sys/stat.h>
#include <errno.h>

#include <rtems.h>
#include <rtems/libio.h>
#include <rtems/libio_.h>
#include <rtems/seterr.h>

int fchmod(
  int       fd,
  mode_t    mode
)
{
  rtems_libio_t *iop;

  rtems_libio_check_fd( fd );
  iop = rtems_libio_iop( fd );
  rtems_libio_check_is_open(iop);

  /*
   *  Now process the fchmod().
   */
  if ( !iop->handlers->fchmod_h )
    rtems_set_errno_and_return_minus_one( ENOTSUP );

  return (*iop->pathinfo.handlers->fchmod_h)( &iop->pathinfo, mode );
}
