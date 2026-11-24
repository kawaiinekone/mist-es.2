// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbench_top.h for the primary calling header

#include "Vbench_top.h"
#include "Vbench_top__Syms.h"

#include "verilated_dpi.h"

//==========

void Vbench_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbench_top::eval\n"); );
    Vbench_top__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vbench_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("bench/verilator/bench_top.sv", 19, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vbench_top::_eval_initial_loop(Vbench_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("bench/verilator/bench_top.sv", 19, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vbench_top::_combo__TOP__6(Vbench_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench_top::_combo__TOP__6\n"); );
    Vbench_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3580]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3581]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3582]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3583]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3584]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3585]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3586]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3587]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3588]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3589]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3590]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3591]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3592]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3593]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3594]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3595]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3596]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3597]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3598]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3599]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3600]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3601]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3602]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3603]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3604]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3605]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3606]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3607]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3608]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3609]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3610]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3611]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__alu_y = vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y;
    if (((IData)(vlTOPp->clk) ^ vlTOPp->bench_top__DOT____Vtogcov__clk)) {
        ++(vlSymsp->__Vcoverage[0]);
        vlTOPp->bench_top__DOT____Vtogcov__clk = vlTOPp->clk;
    }
    if (((IData)(vlTOPp->rst) ^ vlTOPp->bench_top__DOT____Vtogcov__rst)) {
        ++(vlSymsp->__Vcoverage[1]);
        vlTOPp->bench_top__DOT____Vtogcov__rst = vlTOPp->rst;
    }
    if (((IData)(vlTOPp->tck) ^ vlTOPp->bench_top__DOT____Vtogcov__tck)) {
        ++(vlSymsp->__Vcoverage[2]);
        vlTOPp->bench_top__DOT____Vtogcov__tck = vlTOPp->tck;
    }
    if (((IData)(vlTOPp->tms) ^ vlTOPp->bench_top__DOT____Vtogcov__tms)) {
        ++(vlSymsp->__Vcoverage[3]);
        vlTOPp->bench_top__DOT____Vtogcov__tms = vlTOPp->tms;
    }
    if (((IData)(vlTOPp->tdi) ^ vlTOPp->bench_top__DOT____Vtogcov__tdi)) {
        ++(vlSymsp->__Vcoverage[4]);
        vlTOPp->bench_top__DOT____Vtogcov__tdi = vlTOPp->tdi;
    }
    vlTOPp->bench_top__DOT__rst = vlTOPp->rst;
    vlTOPp->bench_top__DOT__tck = vlTOPp->tck;
    vlTOPp->bench_top__DOT__tms = vlTOPp->tms;
    vlTOPp->bench_top__DOT__tdi = vlTOPp->tdi;
    vlTOPp->bench_top__DOT__clk = vlTOPp->clk;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1980]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1981]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1982]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1983]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1984]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1985]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1986]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1987]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1988]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1989]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1990]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1991]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1992]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1993]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1994]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1995]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1996]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1997]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1998]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1999]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[2000]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[2001]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[2002]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[2003]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[2004]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[2005]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[2006]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[2007]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[2008]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[2009]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[2010]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[2011]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls.addr 
        = vlTOPp->bench_top__DOT__u_core__DOT__alu_y;
    vlTOPp->bench_top__DOT__u_core__DOT__aoff = (3U 
                                                 & vlTOPp->bench_top__DOT__u_core__DOT__alu_y);
    vlTOPp->bench_top__DOT__u_dbg__DOT__rst = vlTOPp->bench_top__DOT__rst;
    vlTOPp->bench_top__DOT__u_dbg__DOT__tck = vlTOPp->bench_top__DOT__tck;
    vlTOPp->bench_top__DOT__u_dbg__DOT__tms = vlTOPp->bench_top__DOT__tms;
    vlTOPp->bench_top__DOT__u_dbg__DOT__tdi = vlTOPp->bench_top__DOT__tdi;
    vlTOPp->bench_top__DOT__u_dbg__DOT__clk = vlTOPp->bench_top__DOT__clk;
    vlTOPp->bench_top__DOT__u_core__DOT__clk = vlTOPp->bench_top__DOT__clk;
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__aoff) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__aoff))) {
        ++(vlSymsp->__Vcoverage[2433]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__aoff 
            = ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__aoff)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__aoff)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__aoff) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__aoff))) {
        ++(vlSymsp->__Vcoverage[2434]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__aoff 
            = ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__aoff)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__aoff)));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__clk 
        = vlTOPp->bench_top__DOT__u_core__DOT__clk;
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__clk 
        = vlTOPp->bench_top__DOT__u_core__DOT__clk;
    vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__clk 
        = vlTOPp->bench_top__DOT__u_core__DOT__clk;
}

