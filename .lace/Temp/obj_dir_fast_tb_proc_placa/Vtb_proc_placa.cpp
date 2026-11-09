// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_proc_placa__pch.h"

//============================================================
// Constructors

Vtb_proc_placa::Vtb_proc_placa(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_proc_placa__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_proc_placa::Vtb_proc_placa(const char* _vcname__)
    : Vtb_proc_placa(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_proc_placa::~Vtb_proc_placa() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_proc_placa___024root___eval_debug_assertions(Vtb_proc_placa___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_proc_placa___024root___eval_static(Vtb_proc_placa___024root* vlSelf);
void Vtb_proc_placa___024root___eval_initial(Vtb_proc_placa___024root* vlSelf);
void Vtb_proc_placa___024root___eval_settle(Vtb_proc_placa___024root* vlSelf);
void Vtb_proc_placa___024root___eval(Vtb_proc_placa___024root* vlSelf);

void Vtb_proc_placa::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_proc_placa::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_proc_placa___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_proc_placa___024root___eval_static(&(vlSymsp->TOP));
        Vtb_proc_placa___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_proc_placa___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_proc_placa___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_proc_placa::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_proc_placa::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_proc_placa::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_proc_placa___024root___eval_final(Vtb_proc_placa___024root* vlSelf);

VL_ATTR_COLD void Vtb_proc_placa::final() {
    contextp()->executingFinal(true);
    Vtb_proc_placa___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_proc_placa::hierName() const { return vlSymsp->name(); }
const char* Vtb_proc_placa::modelName() const { return "Vtb_proc_placa"; }
unsigned Vtb_proc_placa::threads() const { return 1; }
void Vtb_proc_placa::prepareClone() const { contextp()->prepareClone(); }
void Vtb_proc_placa::atClone() const {
    contextp()->threadPoolpOnClone();
}
