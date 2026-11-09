// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_proc_placa.h for the primary calling header

#include "Vtb_proc_placa__pch.h"

VlCoroutine Vtb_proc_placa___024root___eval_initial__TOP__Vtiming__0(Vtb_proc_placa___024root* vlSelf);
VlCoroutine Vtb_proc_placa___024root___eval_initial__TOP__Vtiming__1(Vtb_proc_placa___024root* vlSelf);

void Vtb_proc_placa___024root___eval_initial(Vtb_proc_placa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_proc_placa___024root___eval_initial\n"); );
    Vtb_proc_placa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSymsp->_vm_contextp__->dumpfile("tb_proc_placa.vcd"s);
        vlSymsp->_traceDumpOpen();
        VL_READMEM_N(false, 10, 16, 0, "program.txt"s
                     ,  &(vlSelfRef.tb_proc_placa__DOT__dut__DOT__memory__DOT__mem)
                     , 0, ~0ULL);
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__passo = 0U;
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__circ_db__DOT__cont = 0U;
    }
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_proc_placa___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_proc_placa___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_proc_placa___024root___eval_initial__TOP__Vtiming__0(Vtb_proc_placa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_proc_placa___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_proc_placa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_proc_placa__DOT__esperado[0U] = 0U;
    vlSelfRef.tb_proc_placa__DOT__esperado[1U] = 1U;
    vlSelfRef.tb_proc_placa__DOT__esperado[2U] = 2U;
    vlSelfRef.tb_proc_placa__DOT__esperado[3U] = 6U;
    vlSelfRef.tb_proc_placa__DOT__esperado[4U] = 0x0018U;
    vlSelfRef.tb_proc_placa__DOT__esperado[5U] = 0x0078U;
    vlSelfRef.tb_proc_placa__DOT__esperado[6U] = 0x02d0U;
    vlSelfRef.tb_proc_placa__DOT__esperado[7U] = 0x13b0U;
    vlSelfRef.tb_proc_placa__DOT__esperado[8U] = 0x0348U;
    vlSelfRef.tb_proc_placa__DOT__esperado[9U] = 0x0023U;
    vlSelfRef.tb_proc_placa__DOT__esperado[10U] = 0x0023U;
    vlSelfRef.tb_proc_placa__DOT__esperado[11U] = 0x0023U;
    vlSelfRef.tb_proc_placa__DOT__esperado[12U] = 0x0023U;
    vlSelfRef.tb_proc_placa__DOT__esperado[13U] = 0x0023U;
    vlSelfRef.tb_proc_placa__DOT__esperado[14U] = 0x0023U;
    vlSelfRef.tb_proc_placa__DOT__esperado[15U] = 0x0023U;
    vlSelfRef.tb_proc_placa__DOT__k = 0x00000010U;
    vlSelfRef.tb_proc_placa__DOT__erros = 0U;
    vlSelfRef.tb_proc_placa__DOT__KEY = (1U & (IData)(vlSelfRef.tb_proc_placa__DOT__KEY));
    co_await vlSelfRef.__VdlySched.delay(0x00000000000186a0ULL, 
                                         nullptr, "C:\\Users\\Aluno\\Projetos\\port_CycloneV_acc\\.lace\\Temp\\instr_tb_proc_placa.v", 
                                         42);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_proc_placa__DOT__KEY = (2U & (IData)(vlSelfRef.tb_proc_placa__DOT__KEY));
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "C:\\Users\\Aluno\\Projetos\\port_CycloneV_acc\\.lace\\Temp\\instr_tb_proc_placa.v", 
                                         26);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_proc_placa__DOT__KEY = (1U | (IData)(vlSelfRef.tb_proc_placa__DOT__KEY));
    co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                         nullptr, "C:\\Users\\Aluno\\Projetos\\port_CycloneV_acc\\.lace\\Temp\\instr_tb_proc_placa.v", 
                                         26);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_proc_placa__DOT__KEY = (2U & (IData)(vlSelfRef.tb_proc_placa__DOT__KEY));
    co_await vlSelfRef.__VdlySched.delay(0x000000000000ea60ULL, 
                                         nullptr, "C:\\Users\\Aluno\\Projetos\\port_CycloneV_acc\\.lace\\Temp\\instr_tb_proc_placa.v", 
                                         26);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_proc_placa__DOT__KEY = (1U | (IData)(vlSelfRef.tb_proc_placa__DOT__KEY));
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "C:\\Users\\Aluno\\Projetos\\port_CycloneV_acc\\.lace\\Temp\\instr_tb_proc_placa.v", 
                                         26);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_proc_placa__DOT__KEY = (2U & (IData)(vlSelfRef.tb_proc_placa__DOT__KEY));
    co_await vlSelfRef.__VdlySched.delay(0x00000000001e8480ULL, 
                                         nullptr, "C:\\Users\\Aluno\\Projetos\\port_CycloneV_acc\\.lace\\Temp\\instr_tb_proc_placa.v", 
                                         27);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_proc_placa__DOT__KEY = (1U | (IData)(vlSelfRef.tb_proc_placa__DOT__KEY));
    co_await vlSelfRef.__VdlySched.delay(0x000000000000c350ULL, 
                                         nullptr, "C:\\Users\\Aluno\\Projetos\\port_CycloneV_acc\\.lace\\Temp\\instr_tb_proc_placa.v", 
                                         28);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_proc_placa__DOT__KEY = (2U & (IData)(vlSelfRef.tb_proc_placa__DOT__KEY));
    co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                         nullptr, "C:\\Users\\Aluno\\Projetos\\port_CycloneV_acc\\.lace\\Temp\\instr_tb_proc_placa.v", 
                                         28);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_proc_placa__DOT__KEY = (1U | (IData)(vlSelfRef.tb_proc_placa__DOT__KEY));
    co_await vlSelfRef.__VdlySched.delay(0x00000000001e8480ULL, 
                                         nullptr, "C:\\Users\\Aluno\\Projetos\\port_CycloneV_acc\\.lace\\Temp\\instr_tb_proc_placa.v", 
                                         28);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_proc_placa__DOT__KEY = (2U | (IData)(vlSelfRef.tb_proc_placa__DOT__KEY));
    co_await vlSelfRef.__VdlySched.delay(0x0000000000030d40ULL, 
                                         nullptr, "C:\\Users\\Aluno\\Projetos\\port_CycloneV_acc\\.lace\\Temp\\instr_tb_proc_placa.v", 
                                         42);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("depois do reset          ->   acc = %6d\n",1
                 , '~',16,(IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__acc));
    VL_FFLUSH_MT();vlSelfRef.tb_proc_placa__DOT__k = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.tb_proc_placa__DOT__k)) {
        VL_WRITEF_NX("addr %2d: op = %b, b = %4d   ->\n",3
                     , '#',4,vlSelfRef.tb_proc_placa__DOT__dut__DOT__addr
                     , '#',2,(3U & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__memory__DOT__mem
                                    [vlSelfRef.tb_proc_placa__DOT__dut__DOT__addr] 
                                    >> 8U)), '~',8,vlSelfRef.tb_proc_placa__DOT__dut__DOT__memory__DOT__mem
                     [vlSelfRef.tb_proc_placa__DOT__dut__DOT__addr]);
        VL_FFLUSH_MT();vlSelfRef.tb_proc_placa__DOT__KEY 
            = (2U & (IData)(vlSelfRef.tb_proc_placa__DOT__KEY));
        co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                             nullptr, 
                                             "C:\\Users\\Aluno\\Projetos\\port_CycloneV_acc\\.lace\\Temp\\instr_tb_proc_placa.v", 
                                             26);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_proc_placa__DOT__KEY = (1U | (IData)(vlSelfRef.tb_proc_placa__DOT__KEY));
        co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                             nullptr, 
                                             "C:\\Users\\Aluno\\Projetos\\port_CycloneV_acc\\.lace\\Temp\\instr_tb_proc_placa.v", 
                                             26);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_proc_placa__DOT__KEY = (2U & (IData)(vlSelfRef.tb_proc_placa__DOT__KEY));
        co_await vlSelfRef.__VdlySched.delay(0x000000000000ea60ULL, 
                                             nullptr, 
                                             "C:\\Users\\Aluno\\Projetos\\port_CycloneV_acc\\.lace\\Temp\\instr_tb_proc_placa.v", 
                                             26);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_proc_placa__DOT__KEY = (1U | (IData)(vlSelfRef.tb_proc_placa__DOT__KEY));
        co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                             nullptr, 
                                             "C:\\Users\\Aluno\\Projetos\\port_CycloneV_acc\\.lace\\Temp\\instr_tb_proc_placa.v", 
                                             26);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_proc_placa__DOT__KEY = (2U & (IData)(vlSelfRef.tb_proc_placa__DOT__KEY));
        co_await vlSelfRef.__VdlySched.delay(0x00000000001e8480ULL, 
                                             nullptr, 
                                             "C:\\Users\\Aluno\\Projetos\\port_CycloneV_acc\\.lace\\Temp\\instr_tb_proc_placa.v", 
                                             27);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_proc_placa__DOT__KEY = (1U | (IData)(vlSelfRef.tb_proc_placa__DOT__KEY));
        co_await vlSelfRef.__VdlySched.delay(0x000000000000c350ULL, 
                                             nullptr, 
                                             "C:\\Users\\Aluno\\Projetos\\port_CycloneV_acc\\.lace\\Temp\\instr_tb_proc_placa.v", 
                                             28);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_proc_placa__DOT__KEY = (2U & (IData)(vlSelfRef.tb_proc_placa__DOT__KEY));
        co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                             nullptr, 
                                             "C:\\Users\\Aluno\\Projetos\\port_CycloneV_acc\\.lace\\Temp\\instr_tb_proc_placa.v", 
                                             28);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_proc_placa__DOT__KEY = (1U | (IData)(vlSelfRef.tb_proc_placa__DOT__KEY));
        co_await vlSelfRef.__VdlySched.delay(0x00000000001e8480ULL, 
                                             nullptr, 
                                             "C:\\Users\\Aluno\\Projetos\\port_CycloneV_acc\\.lace\\Temp\\instr_tb_proc_placa.v", 
                                             28);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        VL_WRITEF_NX("                              acc = %6d  (esperado %6d)%s\n",3
                     , '~',16,(IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__acc)
                     , '~',16,vlSelfRef.tb_proc_placa__DOT__esperado
                     [(0x0000000fU & vlSelfRef.tb_proc_placa__DOT__k)]
                     , '#',48,(((IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__acc) 
                                == vlSelfRef.tb_proc_placa__DOT__esperado
                                [(0x0000000fU & vlSelfRef.tb_proc_placa__DOT__k)])
                                ? 0ULL : 0x000020204552524fULL));
        VL_FFLUSH_MT();if (((IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__acc) 
                            != vlSelfRef.tb_proc_placa__DOT__esperado
                            [(0x0000000fU & vlSelfRef.tb_proc_placa__DOT__k)])) {
            vlSelfRef.tb_proc_placa__DOT__erros = ((IData)(1U) 
                                                   + vlSelfRef.tb_proc_placa__DOT__erros);
        }
        vlSelfRef.tb_proc_placa__DOT__k = ((IData)(1U) 
                                           + vlSelfRef.tb_proc_placa__DOT__k);
    }
    if ((0U == vlSelfRef.tb_proc_placa__DOT__erros)) {
        VL_WRITEF_NX("OK: 7! = 5040 e C(7,3) = 35\n",0);
    } else {
        VL_WRITEF_NX("FALHOU: %0d erros\n",1, '~',32,vlSelfRef.tb_proc_placa__DOT__erros);
    }
    VL_FFLUSH_MT();VL_FINISH_MT("C:\\Users\\Aluno\\Projetos\\port_CycloneV_acc\\.lace\\Temp\\instr_tb_proc_placa.v", 55, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

VlCoroutine Vtb_proc_placa___024root___eval_initial__TOP__Vtiming__1(Vtb_proc_placa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_proc_placa___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_proc_placa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "C:\\Users\\Aluno\\Projetos\\port_CycloneV_acc\\.lace\\Temp\\instr_tb_proc_placa.v", 
                                             21);
        vlSelfRef.tb_proc_placa__DOT__CLOCK_50 = (1U 
                                                  & (~ (IData)(vlSelfRef.tb_proc_placa__DOT__CLOCK_50)));
    }
    co_return;
}

