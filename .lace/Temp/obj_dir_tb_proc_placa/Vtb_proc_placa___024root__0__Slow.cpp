// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_proc_placa.h for the primary calling header

#include "Vtb_proc_placa__pch.h"

VL_ATTR_COLD void Vtb_proc_placa___024root___eval_static(Vtb_proc_placa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_proc_placa___024root___eval_static\n"); );
    Vtb_proc_placa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.tb_proc_placa__DOT__CLOCK_50 = 0U;
        vlSelfRef.tb_proc_placa__DOT__KEY = 3U;
    }
    {
        // Inlined CFunc: __Vm_traceActivitySetAll
        vlSelfRef.__Vm_traceActivity[0U] = 1U;
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__tb_proc_placa__DOT__dut__DOT__passo__0 
        = vlSelfRef.tb_proc_placa__DOT__dut__DOT__passo;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_proc_placa__DOT__CLOCK_50__0 = 0U;
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_proc_placa___024root___eval_final(Vtb_proc_placa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_proc_placa___024root___eval_final\n"); );
    Vtb_proc_placa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_proc_placa___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_proc_placa___024root___eval_phase__stl(Vtb_proc_placa___024root* vlSelf);

VL_ATTR_COLD void Vtb_proc_placa___024root___eval_settle(Vtb_proc_placa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_proc_placa___024root___eval_settle\n"); );
    Vtb_proc_placa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_proc_placa___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("C:\\Users\\Aluno\\Projetos\\port_CycloneV_acc\\.lace\\Temp\\instr_tb_proc_placa.v", 9, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_proc_placa___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtb_proc_placa___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_proc_placa___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_proc_placa___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_proc_placa___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_proc_placa___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_proc_placa___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD void Vtb_proc_placa___024root___stl_sequent__TOP__0(Vtb_proc_placa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_proc_placa___024root___stl_sequent__TOP__0\n"); );
    Vtb_proc_placa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_proc_placa__DOT__dut__DOT__modulo 
        = (0x0000ffffU & ((0x00008000U & (IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__acc))
                           ? (- (IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__acc))
                           : (IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__acc)));
    vlSelfRef.tb_proc_placa__DOT__dut__DOT__b = ((0x0000ff00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__memory__DOT__mem
                                                                    [vlSelfRef.tb_proc_placa__DOT__dut__DOT__addr] 
                                                                    >> 7U)))) 
                                                     << 8U)) 
                                                 | (0x000000ffU 
                                                    & vlSelfRef.tb_proc_placa__DOT__dut__DOT__memory__DOT__mem
                                                    [vlSelfRef.tb_proc_placa__DOT__dut__DOT__addr]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (1U 
                                                & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__memory__DOT__mem
                                                   [vlSelfRef.tb_proc_placa__DOT__dut__DOT__addr] 
                                                   >> 8U));
    vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
        = (1U & ((IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__modulo) 
                 >> 0x0fU));
    if ((5U <= (0x0000000fU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000ffff0U & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x0000000fU & ((IData)(3U) + vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 4U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000fff0fU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x000000f0U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 4U)) 
                                 << 4U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 8U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000ff0ffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x00000f00U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 8U)) 
                                 << 8U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 0x0cU)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000f0fffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x0000f000U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 0x0cU)) 
                                 << 0x0000000cU)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 0x10U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x0000ffffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x000f0000U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 0x10U)) 
                                 << 0x00000010U)));
    }
    vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
        = ((0x000ffffeU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                           << 1U)) | (1U & ((IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__modulo) 
                                            >> 0x0eU)));
    if ((5U <= (0x0000000fU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000ffff0U & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x0000000fU & ((IData)(3U) + vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 4U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000fff0fU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x000000f0U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 4U)) 
                                 << 4U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 8U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000ff0ffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x00000f00U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 8U)) 
                                 << 8U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 0x0cU)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000f0fffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x0000f000U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 0x0cU)) 
                                 << 0x0000000cU)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 0x10U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x0000ffffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x000f0000U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 0x10U)) 
                                 << 0x00000010U)));
    }
    vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
        = ((0x000ffffeU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                           << 1U)) | (1U & ((IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__modulo) 
                                            >> 0x0dU)));
    if ((5U <= (0x0000000fU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000ffff0U & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x0000000fU & ((IData)(3U) + vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 4U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000fff0fU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x000000f0U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 4U)) 
                                 << 4U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 8U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000ff0ffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x00000f00U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 8U)) 
                                 << 8U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 0x0cU)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000f0fffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x0000f000U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 0x0cU)) 
                                 << 0x0000000cU)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 0x10U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x0000ffffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x000f0000U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 0x10U)) 
                                 << 0x00000010U)));
    }
    vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
        = ((0x000ffffeU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                           << 1U)) | (1U & ((IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__modulo) 
                                            >> 0x0cU)));
    if ((5U <= (0x0000000fU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000ffff0U & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x0000000fU & ((IData)(3U) + vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 4U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000fff0fU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x000000f0U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 4U)) 
                                 << 4U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 8U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000ff0ffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x00000f00U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 8U)) 
                                 << 8U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 0x0cU)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000f0fffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x0000f000U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 0x0cU)) 
                                 << 0x0000000cU)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 0x10U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x0000ffffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x000f0000U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 0x10U)) 
                                 << 0x00000010U)));
    }
    vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
        = ((0x000ffffeU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                           << 1U)) | (1U & ((IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__modulo) 
                                            >> 0x0bU)));
    if ((5U <= (0x0000000fU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000ffff0U & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x0000000fU & ((IData)(3U) + vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 4U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000fff0fU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x000000f0U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 4U)) 
                                 << 4U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 8U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000ff0ffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x00000f00U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 8U)) 
                                 << 8U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 0x0cU)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000f0fffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x0000f000U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 0x0cU)) 
                                 << 0x0000000cU)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 0x10U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x0000ffffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x000f0000U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 0x10U)) 
                                 << 0x00000010U)));
    }
    vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
        = ((0x000ffffeU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                           << 1U)) | (1U & ((IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__modulo) 
                                            >> 0x0aU)));
    if ((5U <= (0x0000000fU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000ffff0U & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x0000000fU & ((IData)(3U) + vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 4U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000fff0fU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x000000f0U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 4U)) 
                                 << 4U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 8U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000ff0ffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x00000f00U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 8U)) 
                                 << 8U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 0x0cU)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000f0fffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x0000f000U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 0x0cU)) 
                                 << 0x0000000cU)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 0x10U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x0000ffffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x000f0000U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 0x10U)) 
                                 << 0x00000010U)));
    }
    vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
        = ((0x000ffffeU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                           << 1U)) | (1U & ((IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__modulo) 
                                            >> 9U)));
    if ((5U <= (0x0000000fU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000ffff0U & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x0000000fU & ((IData)(3U) + vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 4U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000fff0fU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x000000f0U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 4U)) 
                                 << 4U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 8U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000ff0ffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x00000f00U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 8U)) 
                                 << 8U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 0x0cU)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000f0fffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x0000f000U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 0x0cU)) 
                                 << 0x0000000cU)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 0x10U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x0000ffffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x000f0000U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 0x10U)) 
                                 << 0x00000010U)));
    }
    vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
        = ((0x000ffffeU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                           << 1U)) | (1U & ((IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__modulo) 
                                            >> 8U)));
    if ((5U <= (0x0000000fU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000ffff0U & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x0000000fU & ((IData)(3U) + vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 4U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000fff0fU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x000000f0U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 4U)) 
                                 << 4U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 8U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000ff0ffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x00000f00U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 8U)) 
                                 << 8U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 0x0cU)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000f0fffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x0000f000U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 0x0cU)) 
                                 << 0x0000000cU)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 0x10U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x0000ffffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x000f0000U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 0x10U)) 
                                 << 0x00000010U)));
    }
    vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
        = ((0x000ffffeU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                           << 1U)) | (1U & ((IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__modulo) 
                                            >> 7U)));
    if ((5U <= (0x0000000fU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000ffff0U & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x0000000fU & ((IData)(3U) + vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 4U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000fff0fU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x000000f0U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 4U)) 
                                 << 4U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 8U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000ff0ffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x00000f00U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 8U)) 
                                 << 8U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 0x0cU)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000f0fffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x0000f000U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 0x0cU)) 
                                 << 0x0000000cU)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 0x10U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x0000ffffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x000f0000U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 0x10U)) 
                                 << 0x00000010U)));
    }
    vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
        = ((0x000ffffeU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                           << 1U)) | (1U & ((IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__modulo) 
                                            >> 6U)));
    if ((5U <= (0x0000000fU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000ffff0U & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x0000000fU & ((IData)(3U) + vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 4U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000fff0fU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x000000f0U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 4U)) 
                                 << 4U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 8U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000ff0ffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x00000f00U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 8U)) 
                                 << 8U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 0x0cU)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000f0fffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x0000f000U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 0x0cU)) 
                                 << 0x0000000cU)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 0x10U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x0000ffffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x000f0000U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 0x10U)) 
                                 << 0x00000010U)));
    }
    vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
        = ((0x000ffffeU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                           << 1U)) | (1U & ((IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__modulo) 
                                            >> 5U)));
    if ((5U <= (0x0000000fU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000ffff0U & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x0000000fU & ((IData)(3U) + vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 4U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000fff0fU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x000000f0U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 4U)) 
                                 << 4U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 8U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000ff0ffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x00000f00U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 8U)) 
                                 << 8U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 0x0cU)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000f0fffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x0000f000U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 0x0cU)) 
                                 << 0x0000000cU)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 0x10U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x0000ffffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x000f0000U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 0x10U)) 
                                 << 0x00000010U)));
    }
    vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
        = ((0x000ffffeU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                           << 1U)) | (1U & ((IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__modulo) 
                                            >> 4U)));
    if ((5U <= (0x0000000fU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000ffff0U & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x0000000fU & ((IData)(3U) + vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 4U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000fff0fU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x000000f0U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 4U)) 
                                 << 4U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 8U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000ff0ffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x00000f00U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 8U)) 
                                 << 8U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 0x0cU)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000f0fffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x0000f000U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 0x0cU)) 
                                 << 0x0000000cU)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 0x10U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x0000ffffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x000f0000U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 0x10U)) 
                                 << 0x00000010U)));
    }
    vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
        = ((0x000ffffeU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                           << 1U)) | (1U & ((IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__modulo) 
                                            >> 3U)));
    if ((5U <= (0x0000000fU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000ffff0U & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x0000000fU & ((IData)(3U) + vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 4U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000fff0fU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x000000f0U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 4U)) 
                                 << 4U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 8U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000ff0ffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x00000f00U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 8U)) 
                                 << 8U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 0x0cU)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000f0fffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x0000f000U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 0x0cU)) 
                                 << 0x0000000cU)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 0x10U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x0000ffffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x000f0000U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 0x10U)) 
                                 << 0x00000010U)));
    }
    vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
        = ((0x000ffffeU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                           << 1U)) | (1U & ((IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__modulo) 
                                            >> 2U)));
    if ((5U <= (0x0000000fU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000ffff0U & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x0000000fU & ((IData)(3U) + vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 4U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000fff0fU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x000000f0U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 4U)) 
                                 << 4U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 8U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000ff0ffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x00000f00U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 8U)) 
                                 << 8U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 0x0cU)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000f0fffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x0000f000U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 0x0cU)) 
                                 << 0x0000000cU)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 0x10U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x0000ffffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x000f0000U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 0x10U)) 
                                 << 0x00000010U)));
    }
    vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
        = ((0x000ffffeU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                           << 1U)) | (1U & ((IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__modulo) 
                                            >> 1U)));
    if ((5U <= (0x0000000fU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000ffff0U & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x0000000fU & ((IData)(3U) + vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 4U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000fff0fU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x000000f0U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 4U)) 
                                 << 4U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 8U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000ff0ffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x00000f00U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 8U)) 
                                 << 8U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 0x0cU)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x000f0fffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x0000f000U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 0x0cU)) 
                                 << 0x0000000cU)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                               >> 0x10U)))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
            = ((0x0000ffffU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd) 
               | (0x000f0000U & (((IData)(3U) + (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                                 >> 0x10U)) 
                                 << 0x00000010U)));
    }
    vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
        = ((0x000ffffeU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                           << 1U)) | (1U & (IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__modulo)));
    vlSelfRef.tb_proc_placa__DOT__dut__DOT__proc__DOT__resultado 
        = (0x0000ffffU & ((0x00000200U & vlSelfRef.tb_proc_placa__DOT__dut__DOT__memory__DOT__mem
                           [vlSelfRef.tb_proc_placa__DOT__dut__DOT__addr])
                           ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)
                               ? VL_DIVS_III(16, (IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__acc), (IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__b))
                               : VL_MULS_III(16, (IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__acc), (IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__b)))
                           : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)
                               ? ((IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__acc) 
                                  - (IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__b))
                               : ((IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__acc) 
                                  + (IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__b)))));
}

