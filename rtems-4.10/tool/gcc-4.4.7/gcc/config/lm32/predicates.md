;; Predicate definitions for Lattice Mico32.
;; Contributed by Jon Beniston <jon@beniston.com>
;;
;; Copyright (C) 2008 Free Software Foundation, Inc.
;;
;; This file is part of GCC.
;;
;; GCC is free software; you can redistribute it and/or modify it
;; under the terms of the GNU General Public License as published
;; by the Free Software Foundation; either version 3, or (at your
;; option) any later version.
;;
;; GCC is distributed in the hope that it will be useful, but WITHOUT
;; ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
;; or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
;; License for more details.
;; 
;; You should have received a copy of the GNU General Public License
;; along with GCC; see the file COPYING3.  If not see
;;  <http://www.gnu.org/licenses/>.  

(define_predicate "const0_operand"
  (and (match_code "const_int,const_double,const_vector")
       (match_test "op == CONST0_RTX (GET_MODE (op))")))

(define_predicate "constant_K_operand"
  (and (match_code "const_int")
       (match_test "MEDIUM_INT (INTVAL (op))")))
       
(define_predicate "constant_L_operand"
  (and (match_code "const_int")
       (match_test "MEDIUM_UINT (INTVAL (op))")))

(define_predicate "register_or_zero_operand"
  (ior (match_operand 0 "register_operand")
       (match_operand 0 "const0_operand")))

(define_predicate "register_or_memory_operand"
  (ior (match_operand 0 "register_operand")
       (match_operand 0 "memory_operand")))
       
(define_predicate "register_or_K_operand"
  (ior (match_operand 0 "register_operand")
       (match_operand 0 "constant_K_operand")))
         
(define_predicate "register_or_L_operand"
  (ior (match_operand 0 "register_operand")
       (match_operand 0 "constant_L_operand")))

(define_predicate "reloc_operand"
  (ior (ior (match_code "label_ref")
            (match_code "symbol_ref"))
       (match_code "const")))

(define_predicate "symbolic_operand"
  (ior (match_code "label_ref")
       (match_code "symbol_ref")))
       
