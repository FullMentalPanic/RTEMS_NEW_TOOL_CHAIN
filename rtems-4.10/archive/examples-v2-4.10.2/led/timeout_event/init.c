/*
 *  COPYRIGHT (c) 1989-2009.
 *  On-Line Applications Research Corporation (OAR).
 *
 *  The license and distribution terms for this file may be
 *  found in the file LICENSE in this distribution or at
 *  http://www.rtems.com/license/LICENSE.
 *
 *  $Id: init.c,v 1.3 2009/12/17 20:09:11 humph Exp $
 */

#include <bsp.h>
#include <stdint.h>
#include <stdio.h>

#include "../led.h"

rtems_task Init(
  rtems_task_argument argument
)
{
  rtems_status_code status;
  rtems_event_set   events;
  uint32_t          count = 0;

  puts( "\n\n*** LED BLINKER -- event receive timeout ***" );

  LED_INIT();

  for (count=0; ; count++) {

    status = rtems_event_receive( RTEMS_EVENT_1,
      RTEMS_DEFAULT_OPTIONS, rtems_clock_get_ticks_per_second(), &events );
    if ( status != RTEMS_TIMEOUT )
      fputs( "receive did not timeout\n", stderr );

    if ( (count % 2) == 0 )
      LED_OFF();
    else
      LED_ON();

  }

  status = rtems_task_delete( RTEMS_SELF );
}

/**************** START OF CONFIGURATION INFORMATION ****************/

#define CONFIGURE_INIT
#define CONFIGURE_APPLICATION_NEEDS_CONSOLE_DRIVER
#define CONFIGURE_APPLICATION_NEEDS_CLOCK_DRIVER

#define CONFIGURE_MAXIMUM_TASKS             1

#define CONFIGURE_RTEMS_INIT_TASKS_TABLE

#define CONFIGURE_EXTRA_TASK_STACKS         (3 * RTEMS_MINIMUM_STACK_SIZE)

#include <rtems/confdefs.h>

/****************  END OF CONFIGURATION INFORMATION  ****************/
