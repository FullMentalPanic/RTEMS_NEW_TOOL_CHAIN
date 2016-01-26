# lib1funcs.S for Lattice Mico32 
# Contributed by Jon Beniston <jon@beniston.com>
#
# Copyright (C) 2008 Free Software Foundation, Inc. 
#
# This file is free software; you can redistribute it and/or modify it
# under the terms of the GNU General Public License as published by the
# Free Software Foundation; either version 2, or (at your option) any
# later version.
#
# In addition to the permissions in the GNU General Public License, the
# Free Software Foundation gives you unlimited permission to link the
# compiled version of this file into combinations with other programs,
# and to distribute those combinations without any restriction coming
# from the use of this file.  (The General Public License restrictions
# do apply in other respects; for example, they cover modification of
# the file, and distribution when not linked into a combine
# executable.)
#
# This file is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; see the file COPYING.  If not, write to
# the Free Software Foundation, 51 Franklin Street, Fifth Floor,
# Boston, MA 02110-1301, USA.  
# 

/* Arithmetic left shift */
        
        .text

        .global __ashlsi3
        .type __ashlsi3,@function
        .align 4
        
__ashlsi3:
        /* Only use 5 LSBs, as that's all the h/w shifter uses */
        andi    r2, r2, 0x1f
        /* Get address of offset into unrolled shift loop to jump to */
#ifdef __PIC__
        orhi    r3, r0, gotoffhi16(__ashlsi3_table)
        addi    r3, r3, gotofflo16(__ashlsi3_table)
        add     r3, r3, gp
#else
        mvhi    r3, hi(__ashlsi3_table)
        ori     r3, r3, lo(__ashlsi3_table)
#endif
        add     r2, r2, r2
        add     r2, r2, r2
        add     r3, r3, r2
        lw      r3, (r3+0)
        b       r3        
        
__ashlsi3_31:
        add     r1, r1, r1
__ashlsi3_30:
        add     r1, r1, r1
__ashlsi3_29:
        add     r1, r1, r1
__ashlsi3_28:
        add     r1, r1, r1
__ashlsi3_27:
        add     r1, r1, r1
__ashlsi3_26:
        add     r1, r1, r1
__ashlsi3_25:
        add     r1, r1, r1
__ashlsi3_24:
        add     r1, r1, r1
__ashlsi3_23:
        add     r1, r1, r1
__ashlsi3_22:
        add     r1, r1, r1
__ashlsi3_21:
        add     r1, r1, r1
__ashlsi3_20:
        add     r1, r1, r1
__ashlsi3_19:
        add     r1, r1, r1
__ashlsi3_18:
        add     r1, r1, r1
__ashlsi3_17:
        add     r1, r1, r1
__ashlsi3_16:
        add     r1, r1, r1
__ashlsi3_15:
        add     r1, r1, r1
__ashlsi3_14:
        add     r1, r1, r1
__ashlsi3_13:
        add     r1, r1, r1
__ashlsi3_12:
        add     r1, r1, r1
__ashlsi3_11:
        add     r1, r1, r1
__ashlsi3_10:
        add     r1, r1, r1
__ashlsi3_9:
        add     r1, r1, r1
__ashlsi3_8:
        add     r1, r1, r1
__ashlsi3_7:
        add     r1, r1, r1
__ashlsi3_6:
        add     r1, r1, r1
__ashlsi3_5:
        add     r1, r1, r1
__ashlsi3_4:
        add     r1, r1, r1
__ashlsi3_3:
        add     r1, r1, r1
__ashlsi3_2:
        add     r1, r1, r1
__ashlsi3_1:
        add     r1, r1, r1
__ashlsi3_0:
        ret
        
#ifdef __PIC__
        .section .data
#else
        .section .rodata
#endif        

        .align 4

__ashlsi3_table:
        .word   __ashlsi3_0
        .word   __ashlsi3_1
        .word   __ashlsi3_2
        .word   __ashlsi3_3
        .word   __ashlsi3_4
        .word   __ashlsi3_5
        .word   __ashlsi3_6
        .word   __ashlsi3_7
        .word   __ashlsi3_8
        .word   __ashlsi3_9
        .word   __ashlsi3_10
        .word   __ashlsi3_11
        .word   __ashlsi3_12
        .word   __ashlsi3_13
        .word   __ashlsi3_14
        .word   __ashlsi3_15
        .word   __ashlsi3_16
        .word   __ashlsi3_17
        .word   __ashlsi3_18
        .word   __ashlsi3_19
        .word   __ashlsi3_20
        .word   __ashlsi3_21
        .word   __ashlsi3_22
        .word   __ashlsi3_23
        .word   __ashlsi3_24
        .word   __ashlsi3_25
        .word   __ashlsi3_26
        .word   __ashlsi3_27
        .word   __ashlsi3_28
        .word   __ashlsi3_29
        .word   __ashlsi3_30
        .word   __ashlsi3_31
        
