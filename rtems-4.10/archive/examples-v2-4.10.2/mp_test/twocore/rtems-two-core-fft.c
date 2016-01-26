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

 #include <drvmgr/drvmgr_confdefs.h>
#endif

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
#define SHM_START 0x40000000
#define SHM_SIZE 0x1000
*/


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

#define FFT_N 16
#define PI 3.14

typedef struct _complex{
  float real;
  float imag;
}complex;

complex complex_multiply(complex a, complex b)
{
	complex c;
	c.real = (a.real * b.real - a.imag * b.imag);
	c.imag = (a.real * b.imag + a.imag * b.real);
	return (c);
}


void FFT(complex *xin)
{
	int f, m, i, k, l, j = 0;
	register int nv2, nm1;
	complex u, w, t;

	nv2 = FFT_N / 2;                  //变址运算，即把自然顺序变成倒位序，采用雷德算法
	nm1 = FFT_N - 1;
	for (i = 0; i < nm1; i++)
	{
		if (i < j)                    //如果i<j,即进行变址
		{
			t = xin[j];
			xin[j] = xin[i];
			xin[i] = t;
		}
		k = nv2;                    //求j的下一个倒位序
		while (k <= j)               //如果k<=j,表示j的最高位为1
		{
			j = j - k;                 //把最高位变成0
			k = k / 2;                 //k/2，比较次高位，依次类推，逐个比较，直到某个位为0
		}
		j = j + k;                   //把0改为1
	}

	{
		int le, lei, ip;                            //FFT运算核，使用蝶形运算完成FFT运算
		f = FFT_N;
		for (l = 1; (f = f / 2) != 1; l++)
			//计算l的值，即计算蝶形级数
			;
		for (m = 1; m <= l; m++)                         // 控制蝶形结级数
		{                                    //m表示第m级蝶形，l为蝶形级总数l=log（2）N
			le = 2 << (m - 1);                         //le蝶形结距离，即第m级蝶形的蝶形结相距le点
			lei = le / 2;                               //同一蝶形结中参加运算的两点的距离
			u.real = 1.0;                             //u为蝶形结运算系数，初始值为1
			u.imag = 0.0;
			w.real = exp(PI / lei);                  //不适用查表法计算sin值和cos值
			w.imag = -sin(PI / lei);
//			w.real = cos_tab(PI / lei);                //w为系数商，即当前系数与前一个系数的商
//			w.imag = -sin_tab(PI / lei);
			for (j = 0; j <= lei - 1; j++)              //控制计算不同种蝶形结，即计算系数不同的蝶形结
			{
				for (i = j; i <= FFT_N - 1; i = i + le)   //控制同一蝶形结运算，即计算系数相同蝶形结
				{
					ip = i + lei;                          //i，ip分别表示参加蝶形运算的两个节点
					t = complex_multiply(xin[ip], u);                //蝶形运算，详见公式
					xin[ip].real = xin[i].real - t.real;
					xin[ip].imag = xin[i].imag - t.imag;
					xin[i].real = xin[i].real + t.real;
					xin[i].imag = xin[i].imag + t.imag;
				}
				u = complex_multiply(u, w);                     //改变系数，进行下一个蝶形运算
			}
		}
	}
}

rtems_task Init(
  rtems_task_argument ignored
)
{
	rtems_status_code status;
  long errorreg;
  errorreg =0;
  complex src[16];
  int i;

  for(i = 0; i < FFT_N; i++)
  {
    src[i].real = i;
    src[i].imag = 0;
  }

	nodeid = LEON3_Cpu_Index;

	printf("NODE[%d]: is Up!\n", nodeid);

  FFT(src);

  for(i=0;i< FFT_N; i++)
  {
    printf("NODE[%d]: real %f imag %f\n",nodeid,src[i].real,src[i].imag);
  }

  exit(0);




}
