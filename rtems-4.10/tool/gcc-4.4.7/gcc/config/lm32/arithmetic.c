/* Fixed-point arithmetic for Lattice Mico32.
   Contributed by Jon Beniston <jon@beniston.com> 
   
   Copyright (C) 2008 Free Software Foundation, Inc.

   This file is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by the
   Free Software Foundation; either version 2, or (at your option) any
   later version.

   In addition to the permissions in the GNU General Public License, the
   Free Software Foundation gives you unlimited permission to link the
   compiled version of this file into combinations with other programs,
   and to distribute those combinations without any restriction coming
   from the use of this file.  (The General Public License restrictions
   do apply in other respects; for example, they cover modification of
   the file, and distribution when not linked into a combine
   executable.)

   This file is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; see the file COPYING.  If not, write to
   the Free Software Foundation, 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

typedef unsigned long UQItype __attribute__ ((mode (QI)));
typedef	long SItype __attribute__ ((mode (SI)));
typedef unsigned long USItype __attribute__ ((mode (SI)));

/* Prototypes */

USItype __mulsi3 (USItype a, USItype b);

USItype __udivmodsi4 (USItype num, USItype den, int modwanted);
SItype __divsi3 (SItype a, SItype b);
SItype __modsi3 (SItype a, SItype b);
USItype __udivsi3 (USItype a, USItype b);
USItype __umodsi3 (USItype a, USItype b);

SItype __ashlsi3 (SItype a, SItype b);
SItype __ashrsi3 (SItype a, SItype b);
USItype __lshrsi3 (USItype a, USItype b);

/* Multiplication */

#ifdef L_mulsi3
USItype 
__mulsi3 (USItype a, USItype b)
{
  USItype result;
    
  result = 0;

  if (a==0)
    return 0;

  while (b!=0)
    {
      if (b & 1)
        result += a;
      a <<= 1;
      b >>= 1;
    }
       
  return result;    
}
#endif

/* Division */

#ifdef L_udivmodsi4
USItype
__udivmodsi4 (USItype num, USItype den, int modwanted)
{
  USItype bit = 1;
  USItype res = 0;

  while (den < num && bit && !(den & (1L<<31)))
    {
      den <<=1;
      bit <<=1;
    }
  while (bit)
    {
      if (num >= den)
	{
	  num -= den;
	  res |= bit;
	}
      bit >>=1;
      den >>=1;
    }
  if (modwanted) 
    return num;
  return res;
}
#endif

#ifdef L_divsi3

static const UQItype __divsi3_table[] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 3, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 4, 2, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 5, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 6, 3, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 7, 3, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 8, 4, 2, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0,
  0, 9, 4, 3, 2, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0,
  0, 10, 5, 3, 2, 2, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0,
  0, 11, 5, 3, 2, 2, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0,
  0, 12, 6, 4, 3, 2, 2, 1, 1, 1, 1, 1, 1, 0, 0, 0,
  0, 13, 6, 4, 3, 2, 2, 1, 1, 1, 1, 1, 1, 1, 0, 0,
  0, 14, 7, 4, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 0,
  0, 15, 7, 5, 3, 3, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1,
};

SItype
__divsi3 (SItype a, SItype b)
{
  int neg = 0;
  SItype res;
  int cfg;

  if (b == 0) 
    {
      /* Raise divide by zero exception */
      int eba;
      __asm__ __volatile__ ("rcsr %0, EBA" : "=r" (eba));
      eba += 32 * 5;
      __asm__ __volatile__ ("mv ea, ra");
      __asm__ __volatile__ ("b %0" : : "r" (eba)); 
    }

  if (((USItype)(a | b)) < 16)
    {
      res = __divsi3_table[(a << 4) + b];
    } 
  else
    {

      if (a < 0)
        {
          a = -a;
          neg = !neg;
        }
    
      if (b < 0)
        {
          b = -b;
          neg = !neg;
        }
    
      __asm__ ("rcsr %0, CFG" : "=r" (cfg));
      if (cfg & 2)
        __asm__ ("divu %0, %1, %2" : "=r" (res) : "r" (a), "r" (b));
      else 
        res = __udivmodsi4 (a, b, 0);
    
      if (neg)
        res = -res;
    }

  return res;
}
#endif