/* Logical right shift */
        
        .text
        
        .global __lshrsi3
        .type __lshrsi3,@function
        .align 4
        
__lshrsi3:
        /* Only use 5 LSBs, as that's all the h/w shifter uses */
        andi    r2, r2, 0x1f
        /* Get address of offset into unrolled shift loop to jump to */
#ifdef __PIC__
        orhi    r3, r0, gotoffhi16(__lshrsi3_table)        
        addi    r3, r3, gotofflo16(__lshrsi3_table)
        add     r3, r3, gp
#else
        mvhi    r3, hi(__lshrsi3_table)
        ori     r3, r3, lo(__lshrsi3_table)
#endif
        add     r2, r2, r2
        add     r2, r2, r2
        add     r3, r3, r2
        lw      r3, (r3+0)
        b       r3        
        
__lshrsi3_31:        
        srui    r1, r1, 1
__lshrsi3_30:        
        srui    r1, r1, 1
__lshrsi3_29:        
        srui    r1, r1, 1
__lshrsi3_28:        
        srui    r1, r1, 1
__lshrsi3_27:        
        srui    r1, r1, 1
__lshrsi3_26:        
        srui    r1, r1, 1
__lshrsi3_25:        
        srui    r1, r1, 1
__lshrsi3_24:        
        srui    r1, r1, 1
__lshrsi3_23:        
        srui    r1, r1, 1
__lshrsi3_22:        
        srui    r1, r1, 1
__lshrsi3_21:        
        srui    r1, r1, 1
__lshrsi3_20:        
        srui    r1, r1, 1
__lshrsi3_19:        
        srui    r1, r1, 1
__lshrsi3_18:        
        srui    r1, r1, 1
__lshrsi3_17:        
        srui    r1, r1, 1
__lshrsi3_16:        
        srui    r1, r1, 1
__lshrsi3_15:        
        srui    r1, r1, 1
__lshrsi3_14:        
        srui    r1, r1, 1
__lshrsi3_13:        
        srui    r1, r1, 1
__lshrsi3_12:        
        srui    r1, r1, 1
__lshrsi3_11:        
        srui    r1, r1, 1
__lshrsi3_10:        
        srui    r1, r1, 1
__lshrsi3_9:        
        srui    r1, r1, 1
__lshrsi3_8:        
        srui    r1, r1, 1
__lshrsi3_7:        
        srui    r1, r1, 1
__lshrsi3_6:        
        srui    r1, r1, 1
__lshrsi3_5:        
        srui    r1, r1, 1
__lshrsi3_4:        
        srui    r1, r1, 1
__lshrsi3_3:        
        srui    r1, r1, 1
__lshrsi3_2:        
        srui    r1, r1, 1
__lshrsi3_1:        
        srui    r1, r1, 1
__lshrsi3_0:        
        ret
        
#ifdef __PIC__
        .section .data
#else
        .section .rodata
#endif        

        .align 4

__lshrsi3_table:        
        .word   __lshrsi3_0        
        .word   __lshrsi3_1        
        .word   __lshrsi3_2        
        .word   __lshrsi3_3        
        .word   __lshrsi3_4        
        .word   __lshrsi3_5        
        .word   __lshrsi3_6        
        .word   __lshrsi3_7        
        .word   __lshrsi3_8        
        .word   __lshrsi3_9        
        .word   __lshrsi3_10        
        .word   __lshrsi3_11        
        .word   __lshrsi3_12        
        .word   __lshrsi3_13        
        .word   __lshrsi3_14        
        .word   __lshrsi3_15        
        .word   __lshrsi3_16        
        .word   __lshrsi3_17        
        .word   __lshrsi3_18        
        .word   __lshrsi3_19        
        .word   __lshrsi3_20        
        .word   __lshrsi3_21        
        .word   __lshrsi3_22        
        .word   __lshrsi3_23        
        .word   __lshrsi3_24        
        .word   __lshrsi3_25        
        .word   __lshrsi3_26        
        .word   __lshrsi3_27        
        .word   __lshrsi3_28
        .word   __lshrsi3_29        
        .word   __lshrsi3_30        
        .word   __lshrsi3_31        
        
