/**
 * @file rtems/score/cpuopts.h
 */

/* target cpu dependent options file */
/* automatically generated -- DO NOT EDIT!! */
#ifndef _RTEMS_SCORE_CPUOPTS_H
#define _RTEMS_SCORE_CPUOPTS_H

/* if RTEMS_DEBUG is enabled */
/* #undef RTEMS_DEBUG */

/* if itron api is supported */
/* #undef RTEMS_ITRON_API */

/* if multiprocessing is enabled */
#define RTEMS_MULTIPROCESSING 1

/* if using newlib */
#define RTEMS_NEWLIB 1

/* if posix api is supported */
#define RTEMS_POSIX_API 1

/* if networking is enabled */
#define RTEMS_NETWORKING 1

/* RTEMS version string */
#define RTEMS_VERSION "4.10.2"

/* disable nanosecond granularity for statistics */
/* #undef __RTEMS_USE_TICKS_FOR_STATISTICS__ */

/* disable nanosecond granularity for cpu usage statistics */
/* #undef __RTEMS_USE_TICKS_CPU_USAGE_STATISTICS__ */

/* disable nanosecond granularity for period statistics */
/* #undef __RTEMS_USE_TICKS_RATE_MONOTONIC_STATISTICS__ */

/* disable inlining _Thread_Enable_dispatch */
/* #undef __RTEMS_DO_NOT_INLINE_THREAD_ENABLE_DISPATCH__ */

/* disable inlining _Thread_Enable_dispatch */
/* #undef __RTEMS_DO_NOT_INLINE_CORE_MUTEX_SEIZE__ */

/* disable inlining _Thread_queue_Enqueue_priority */
/* #undef __RTEMS_DO_NOT_UNROLL_THREADQ_ENQUEUE_PRIORITY__ */

/* disable strict order mutex */
/* #undef __RTEMS_STRICT_ORDER_MUTEX__ */

/* Define to 1 if ada/gnat bindings are built-in */
/* #undef __RTEMS_ADA__ */

/* major version portion of an RTEMS release */
#define __RTEMS_MAJOR__ 4

/* minor version portion of an RTEMS release */
#define __RTEMS_MINOR__ 10

/* revision version portion of an RTEMS release */
#define __RTEMS_REVISION__ 2

#endif /* _RTEMS_SCORE_CPUOPTS_H */
