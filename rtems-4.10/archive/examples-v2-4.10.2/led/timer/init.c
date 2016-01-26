/*
 *  COPYRIGHT (c) 1989-2009.
 *  On-Line Applications Research Corporation (OAR).
 *
 *  The license and distribution terms for this file may be
 *  found in the file LICENSE in this distribution or at
 *  http://www.rtems.com/license/LICENSE.
 *
 *  $Id: init.c,v 1.3 2009/12/17 22:07:06 humph Exp $
 */

#include <stdio.h>
#include <bsp.h>

#include "../led.h"

volatile int led_do_print;
volatile int led_value;
rtems_id     Timer1;
rtems_id     Timer2;

void LED_Change_Routine( void ) {
  int _led_do_print;
  int _led_value;

  /* technically the following 4 statements are a critical section */
  _led_do_print = led_do_print;
  _led_value = led_value;
  led_do_print = 0;
  led_value = 0;
  
  if ( _led_do_print ) {
    if ( _led_value == 1 )
      LED_OFF();
    else
      LED_ON();
  }
}

rtems_timer_service_routine Timer_Routine( rtems_id id, void *ignored )
{
  rtems_status_code status;

  if ( id == Timer1 )
    led_value = 1;
  else
    led_value = 2;
  led_do_print = 1;

  status = rtems_timer_fire_after(
    id,
    2 * rtems_clock_get_ticks_per_second(),
    Timer_Routine,
    NULL
  );
}

rtems_task Init(
  rtems_task_argument argument
)
{
  rtems_status_code status;

  puts( "\n\n*** LED BLINKER -- timer ***" );

  LED_INIT();

  status = rtems_timer_create(rtems_build_name( 'T', 'M', 'R', '1' ), &Timer1);
  if ( status != RTEMS_SUCCESSFUL )
    fputs( "Timer1 create failed\n", stderr );

  status = rtems_timer_create(rtems_build_name( 'T', 'M', 'R', '2' ), &Timer2);
  if ( status != RTEMS_SUCCESSFUL )
    fputs( "Timer2 create failed\n", stderr );

  Timer_Routine(Timer1, NULL);
  LED_Change_Routine();

  status = rtems_task_wake_after( rtems_clock_get_ticks_per_second() );

  Timer_Routine(Timer2, NULL);
  LED_Change_Routine();

  while (1) {
    status = rtems_task_wake_after( 10 );
    LED_Change_Routine();
  }

  status = rtems_task_delete( RTEMS_SELF );
}


/**************** START OF CONFIGURATION INFORMATION ****************/

#define CONFIGURE_INIT
#define CONFIGURE_APPLICATION_NEEDS_CONSOLE_DRIVER
#define CONFIGURE_APPLICATION_NEEDS_CLOCK_DRIVER

#define CONFIGURE_MAXIMUM_TASKS         1
#define CONFIGURE_MAXIMUM_TIMERS        2

#define CONFIGURE_RTEMS_INIT_TASKS_TABLE

#define CONFIGURE_EXTRA_TASK_STACKS         (3 * RTEMS_MINIMUM_STACK_SIZE)

#include <rtems/confdefs.h>

/****************  END OF CONFIGURATION INFORMATION  ****************/
