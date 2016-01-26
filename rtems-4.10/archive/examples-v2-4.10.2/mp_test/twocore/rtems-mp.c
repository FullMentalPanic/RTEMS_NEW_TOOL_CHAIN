/*
 RTEMS Multiprocessor Example. Intended for 2 LEON3 CPUs.
 *
 * Aeroflex Gaisler 2009,
 * Daniel Hellstr�m
 */

/* Set using compiler options */
#ifndef NODE_NUMBER
#define NODE_NUMBER 1
#endif

#include <rtems.h>
/* configuration information */

#define CONFIGURE_INIT

#include <bsp.h> /* for device driver prototypes */

rtems_task Init( rtems_task_argument argument);	/* forward declaration needed */

/* configuration information */

#define CONFIGURE_APPLICATION_NEEDS_CONSOLE_DRIVER
#define CONFIGURE_APPLICATION_NEEDS_CLOCK_DRIVER

#define CONFIGURE_MAXIMUM_TASKS             10

/*#define CONFIGURE_INIT_TASK_ATTRIBUTES    RTEMS_GLOBAL*/

/* Give each Init task a unique name */
#define CONFIGURE_INIT_TASK_NAME          rtems_build_name('U', 'I', '0'+NODE_NUMBER, ' ')
#define CONFIGURE_RTEMS_INIT_TASKS_TABLE

#define CONFIGURE_EXTRA_TASK_STACKS         (64 * RTEMS_MINIMUM_STACK_SIZE)

/* MP Config */
#define CONFIGURE_MP_APPLICATION
#define CONFIGURE_MP_NODE_NUMBER NODE_NUMBER
#define CONFIGURE_MP_MAXIMUM_NODES 2
#define CONFIGURE_MP_MAXIMUM_GLOBAL_OBJECTS 32
#define CONFIGURE_MP_MAXIMUM_PROXIES 32
#define CONFIGURE_MAXIMUM_SEMAPHORES 32

#include <rtems/confdefs.h>

#if defined(RTEMS_DRVMGR_STARTUP) /* if --drvmgr was given to configure */
 /* Add Timer and UART Driver for this example */
 #ifdef CONFIGURE_APPLICATION_NEEDS_CLOCK_DRIVER
  #define CONFIGURE_DRIVER_AMBAPP_GAISLER_GPTIMER
 #endif
 #ifdef CONFIGURE_APPLICATION_NEEDS_CONSOLE_DRIVER
  #define CONFIGURE_DRIVER_AMBAPP_GAISLER_APBUART
 #endif

  #include <drvmgr/ambapp_bus.h>
  /* OPTIONAL FOR GRLIB SYSTEMS WITH GPTIMER AS SYSTEM CLOCK TIMER */

 #if 0
  /* AMP System [0] */
  struct drvmgr_key grlib_drv_res_gptimer0_0[] =
  {
  	/* Use only the first Timer on the first CPU-Node */
  	{"timerStart", KEY_TYPE_INT, {(unsigned int)0}},
  	{"timerCnt", KEY_TYPE_INT, {(unsigned int)1}},
  	/* Select which timer should be used as the system clock (default is 0) */
  	{"clockTimer", KEY_TYPE_INT, {(unsigned int)0}},
  	KEY_EMPTY
  };

  /* AMP System [1] */
  struct drvmgr_key grlib_drv_res_gptimer0_1[] =
  {
  	/* Use all Timers except Timer[0] on the second CPU-Node
  	 */
  	{"timerStart", KEY_TYPE_INT, {(unsigned int)1}},
  	/* Select which timer should be used as the system clock (default is 0) */
  	{"clockTimer", KEY_TYPE_INT, {(unsigned int)0}},
  	KEY_EMPTY
  };

  /* APBUART0 */
  struct drvmgr_key grlib_drv_res_apbuart0[] =
  {
  	{"mode", KEY_TYPE_INT, {(unsigned int)0}},
  /*
   	{"syscon", KEY_TYPE_INT, {(unsigned int)1}}, // Set Interrupt mode
  */
  	KEY_EMPTY
  };
  /* APBUART1 */
  struct drvmgr_key grlib_drv_res_apbuart1[] =
  {
  	{"mode", KEY_TYPE_INT, {(unsigned int)0}},
  /*
  	{"syscon", KEY_TYPE_INT, {(unsigned int)1}}, // Set Interrupt mode
  */
  	KEY_EMPTY
  };

  /* Use GPTIMER core 4 (not present in most systems) as a high
   * resoulution timer (configuration not used in this example)
   */
  struct drvmgr_key grlib_drv_res_gptimer4[] =
  {
  	{"prescaler", KEY_TYPE_INT, {(unsigned int)4}},
  	KEY_EMPTY
  };
