/* BSP dependent options file */
/* automatically generated -- DO NOT EDIT!! */

#ifndef __BSP_OPTIONS_H
#define __BSP_OPTIONS_H

/* include/bspopts.tmp.  Generated from bspopts.h.in by configure.  */
/* include/bspopts.h.in.  Generated from configure.ac by autoheader.  */

/* If defined, then the BSP Framework will put a non-zero pattern into the
   RTEMS Workspace and C program heap. This should assist in finding code that
   assumes memory starts set to zero. */
#define BSP_DIRTY_MEMORY 0

/* If defined, print a message and wait until pressed before resetting board
   when application exits. */
#define BSP_PRESS_KEY_FOR_RESET 0

/* If defined, reset the board when the application exits. */
#define BSP_RESET_BOARD_AT_EXIT 0

/* The leon3 console driver can operate in either polled or interrupt mode.
   Under the simulator (especially when FAST_UART is defined), polled seems to
   operate better. It is common for a task to print a line (like the end of
   test message) and then exit. In this case, the program returns control to
   the simulator command line before the program has even queued the output to
   the uart. Thus sis has no chance of getting the data out. */
#define CONSOLE_USE_INTERRUPTS 0







/* If defined, speed up the clock ticks while the idle task is running so time
   spent in the idle task is minimized. This significantly reduces the wall
   time required to execute the RTEMS test suites. */
/* #undef SIMSPARC_FAST_IDLE */

#endif /* __BSP_OPTIONS_H */
