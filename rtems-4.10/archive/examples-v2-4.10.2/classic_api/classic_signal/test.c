/*
 *  Classic API Signal to Task from ISR
 *
 *  COPYRIGHT (c) 1989-2007.
 *  On-Line Applications Research Corporation (OAR).
 *
 *  The license and distribution terms for this file may be
 *  found in the file LICENSE in this distribution or at
 *  http://www.rtems.com/license/LICENSE.
 *
 *  $Id: test.c,v 1.1.1.1 2009/08/06 20:25:58 joel Exp $
 */

#include <bsp.h>
#include "../../testmacros.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

volatile bool signal_sent;
volatile bool signal_processed;

rtems_id main_task;

void signal_handler(
  rtems_signal_set signals
)
{
  signal_processed = TRUE;
}

rtems_timer_service_routine test_signal_from_isr(
  rtems_id  timer,
  void     *arg
)
{
  rtems_status_code     status;

  status = rtems_signal_send( main_task, 0x0a0b0c0d );

  signal_sent = TRUE;
}

rtems_task Init(
  rtems_task_argument argument
)
{
  rtems_status_code     status;
  rtems_id              timer;
  rtems_interval        start;
  rtems_interval        now;

  puts( "\n\n*** SIGNAL FROM TST TEST ***" );

  main_task = rtems_task_self();

  /*
   *  Timer used in multiple ways
   */
  status = rtems_timer_create( 1, &timer );
  assert( status == RTEMS_SUCCESSFUL );

  /*
   *  Get starting time
   */
  status = rtems_clock_get( RTEMS_CLOCK_GET_TICKS_SINCE_BOOT, &start );
  assert( status == RTEMS_SUCCESSFUL );

  status = rtems_signal_catch( signal_handler, RTEMS_DEFAULT_MODES );
  assert( status == RTEMS_SUCCESSFUL );
  puts( "rtems_signal_catch - handler installed" );

  /*
   * Test Signal from ISR
   */
  signal_sent = FALSE;

  status = rtems_timer_fire_after( timer, 50, test_signal_from_isr, NULL );
  assert( status == RTEMS_SUCCESSFUL );

  while (1) {
    status = rtems_clock_get( RTEMS_CLOCK_GET_TICKS_SINCE_BOOT, &now );
    assert( status == RTEMS_SUCCESSFUL );
    if ( (now-start) > 100 ) {
      puts( "Signal from ISR did not get processed\n" );
      exit( 0 );
    }
    if ( signal_processed )
      break;
  }

  puts( "Signal sent from ISR has been processed" ); 
  puts( "*** END OF SIGNAL FROM TSR TEST ***" );
  exit( 0 );
}

/* configuration information */

#define CONFIGURE_APPLICATION_NEEDS_CONSOLE_DRIVER
#define CONFIGURE_APPLICATION_NEEDS_CLOCK_DRIVER

#define CONFIGURE_RTEMS_INIT_TASKS_TABLE

#define CONFIGURE_MAXIMUM_TASKS             1
#define CONFIGURE_MAXIMUM_TIMERS            1

#define CONFIGURE_INIT

#include <rtems/confdefs.h>