/* Arithmetic right shift */

        .text
        
        .global __ashrsi3
        .type __ashrsi3,@function
        .align 4
        
__ashrsi3:
        /* Only use 5 LSBs, as that's all the h/w shifter uses */
        andi    r2, r2, 0x1f
        /* Get address of offset into unrolled shift loop to jump to */
#ifdef __PIC__
        orhi    r3, r0, gotoffhi16(__ashrsi3_table)
        addi    r3, r3, gotofflo16(__ashrsi3_table)
        add     r3, r3, gp
#else
        mvhi    r3, hi(__ashrsi3_table)
        ori     r3, r3, lo(__ashrsi3_table)
#endif
        add     r2, r2, r2
        add     r2, r2, r2
        add     r3, r3, r2
        lw      r3, (r3+0)
        b       r3        
        
__ashrsi3_31:
        sri     r1, r1, 1
__ashrsi3_30:
        sri     r1, r1, 1
__ashrsi3_29:
        sri     r1, r1, 1
__ashrsi3_28:
        sri     r1, r1, 1
__ashrsi3_27:
        sri     r1, r1, 1
__ashrsi3_26:
        sri     r1, r1, 1
__ashrsi3_25:
        sri     r1, r1, 1
__ashrsi3_24:
        sri     r1, r1, 1
__ashrsi3_23:
        sri     r1, r1, 1
__ashrsi3_22:
        sri     r1, r1, 1
__ashrsi3_21:
        sri     r1, r1, 1
__ashrsi3_20:
        sri     r1, r1, 1
__ashrsi3_19:
        sri     r1, r1, 1
__ashrsi3_18:
        sri     r1, r1, 1
__ashrsi3_17:
        sri     r1, r1, 1
__ashrsi3_16:
        sri     r1, r1, 1
__ashrsi3_15:
        sri     r1, r1, 1
__ashrsi3_14:
        sri     r1, r1, 1
__ashrsi3_13:
        sri     r1, r1, 1
__ashrsi3_12:
        sri     r1, r1, 1
__ashrsi3_11:
        sri     r1, r1, 1
__ashrsi3_10:
        sri     r1, r1, 1
__ashrsi3_9:
        sri     r1, r1, 1
__ashrsi3_8:
        sri     r1, r1, 1
__ashrsi3_7:
        sri     r1, r1, 1
__ashrsi3_6:
        sri     r1, r1, 1
__ashrsi3_5:
        sri     r1, r1, 1
__ashrsi3_4:
        sri     r1, r1, 1
__ashrsi3_3:
        sri     r1, r1, 1
__ashrsi3_2:
        sri     r1, r1, 1
__ashrsi3_1:
        sri     r1, r1, 1
__ashrsi3_0:
        ret
        
#ifdef __PIC__
        .section .data
#else
        .section .rodata
#endif        

        .align 4

__ashrsi3_table:
        .word   __ashrsi3_0
        .word   __ashrsi3_1
        .word   __ashrsi3_2
        .word   __ashrsi3_3
        .word   __ashrsi3_4
        .word   __ashrsi3_5
        .word   __ashrsi3_6
        .word   __ashrsi3_7
        .word   __ashrsi3_8
        .word   __ashrsi3_9
        .word   __ashrsi3_10
        .word   __ashrsi3_11
        .word   __ashrsi3_12
        .word   __ashrsi3_13
        .word   __ashrsi3_14
        .word   __ashrsi3_15
        .word   __ashrsi3_16
        .word   __ashrsi3_17
        .word   __ashrsi3_18
        .word   __ashrsi3_19
        .word   __ashrsi3_20
        .word   __ashrsi3_21
        .word   __ashrsi3_22
        .word   __ashrsi3_23
        .word   __ashrsi3_24
        .word   __ashrsi3_25
        .word   __ashrsi3_26
        .word   __ashrsi3_27
        .word   __ashrsi3_28
        .word   __ashrsi3_29
        .word   __ashrsi3_30
        .word   __ashrsi3_31
        
