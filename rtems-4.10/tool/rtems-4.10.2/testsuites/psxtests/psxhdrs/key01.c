/*
 *  This test file is used to verify that the header files associated with
 *  invoking this function are correct.
 *
 *  COPYRIGHT (c) 1989-2009.
 *  On-Line Applications Research Corporation (OAR).
 *
 *  The license and distribution terms for this file may be
 *  found in the file LICENSE in this distribution or at
 *  http://www.rtems.com/license/LICENSE.
 *
 *  $Id$
 */

#include <pthread.h>

#ifndef _POSIX_THREADS
#error "rtems is supposed to have pthread_key_create"
#endif

void test( void );
void key_destructor( void *argument );

void key_destructor(
  void *argument
)
{
}

void test( void )
{
  pthread_key_t    key;
  int              result;

  result = pthread_key_create( &key, key_destructor );
}