#endif

  /* This is where device resources are separated between the AMP nodes.
   * By setting a NULL of a device's driver resources we tell the Driver
   * Manager to ignore a device (AMBA device in this case).
   *
   * It is expected that the CPU nodes shared one GPTIMER core,
   * and are assigned one UART for system console per system
   *
   * Default (when #if 0) is to have SYSTEM[N] using GPTIMER[0],Timer[N] and
   * APBUART[N] as system/debug console.
   */
  struct drvmgr_drv_res grlib_drv_resources[] =
  {
#if 0
#if (NODE_NUMBER == 1)
  	/* First AMP Node use GPTIMER[0],Timer[0]] */
  	{DRIVER_AMBAPP_GAISLER_GPTIMER_ID, 0, &grlib_drv_res_gptimer0_0[0]},
  	{DRIVER_AMBAPP_GAISLER_GPTIMER_ID, 1, NULL}, /* Do not use timers on this GPTIMER core */
   	{DRIVER_AMBAPP_GAISLER_APBUART_ID, 0, &grlib_drv_res_apbuart0[0]},
   	{DRIVER_AMBAPP_GAISLER_APBUART_ID, 1, NULL}, /* Let AMP[1] use this UART */
#else
  	/* Second AMP Node use GPTIMER[0],Timer[1] */
  	{DRIVER_AMBAPP_GAISLER_GPTIMER_ID, 0, &grlib_drv_res_gptimer0_1[0]},
  	{DRIVER_AMBAPP_GAISLER_GPTIMER_ID, 1, NULL}, /* Do not use timers on this GPTIMER core */
   	{DRIVER_AMBAPP_GAISLER_APBUART_ID, 0, NULL}, /* Let AMP[0] use this UART */
   	{DRIVER_AMBAPP_GAISLER_APBUART_ID, 1, &grlib_drv_res_apbuart1[0]},
#endif
#endif
  	RES_EMPTY
  };

 #include <drvmgr/drvmgr_confdefs.h>
#endif

#include <stdio.h>
#include <stdlib.h>

/*
#define SHM_START 0x40000000
#define SHM_SIZE 0x1000
*/
extern void taskA(rtems_task_argument argument);

rtems_id taskAid, semAid, semBid;
rtems_name taskAname, semAname, semBname;

extern int LEON3_Cpu_Index;
int nodeid;

/* Override default SHM configuration */
shm_config_table BSP_shm_cfgtbl =
{
	.base = (void *)SHM_START,
	.length = SHM_SIZE
};

#define TYPE_TASK 1
#define TYPE_SEM 2


static __inline__ unsigned long leon3_geterr()
{
	unsigned long retval;
	__asm__ __volatile__("mov %%err, %0\n\t":
			     "=r"(retval):);

	return retval;
}

void wait_global_id(int type, uint32_t name, int timeout, char *printname, rtems_id *id)
{
	rtems_status_code status;

	printf("NODE[%d]: Waiting for %s to be created (0x%x)\n", nodeid, printname, (unsigned int)name);

	/* Loop until global ID is created */
	do {
		if ( type == TYPE_TASK ) {
			status = rtems_task_ident(
				name,
				RTEMS_SEARCH_ALL_NODES,
				id
			);
		} else {
			status = rtems_semaphore_ident(
				name,
				RTEMS_SEARCH_ALL_NODES,
				id
			);
		}
		if ( status != RTEMS_SUCCESSFUL ) {
			rtems_task_wake_after(2);
			timeout -= 2;
		}
	} while ( (status != RTEMS_SUCCESSFUL) && (timeout>0) ) ;

	if ( status != RTEMS_SUCCESSFUL ) {
		printf("NODE[%d]: Failed to get %s ID: %d\n", nodeid, printname, status);
		exit(-1);
	}
}