bool Vtb_proc_placa___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_proc_placa___024root___trigger_anySet__act\n"); );
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

void Vtb_proc_placa___024root___nba_sequent__TOP__1(Vtb_proc_placa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_proc_placa___024root___nba_sequent__TOP__1\n"); );
    Vtb_proc_placa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2U & (IData)(vlSelfRef.tb_proc_placa__DOT__KEY))) {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__addr 
            = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__addr)));
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__acc 
            = vlSelfRef.tb_proc_placa__DOT__dut__DOT__proc__DOT__resultado;
    } else {
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__addr = 0U;
        vlSelfRef.tb_proc_placa__DOT__dut__DOT__acc = 0U;
    }
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
    vlSelfRef.tb_proc_placa__DOT__dut__DOT__modulo 
        = (0x0000ffffU & ((0x00008000U & (IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__acc))
                           ? (- (IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__acc))
                           : (IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__acc)));
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
}

void Vtb_proc_placa___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_proc_placa___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_proc_placa___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_proc_placa___024root___eval_phase__act(Vtb_proc_placa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_proc_placa___024root___eval_phase__act\n"); );
    Vtb_proc_placa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((IData)(vlSelfRef.tb_proc_placa__DOT__CLOCK_50) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_proc_placa__DOT__CLOCK_50__0))) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__passo) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_proc_placa__DOT__dut__DOT__passo__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_proc_placa__DOT__dut__DOT__passo__0 
            = vlSelfRef.tb_proc_placa__DOT__dut__DOT__passo;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_proc_placa__DOT__CLOCK_50__0 
            = vlSelfRef.tb_proc_placa__DOT__CLOCK_50;
    }
    Vtb_proc_placa___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_proc_placa___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_proc_placa___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_proc_placa___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        {
            // Inlined CFunc: _timing_resume
            if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
                vlSelfRef.__VdlySched.resume();
            }
        }
    }
    return (__VactExecute);
}

