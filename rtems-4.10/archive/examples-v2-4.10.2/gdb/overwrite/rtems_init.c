/*
 *  Wrapper for Overwrite main().
 *
 *  $Id: rtems_init.c,v 1.1 2009/12/14 13:07:19 joel Exp $
 */

#include <bsp.h>

int main( int, char ** );

rtems_task Init(
  rtems_task_argument ignored
)
{
  main( 0, NULL );
  exit( 0 );      /* just in case */
}

/* configuration information */

/* NOTICE: the clock driver is explicitly disabled */
#define CONFIGURE_APPLICATION_DOES_NOT_NEED_CLOCK_DRIVER
#define CONFIGURE_APPLICATION_NEEDS_CONSOLE_DRIVER

#define CONFIGURE_RTEMS_INIT_TASKS_TABLE
#define CONFIGURE_MAXIMUM_TASKS 1

#define CONFIGURE_INIT

#include <rtems/confdefs.h>

/* end of file */