VL_ATTR_COLD bool Vtb_proc_placa___024root___eval_phase__stl(Vtb_proc_placa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_proc_placa___024root___eval_phase__stl\n"); );
    Vtb_proc_placa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_proc_placa___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_proc_placa___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtb_proc_placa___024root___stl_sequent__TOP__0(vlSelf);
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.__Vm_traceActivity[3U] = 1U;
                }
            }
        }
    }
    return (__VstlExecute);
}

bool Vtb_proc_placa___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_proc_placa___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_proc_placa___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_proc_placa___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_proc_placa.dut.passo)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge tb_proc_placa.CLOCK_50)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_proc_placa___024root___ctor_var_reset(Vtb_proc_placa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_proc_placa___024root___ctor_var_reset\n"); );
    Vtb_proc_placa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_proc_placa__DOT__esperado[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10780942092379979673ull);
    }
    vlSelf->tb_proc_placa__DOT__k = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15531826527212478125ull);
    vlSelf->tb_proc_placa__DOT__erros = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11562823389544351504ull);
    vlSelf->tb_proc_placa__DOT__dut__DOT__passo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17123327064597634163ull);
    vlSelf->tb_proc_placa__DOT__dut__DOT__b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3522552181339897951ull);
    vlSelf->tb_proc_placa__DOT__dut__DOT__acc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 103661564085157605ull);
    vlSelf->tb_proc_placa__DOT__dut__DOT__addr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2630291831830100533ull);
    vlSelf->tb_proc_placa__DOT__dut__DOT__modulo = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13124880336191189513ull);
    vlSelf->tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 6455183048974301158ull);
    vlSelf->tb_proc_placa__DOT__dut__DOT__proc__DOT__resultado = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12431237858994903092ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_proc_placa__DOT__dut__DOT__memory__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14565974438815989309ull);
    }
    vlSelf->tb_proc_placa__DOT__dut__DOT__circ_db__DOT__s0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17843056026118779441ull);
    vlSelf->tb_proc_placa__DOT__dut__DOT__circ_db__DOT__s1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12068946219683251420ull);
    vlSelf->tb_proc_placa__DOT__dut__DOT__circ_db__DOT__cont = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2151894499874096443ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_proc_placa__DOT__dut__DOT__passo__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_proc_placa__DOT__CLOCK_50__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
