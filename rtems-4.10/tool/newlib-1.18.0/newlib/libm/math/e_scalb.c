
/* @(#)e_scalb.c 5.1 93/09/24 */
/*
 * ====================================================
 * Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
 *
 * Developed at SunPro, a Sun Microsystems, Inc. business.
 * Permission to use, copy, modify, and distribute this
 * software is freely granted, provided that this notice 
 * is preserved.
 * ====================================================
 */

/*
 * __ieee754_scalb(x, fn) is provide for
 * passing various standard test suite. One 
 * should use scalbn() instead.
 */

#include <limits.h>
#include "fdlibm.h"

#ifndef _DOUBLE_IS_32BITS

#ifdef _SCALB_INT
#ifdef __STDC__
	double __ieee754_scalb(double x, int fn)
#else
	double __ieee754_scalb(x,fn)
	double x; int fn;
#endif
#else
#ifdef __STDC__
	double __ieee754_scalb(double x, double fn)
#else
	double __ieee754_scalb(x,fn)
	double x, fn;
#endif
#endif
{
#ifdef _SCALB_INT
	return scalbn(x,fn);
#else
	if (isnan(x)||isnan(fn)) return x*fn;
	if (!finite(fn)) {
	    if(fn>0.0) return x*fn;
	    else       return x/(-fn);
	}
	if (rint(fn)!=fn) return (fn-fn)/(fn-fn);
#if (INT_MAX < 65000)
	if ( fn > (double) INT_MAX) return scalbn(x, INT_MAX);
#else
	if ( fn > 65000.0) return scalbn(x, 65000);
#endif

#if (INT_MIN > -65000)
        if (fn < (double) INT_MIN) return scalbn(x,INT_MIN);
#else
	if (fn < -65000.0) return scalbn(x,-65000);
#endif
	return scalbn(x,(int)fn);
#endif
}

#endif /* defined(_DOUBLE_IS_32BITS) */