VL_INLINE_OPT void Vbench_top::_sequent__TOP__9(Vbench_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench_top::_sequent__TOP__9\n"); );
    Vbench_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__tap 
        = vlTOPp->bench_top__DOT__u_dbg__DOT__tap;
    vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__ir_shift 
        = vlTOPp->bench_top__DOT__u_dbg__DOT__ir_shift;
    vlTOPp->__Vdly__bench_top__DOT__mem_stall_q = vlTOPp->bench_top__DOT__mem_stall_q;
    vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_md__DOT__state 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state;
    vlTOPp->__Vdlyvset__bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__regs__v0 = 0U;
    vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret;
    vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__eng 
        = vlTOPp->bench_top__DOT__u_dbg__DOT__eng;
    vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__sbdata0 
        = vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0;
    vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__sbaddress0 
        = vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0;
    vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__data0 
        = vlTOPp->bench_top__DOT__u_dbg__DOT__data0;
    vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__abs_busy 
        = vlTOPp->bench_top__DOT__u_dbg__DOT__abs_busy;
    vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__sbreadonaddr 
        = vlTOPp->bench_top__DOT__u_dbg__DOT__sbreadonaddr;
    vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__sbautoincrement 
        = vlTOPp->bench_top__DOT__u_dbg__DOT__sbautoincrement;
    vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__dr 
        = vlTOPp->bench_top__DOT__u_dbg__DOT__dr;
    vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__dbg_ar_write 
        = vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_write;
    vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus;
    vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__priv 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__priv;
    vlTOPp->__Vdlyvset__bench_top__DOT__dram__v1 = 0U;
    vlTOPp->__Vdlyvset__bench_top__DOT__dram__v0 = 0U;
    vlTOPp->__Vdlyvset__bench_top__DOT__imem__v1 = 0U;
    vlTOPp->__Vdlyvset__bench_top__DOT__imem__v0 = 0U;
    vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U];
    vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U];
    vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U];
    vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U];
    vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg;
    vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__step_seen 
        = vlTOPp->bench_top__DOT__u_core__DOT__step_seen;
    vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__step_pending 
        = vlTOPp->bench_top__DOT__u_core__DOT__step_pending;
    vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__lo16 
        = vlTOPp->bench_top__DOT__u_core__DOT__lo16;
    vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__dpc 
        = vlTOPp->bench_top__DOT__u_core__DOT__dpc;
    vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__pc 
        = vlTOPp->bench_top__DOT__u_core__DOT__pc;
    vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__dbg_mode 
        = vlTOPp->bench_top__DOT__u_core__DOT__dbg_mode;
    vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__state 
        = vlTOPp->bench_top__DOT__u_core__DOT__state;
    ++(vlSymsp->__Vcoverage[557]);
    ++(vlSymsp->__Vcoverage[1028]);
    ++(vlSymsp->__Vcoverage[1066]);
    ++(vlSymsp->__Vcoverage[3005]);
    ++(vlSymsp->__Vcoverage[4458]);
    ++(vlSymsp->__Vcoverage[5481]);
    ++(vlSymsp->__Vcoverage[5663]);
    ++(vlSymsp->__Vcoverage[5787]);
    ++(vlSymsp->__Vcoverage[5815]);
    ++(vlSymsp->__Vcoverage[5834]);
    ++(vlSymsp->__Vcoverage[6349]);
    if (vlTOPp->bench_top__DOT__dm_mem_valid) {
        ++(vlSymsp->__Vcoverage[1064]);
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__dm_mem_valid)))) {
        ++(vlSymsp->__Vcoverage[1065]);
    }
    if (vlTOPp->bench_top__DOT__dm_mem_valid) {
        if (vlTOPp->bench_top__DOT__dm_mem_write) {
            ++(vlSymsp->__Vcoverage[1062]);
        }
    }
    if (vlTOPp->bench_top__DOT__dm_mem_valid) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__dm_mem_write)))) {
            ++(vlSymsp->__Vcoverage[1063]);
        }
    }
    if (vlTOPp->bench_top__DOT__dm_mem_valid) {
        if (vlTOPp->bench_top__DOT__dm_mem_write) {
            if (vlTOPp->bench_top__DOT__dm_in_dram) {
                ++(vlSymsp->__Vcoverage[1061]);
            }
        }
    }
    if (vlTOPp->bench_top__DOT__dm_mem_valid) {
        if (vlTOPp->bench_top__DOT__dm_mem_write) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__dm_in_dram)))) {
                if (vlTOPp->bench_top__DOT__dm_in_imem) {
                    ++(vlSymsp->__Vcoverage[1059]);
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__dm_mem_valid) {
        if (vlTOPp->bench_top__DOT__dm_mem_write) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__dm_in_dram)))) {
                if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__dm_in_imem)))) {
                    ++(vlSymsp->__Vcoverage[1060]);
                }
            }
        }
    }
    if (vlTOPp->rst) {
        ++(vlSymsp->__Vcoverage[556]);
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        ++(vlSymsp->__Vcoverage[1014]);
    }
    if (vlTOPp->rst) {
        ++(vlSymsp->__Vcoverage[1013]);
    }
    if (vlTOPp->rst) {
        ++(vlSymsp->__Vcoverage[5814]);
    }
    if (vlTOPp->rst) {
        ++(vlSymsp->__Vcoverage[5833]);
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        ++(vlSymsp->__Vcoverage[6348]);
    }
    if (vlTOPp->rst) {
        ++(vlSymsp->__Vcoverage[6347]);
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if ((2U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
            ++(vlSymsp->__Vcoverage[6335]);
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if ((2U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
            if ((3U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
                ++(vlSymsp->__Vcoverage[6340]);
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if ((2U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
            if ((3U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
                if ((4U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
                    ++(vlSymsp->__Vcoverage[6345]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if ((2U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
            if ((3U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
                if ((4U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
                    ++(vlSymsp->__Vcoverage[6346]);
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__core_rst) {
        ++(vlSymsp->__Vcoverage[3003]);
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        ++(vlSymsp->__Vcoverage[3004]);
    }
    if (vlTOPp->bench_top__DOT__core_rst) {
        ++(vlSymsp->__Vcoverage[4456]);
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        ++(vlSymsp->__Vcoverage[4457]);
    }
    if (vlTOPp->bench_top__DOT__core_rst) {
        ++(vlSymsp->__Vcoverage[5479]);
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        ++(vlSymsp->__Vcoverage[5480]);
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if ((2U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__dbg_ar_done)))) {
                ++(vlSymsp->__Vcoverage[6334]);
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if ((2U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
            if (vlTOPp->bench_top__DOT__dbg_ar_done) {
                ++(vlSymsp->__Vcoverage[6333]);
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            ++(vlSymsp->__Vcoverage[5812]);
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise)))) {
            ++(vlSymsp->__Vcoverage[5813]);
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            ++(vlSymsp->__Vcoverage[5831]);
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise)))) {
            ++(vlSymsp->__Vcoverage[5832]);
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise)))) {
            ++(vlSymsp->__Vcoverage[6306]);
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            ++(vlSymsp->__Vcoverage[6305]);
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if ((2U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
            if ((3U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
                if (vlTOPp->bench_top__DOT__dm_mem_ready) {
                    ++(vlSymsp->__Vcoverage[6338]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if ((2U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
            if ((3U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
                if ((4U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
                    if (vlTOPp->bench_top__DOT__dm_mem_ready) {
                        ++(vlSymsp->__Vcoverage[6343]);
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if ((2U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
            if ((3U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
                if ((4U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__dm_mem_ready)))) {
                        ++(vlSymsp->__Vcoverage[6344]);
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if ((2U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
            if ((3U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
                if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__dm_mem_ready)))) {
                    ++(vlSymsp->__Vcoverage[6339]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state))) {
                ++(vlSymsp->__Vcoverage[4443]);
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state))) {
            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state))) {
                ++(vlSymsp->__Vcoverage[4454]);
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state)))) {
                ++(vlSymsp->__Vcoverage[4449]);
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state)))) {
                ++(vlSymsp->__Vcoverage[4442]);
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set) {
            ++(vlSymsp->__Vcoverage[5448]);
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set) {
            ++(vlSymsp->__Vcoverage[5478]);
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__div_by_zero) {
                    ++(vlSymsp->__Vcoverage[4448]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state)))) {
                if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__div_by_zero)))) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__div_overflow)))) {
                        ++(vlSymsp->__Vcoverage[4447]);
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state)))) {
                if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__div_by_zero)))) {
                    if (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__div_overflow) {
                        ++(vlSymsp->__Vcoverage[4446]);
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_md__start) {
                    ++(vlSymsp->__Vcoverage[4440]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state)))) {
                if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_md__start)))) {
                    ++(vlSymsp->__Vcoverage[4441]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret) {
                ++(vlSymsp->__Vcoverage[5452]);
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret) {
                ++(vlSymsp->__Vcoverage[5477]);
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap) 
                          >> 3U)))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                            ++(vlSymsp->__Vcoverage[5802]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((8U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                            ++(vlSymsp->__Vcoverage[5804]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((8U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                            ++(vlSymsp->__Vcoverage[5806]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((8U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap)))) {
                            ++(vlSymsp->__Vcoverage[5807]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap)))) {
                            ++(vlSymsp->__Vcoverage[5797]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((8U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap)))) {
                            ++(vlSymsp->__Vcoverage[5809]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((8U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap)))) {
                            ++(vlSymsp->__Vcoverage[5805]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((8U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                            ++(vlSymsp->__Vcoverage[5810]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((8U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap)))) {
                            ++(vlSymsp->__Vcoverage[5803]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((8U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                            ++(vlSymsp->__Vcoverage[5808]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                            ++(vlSymsp->__Vcoverage[5798]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap) 
                          >> 3U)))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap)))) {
                            ++(vlSymsp->__Vcoverage[5801]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap) 
                          >> 3U)))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                            ++(vlSymsp->__Vcoverage[5800]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap) 
                          >> 3U)))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap)))) {
                            ++(vlSymsp->__Vcoverage[5799]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                            ++(vlSymsp->__Vcoverage[5796]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap)))) {
                            ++(vlSymsp->__Vcoverage[5795]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((0U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                if ((0xaU != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                    if ((0xbU != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                        if ((0xfU == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                            ++(vlSymsp->__Vcoverage[5826]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((0U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                if ((0xaU != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                    if ((0xbU == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                        ++(vlSymsp->__Vcoverage[5828]);
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((0U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                if ((0xaU == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                    ++(vlSymsp->__Vcoverage[5829]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((0U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                if ((0xaU != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                    if ((0xbU != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                        if ((0xfU != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                            ++(vlSymsp->__Vcoverage[5827]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((0U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                ++(vlSymsp->__Vcoverage[5830]);
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((3U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                if ((4U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                    if ((8U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                        ++(vlSymsp->__Vcoverage[6303]);
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((3U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                ++(vlSymsp->__Vcoverage[6293]);
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((3U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                if ((4U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                    ++(vlSymsp->__Vcoverage[6297]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((3U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                if ((4U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                    if ((8U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                        ++(vlSymsp->__Vcoverage[6304]);
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_md__start) {
                    if (((((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_md_op)) 
                           | (1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_md_op))) 
                          | (2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_md_op))) 
                         | (3U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_md_op)))) {
                        ++(vlSymsp->__Vcoverage[4438]);
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_md__start) {
                    if ((1U & (~ ((((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_md_op)) 
                                    | (1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_md_op))) 
                                   | (2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_md_op))) 
                                  | (3U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_md_op)))))) {
                        ++(vlSymsp->__Vcoverage[4439]);
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    ++(vlSymsp->__Vcoverage[5475]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff)))) {
                    ++(vlSymsp->__Vcoverage[5476]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((3U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))) {
                    if ((0x10U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))) {
                        if ((0x11U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))) {
                            ++(vlSymsp->__Vcoverage[6291]);
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
                        if ((0x11U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))) {
                            ++(vlSymsp->__Vcoverage[6302]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((3U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                if ((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))) {
                    ++(vlSymsp->__Vcoverage[6289]);
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
                            ++(vlSymsp->__Vcoverage[6301]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((3U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                if ((4U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                    if ((1U & (~ ((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir)) 
                                  | (0x10U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir)))))) {
                        if ((0x11U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))) {
                            ++(vlSymsp->__Vcoverage[6296]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((3U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))) {
                    if ((0x10U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))) {
                        ++(vlSymsp->__Vcoverage[6290]);
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((3U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                if ((4U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                    if ((1U & (~ ((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir)) 
                                  | (0x10U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir)))))) {
                        if ((0x11U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))) {
                            ++(vlSymsp->__Vcoverage[6295]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((3U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                if ((4U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                    if (((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir)) 
                         | (0x10U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir)))) {
                        ++(vlSymsp->__Vcoverage[6294]);
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((3U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))) {
                    if ((0x10U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))) {
                        if ((0x11U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))) {
                            ++(vlSymsp->__Vcoverage[6292]);
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
                                    ++(vlSymsp->__Vcoverage[6298]);
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
                                if ((2U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                    ++(vlSymsp->__Vcoverage[6299]);
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
                            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                ++(vlSymsp->__Vcoverage[6300]);
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
                            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                ++(vlSymsp->__Vcoverage[6241]);
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
                            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                              >> 6U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                  >> 5U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a)))) {
                                                            ++(vlSymsp->__Vcoverage[6231]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
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
                            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                              >> 6U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                  >> 5U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                                            ++(vlSymsp->__Vcoverage[6240]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
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
                            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                              >> 6U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                  >> 5U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                    >> 4U)))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                                ++(vlSymsp->__Vcoverage[6240]);
                                            }
                                        }
                                    }
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
                            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                              >> 6U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                  >> 5U)))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a)))) {
                                                            ++(vlSymsp->__Vcoverage[6234]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
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
                            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                              >> 6U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                  >> 5U)))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a)))) {
                                                            ++(vlSymsp->__Vcoverage[6235]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
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
                            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                              >> 6U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                  >> 5U)))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                                ++(vlSymsp->__Vcoverage[6240]);
                                            }
                                        }
                                    }
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
                            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                              >> 6U)))) {
                                    if ((0x20U & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                    >> 4U)))) {
                                            ++(vlSymsp->__Vcoverage[6240]);
                                        }
                                    }
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
                            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                              >> 6U)))) {
                                    if ((0x20U & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a)))) {
                                                            ++(vlSymsp->__Vcoverage[6237]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
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
                            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                              >> 6U)))) {
                                    if ((0x20U & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                                            ++(vlSymsp->__Vcoverage[6238]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
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
                            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                              >> 6U)))) {
                                    if ((0x20U & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a)))) {
                                                            ++(vlSymsp->__Vcoverage[6239]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
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
                            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                              >> 6U)))) {
                                    if ((0x20U & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                                        ++(vlSymsp->__Vcoverage[6240]);
                                                    }
                                                }
                                            }
                                        }
                                    }
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
                            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                              >> 6U)))) {
                                    if ((0x20U & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                     >> 3U)))) {
                                                ++(vlSymsp->__Vcoverage[6240]);
                                            }
                                        }
                                    }
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
                            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                              >> 6U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                  >> 5U)))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a)))) {
                                                            ++(vlSymsp->__Vcoverage[6232]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
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
                            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                              >> 6U)))) {
                                    if ((0x20U & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                                            ++(vlSymsp->__Vcoverage[6240]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
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
                            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                              >> 6U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                  >> 5U)))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                             >> 1U)))) {
                                                        ++(vlSymsp->__Vcoverage[6240]);
                                                    }
                                                }
                                            }
                                        }
                                    }
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
                            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                              >> 6U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                  >> 5U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                         >> 2U)))) {
                                                    ++(vlSymsp->__Vcoverage[6240]);
                                                }
                                            }
                                        }
                                    }
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
                            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                              >> 6U)))) {
                                    if ((0x20U & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                                        ++(vlSymsp->__Vcoverage[6240]);
                                                    }
                                                }
                                            }
                                        }
                                    }
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
                            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                              >> 6U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                  >> 5U)))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                                            ++(vlSymsp->__Vcoverage[6236]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
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
                            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                              >> 6U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                  >> 5U)))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                                            ++(vlSymsp->__Vcoverage[6240]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
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
                            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                              >> 6U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                  >> 5U)))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                                            ++(vlSymsp->__Vcoverage[6233]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
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
                            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                              >> 6U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                  >> 5U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                                        ++(vlSymsp->__Vcoverage[6240]);
                                                    }
                                                }
                                            }
                                        }
                                    }
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
                            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                if ((0x40U & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))) {
                                    ++(vlSymsp->__Vcoverage[6240]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse)))) {
            ++(vlSymsp->__Vcoverage[6330]);
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            ++(vlSymsp->__Vcoverage[6329]);
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5581]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5581]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5581]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5581]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5581]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5581]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5582]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5581]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5582]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5581]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5582]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5581]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5581]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5581]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5581]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5581]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5581]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5581]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5581]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5581]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5582]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5581]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5582]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5582]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5582]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5582]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5582]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5582]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5581]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5582]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5581]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5582]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5582]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5582]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5581]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5581]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5582]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5582]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5582]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5582]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5581]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5581]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5582]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5582]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5581]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5581]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5581]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5582]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5581]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5582]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5583]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5582]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5581]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5581]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5582]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5582]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5582]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5581]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5581]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5582]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5582]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5582]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5582]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5582]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5582]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        ++(vlSymsp->__Vcoverage[5661]);
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
                  & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))))) {
        ++(vlSymsp->__Vcoverage[5662]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            if ((0x1eU 
                                                 != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                                ++(vlSymsp->__Vcoverage[5579]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            if ((0x1eU 
                                                 != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                                ++(vlSymsp->__Vcoverage[5579]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            if ((0x1eU 
                                                 == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                                ++(vlSymsp->__Vcoverage[5578]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            ++(vlSymsp->__Vcoverage[5577]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            ++(vlSymsp->__Vcoverage[5577]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        ++(vlSymsp->__Vcoverage[5576]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        ++(vlSymsp->__Vcoverage[5576]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    ++(vlSymsp->__Vcoverage[5575]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    ++(vlSymsp->__Vcoverage[5575]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                ++(vlSymsp->__Vcoverage[5574]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            if ((0x1eU 
                                                 != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                                ++(vlSymsp->__Vcoverage[5579]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            if ((0x1eU 
                                                 != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                                ++(vlSymsp->__Vcoverage[5579]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            if ((0x1eU 
                                                 == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                                ++(vlSymsp->__Vcoverage[5578]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            ++(vlSymsp->__Vcoverage[5577]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            ++(vlSymsp->__Vcoverage[5577]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        ++(vlSymsp->__Vcoverage[5576]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        ++(vlSymsp->__Vcoverage[5576]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    ++(vlSymsp->__Vcoverage[5575]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    ++(vlSymsp->__Vcoverage[5575]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                ++(vlSymsp->__Vcoverage[5574]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
            if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((3U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((4U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((5U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((6U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    ++(vlSymsp->__Vcoverage[5554]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            if ((0x1eU 
                                                 != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                                ++(vlSymsp->__Vcoverage[5579]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
            if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((3U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((4U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((5U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                ++(vlSymsp->__Vcoverage[5553]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            if ((0x1eU 
                                                 == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                                ++(vlSymsp->__Vcoverage[5578]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            ++(vlSymsp->__Vcoverage[5577]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        ++(vlSymsp->__Vcoverage[5576]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    ++(vlSymsp->__Vcoverage[5575]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                       | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                    | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                   | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                ++(vlSymsp->__Vcoverage[5567]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0xeU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        ++(vlSymsp->__Vcoverage[5563]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            ++(vlSymsp->__Vcoverage[5559]);
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
            if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((3U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((4U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            ++(vlSymsp->__Vcoverage[5552]);
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            if ((0x1eU 
                                                 != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                                ++(vlSymsp->__Vcoverage[5579]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
            if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((3U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((4U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((5U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((6U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    ++(vlSymsp->__Vcoverage[5555]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            if ((0x1eU 
                                                 == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                                ++(vlSymsp->__Vcoverage[5578]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
            if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((3U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((4U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((5U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((6U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    ++(vlSymsp->__Vcoverage[5554]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            ++(vlSymsp->__Vcoverage[5577]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
            if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((3U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((4U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((5U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                ++(vlSymsp->__Vcoverage[5553]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        ++(vlSymsp->__Vcoverage[5576]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
            if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((3U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((4U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            ++(vlSymsp->__Vcoverage[5552]);
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    ++(vlSymsp->__Vcoverage[5575]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
            if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((3U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        ++(vlSymsp->__Vcoverage[5551]);
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0xeU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        ++(vlSymsp->__Vcoverage[5563]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((0U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
            ++(vlSymsp->__Vcoverage[5548]);
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            ++(vlSymsp->__Vcoverage[5559]);
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
            if ((1U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                ++(vlSymsp->__Vcoverage[5549]);
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((0U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
            ++(vlSymsp->__Vcoverage[5548]);
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            if ((0x1eU 
                                                 == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                                ++(vlSymsp->__Vcoverage[5578]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            ++(vlSymsp->__Vcoverage[5577]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
            if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((3U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((4U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((5U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((6U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    ++(vlSymsp->__Vcoverage[5555]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        ++(vlSymsp->__Vcoverage[5576]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    ++(vlSymsp->__Vcoverage[5575]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                       | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                    | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                   | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                ++(vlSymsp->__Vcoverage[5567]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0xeU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        ++(vlSymsp->__Vcoverage[5563]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
            if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((2U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    ++(vlSymsp->__Vcoverage[5550]);
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            ++(vlSymsp->__Vcoverage[5559]);
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            if ((0x1eU 
                                                 != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                                ++(vlSymsp->__Vcoverage[5579]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            ++(vlSymsp->__Vcoverage[5577]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                       | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                    | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                   | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x16U 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            ++(vlSymsp->__Vcoverage[5571]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                       | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                    | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                   | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                ++(vlSymsp->__Vcoverage[5567]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0xeU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        ++(vlSymsp->__Vcoverage[5563]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            ++(vlSymsp->__Vcoverage[5559]);
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            if ((0x1eU 
                                                 != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                                ++(vlSymsp->__Vcoverage[5579]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            if ((0x1eU 
                                                 == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                                ++(vlSymsp->__Vcoverage[5578]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            ++(vlSymsp->__Vcoverage[5577]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            if ((0x1eU 
                                                 == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                                ++(vlSymsp->__Vcoverage[5578]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        ++(vlSymsp->__Vcoverage[5576]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            ++(vlSymsp->__Vcoverage[5577]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    ++(vlSymsp->__Vcoverage[5575]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        ++(vlSymsp->__Vcoverage[5576]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                       | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                    | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                   | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x16U 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            ++(vlSymsp->__Vcoverage[5571]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                       | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                    | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                   | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                ++(vlSymsp->__Vcoverage[5567]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                       | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                    | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                   | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    ++(vlSymsp->__Vcoverage[5568]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0xeU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        ++(vlSymsp->__Vcoverage[5563]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            ++(vlSymsp->__Vcoverage[5559]);
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                ++(vlSymsp->__Vcoverage[5560]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            if ((0x1eU 
                                                 != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                                ++(vlSymsp->__Vcoverage[5579]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                ++(vlSymsp->__Vcoverage[5574]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            ++(vlSymsp->__Vcoverage[5573]);
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            if ((0x1eU 
                                                 == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                                ++(vlSymsp->__Vcoverage[5578]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            ++(vlSymsp->__Vcoverage[5573]);
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        ++(vlSymsp->__Vcoverage[5572]);
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            ++(vlSymsp->__Vcoverage[5577]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            if ((0x1eU 
                                                 == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                                ++(vlSymsp->__Vcoverage[5578]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        ++(vlSymsp->__Vcoverage[5572]);
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        ++(vlSymsp->__Vcoverage[5576]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            ++(vlSymsp->__Vcoverage[5577]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    ++(vlSymsp->__Vcoverage[5575]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        ++(vlSymsp->__Vcoverage[5576]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                       | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                    | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                   | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x16U 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            ++(vlSymsp->__Vcoverage[5571]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                       | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                    | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                   | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                ++(vlSymsp->__Vcoverage[5567]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                       | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                    | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                   | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    ++(vlSymsp->__Vcoverage[5568]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0xeU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        ++(vlSymsp->__Vcoverage[5563]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            ++(vlSymsp->__Vcoverage[5559]);
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                ++(vlSymsp->__Vcoverage[5560]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            if ((0x1eU 
                                                 != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                                ++(vlSymsp->__Vcoverage[5579]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                ++(vlSymsp->__Vcoverage[5574]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            ++(vlSymsp->__Vcoverage[5573]);
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            if ((0x1eU 
                                                 == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                                ++(vlSymsp->__Vcoverage[5578]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            ++(vlSymsp->__Vcoverage[5573]);
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        ++(vlSymsp->__Vcoverage[5572]);
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            ++(vlSymsp->__Vcoverage[5577]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            if ((0x1eU 
                                                 == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                                ++(vlSymsp->__Vcoverage[5578]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        ++(vlSymsp->__Vcoverage[5572]);
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        ++(vlSymsp->__Vcoverage[5576]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            ++(vlSymsp->__Vcoverage[5577]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    ++(vlSymsp->__Vcoverage[5575]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        ++(vlSymsp->__Vcoverage[5576]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                       | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                    | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                   | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x16U 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            ++(vlSymsp->__Vcoverage[5571]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                       | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                    | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                   | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                ++(vlSymsp->__Vcoverage[5567]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                       | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                    | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                   | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    ++(vlSymsp->__Vcoverage[5568]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0xeU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        ++(vlSymsp->__Vcoverage[5563]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            ++(vlSymsp->__Vcoverage[5559]);
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                ++(vlSymsp->__Vcoverage[5560]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            if ((0x1eU 
                                                 != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                                ++(vlSymsp->__Vcoverage[5579]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                ++(vlSymsp->__Vcoverage[5574]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            if ((0x1eU 
                                                 == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                                ++(vlSymsp->__Vcoverage[5578]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            ++(vlSymsp->__Vcoverage[5573]);
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            ++(vlSymsp->__Vcoverage[5577]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            if ((0x1eU 
                                                 == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                                ++(vlSymsp->__Vcoverage[5578]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        ++(vlSymsp->__Vcoverage[5572]);
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        ++(vlSymsp->__Vcoverage[5576]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x1dU 
                                             == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            ++(vlSymsp->__Vcoverage[5577]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    ++(vlSymsp->__Vcoverage[5575]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        ++(vlSymsp->__Vcoverage[5576]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                       | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                    | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                   | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x16U 
                                             == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            ++(vlSymsp->__Vcoverage[5570]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                ++(vlSymsp->__Vcoverage[5574]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    ++(vlSymsp->__Vcoverage[5575]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                       | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                    | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                   | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        ++(vlSymsp->__Vcoverage[5569]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            ++(vlSymsp->__Vcoverage[5573]);
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                ++(vlSymsp->__Vcoverage[5574]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                       | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                    | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                   | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    ++(vlSymsp->__Vcoverage[5568]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        ++(vlSymsp->__Vcoverage[5572]);
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                                | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                               | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                              | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                             | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                            | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
                if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                           | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                    if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            ++(vlSymsp->__Vcoverage[5573]);
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                       | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                    | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                   | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            ++(vlSymsp->__Vcoverage[5566]);
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                       | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                    | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                   | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x16U 
                                             == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            ++(vlSymsp->__Vcoverage[5570]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                       | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                    | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                   | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        ++(vlSymsp->__Vcoverage[5565]);
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                       | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                    | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                   | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        ++(vlSymsp->__Vcoverage[5569]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                       | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                    | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                   | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x16U 
                                             == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            ++(vlSymsp->__Vcoverage[5570]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                       | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                    | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                   | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    ++(vlSymsp->__Vcoverage[5564]);
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                       | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                    | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                   | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    ++(vlSymsp->__Vcoverage[5568]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                       | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                    | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                   | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        ++(vlSymsp->__Vcoverage[5569]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    ++(vlSymsp->__Vcoverage[5561]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
            if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((3U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((4U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((5U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((6U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    ++(vlSymsp->__Vcoverage[5554]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                       | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                    | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                   | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        ++(vlSymsp->__Vcoverage[5565]);
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                       | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                    | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                   | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            ++(vlSymsp->__Vcoverage[5566]);
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                ++(vlSymsp->__Vcoverage[5560]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
            if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((3U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((4U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((5U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                ++(vlSymsp->__Vcoverage[5553]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                       | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                    | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                   | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    ++(vlSymsp->__Vcoverage[5564]);
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                       | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                    | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                   | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        ++(vlSymsp->__Vcoverage[5565]);
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0xeU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        ++(vlSymsp->__Vcoverage[5563]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        ++(vlSymsp->__Vcoverage[5558]);
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
            if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((3U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        ++(vlSymsp->__Vcoverage[5551]);
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        ++(vlSymsp->__Vcoverage[5562]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    ++(vlSymsp->__Vcoverage[5557]);
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
            if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((2U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    ++(vlSymsp->__Vcoverage[5550]);
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    ++(vlSymsp->__Vcoverage[5561]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        ++(vlSymsp->__Vcoverage[5562]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                ++(vlSymsp->__Vcoverage[5556]);
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
            if ((1U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                ++(vlSymsp->__Vcoverage[5549]);
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                ++(vlSymsp->__Vcoverage[5560]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    ++(vlSymsp->__Vcoverage[5561]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            ++(vlSymsp->__Vcoverage[5559]);
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                ++(vlSymsp->__Vcoverage[5560]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    ++(vlSymsp->__Vcoverage[5557]);
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    ++(vlSymsp->__Vcoverage[5561]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        ++(vlSymsp->__Vcoverage[5562]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                ++(vlSymsp->__Vcoverage[5556]);
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                ++(vlSymsp->__Vcoverage[5560]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    ++(vlSymsp->__Vcoverage[5561]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                            | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                           | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                          | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                         | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                        | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                       | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))))) {
            if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                       | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                      | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                     | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                    | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                   | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
                if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                    if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                        if ((0x16U 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                            ++(vlSymsp->__Vcoverage[5571]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            ++(vlSymsp->__Vcoverage[5559]);
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j) 
                   | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                  | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                 | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
                | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
               | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
              | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) 
             | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j))) {
            if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                    if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                        if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                            if ((0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j)) {
                                ++(vlSymsp->__Vcoverage[5560]);
                            }
                        }
                    }
                }
            }
        }
    }
}
