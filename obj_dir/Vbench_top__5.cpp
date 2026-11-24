// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbench_top.h for the primary calling header

#include "Vbench_top.h"
#include "Vbench_top__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vbench_top::_sequent__TOP__14(Vbench_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench_top::_sequent__TOP__14\n"); );
    Vbench_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp100[3];
    WData/*95:0*/ __Vtemp101[3];
    WData/*95:0*/ __Vtemp103[3];
    WData/*95:0*/ __Vtemp104[3];
    WData/*95:0*/ __Vtemp105[3];
    // Body
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__shamt_i) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__shamt_i))) {
        ++(vlSymsp->__Vcoverage[3444]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__shamt_i 
            = ((0x1eU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__shamt_i)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__shamt_i)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__shamt_i) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__shamt_i))) {
        ++(vlSymsp->__Vcoverage[3445]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__shamt_i 
            = ((0x1dU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__shamt_i)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__shamt_i)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__shamt_i) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__shamt_i))) {
        ++(vlSymsp->__Vcoverage[3446]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__shamt_i 
            = ((0x1bU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__shamt_i)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__shamt_i)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__shamt_i) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__shamt_i))) {
        ++(vlSymsp->__Vcoverage[3447]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__shamt_i 
            = ((0x17U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__shamt_i)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__shamt_i)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__shamt_i) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__shamt_i))) {
        ++(vlSymsp->__Vcoverage[3448]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__shamt_i 
            = ((0xfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__shamt_i)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__shamt_i)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs1) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[1520]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs1 
            = ((0x1eU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs1)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs1)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs1) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[1521]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs1 
            = ((0x1dU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs1)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs1)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs1) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[1522]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs1 
            = ((0x1bU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs1)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs1)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs1) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[1523]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs1 
            = ((0x17U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs1)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs1)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs1) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[1524]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs1 
            = ((0xfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs1)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs1)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7))) {
        ++(vlSymsp->__Vcoverage[3437]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7 
            = ((0x7eU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7))) {
        ++(vlSymsp->__Vcoverage[3438]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7 
            = ((0x7dU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7))) {
        ++(vlSymsp->__Vcoverage[3439]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7 
            = ((0x7bU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7))) {
        ++(vlSymsp->__Vcoverage[3440]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7 
            = ((0x77U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7))) {
        ++(vlSymsp->__Vcoverage[3441]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7 
            = ((0x6fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7))) {
        ++(vlSymsp->__Vcoverage[3442]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7 
            = ((0x5fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7)));
    }
    if ((0x40U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7))) {
        ++(vlSymsp->__Vcoverage[3443]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7 
            = ((0x3fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7)) 
               | (0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__funct3) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__funct3))) {
        ++(vlSymsp->__Vcoverage[1517]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__funct3 
            = ((6U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__funct3)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__funct3)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__funct3) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__funct3))) {
        ++(vlSymsp->__Vcoverage[1518]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__funct3 
            = ((5U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__funct3)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__funct3)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__funct3) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__funct3))) {
        ++(vlSymsp->__Vcoverage[1519]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__funct3 
            = ((3U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__funct3)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__funct3)));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__csr_fn = (3U 
                                                   & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__funct3));
    vlTOPp->bench_top__DOT__u_core__DOT__csr_imm_mode 
        = (1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__funct3) 
                 >> 2U));
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[3449]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12 
            = ((0xffeU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[3450]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12 
            = ((0xffdU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[3451]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12 
            = ((0xffbU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[3452]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12 
            = ((0xff7U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[3453]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12 
            = ((0xfefU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[3454]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12 
            = ((0xfdfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12)));
    }
    if ((0x40U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[3455]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12 
            = ((0xfbfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12)) 
               | (0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12)));
    }
    if ((0x80U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[3456]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12 
            = ((0xf7fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12)) 
               | (0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12)));
    }
    if ((0x100U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[3457]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12 
            = ((0xeffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12)) 
               | (0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12)));
    }
    if ((0x200U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[3458]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12 
            = ((0xdffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12)) 
               | (0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12)));
    }
    if ((0x400U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[3459]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12 
            = ((0xbffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12)) 
               | (0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12)));
    }
    if ((0x800U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[3460]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12 
            = ((0x7ffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12)) 
               | (0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[1535]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12 
            = ((0xffeU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[1536]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12 
            = ((0xffdU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[1537]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12 
            = ((0xffbU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[1538]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12 
            = ((0xff7U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[1539]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12 
            = ((0xfefU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[1540]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12 
            = ((0xfdfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12)));
    }
    if ((0x40U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[1541]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12 
            = ((0xfbfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12)) 
               | (0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12)));
    }
    if ((0x80U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[1542]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12 
            = ((0xf7fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12)) 
               | (0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12)));
    }
    if ((0x100U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[1543]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12 
            = ((0xeffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12)) 
               | (0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12)));
    }
    if ((0x200U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[1544]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12 
            = ((0xdffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12)) 
               | (0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12)));
    }
    if ((0x400U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[1545]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12 
            = ((0xbffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12)) 
               | (0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12)));
    }
    if ((0x800U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[1546]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12 
            = ((0x7ffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12)) 
               | (0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct3))) {
        ++(vlSymsp->__Vcoverage[3434]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct3 
            = ((6U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct3)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct3))) {
        ++(vlSymsp->__Vcoverage[3435]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct3 
            = ((5U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct3)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct3))) {
        ++(vlSymsp->__Vcoverage[3436]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct3 
            = ((3U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct3)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)));
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[3578]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)))) {
                                ++(vlSymsp->__Vcoverage[3578]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[3578]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    ++(vlSymsp->__Vcoverage[3578]);
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                ++(vlSymsp->__Vcoverage[3569]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                ++(vlSymsp->__Vcoverage[3462]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        ++(vlSymsp->__Vcoverage[3578]);
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[3578]);
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)))) {
                                ++(vlSymsp->__Vcoverage[3578]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    ++(vlSymsp->__Vcoverage[3578]);
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                ++(vlSymsp->__Vcoverage[3463]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)))) {
                                ++(vlSymsp->__Vcoverage[3578]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                ++(vlSymsp->__Vcoverage[3486]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[3578]);
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)))) {
                                ++(vlSymsp->__Vcoverage[3578]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                ++(vlSymsp->__Vcoverage[3576]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[3578]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)))) {
                                ++(vlSymsp->__Vcoverage[3578]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    ++(vlSymsp->__Vcoverage[3578]);
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                ++(vlSymsp->__Vcoverage[3466]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            ++(vlSymsp->__Vcoverage[3578]);
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[3578]);
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)))) {
                                ++(vlSymsp->__Vcoverage[3578]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                ++(vlSymsp->__Vcoverage[3474]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        ++(vlSymsp->__Vcoverage[3578]);
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        ++(vlSymsp->__Vcoverage[3578]);
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)))) {
                                ++(vlSymsp->__Vcoverage[3578]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[3578]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    ++(vlSymsp->__Vcoverage[3578]);
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                ++(vlSymsp->__Vcoverage[3461]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)))) {
                                ++(vlSymsp->__Vcoverage[3578]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[3578]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                ++(vlSymsp->__Vcoverage[3513]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)))) {
                                ++(vlSymsp->__Vcoverage[3578]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[3578]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                ++(vlSymsp->__Vcoverage[3577]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)))) {
                                ++(vlSymsp->__Vcoverage[3578]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[3578]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        ++(vlSymsp->__Vcoverage[3578]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        ++(vlSymsp->__Vcoverage[3578]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                ++(vlSymsp->__Vcoverage[3481]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)))) {
                                ++(vlSymsp->__Vcoverage[3578]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[3578]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                            ++(vlSymsp->__Vcoverage[3488]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            ++(vlSymsp->__Vcoverage[3489]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            ++(vlSymsp->__Vcoverage[3492]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            ++(vlSymsp->__Vcoverage[3484]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    ++(vlSymsp->__Vcoverage[3482]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        ++(vlSymsp->__Vcoverage[3483]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    ++(vlSymsp->__Vcoverage[3567]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            ++(vlSymsp->__Vcoverage[3485]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    ++(vlSymsp->__Vcoverage[3464]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    ++(vlSymsp->__Vcoverage[3575]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    ++(vlSymsp->__Vcoverage[3574]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        ++(vlSymsp->__Vcoverage[3473]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    ++(vlSymsp->__Vcoverage[3465]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    ++(vlSymsp->__Vcoverage[3568]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                            ++(vlSymsp->__Vcoverage[3491]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            ++(vlSymsp->__Vcoverage[3472]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                            ++(vlSymsp->__Vcoverage[3471]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            ++(vlSymsp->__Vcoverage[3470]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                            ++(vlSymsp->__Vcoverage[3469]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            ++(vlSymsp->__Vcoverage[3511]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            ++(vlSymsp->__Vcoverage[3468]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                            ++(vlSymsp->__Vcoverage[3490]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                            ++(vlSymsp->__Vcoverage[3467]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            ++(vlSymsp->__Vcoverage[3503]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                            ++(vlSymsp->__Vcoverage[3487]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        ++(vlSymsp->__Vcoverage[3480]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            ++(vlSymsp->__Vcoverage[3479]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                            ++(vlSymsp->__Vcoverage[3478]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            ++(vlSymsp->__Vcoverage[3480]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                            ++(vlSymsp->__Vcoverage[3477]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            ++(vlSymsp->__Vcoverage[3476]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                            ++(vlSymsp->__Vcoverage[3475]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x24U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x14U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        ++(vlSymsp->__Vcoverage[3500]);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                ++(vlSymsp->__Vcoverage[3502]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x20U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x30U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x24U 
                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            ++(vlSymsp->__Vcoverage[3507]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x20U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x30U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        ++(vlSymsp->__Vcoverage[3508]);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                ++(vlSymsp->__Vcoverage[3510]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        ++(vlSymsp->__Vcoverage[3524]);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x30U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x14U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x24U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                if (
                                                                    (0x34U 
                                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                    ++(vlSymsp->__Vcoverage[3528]);
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x30U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x14U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x24U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                if (
                                                                    (0x34U 
                                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                    ++(vlSymsp->__Vcoverage[3527]);
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x30U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x14U 
                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            ++(vlSymsp->__Vcoverage[3530]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    ++(vlSymsp->__Vcoverage[3532]);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                ++(vlSymsp->__Vcoverage[3537]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    ++(vlSymsp->__Vcoverage[3536]);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    ++(vlSymsp->__Vcoverage[3539]);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    ++(vlSymsp->__Vcoverage[3538]);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x10U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (5U 
                                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                ++(vlSymsp->__Vcoverage[3543]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x10U 
                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            ++(vlSymsp->__Vcoverage[3544]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        ++(vlSymsp->__Vcoverage[3545]);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    ++(vlSymsp->__Vcoverage[3546]);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                ++(vlSymsp->__Vcoverage[3554]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x30U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x24U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                if (
                                                                    (5U 
                                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                    ++(vlSymsp->__Vcoverage[3549]);
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x30U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x24U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                if (
                                                                    (5U 
                                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                    ++(vlSymsp->__Vcoverage[3548]);
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x30U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x24U 
                                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                ++(vlSymsp->__Vcoverage[3550]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x30U 
                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            ++(vlSymsp->__Vcoverage[3551]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        ++(vlSymsp->__Vcoverage[3552]);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    ++(vlSymsp->__Vcoverage[3553]);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                ++(vlSymsp->__Vcoverage[3560]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x10U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (5U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                ++(vlSymsp->__Vcoverage[3556]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x10U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (5U 
                                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                ++(vlSymsp->__Vcoverage[3555]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x10U 
                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            ++(vlSymsp->__Vcoverage[3557]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (5U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            ++(vlSymsp->__Vcoverage[3562]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (5U 
                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            ++(vlSymsp->__Vcoverage[3561]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                        if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                            if ((0x302U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                ++(vlSymsp->__Vcoverage[3573]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                        if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                            if ((0x302U 
                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                ++(vlSymsp->__Vcoverage[3572]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                        ++(vlSymsp->__Vcoverage[3570]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                ++(vlSymsp->__Vcoverage[3516]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                ++(vlSymsp->__Vcoverage[3518]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                ++(vlSymsp->__Vcoverage[3565]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x10U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        ++(vlSymsp->__Vcoverage[3535]);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                ++(vlSymsp->__Vcoverage[3526]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                ++(vlSymsp->__Vcoverage[3520]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x10U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        ++(vlSymsp->__Vcoverage[3534]);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                ++(vlSymsp->__Vcoverage[3521]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    ++(vlSymsp->__Vcoverage[3525]);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                ++(vlSymsp->__Vcoverage[3540]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                        if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                            ++(vlSymsp->__Vcoverage[3571]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                ++(vlSymsp->__Vcoverage[3515]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                ++(vlSymsp->__Vcoverage[3547]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x30U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        ++(vlSymsp->__Vcoverage[3531]);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x30U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x14U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x24U 
                                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                ++(vlSymsp->__Vcoverage[3529]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                ++(vlSymsp->__Vcoverage[3533]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        ++(vlSymsp->__Vcoverage[3523]);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                ++(vlSymsp->__Vcoverage[3519]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x20U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    ++(vlSymsp->__Vcoverage[3509]);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x24U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    ++(vlSymsp->__Vcoverage[3501]);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x24U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x14U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x34U 
                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            ++(vlSymsp->__Vcoverage[3499]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                ++(vlSymsp->__Vcoverage[3517]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                ++(vlSymsp->__Vcoverage[3514]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    ++(vlSymsp->__Vcoverage[3564]);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        ++(vlSymsp->__Vcoverage[3563]);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    ++(vlSymsp->__Vcoverage[3559]);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        ++(vlSymsp->__Vcoverage[3558]);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x24U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x14U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x34U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x600U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                if (
                                                                    (0x601U 
                                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                    if (
                                                                        (0x602U 
                                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                        ++(vlSymsp->__Vcoverage[3496]);
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x24U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x14U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x34U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x600U 
                                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                ++(vlSymsp->__Vcoverage[3498]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x20U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x30U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x24U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x698U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                if (
                                                                    (0x287U 
                                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                    ++(vlSymsp->__Vcoverage[3505]);
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x10U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (5U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        ((4U 
                                                                          == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7)) 
                                                                         & (0U 
                                                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__shamt_i)))))) {
                                                                    ++(vlSymsp->__Vcoverage[3542]);
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x10U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (5U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                if (
                                                                    ((4U 
                                                                      == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7)) 
                                                                     & (0U 
                                                                        == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__shamt_i)))) {
                                                                    ++(vlSymsp->__Vcoverage[3541]);
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x20U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x30U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x24U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x698U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                if (
                                                                    (0x287U 
                                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                    ++(vlSymsp->__Vcoverage[3504]);
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x20U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x30U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x24U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x698U 
                                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                ++(vlSymsp->__Vcoverage[3506]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x24U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x14U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x34U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x600U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                if (
                                                                    (0x601U 
                                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                    ++(vlSymsp->__Vcoverage[3497]);
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x24U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x14U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x34U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x600U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                if (
                                                                    (0x601U 
                                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                    if (
                                                                        (0x602U 
                                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                        if (
                                                                            (0x604U 
                                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                            ++(vlSymsp->__Vcoverage[3495]);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x24U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x14U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x34U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x600U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                if (
                                                                    (0x601U 
                                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                    if (
                                                                        (0x602U 
                                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                        if (
                                                                            (0x604U 
                                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                            if (
                                                                                (0x605U 
                                                                                == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                                ++(vlSymsp->__Vcoverage[3493]);
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x24U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x14U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x34U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x600U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                if (
                                                                    (0x601U 
                                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                    if (
                                                                        (0x602U 
                                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                        if (
                                                                            (0x604U 
                                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                            if (
                                                                                (0x605U 
                                                                                != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                                ++(vlSymsp->__Vcoverage[3494]);
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode))) {
        ++(vlSymsp->__Vcoverage[3427]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode 
            = ((0x7eU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode))) {
        ++(vlSymsp->__Vcoverage[3428]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode 
            = ((0x7dU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode))) {
        ++(vlSymsp->__Vcoverage[3429]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode 
            = ((0x7bU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode))) {
        ++(vlSymsp->__Vcoverage[3430]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode 
            = ((0x77U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode))) {
        ++(vlSymsp->__Vcoverage[3431]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode 
            = ((0x6fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode))) {
        ++(vlSymsp->__Vcoverage[3432]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode 
            = ((0x5fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)));
    }
    if ((0x40U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode))) {
        ++(vlSymsp->__Vcoverage[3433]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode 
            = ((0x3fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode)) 
               | (0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__uses_rs2 = 0U;
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__uses_rs2 = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__uses_rs2 = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__uses_rs2 = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__md_op = 0U;
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__md_op 
                                        = ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))
                                            ? ((2U 
                                                & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))
                                                    ? 7U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))
                                                    ? 5U
                                                    : 4U))
                                            : ((2U 
                                                & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))
                                                    ? 3U
                                                    : 2U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))
                                                    ? 1U
                                                    : 0U)));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__reg_we = 0U;
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__reg_we = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__reg_we = 1U;
                            }
                        }
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__reg_we = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__reg_we = 1U;
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__reg_we = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__reg_we = 1U;
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__reg_we = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__reg_we = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0U;
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0xaU;
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 9U;
                                                } else {
                                                    if (
                                                        (0x20U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0xeU;
                                                    } else {
                                                        if (
                                                            (5U 
                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x14U;
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 8U;
                                                } else {
                                                    if (
                                                        (0x20U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0xfU;
                                                    } else {
                                                        if (
                                                            (0x10U 
                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0xdU;
                                                        } else {
                                                            if (
                                                                (5U 
                                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x13U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 6U;
                                                } else {
                                                    if (
                                                        (0x20U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 7U;
                                                    } else {
                                                        if (
                                                            (0x30U 
                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x19U;
                                                        } else {
                                                            if (
                                                                (0x24U 
                                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x22U;
                                                            } else {
                                                                if (
                                                                    (5U 
                                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x12U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 5U;
                                                } else {
                                                    if (
                                                        (0x20U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x10U;
                                                    } else {
                                                        if (
                                                            (0x10U 
                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0xcU;
                                                        } else {
                                                            if (
                                                                (5U 
                                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x11U;
                                                            } else {
                                                                if (
                                                                    ((4U 
                                                                      == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7)) 
                                                                     & (0U 
                                                                        == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__shamt_i)))) {
                                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x17U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 4U;
                                                }
                                            } else {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 3U;
                                                } else {
                                                    if (
                                                        (0x10U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0xbU;
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 2U;
                                                } else {
                                                    if (
                                                        (0x30U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x18U;
                                                    } else {
                                                        if (
                                                            (0x14U 
                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x1fU;
                                                        } else {
                                                            if (
                                                                (0x24U 
                                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x20U;
                                                            } else {
                                                                if (
                                                                    (0x34U 
                                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x21U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0U;
                                                } else {
                                                    if (
                                                        (0x20U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0U;
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op 
                                            = ((1U 
                                                & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))
                                                ? 9U
                                                : 8U);
                                    } else {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 6U;
                                            } else {
                                                if (
                                                    (0x20U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 7U;
                                                } else {
                                                    if (
                                                        (0x30U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x19U;
                                                    } else {
                                                        if (
                                                            (0x24U 
                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x22U;
                                                        } else {
                                                            if (
                                                                (0x698U 
                                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x1aU;
                                                            } else {
                                                                if (
                                                                    (0x287U 
                                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x1bU;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 5U;
                                        }
                                    }
                                } else {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op 
                                            = ((1U 
                                                & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))
                                                ? 4U
                                                : 3U);
                                    } else {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 2U;
                                            } else {
                                                if (
                                                    (0x24U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x20U;
                                                } else {
                                                    if (
                                                        (0x14U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x1fU;
                                                    } else {
                                                        if (
                                                            (0x34U 
                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x21U;
                                                        } else {
                                                            if (
                                                                (0x600U 
                                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x1cU;
                                                            } else {
                                                                if (
                                                                    (0x601U 
                                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x1dU;
                                                                } else {
                                                                    if (
                                                                        (0x602U 
                                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x1eU;
                                                                    } else {
                                                                        if (
                                                                            (0x604U 
                                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x15U;
                                                                        } else {
                                                                            if (
                                                                                (0x605U 
                                                                                == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x16U;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__use_imm = 1U;
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__use_imm = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__use_pc = 0U;
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__use_pc = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_branch = 0U;
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_branch = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_jalr = 0U;
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_jalr = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_jal = 0U;
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_jal = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_md = 0U;
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_md = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__br_op = 6U;
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__br_op 
                                        = ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))
                                            ? ((1U 
                                                & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))
                                                ? 5U
                                                : 4U)
                                            : ((1U 
                                                & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))
                                                ? 3U
                                                : 2U));
                                } else {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__br_op 
                                            = ((1U 
                                                & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))
                                                ? 1U
                                                : 0U);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_ecall = 0U;
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_ecall = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_ebreak = 0U;
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                        if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_ebreak = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__wb_sel = 0U;
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__wb_sel = 3U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__wb_sel = 2U;
                            }
                        }
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__wb_sel = 2U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__wb_sel = 4U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__wb_sel = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 0U;
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                    } else {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                        if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                            if ((0x302U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                            }
                        } else {
                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                            }
                        } else {
                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                        }
                    } else {
                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                                }
                            } else {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                            }
                        } else {
                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                            }
                        } else {
                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
        }
    } else {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                            }
                        } else {
                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (5U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x10U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (5U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x30U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x24U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                if (
                                                                    (5U 
                                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x10U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (5U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        ((4U 
                                                                          == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7)) 
                                                                         & (0U 
                                                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__shamt_i)))))) {
                                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                                                }
                                            } else {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x10U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x30U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x14U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x24U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                if (
                                                                    (0x34U 
                                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                            }
                        } else {
                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                    } else {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                            }
                        } else {
                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                        }
                    }
                }
            }
        } else {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                            }
                        } else {
                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x20U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x30U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x24U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x698U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                if (
                                                                    (0x287U 
                                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x24U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x14U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x34U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x600U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                if (
                                                                    (0x601U 
                                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                    if (
                                                                        (0x602U 
                                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                        if (
                                                                            (0x604U 
                                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                            if (
                                                                                (0x605U 
                                                                                != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                            }
                        } else {
                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                            }
                        } else {
                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                        }
                    } else {
                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                    } else {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                                    }
                                } else {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                            }
                        } else {
                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_unsigned = 0U;
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_unsigned = 1U;
                                    }
                                } else {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_unsigned = 0U;
                                        }
                                    } else {
                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_unsigned = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_mret = 0U;
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                        if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                            if ((0x302U 
                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_mret = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_width = 2U;
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_width = 0U;
                                } else {
                                    if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_width = 1U;
                                    } else {
                                        if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_width = 2U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_width 
                                            = ((1U 
                                                & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))
                                                ? 1U
                                                : 0U);
                                    }
                                } else {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_width = 2U;
                                        }
                                    } else {
                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_width 
                                            = ((1U 
                                                & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))
                                                ? 1U
                                                : 0U);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_csr = 0U;
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_csr = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_re = 0U;
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_re = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_we = 0U;
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_we = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_halted) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_halted)) {
        ++(vlSymsp->__Vcoverage[1273]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_halted 
            = vlTOPp->bench_top__DOT__u_core__DOT__dbg_halted;
    }
    vlTOPp->bench_top__DOT__dbg_halted = vlTOPp->bench_top__DOT__u_core__DOT__dbg_halted;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dmem_re) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_re)) {
        ++(vlSymsp->__Vcoverage[1131]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_re 
            = vlTOPp->bench_top__DOT__u_core__DOT__dmem_re;
    }
    vlTOPp->bench_top__DOT__dmem_re = vlTOPp->bench_top__DOT__u_core__DOT__dmem_re;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1067]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1068]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1069]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1070]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1071]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1072]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1073]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1074]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1075]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1076]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1077]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1078]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1079]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1080]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1081]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1082]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1083]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1084]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1085]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1086]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1087]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1088]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1089]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1090]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1091]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1092]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1093]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1094]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1095]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1096]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1097]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1098]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    vlTOPp->bench_top__DOT__imem_addr = vlTOPp->bench_top__DOT__u_core__DOT__imem_addr;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__md_busy) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_busy)) {
        ++(vlSymsp->__Vcoverage[2013]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_busy 
            = vlTOPp->bench_top__DOT__u_core__DOT__md_busy;
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted) 
               ^ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted)))) {
        ++(vlSymsp->__Vcoverage[4329]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7fffffffeULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | (IData)((IData)((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted)))));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 1U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4330]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7fffffffdULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 2U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4331]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7fffffffbULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 3U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4332]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7fffffff7ULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 4U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4333]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7ffffffefULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 5U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4334]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7ffffffdfULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 6U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4335]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7ffffffbfULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 7U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4336]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7ffffff7fULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 8U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4337]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7fffffeffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 9U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4338]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7fffffdffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0xaU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4339]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7fffffbffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0xbU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4340]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7fffff7ffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0xcU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4341]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7ffffefffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0xdU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4342]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7ffffdfffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0xeU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4343]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7ffffbfffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0xfU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4344]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7ffff7fffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x10U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4345]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7fffeffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x11U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4346]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7fffdffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x12U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4347]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7fffbffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x13U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4348]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7fff7ffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x14U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4349]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7ffefffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x15U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4350]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7ffdfffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x16U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4351]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7ffbfffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x17U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4352]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7ff7fffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x18U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4353]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7feffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x19U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4354]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7fdffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x1aU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4355]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7fbffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x1bU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4356]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7f7ffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x1cU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4357]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7efffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x1dU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4358]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7dfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x1eU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4359]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7bfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x1fU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4360]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x77fffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x20U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4361]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x6ffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x21U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4362]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x5ffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x22U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4363]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x3ffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
         >= vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3)) {
        ++(vlSymsp->__Vcoverage[4404]);
    }
    if ((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
         < vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3)) {
        if ((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
             >= vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2)) {
            ++(vlSymsp->__Vcoverage[4403]);
        }
    }
    if ((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
         < vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3)) {
        if ((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
             < vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2)) {
            if ((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                 < vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1)) {
                ++(vlSymsp->__Vcoverage[4402]);
            }
        }
    }
    if ((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
         < vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3)) {
        if ((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
             < vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2)) {
            if ((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                 >= vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1)) {
                ++(vlSymsp->__Vcoverage[4401]);
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__q_digit 
        = ((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
            >= vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3)
            ? 3U : ((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                     >= vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2)
                     ? 2U : ((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                              >= vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1)
                              ? 1U : 0U)));
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3) 
               ^ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3)))) {
        ++(vlSymsp->__Vcoverage[4292]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7fffffffeULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | (IData)((IData)((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3)))));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 1U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4293]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7fffffffdULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 2U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4294]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7fffffffbULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 3U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4295]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7fffffff7ULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 4U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4296]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7ffffffefULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 5U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4297]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7ffffffdfULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 6U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4298]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7ffffffbfULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 7U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4299]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7ffffff7fULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 8U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4300]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7fffffeffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 9U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4301]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7fffffdffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0xaU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4302]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7fffffbffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0xbU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4303]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7fffff7ffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0xcU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4304]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7ffffefffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0xdU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4305]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7ffffdfffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0xeU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4306]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7ffffbfffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0xfU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4307]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7ffff7fffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x10U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4308]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7fffeffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x11U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4309]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7fffdffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x12U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4310]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7fffbffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x13U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4311]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7fff7ffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x14U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4312]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7ffefffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x15U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4313]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7ffdfffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x16U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4314]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7ffbfffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x17U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4315]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7ff7fffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x18U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4316]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7feffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x19U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4317]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7fdffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x1aU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4318]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7fbffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x1bU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4319]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7f7ffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x1cU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4320]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7efffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x1dU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4321]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7dfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x1eU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4322]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7bfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x1fU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4323]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x77fffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x20U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4324]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x6ffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x21U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4325]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x5ffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x22U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4326]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x3ffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
        = (0x7ffffffffULL & ((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                              >= vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3)
                              ? (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                 - vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3)
                              : ((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                  >= vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2)
                                  ? (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                     - vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2)
                                  : ((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                      >= vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1)
                                      ? (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                         - vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1)
                                      : vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted))));
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext) 
               ^ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext)))) {
        ++(vlSymsp->__Vcoverage[3792]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1fffffffeULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | (IData)((IData)((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext)))));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 1U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3793]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1fffffffdULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 2U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3794]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1fffffffbULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 3U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3795]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1fffffff7ULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 4U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3796]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1ffffffefULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 5U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3797]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1ffffffdfULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 6U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3798]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1ffffffbfULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 7U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3799]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1ffffff7fULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 8U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3800]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1fffffeffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 9U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3801]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1fffffdffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0xaU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3802]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1fffffbffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0xbU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3803]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1fffff7ffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0xcU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3804]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1ffffefffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0xdU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3805]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1ffffdfffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0xeU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3806]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1ffffbfffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0xfU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3807]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1ffff7fffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x10U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3808]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1fffeffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x11U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3809]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1fffdffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x12U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3810]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1fffbffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x13U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3811]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1fff7ffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x14U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3812]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1ffefffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x15U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3813]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1ffdfffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x16U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3814]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1ffbfffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x17U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3815]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1ff7fffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x18U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3816]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1feffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x19U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3817]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1fdffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x1aU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3818]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1fbffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x1bU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3819]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1f7ffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x1cU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3820]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1efffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x1dU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3821]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1dfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x1eU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3822]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1bfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x1fU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3823]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x17fffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x20U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3824]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0xffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext) 
               ^ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext)))) {
        ++(vlSymsp->__Vcoverage[3825]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1fffffffeULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | (IData)((IData)((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext)))));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 1U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3826]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1fffffffdULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 2U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3827]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1fffffffbULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 3U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3828]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1fffffff7ULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 4U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3829]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1ffffffefULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 5U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3830]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1ffffffdfULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 6U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3831]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1ffffffbfULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 7U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3832]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1ffffff7fULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 8U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3833]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1fffffeffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 9U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3834]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1fffffdffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0xaU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3835]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1fffffbffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0xbU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3836]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1fffff7ffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0xcU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3837]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1ffffefffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0xdU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3838]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1ffffdfffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0xeU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3839]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1ffffbfffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0xfU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3840]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1ffff7fffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x10U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3841]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1fffeffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x11U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3842]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1fffdffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x12U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3843]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1fffbffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x13U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3844]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1fff7ffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x14U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3845]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1ffefffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x15U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3846]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1ffdfffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x16U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3847]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1ffbfffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x17U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3848]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1ff7fffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x18U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3849]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1feffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x19U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3850]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1fdffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x1aU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3851]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1fbffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x1bU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3852]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1f7ffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x1cU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3853]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1efffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x1dU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3854]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1dfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x1eU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3855]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1bfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x1fU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3856]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x17fffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x20U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3857]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0xffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    VL_EXTENDS_WQ(66,33, __Vtemp100, vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext);
    __Vtemp101[0U] = __Vtemp100[0U];
    __Vtemp101[1U] = __Vtemp100[1U];
    __Vtemp101[2U] = (3U & __Vtemp100[2U]);
    VL_EXTENDS_WQ(66,33, __Vtemp103, vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext);
    __Vtemp104[0U] = __Vtemp103[0U];
    __Vtemp104[1U] = __Vtemp103[1U];
    __Vtemp104[2U] = (3U & __Vtemp103[2U]);
    VL_MULS_WWW(66,66,66, __Vtemp105, __Vtemp101, __Vtemp104);
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
        = __Vtemp105[0U];
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
        = __Vtemp105[1U];
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[2U] 
        = (3U & __Vtemp105[2U]);
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2364]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2365]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2366]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2367]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2368]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2369]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2370]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2371]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2372]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2373]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2374]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2375]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2376]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2377]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2378]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2379]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2380]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2381]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2382]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2383]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2384]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2385]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2386]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2387]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2388]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2389]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2390]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2391]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2392]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2393]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2394]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2395]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2332]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2333]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2334]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2335]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2336]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2337]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2338]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2339]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2340]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2341]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2342]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2343]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2344]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2345]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2346]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2347]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2348]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2349]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2350]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2351]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2352]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2353]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2354]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2355]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2356]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2357]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2358]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2359]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2360]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2361]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2362]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2363]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rstat) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rstat))) {
        ++(vlSymsp->__Vcoverage[5982]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rstat 
            = ((2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rstat)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rstat)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rstat) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rstat))) {
        ++(vlSymsp->__Vcoverage[5983]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rstat 
            = ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rstat)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rstat)));
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_valid) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_valid)) {
        ++(vlSymsp->__Vcoverage[5715]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_valid 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_valid;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_write) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_write)) {
        ++(vlSymsp->__Vcoverage[5716]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_write 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_write;
    }
    if (((IData)(vlTOPp->bench_top__DOT__dbg_ar_done) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_done)) {
        ++(vlSymsp->__Vcoverage[376]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_done 
            = vlTOPp->bench_top__DOT__dbg_ar_done;
    }
    vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_done 
        = vlTOPp->bench_top__DOT__dbg_ar_done;
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_resumereq) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_resumereq)) {
        ++(vlSymsp->__Vcoverage[5666]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_resumereq 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_resumereq;
    }
    vlTOPp->bench_top__DOT__dbg_resumereq = vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_resumereq;
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__eng))) {
        ++(vlSymsp->__Vcoverage[6242]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__eng 
            = ((6U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__eng)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__eng))) {
        ++(vlSymsp->__Vcoverage[6243]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__eng 
            = ((5U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__eng)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__eng))) {
        ++(vlSymsp->__Vcoverage[6244]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__eng 
            = ((3U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__eng)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng)));
    }
    vlTOPp->bench_top__DOT__dm_mem_ready = 0U;
    if (vlTOPp->bench_top__DOT__dm_mem_valid) {
        vlTOPp->bench_top__DOT__dm_mem_ready = 1U;
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse = 0U;
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((3U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                if ((4U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                    if ((8U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                        if ((0x11U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))) {
                            if ((1U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                if ((2U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                    vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((3U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                if ((4U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                    if ((8U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                        if ((0x11U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))) {
                            if ((1U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                if ((2U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                    vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr 
                                        = vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_addr;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[5998]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (1U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[5999]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (2U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6000]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (4U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6001]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (8U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6002]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x10U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6003]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x20U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6004]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x40U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6005]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x80U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6006]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x100U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6007]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x200U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6008]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x400U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6009]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x800U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6010]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6011]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6012]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6013]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6014]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6015]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6016]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6017]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6018]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6019]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6020]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6021]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6022]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6023]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6024]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6025]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6026]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6027]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6028]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6029]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6030]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (1U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6031]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (2U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6032]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (4U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6033]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (8U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6034]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x10U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6035]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x20U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6036]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x40U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6037]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x80U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6038]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x100U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6039]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x200U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6040]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x400U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6041]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x800U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6042]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6043]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6044]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6045]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6046]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6047]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6048]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6049]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6050]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6051]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6052]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6053]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6054]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6055]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6056]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6057]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6058]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6059]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6060]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6061]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6062]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (1U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6063]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (2U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6064]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (4U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6065]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (8U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6066]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x10U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6067]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x20U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6068]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x40U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6069]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x80U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6070]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x100U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6071]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x200U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6072]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x400U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6073]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x800U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6074]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6075]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6076]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6077]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6078]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6079]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6080]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6081]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6082]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6083]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6084]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6085]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6086]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6087]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6088]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6089]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6090]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6091]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6092]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6093]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5950]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (1U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5951]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (2U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5952]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (4U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5953]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (8U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5954]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x10U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5955]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x20U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5956]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x40U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5957]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x80U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5958]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x100U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5959]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x200U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5960]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x400U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5961]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x800U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5962]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5963]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5964]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5965]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5966]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5967]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5968]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5969]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5970]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5971]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5972]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5973]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5974]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5975]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5976]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5977]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5978]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5979]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5980]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5981]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__resumeack) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__resumeack)) {
        ++(vlSymsp->__Vcoverage[5992]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__resumeack 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__resumeack;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__havereset) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__havereset)) {
        ++(vlSymsp->__Vcoverage[5993]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__havereset 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__havereset;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__abs_busy) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abs_busy)) {
        ++(vlSymsp->__Vcoverage[5994]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abs_busy 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__abs_busy;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sbreadondata) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbreadondata)) {
        ++(vlSymsp->__Vcoverage[6099]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbreadondata 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__sbreadondata;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sbreadonaddr) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbreadonaddr)) {
        ++(vlSymsp->__Vcoverage[6098]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbreadonaddr 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__sbreadonaddr;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sbautoincrement) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbautoincrement)) {
        ++(vlSymsp->__Vcoverage[6097]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbautoincrement 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__sbautoincrement;
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__cmderr) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__cmderr))) {
        ++(vlSymsp->__Vcoverage[5995]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__cmderr 
            = ((6U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__cmderr)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__cmderr)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__cmderr) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__cmderr))) {
        ++(vlSymsp->__Vcoverage[5996]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__cmderr 
            = ((5U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__cmderr)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__cmderr)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__cmderr) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__cmderr))) {
        ++(vlSymsp->__Vcoverage[5997]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__cmderr 
            = ((3U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__cmderr)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__cmderr)));
    }
    vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
        = (1U | (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__abs_busy) 
                  << 0xcU) | ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__cmderr) 
                              << 8U)));
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sbaccess) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaccess))) {
        ++(vlSymsp->__Vcoverage[6094]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaccess 
            = ((6U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaccess)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sbaccess)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sbaccess) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaccess))) {
        ++(vlSymsp->__Vcoverage[6095]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaccess 
            = ((5U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaccess)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sbaccess)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sbaccess) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaccess))) {
        ++(vlSymsp->__Vcoverage[6096]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaccess 
            = ((3U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaccess)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sbaccess)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sberror) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sberror))) {
        ++(vlSymsp->__Vcoverage[6100]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sberror 
            = ((6U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sberror)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sberror)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sberror) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sberror))) {
        ++(vlSymsp->__Vcoverage[6101]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sberror 
            = ((5U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sberror)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sberror)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sberror) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sberror))) {
        ++(vlSymsp->__Vcoverage[6102]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sberror 
            = ((3U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sberror)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sberror)));
    }
    vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val = 
        (0x20000404U | (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sbreadonaddr) 
                         << 0x14U) | (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sbaccess) 
                                       << 0x11U) | 
                                      (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sbautoincrement) 
                                        << 0x10U) | 
                                       (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sbreadondata) 
                                         << 0xfU) | 
                                        ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sberror) 
                                         << 0xcU))))));
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmactive) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmactive)) {
        ++(vlSymsp->__Vcoverage[5989]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmactive 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__dmactive;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__haltreq_r) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__haltreq_r)) {
        ++(vlSymsp->__Vcoverage[5991]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__haltreq_r 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__haltreq_r;
    }
    vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_haltreq 
        = ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__haltreq_r) 
           & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmactive));
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ndmreset_r) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ndmreset_r)) {
        ++(vlSymsp->__Vcoverage[5990]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ndmreset_r 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__ndmreset_r;
    }
    vlTOPp->bench_top__DOT__u_dbg__DOT__ndmreset = vlTOPp->bench_top__DOT__u_dbg__DOT__ndmreset_r;
    vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
        = (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__haltreq_r) 
            << 0x1fU) | (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__havereset) 
                          << 0x1cU) | (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ndmreset_r) 
                                        << 1U) | (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmactive))));
    if ((1U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5749]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (1U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5750]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (2U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5751]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (4U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5752]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (8U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5753]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x10U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5754]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x20U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5755]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x40U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5756]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x80U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5757]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x100U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5758]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x200U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5759]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x400U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5760]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x800U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5761]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5762]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5763]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5764]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5765]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5766]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5767]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5768]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5769]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5770]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5771]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5772]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5773]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5774]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5775]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5776]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5777]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5778]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5779]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5780]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    vlTOPp->bench_top__DOT__dm_mem_wdata = vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata;
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((3U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                if ((4U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                    if ((8U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                        if ((0x11U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))) {
                            if ((1U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                if ((2U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                    vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                                        = vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5717]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (1U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5718]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (2U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5719]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (4U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5720]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (8U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5721]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x10U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5722]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x20U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5723]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x40U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5724]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x80U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5725]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x100U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5726]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x200U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5727]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x400U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5728]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x800U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5729]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5730]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5731]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5732]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5733]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5734]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5735]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5736]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5737]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5738]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5739]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5740]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5741]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5742]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5743]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5744]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5745]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5746]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5747]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5748]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    vlTOPp->bench_top__DOT__dm_mem_addr = vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr;
    if ((1U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5683]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (1U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5684]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (2U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5685]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (4U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5686]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (8U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5687]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x10U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5688]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x20U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5689]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x40U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5690]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x80U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5691]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x100U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5692]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x200U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5693]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x400U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5694]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x800U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5695]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5696]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5697]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5698]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5699]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5700]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5701]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5702]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5703]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5704]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5705]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5706]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5707]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5708]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5709]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5710]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5711]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5712]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5713]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5714]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    vlTOPp->bench_top__DOT__dbg_ar_wdata = vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata;
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_write) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_write)) {
        ++(vlSymsp->__Vcoverage[5669]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_write 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_write;
    }
    vlTOPp->bench_top__DOT__dbg_ar_write = vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_write;
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_csr) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_csr)) {
        ++(vlSymsp->__Vcoverage[5670]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_csr 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_csr;
    }
    vlTOPp->bench_top__DOT__dbg_ar_csr = vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_csr;
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_valid) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_valid)) {
        ++(vlSymsp->__Vcoverage[5668]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_valid 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_valid;
    }
    vlTOPp->bench_top__DOT__dbg_ar_valid = vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_valid;
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[5671]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno 
            = ((0xffeU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[5672]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno 
            = ((0xffdU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[5673]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno 
            = ((0xffbU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[5674]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno 
            = ((0xff7U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno) 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[5675]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno 
            = ((0xfefU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno) 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[5676]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno 
            = ((0xfdfU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno)));
    }
    if ((0x40U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno) 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[5677]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno 
            = ((0xfbfU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno)) 
               | (0x40U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno)));
    }
    if ((0x80U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno) 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[5678]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno 
            = ((0xf7fU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno)) 
               | (0x80U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno)));
    }
    if ((0x100U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno) 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[5679]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno 
            = ((0xeffU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno)) 
               | (0x100U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno)));
    }
    if ((0x200U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno) 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[5680]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno 
            = ((0xdffU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno)) 
               | (0x200U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno)));
    }
    if ((0x400U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno) 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[5681]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno 
            = ((0xbffU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno)) 
               | (0x400U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno)));
    }
    if ((0x800U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno) 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[5682]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno 
            = ((0x7ffU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno)) 
               | (0x800U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno)));
    }
    vlTOPp->bench_top__DOT__dbg_ar_regno = vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno;
    if (vlTOPp->bench_top__DOT__dm_mem_valid) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__dm_mem_write)))) {
            vlTOPp->bench_top__DOT__dm_mem_rdata = 
                ((IData)(vlTOPp->bench_top__DOT__dm_in_dram)
                  ? vlTOPp->bench_top__DOT__dram[vlTOPp->bench_top__DOT__dm_dram_idx]
                  : ((IData)(vlTOPp->bench_top__DOT__dm_in_imem)
                      ? vlTOPp->bench_top__DOT__imem
                     [vlTOPp->bench_top__DOT__dm_imem_idx]
                      : 0U));
        }
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__cur_priv) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__cur_priv))) {
        ++(vlSymsp->__Vcoverage[2153]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__cur_priv 
            = ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__cur_priv)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__cur_priv)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__cur_priv) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__cur_priv))) {
        ++(vlSymsp->__Vcoverage[2154]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__cur_priv 
            = ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__cur_priv)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__cur_priv)));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__priv_u = (0U 
                                                   == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__cur_priv));
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_m) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_m)) {
        ++(vlSymsp->__Vcoverage[2155]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_m 
            = vlTOPp->bench_top__DOT__u_core__DOT__fetch_m;
    }
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if.priv_m 
        = vlTOPp->bench_top__DOT__u_core__DOT__fetch_m;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__data_m) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__data_m)) {
        ++(vlSymsp->__Vcoverage[2156]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__data_m 
            = vlTOPp->bench_top__DOT__u_core__DOT__data_m;
    }
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls.priv_m 
        = vlTOPp->bench_top__DOT__u_core__DOT__data_m;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2159]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2160]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2161]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2162]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2163]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2164]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2165]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2166]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2167]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2168]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2169]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2170]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2171]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2172]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2173]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2174]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2175]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2176]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2177]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2178]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2179]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2180]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2181]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2182]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2183]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2184]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2185]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2186]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2187]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2188]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2189]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2190]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2191]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2192]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2193]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2194]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2195]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2196]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2197]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2198]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2199]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2200]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2201]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2202]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2203]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2204]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2205]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2206]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2207]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2208]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2209]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2210]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2211]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2212]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2213]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2214]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2215]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2216]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2217]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2218]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2219]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2220]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2221]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2222]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2223]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2224]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2225]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2226]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2227]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2228]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2229]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2230]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2231]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2232]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2233]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2234]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2235]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2236]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2237]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2238]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2239]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2240]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2241]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2242]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2243]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2244]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2245]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2246]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2247]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2248]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2249]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2250]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2251]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2252]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2253]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2254]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2255]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2256]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2257]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2258]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2259]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2260]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2261]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2262]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2263]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2264]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2265]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2266]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2267]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2268]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2269]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2270]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2271]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2272]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2273]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2274]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2275]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2276]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2277]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2278]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2279]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2280]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2281]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2282]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2283]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2284]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2285]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2286]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if.cfg 
        = (((QData)((IData)(vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U])) 
            << 0x20U) | (QData)((IData)(vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U])));
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls.cfg 
        = (((QData)((IData)(vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U])) 
            << 0x20U) | (QData)((IData)(vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U])));
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if.addrreg[0U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[0U];
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if.addrreg[1U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[1U];
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if.addrreg[2U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[2U];
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if.addrreg[3U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[3U];
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if.addrreg[4U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[4U];
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if.addrreg[5U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[5U];
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if.addrreg[6U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[6U];
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if.addrreg[7U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[7U];
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls.addrreg[0U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[0U];
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls.addrreg[1U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[1U];
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls.addrreg[2U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[2U];
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls.addrreg[3U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[3U];
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls.addrreg[4U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[4U];
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls.addrreg[5U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[5U];
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls.addrreg[6U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[6U];
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls.addrreg[7U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[7U];
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__mmwp_w) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mmwp_w)) {
        ++(vlSymsp->__Vcoverage[2157]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mmwp_w 
            = vlTOPp->bench_top__DOT__u_core__DOT__mmwp_w;
    }
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if.mmwp 
        = vlTOPp->bench_top__DOT__u_core__DOT__mmwp_w;
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls.mmwp 
        = vlTOPp->bench_top__DOT__u_core__DOT__mmwp_w;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__mml_w) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mml_w)) {
        ++(vlSymsp->__Vcoverage[2158]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mml_w 
            = vlTOPp->bench_top__DOT__u_core__DOT__mml_w;
    }
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if.mml 
        = vlTOPp->bench_top__DOT__u_core__DOT__mml_w;
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls.mml 
        = vlTOPp->bench_top__DOT__u_core__DOT__mml_w;
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__irq_soft 
        = vlTOPp->bench_top__DOT__u_core__DOT__irq_soft;
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__irq_ext 
        = vlTOPp->bench_top__DOT__u_core__DOT__irq_ext;
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__irq_timer 
        = vlTOPp->bench_top__DOT__u_core__DOT__irq_timer;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5387]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5388]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5389]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5390]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5391]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5392]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5393]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5394]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5395]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5396]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5397]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5398]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5399]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5400]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5401]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5402]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5403]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5404]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5405]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5406]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5407]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5408]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5409]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5410]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5411]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5412]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5413]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5414]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5415]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5416]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5417]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5418]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__irq_cause 
        = ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                      & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie))
            ? 0xbU : ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                                & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie))
                       ? 7U : 3U));
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__irq_req 
        = ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__glob_ie) 
           & ((((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                 & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie) 
                >> 0xbU) | ((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                             & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie) 
                            >> 7U)) | ((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                                        & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie) 
                                       >> 3U)));
    vlTOPp->retire_pc = vlTOPp->bench_top__DOT__retire_pc;
    if ((1U & (vlTOPp->bench_top__DOT__retire_pc ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (1U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((2U & (vlTOPp->bench_top__DOT__retire_pc ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (2U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((4U & (vlTOPp->bench_top__DOT__retire_pc ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (4U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((8U & (vlTOPp->bench_top__DOT__retire_pc ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (8U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__retire_pc 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xffffffefU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x10U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__retire_pc 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x20U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__retire_pc 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x40U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__retire_pc 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x80U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__retire_pc 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x100U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__retire_pc 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x200U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__retire_pc 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x400U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__retire_pc 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x800U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__retire_pc 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xffffefffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x1000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__retire_pc 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x2000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__retire_pc 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x4000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__retire_pc 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x8000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__retire_pc 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x10000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__retire_pc 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x20000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__retire_pc 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x40000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__retire_pc 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x80000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__retire_pc 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xffefffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x100000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__retire_pc 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x200000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__retire_pc 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x400000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__retire_pc 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x800000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__retire_pc 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x1000000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__retire_pc 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x2000000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__retire_pc 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x4000000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__retire_pc 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x8000000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__retire_pc 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xefffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x10000000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__retire_pc 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x20000000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__retire_pc 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x40000000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__retire_pc 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x80000000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dcsr_step) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_step)) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_step 
            = vlTOPp->bench_top__DOT__u_core__DOT__dcsr_step;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val = 
        (0x40000003U | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dcsr_ebreakm) 
                         << 0xfU) | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dcsr_cause) 
                                      << 6U) | ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dcsr_step) 
                                                << 2U))));
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__retire_rd) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd))) {
        ++(vlSymsp->__Vcoverage[1236]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd 
            = ((0x1eU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__retire_rd)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__retire_rd) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd))) {
        ++(vlSymsp->__Vcoverage[1237]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd 
            = ((0x1dU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__retire_rd)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__retire_rd) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd))) {
        ++(vlSymsp->__Vcoverage[1238]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd 
            = ((0x1bU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__retire_rd)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__retire_rd) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd))) {
        ++(vlSymsp->__Vcoverage[1239]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd 
            = ((0x17U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__retire_rd)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__retire_rd) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd))) {
        ++(vlSymsp->__Vcoverage[1240]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd 
            = ((0xfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__retire_rd)));
    }
    vlTOPp->bench_top__DOT__retire_rd = vlTOPp->bench_top__DOT__u_core__DOT__retire_rd;
    if ((1U & (vlTOPp->bench_top__DOT__retire_instr 
               ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (1U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((2U & (vlTOPp->bench_top__DOT__retire_instr 
               ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (2U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((4U & (vlTOPp->bench_top__DOT__retire_instr 
               ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (4U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((8U & (vlTOPp->bench_top__DOT__retire_instr 
               ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (8U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__retire_instr 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xffffffefU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x10U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__retire_instr 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x20U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__retire_instr 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x40U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__retire_instr 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x80U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__retire_instr 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x100U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__retire_instr 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x200U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__retire_instr 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x400U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__retire_instr 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x800U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__retire_instr 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xffffefffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x1000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__retire_instr 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x2000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__retire_instr 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x4000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__retire_instr 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x8000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__retire_instr 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x10000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__retire_instr 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x20000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__retire_instr 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x40000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__retire_instr 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x80000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__retire_instr 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xffefffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x100000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__retire_instr 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x200000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__retire_instr 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x400000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__retire_instr 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x800000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__retire_instr 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x1000000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__retire_instr 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x2000000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__retire_instr 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x4000000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__retire_instr 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[587]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x8000000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__retire_instr 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xefffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x10000000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__retire_instr 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x20000000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__retire_instr 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[590]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x40000000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__retire_instr 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[591]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x80000000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__imm_i 
        = vlTOPp->bench_top__DOT__u_core__DOT__imm_i;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1547]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1548]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1549]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1550]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1551]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1552]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1553]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1554]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1555]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1556]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1557]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1558]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1559]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1560]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1561]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1562]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1563]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1564]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1565]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1566]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1567]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1568]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1569]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1570]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1571]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1572]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1573]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1574]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1575]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1576]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1577]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1578]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__imm_s 
        = vlTOPp->bench_top__DOT__u_core__DOT__imm_s;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1579]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1580]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1581]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1582]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1583]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1584]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1585]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1586]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1587]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1588]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1589]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1590]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1591]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1592]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1593]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1594]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1595]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1596]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1597]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1598]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1599]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1600]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1601]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1602]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1603]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1604]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1605]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1606]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1607]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1608]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1609]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1610]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__imm_b 
        = vlTOPp->bench_top__DOT__u_core__DOT__imm_b;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1611]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1612]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1613]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1614]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1615]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1616]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1617]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1618]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1619]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1620]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1621]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1622]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1623]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1624]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1625]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1626]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1627]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1628]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1629]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1630]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1631]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1632]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1633]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1634]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1635]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1636]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1637]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1638]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
}