#ifdef L_modsi3
SItype
__modsi3 (SItype a, SItype b)
{
  int neg = 0;
  SItype res;
  int cfg;
  
  if (b == 0) 
    {
      /* Raise divide by zero exception */
      int eba, sr;
      /* Save interrupt enable */
      __asm__ __volatile__ ("rcsr %0, IE" : "=r" (sr));
      sr = (sr & 1) << 1;
      __asm__ __volatile__ ("wcsr IE, %0" : : "r" (sr));
      /* Branch to exception handler */
      __asm__ __volatile__ ("rcsr %0, EBA" : "=r" (eba));
      eba += 32 * 5;
      __asm__ __volatile__ ("mv ea, ra");
      __asm__ __volatile__ ("b %0" : : "r" (eba)); 
    }
  
  if (a < 0)
    {
      a = -a;
      neg = 1;
    }

  if (b < 0)
    b = -b;

  __asm__ ("rcsr %0, CFG" : "=r" (cfg));
  if (cfg & 2)
    __asm__ ("modu %0, %1, %2" : "=r" (res) : "r" (a), "r" (b));
  else 
    res = __udivmodsi4 (a, b, 1);

  if (neg)
    res = -res;

  return res;
}
#endif

#ifdef L_udivsi3
USItype
__udivsi3 (USItype a, USItype b)
{
  if (b == 0) 
    {
      /* Raise divide by zero exception */
      int eba, sr;
      /* Save interrupt enable */
      __asm__ __volatile__ ("rcsr %0, IE" : "=r" (sr));
      sr = (sr & 1) << 1;
      __asm__ __volatile__ ("wcsr IE, %0" : : "r" (sr));
      /* Branch to exception handler */
      __asm__ __volatile__ ("rcsr %0, EBA" : "=r" (eba));
      eba += 32 * 5;
      __asm__ __volatile__ ("mv ea, ra");
      __asm__ __volatile__ ("b %0" : : "r" (eba)); 
    }
  
  return __udivmodsi4 (a, b, 0);
}
#endif

#ifdef L_umodsi3
USItype
__umodsi3 (USItype a, USItype b)
{
  if (b == 0) 
    {
      /* Raise divide by zero exception */
      int eba, sr;
      /* Save interrupt enable */
      __asm__ __volatile__ ("rcsr %0, IE" : "=r" (sr));
      sr = (sr & 1) << 1;
      __asm__ __volatile__ ("wcsr IE, %0" : : "r" (sr));
      /* Branch to exception handler */
      __asm__ __volatile__ ("rcsr %0, EBA" : "=r" (eba));
      eba += 32 * 5;
      __asm__ __volatile__ ("mv ea, ra");
      __asm__ __volatile__ ("b %0" : : "r" (eba)); 
    }
  
  return __udivmodsi4 (a, b, 1);
}
#endif

#if 0

/* Shifts - Optimized versions implemented in assembly. Use these if code space is preferred to performance.  */

#ifdef L_ashlsi3
SItype 
__ashlsi3 (SItype a, SItype b)
{
  int i;
  
  for (i = (b & 0x1f); i > 0; --i)
    a += a;
  return a;
}
#endif

#ifdef L_ashrsi3
SItype
__ashrsi3 (SItype a, SItype b)
{
  int i;
  
  for (i = (b & 0x1f); i > 0; --i)
    __asm__ ("sri      %0, %0, 1" : "=r" (a) : "0" (a));
  return a;
}
#endif

#ifdef L_lshrsi3
USItype
__lshrsi3 (USItype a, USItype b)
{
  int i;
  
  for (i = (b & 0x1f); i > 0; --i)
    __asm__ ("srui     %0, %0, 1" : "=r" (a) : "0" (a));
  return a;
}
#endif

#endif 
