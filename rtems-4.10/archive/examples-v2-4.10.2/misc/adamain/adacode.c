/* 
 *  COPYRIGHT (c) 1989-2009.
 *  On-Line Applications Research Corporation (OAR).
 *
 *  The license and distribution terms for this file may be found in
 *  the file LICENSE in this distribution or at
 *  http://www.rtems.com/license/LICENSE.
 *
 *  $Id: adacode.c,v 1.1 2009/12/10 19:13:40 joel Exp $
 */

#include <stdio.h>

int gnat_main(
  int    argc,
  char **argv
)
{
  int i;
  printf( "gnat_main: argc=%d\n", argc );
  for (i=0 ; i<argc ; i++ )
    printf( "argv[%d]= %s\n", i, argv[i] );
  return 0;
}