rtems_task Init(
  rtems_task_argument ignored
)
{
	rtems_status_code status;
  long errorreg;
  errorreg =0;

	nodeid = LEON3_Cpu_Index;

	printf("NODE[%d]: is Up!\n", nodeid);

	semAname = rtems_build_name( 'S', 'E', 'M', 'A' );
	semBname = rtems_build_name( 'S', 'E', 'M', 'B' );
	taskAname = rtems_build_name( 'T', 'S', 'K', 'A' );

	if ( nodeid == 1 ) {
		/* CPU1 */


		printf("Creating Global Task A\n");

		status = rtems_task_create (
			taskAname,
			1,
			RTEMS_MINIMUM_STACK_SIZE * 4,
			RTEMS_NO_PREEMPT,
			RTEMS_GLOBAL,
			&taskAid
			);
		if ( status != RTEMS_SUCCESSFUL ) {
			printf("Failed to create taskA, status: %d\n", status);
			exit(-1);
		}

		/* SemaphoreA created with count = 0 (will lock first time to semaphore obtain) */
		printf("Creating Global Semaphore A\n");
		status = rtems_semaphore_create(
			semAname,
			0,
			RTEMS_GLOBAL,
			RTEMS_NO_PRIORITY,
			&semAid);
		if ( status != RTEMS_SUCCESSFUL ) {
			printf("Failed to create semaphore A, status: %d\n", status);
			exit(-1);
		}

		/* SemaphoreB created with count = 0 (will lock first time to semaphore obtain) */
		printf("Creating Global Semaphore B\n");
		status = rtems_semaphore_create(
			semBname,
			0,
			RTEMS_GLOBAL,
			RTEMS_NO_PRIORITY,
			&semBid);
		if ( status != RTEMS_SUCCESSFUL ) {
			printf("Failed to create semaphore B, status: %d\n", status);
			exit(-1);
		}

		printf( "NODE[%d]: Obtaining Semaphore A (Waiting for CPU0)\n", nodeid);
		status = rtems_semaphore_obtain(semAid, RTEMS_WAIT, RTEMS_NO_TIMEOUT);
		if ( status != RTEMS_SUCCESSFUL ) {
			printf("NODE[%d]: Failed obtaining semaphore: %d\n", nodeid, status);
			exit(-1);
		}

		/* Starting Task A */
		status = rtems_task_start(taskAid, taskA, 0);

		/* Removing Init Task */
		rtems_task_delete(RTEMS_SELF);

		/* Failed to delete task */
		exit(-1);
	} else {
		/* CPU0 */
		wait_global_id(TYPE_SEM, semAname, 500, "Semaphore A", &semAid);
		wait_global_id(TYPE_SEM, semBname, 100, "Semaphore B", &semBid);
		wait_global_id(TYPE_TASK, taskAname, 1000, "Task A", &taskAid);
		sleep(5);

		printf( "NODE[%d]: Releasing Semaphore A\n", nodeid);
		status = rtems_semaphore_release(semAid);
		if ( status != RTEMS_SUCCESSFUL ) {
			printf( "NODE[%d]: Failed Releasing Semaphore A: %d\n", nodeid, status);
			exit(-1);
		}

		/* Get Semaphore B (TaskA has been started) */
		printf( "NODE[%d]: Getting Semaphore B\n", nodeid);
		status = rtems_semaphore_obtain(semBid, RTEMS_WAIT, RTEMS_NO_TIMEOUT);
		if ( status != RTEMS_SUCCESSFUL ) {
			printf("NODE[%d]: Failed obtaining semaphore: %d\n", nodeid, status);
			exit(-1);
		}

		/* Wait for taskA on CPU1 to get suspended */
		printf( "NODE[%d]: Waiting for taskA to suspend\n", nodeid);
		sleep(5);
#if 0
		while ( (status = rtems_task_is_suspended(taskAid)) == RTEMS_SUCCESSFUL )
			rtems_task_wake_after(1);
		if ( status != RTEMS_ALREADY_SUSPENDED ) {
			printf("NODE[%d]: Failed to get suspendded state info about taskA: %d\n", nodeid, status);
			exit(-1);
		}

		/* Okey, taskA is suspended. Waiting to make is obvious that
		 * taskA is asleep.
		 */
		printf( "NODE[%d]: Sleeping 5s\n", nodeid);
		sleep(5);
#endif

		printf( "NODE[%d]: resuming taskA\n", nodeid);
		status = rtems_task_resume(taskAid);
		if ( status != RTEMS_SUCCESSFUL ) {
			printf("NODE[%d]: Failed resuming taskA: %d\n", nodeid, status);
			exit(-1);
		}
	}

	while ( 1 ) {
    errorreg = leon3_geterr();
    printf( "error = %lx\n",errorreg);

		printf( "NODE[%d]: SLEEPING 5s\n", nodeid);
		sleep(5);
	}
}

/* Executing on CPU1 */
void taskA(rtems_task_argument argument)
{
	rtems_status_code status;

	printf("NODE[%d]: TaskA started\n", nodeid);

	printf("NODE[%d]: Releasing SemB, then going into sleep\n", nodeid);

	status = rtems_semaphore_release(semBid);
	if ( status != RTEMS_SUCCESSFUL ) {
		printf( "NODE[%d]: Failed Releasing Semaphore B: %d\n", nodeid, status);
		exit(-1);
	}

	/* Let CPU0 wake this thread with a task */
	printf("NODE[%d]: Suspending taskA\n", nodeid);
	status = rtems_task_suspend(RTEMS_SELF);
	if ( status != RTEMS_SUCCESSFUL ) {
		printf( "NODE[%d]: Failed suspending taskA: %d\n", nodeid, status);
		exit(-1);
	}

	/* We must have been woken up by CPU0 */
	printf("NODE[%d]: taskA Woken up!\n", nodeid);

	while ( 1 ) {
		printf( "NODE[%d]: taskA SLEEPING 5s\n", nodeid);
		sleep(5);
	}
}