bool Vtb_proc_placa___024root___eval_phase__inact(Vtb_proc_placa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_proc_placa___024root___eval_phase__inact\n"); );
    Vtb_proc_placa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("C:\\Users\\Aluno\\Projetos\\port_CycloneV_acc\\.lace\\Temp\\instr_tb_proc_placa.v", 9, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_proc_placa___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_proc_placa___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_proc_placa___024root___eval_phase__nba(Vtb_proc_placa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_proc_placa___024root___eval_phase__nba\n"); );
    Vtb_proc_placa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_proc_placa___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    CData/*3:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_proc_placa__DOT__dut__DOT__circ_db__DOT__cont;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_proc_placa__DOT__dut__DOT__circ_db__DOT__cont = 0;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_proc_placa__DOT__dut__DOT__circ_db__DOT__cont 
                        = vlSelfRef.tb_proc_placa__DOT__dut__DOT__circ_db__DOT__cont;
                    if (((IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__circ_db__DOT__s1) 
                         == (IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__passo))) {
                        __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_proc_placa__DOT__dut__DOT__circ_db__DOT__cont = 0U;
                    } else {
                        __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_proc_placa__DOT__dut__DOT__circ_db__DOT__cont 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__circ_db__DOT__cont)));
                        if ((0x0000000fU == (IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__circ_db__DOT__cont))) {
                            vlSelfRef.tb_proc_placa__DOT__dut__DOT__passo 
                                = vlSelfRef.tb_proc_placa__DOT__dut__DOT__circ_db__DOT__s1;
                        }
                    }
                    vlSelfRef.tb_proc_placa__DOT__dut__DOT__circ_db__DOT__cont 
                        = __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_proc_placa__DOT__dut__DOT__circ_db__DOT__cont;
                    vlSelfRef.tb_proc_placa__DOT__dut__DOT__circ_db__DOT__s1 
                        = vlSelfRef.tb_proc_placa__DOT__dut__DOT__circ_db__DOT__s0;
                    vlSelfRef.tb_proc_placa__DOT__dut__DOT__circ_db__DOT__s0 
                        = (1U & (~ (IData)(vlSelfRef.tb_proc_placa__DOT__KEY)));
                }
            }
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_proc_placa___024root___nba_sequent__TOP__1(vlSelf);
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
            }
        }
        Vtb_proc_placa___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_proc_placa___024root___eval(Vtb_proc_placa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_proc_placa___024root___eval\n"); );
    Vtb_proc_placa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_proc_placa___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("C:\\Users\\Aluno\\Projetos\\port_CycloneV_acc\\.lace\\Temp\\instr_tb_proc_placa.v", 9, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("C:\\Users\\Aluno\\Projetos\\port_CycloneV_acc\\.lace\\Temp\\instr_tb_proc_placa.v", 9, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_proc_placa___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("C:\\Users\\Aluno\\Projetos\\port_CycloneV_acc\\.lace\\Temp\\instr_tb_proc_placa.v", 9, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_proc_placa___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_proc_placa___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_proc_placa___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_proc_placa___024root___eval_debug_assertions(Vtb_proc_placa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_proc_placa___024root___eval_debug_assertions\n"); );
    Vtb_proc_placa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
