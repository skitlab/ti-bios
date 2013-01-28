/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-y35
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     MODULE INCLUDES
 *     
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *     
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/c62/IntrinsicsSupport.h>
#include <ti/sysbios/family/c62/TaskSupport.h>
#include <ti/sysbios/family/c64p/Cache.h>
#include <ti/sysbios/family/c64p/Exception.h>
#include <ti/sysbios/family/c64p/Hwi.h>
#include <ti/sysbios/family/c64p/dm6437/TimerSupport.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/hal/Timer.h>
#include <ti/sysbios/heaps/HeapMem.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/timers/timer64/Timer.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysMin.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>


/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__* __fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_BIOS_RtsGateProxy___VERS
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.c62.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.c62.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.c64p.Cache INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.c64p.Exception INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.c64p.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_c64p_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_c64p_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_c64p_Hwi_Module__ ti_sysbios_family_c64p_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_c64p_Hwi_Object__ {
    const ti_sysbios_family_c64p_Hwi_Fxns__* __fxns;
    xdc_Bits16 disableMask;
    xdc_Bits16 restoreMask;
    xdc_UArg arg;
    ti_sysbios_family_c64p_Hwi_FuncPtr fxn;
    ti_sysbios_family_c64p_Hwi_Irp irp;
    __TA_ti_sysbios_family_c64p_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_c64p_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_c64p_Hwi_Object__ obj;
} ti_sysbios_family_c64p_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_c64p_Hwi___VERS
    #define ti_sysbios_family_c64p_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_c64p_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.c64p.dm6437.TimerSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__* __fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateHwi___VERS
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateMutex___VERS
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__* __fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi___VERS
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_c64p_Hwi_Object */

/* Object */
typedef ti_sysbios_family_c64p_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi_HwiProxy___VERS
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Timer_Module__ ti_sysbios_hal_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Timer_Object__ {
    const ti_sysbios_hal_Timer_Fxns__* __fxns;
    ti_sysbios_hal_Timer_TimerProxy_Handle pi;
} ti_sysbios_hal_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_Object__ obj;
} ti_sysbios_hal_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Timer___VERS
    #define ti_sysbios_hal_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Timer_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Timer_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Timer_TimerProxy_Module__ ti_sysbios_hal_Timer_TimerProxy_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_timers_timer64_Timer_Object__ {
    const ti_sysbios_timers_timer64_Timer_Fxns__* __fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    ti_sysbios_timers_timer64_Timer_Half half;
    xdc_UInt tcrInit;
    xdc_UInt emumgtInit;
    xdc_UInt gpioIntEn;
    xdc_UInt gpioDatDir;
    ti_sysbios_interfaces_ITimer_RunMode runMode;
    ti_sysbios_interfaces_ITimer_StartMode startMode;
    xdc_UInt period;
    ti_sysbios_interfaces_ITimer_PeriodType periodType;
    xdc_UInt prescalar;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_hal_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz extFreq;
    ti_sysbios_hal_Hwi_Handle hwi;
} ti_sysbios_timers_timer64_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_timers_timer64_Timer_Object__ obj;
} ti_sysbios_timers_timer64_Timer_Object2__;

/* Object */
typedef ti_sysbios_timers_timer64_Timer_Object__ ti_sysbios_hal_Timer_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_TimerProxy_Object__ obj;
} ti_sysbios_hal_Timer_TimerProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Timer_TimerProxy___VERS
    #define ti_sysbios_hal_Timer_TimerProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Timer_TimerProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_heaps_HeapMem_Object__ {
    const ti_sysbios_heaps_HeapMem_Fxns__* __fxns;
    xdc_runtime_Memory_Size align;
    __TA_ti_sysbios_heaps_HeapMem_Instance_State__buf buf;
    ti_sysbios_heaps_HeapMem_Header head;
    xdc_SizeT minBlockAlign;
} ti_sysbios_heaps_HeapMem_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Object__ obj;
} ti_sysbios_heaps_HeapMem_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem___VERS
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__ obj;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy___VERS
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock___VERS
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Queue___VERS
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Semaphore___VERS
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Swi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Swi_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Swi___VERS
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem* pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
    xdc_UInt curCoreId;
    xdc_UInt affinity;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Task___VERS
    #define ti_sysbios_knl_Task___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Task___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.timers.timer64.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_timers_timer64_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_timers_timer64_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_timers_timer64_Timer_Module__ ti_sysbios_timers_timer64_Timer_Module__root__V;

/* <-- ti_sysbios_timers_timer64_Timer_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_timers_timer64_Timer___VERS
    #define ti_sysbios_timers_timer64_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_timers_timer64_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.timers.timer64.Timer_TimerSupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Main_Module_GateProxy___VERS
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- ti_sysbios_heaps_HeapMem_Object */

/* Object */
typedef ti_sysbios_heaps_HeapMem_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Memory_HeapProxy___VERS
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysMin INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_System_Module_GateProxy___VERS
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.c64p.dm6437.TimerSupport INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {0};
__FAR__ const xdc_runtime_Types_Base ti_sysbios_interfaces_ITimerSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.gates.GateHwi INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.gates.GateMutex INHERITS ========
 */



/*
 * ======== ti.sysbios.heaps.HeapMem INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== xdc.runtime.SysMin INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.family.c64p.dm6437.TimerSupport VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_family_c64p_dm6437_TimerSupport_Fxns__ ti_sysbios_family_c64p_dm6437_TimerSupport_Module__FXNS__C = {
    (void*)&ti_sysbios_interfaces_ITimerSupport_Interface__BASE__C, /* base__ */
    &ti_sysbios_family_c64p_dm6437_TimerSupport_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_family_c64p_dm6437_TimerSupport_enable__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x802c, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* base__ */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        ti_sysbios_gates_GateHwi_Object__create__S,
        ti_sysbios_gates_GateHwi_Object__delete__S,
        ti_sysbios_gates_GateHwi_Handle__label__S,
        0x8023, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* base__ */
    &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutex_query__E,
    ti_sysbios_gates_GateMutex_enter__E,
    ti_sysbios_gates_GateMutex_leave__E,
    {
        ti_sysbios_gates_GateMutex_Object__create__S,
        ti_sysbios_gates_GateMutex_Object__delete__S,
        ti_sysbios_gates_GateMutex_Handle__label__S,
        0x8024, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapMem VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_heaps_HeapMem_Fxns__ ti_sysbios_heaps_HeapMem_Module__FXNS__C = {
    (void*)&xdc_runtime_IHeap_Interface__BASE__C, /* base__ */
    &ti_sysbios_heaps_HeapMem_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapMem_alloc__E,
    ti_sysbios_heaps_HeapMem_free__E,
    ti_sysbios_heaps_HeapMem_isBlocking__E,
    ti_sysbios_heaps_HeapMem_getStats__E,
    {
        ti_sysbios_heaps_HeapMem_Object__create__S,
        ti_sysbios_heaps_HeapMem_Object__delete__S,
        ti_sysbios_heaps_HeapMem_Handle__label__S,
        0x802e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysMin VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_SysMin_Fxns__ xdc_runtime_SysMin_Module__FXNS__C = {
    (void*)&xdc_runtime_ISystemSupport_Interface__BASE__C, /* base__ */
    &xdc_runtime_SysMin_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysMin_abort__E,
    xdc_runtime_SysMin_exit__E,
    xdc_runtime_SysMin_flush__E,
    xdc_runtime_SysMin_putch__E,
    xdc_runtime_SysMin_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x800e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    __TA_ti_sysbios_BIOS_Module_State__smpThreadType smpThreadType;
    ti_sysbios_BIOS_StartFuncPtr startFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.c62.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.c62.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.c64p.Cache DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_c64p_Cache_Module_State__ {
    volatile xdc_UInt32* emifAddr;
} ti_sysbios_family_c64p_Cache_Module_State__;

/* Module__state__V */
ti_sysbios_family_c64p_Cache_Module_State__ ti_sysbios_family_c64p_Cache_Module__state__V;


/*
 * ======== ti.sysbios.family.c64p.Exception DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_c64p_Exception_Module_State__ {
    xdc_Bits32 efr;
    xdc_Bits32 nrp;
    xdc_Bits32 ntsr;
    xdc_Bits32 ierr;
    ti_sysbios_family_c64p_Exception_FuncPtr returnHook;
    ti_sysbios_family_c64p_Exception_Context* excContext;
    __TA_ti_sysbios_family_c64p_Exception_Module_State__scratch scratch;
    xdc_Char* isrStack;
} ti_sysbios_family_c64p_Exception_Module_State__;

/* Module__state__V */
ti_sysbios_family_c64p_Exception_Module_State__ ti_sysbios_family_c64p_Exception_Module__state__V;


/*
 * ======== ti.sysbios.family.c64p.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_c64p_Hwi_Object__ ti_sysbios_family_c64p_Hwi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_family_c64p_Hwi_Module_State__ {
    __TA_ti_sysbios_family_c64p_Hwi_Module_State__intEvents intEvents;
    xdc_Bits16 ierMask;
    volatile xdc_Int intNum;
    xdc_Char* taskSP;
    xdc_Char* isrStack;
    xdc_Ptr vectorTableBase;
    xdc_Ptr bss;
    __TA_ti_sysbios_family_c64p_Hwi_Module_State__dispatchTable dispatchTable;
} ti_sysbios_family_c64p_Hwi_Module_State__;

/* --> ti_sysbios_family_c64p_Hwi0 */
extern void* ti_sysbios_family_c64p_Hwi0;

/* --> __TI_STATIC_BASE */
extern void* __TI_STATIC_BASE;

/* Module__state__V */
ti_sysbios_family_c64p_Hwi_Module_State__ ti_sysbios_family_c64p_Hwi_Module__state__V;

/* --> ti_sysbios_knl_Swi_disable__E */
extern xdc_UInt ti_sysbios_knl_Swi_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Swi_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Swi_restoreHwi__E(xdc_UInt);

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E(xdc_UInt);


/*
 * ======== ti.sysbios.family.c64p.dm6437.TimerSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2];


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_hal_Hwi_Object__ ti_sysbios_hal_Hwi_Object__table__V[1];


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_hal_Timer_Object__ ti_sysbios_hal_Timer_Object__table__V[1];


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem DECLARATIONS ========
 */

#ifdef __ICC430__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A, 8);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1];


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_hal_Timer_Handle timer;
    ti_sysbios_knl_Swi_Handle swi;
    xdc_UInt32 periodCounts;
    volatile xdc_UInt numTickSkip;
    xdc_UInt32 skipsWorkFunc;
    xdc_Bool inWorkFunc;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> ti_sysbios_hal_Hwi_checkStack */
extern xdc_Void ti_sysbios_hal_Hwi_checkStack(xdc_Void);

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[1];

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[1];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16];

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restore__E */
extern xdc_Void ti_sysbios_knl_Task_restore__E(xdc_UInt);


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

#ifdef __ICC430__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_0_stack__A, ".far:taskStackSection");
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048] __attribute__ ((section(".far:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_0_stack__A, 8);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048] __attribute__ ((aligned(8)));
#endif
#endif

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[1];

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    xdc_Bool locked;
    volatile xdc_UInt curSet;
    xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurSet smpCurSet;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurMask smpCurMask;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurTask smpCurTask;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurQ smpCurQ;
    __TA_ti_sysbios_knl_Task_Module_State__smpReadyQ smpReadyQ;
    __TA_ti_sysbios_knl_Task_Module_State__idleTask idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16];

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1];

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;

/* --> ti_sysbios_knl_Task_checkStacks */
extern xdc_Void ti_sysbios_knl_Task_checkStacks(ti_sysbios_knl_Task_Handle,ti_sysbios_knl_Task_Handle);

/* --> ti_sysbios_knl_Task_hooks__A */
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[1];


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.timers.timer64.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_timers_timer64_Timer_Object__ ti_sysbios_timers_timer64_Timer_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_timers_timer64_Timer_Module_State__ {
    xdc_Bits32 availMask;
    __TA_ti_sysbios_timers_timer64_Timer_Module_State__intFreqs intFreqs;
    __TA_ti_sysbios_timers_timer64_Timer_Module_State__gctrl gctrl;
    __TA_ti_sysbios_timers_timer64_Timer_Module_State__device device;
    __TA_ti_sysbios_timers_timer64_Timer_Module_State__handles handles;
} ti_sysbios_timers_timer64_Timer_Module_State__;

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_intFreqs__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__intFreqs ti_sysbios_timers_timer64_Timer_Module_State_0_intFreqs__A[2];

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_gctrl__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__gctrl ti_sysbios_timers_timer64_Timer_Module_State_0_gctrl__A[2];

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_device__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__device ti_sysbios_timers_timer64_Timer_Module_State_0_device__A[4];

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__handles ti_sysbios_timers_timer64_Timer_Module_State_0_handles__A[4];

/* Module__state__V */
ti_sysbios_timers_timer64_Timer_Module_State__ ti_sysbios_timers_timer64_Timer_Module__state__V;

/* --> ti_sysbios_timers_timer64_Timer_timerSettings__A */
const __T1_ti_sysbios_timers_timer64_Timer_timerSettings ti_sysbios_timers_timer64_Timer_timerSettings__A[2];


/*
 * ======== ti.sysbios.timers.timer64.Timer_TimerSupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc* listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int* stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[2];

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1];

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int);

/* --> xdc_runtime_SysMin_Module_startup__E */
extern xdc_Int xdc_runtime_SysMin_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_c64p_Exception_Module_startup__E */
extern xdc_Int ti_sysbios_family_c64p_Exception_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_c64p_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_c64p_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_c64p_Cache_Module_startup__E */
extern xdc_Int ti_sysbios_family_c64p_Cache_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Timer_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int);

/* --> ti_sysbios_timers_timer64_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_timers_timer64_Timer_Module_startup__E(xdc_Int);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[11];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[11];


/*
 * ======== xdc.runtime.SysMin DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_SysMin_Module_State__ {
    __TA_xdc_runtime_SysMin_Module_State__outbuf outbuf;
    xdc_UInt outidx;
    xdc_Bool wrapped;
} xdc_runtime_SysMin_Module_State__;

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[1024];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V;

/* --> xdc_runtime_SysMin_output__I */
extern xdc_Void xdc_runtime_SysMin_output__I(xdc_Char*,xdc_UInt);


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
    xdc_Int exitStatus;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8];

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char**,xdc_Char**,xdc_VaList*,xdc_runtime_System_ParseData*);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_Ptr charBase;
    xdc_Ptr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[5084];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[47];


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O = offsetof(ti_sysbios_gates_GateMutex_Object__, Object_field_sem);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__, Object_field_clockQ);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Semaphore_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_inactiveQ);
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_terminatedQ);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = /db/vtree/library/trees/avala/avala-r22x/src/ti/sysbios/package/cfg/instrumented_p64Pe");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = 64P");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.platforms.evmDM6437");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = ti.targets.C64P_big_endian");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.cof.Coff");


/*
 * ======== xdc.cfg.SourceDir TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0;
}
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0;
}
xdc_Bool ti_sysbios_family_c64p_Exception_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0;
}
xdc_Bool ti_sysbios_family_c64p_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0;
}
xdc_Bool ti_sysbios_family_c64p_Cache_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0;
}
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0;
}
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0;
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0;
}
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[8] < 0;
}
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[9] < 0;
}
xdc_Bool ti_sysbios_timers_timer64_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[10] < 0;
}

/* 
 * Startup_exec__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_exec__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((externally_visible));
#endif
#endif

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[11];
    xdc_runtime_Startup_startModsFxn__C(state, 11);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/* 
 * Startup_reset__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_reset__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((externally_visible));
#endif
#endif


/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Assert.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *  
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
Int xdc_runtime_System_printfExtend__I(Char **pbuf, Char **pfmt, 
    VaList *pva, xdc_runtime_System_ParseData *parse)
{
    Char    *fmt = *pfmt;
    Int     res;
    Char    c;
    Bool    found = FALSE;
    
    /* 
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;
    
    res = 0;

    c = *fmt++;
    *pfmt = *pfmt + 1;

    
    if (c == '$') {
        c = *fmt++;
        *pfmt = *pfmt + 1;
        
        if (c == 'L') {
            xdc_runtime_Types_Label *lab = parse->aFlag ? 
                (xdc_runtime_Types_Label *)iargToPtr(va_arg(va, IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);
            
            /* 
             * Call Text_putLab to write out the label, taking the precision 
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
            
            /* Update the minimum width field. */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'F') {
            xdc_runtime_Types_Site site;
            
            /* Retrieve the file name string from the argument list */
            site.file = parse->aFlag ? (Char *) iargToPtr(va_arg(va, IArg)) :
                                       (Char *) va_arg(va, Char *);
            
            /* Retrieve the line number from the argument list. */
            site.line = parse->aFlag ? (Int) va_arg(va, IArg) : 
                                       (Int) va_arg(va, Int);
            
            /* 
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are 
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;
            
            /* 
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string lengrth.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
       
            /* Update the minimum width field */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = parse->aFlag ? 
                (Char *) iargToPtr(va_arg(va, IArg)) :
                (Char *) va_arg(va, Char *);
            
            /* Update pva before passing it to doPrint. */
            *pva = va;
            
            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, parse->ptr, pva, parse->aFlag);
            if (*pbuf) {
                *pbuf += res;
            }
            
            /* Update the temporary variable with any changes to *pva */
            va = *pva;
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;
            
            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }
        
    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag) {
            (void)va_arg(va, IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }    

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining). 
     */
    goto end; 
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.SysMin TEMPLATE ========
 */


#if defined(__ti__) || (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined))
extern int HOSTwrite(int, const char *, unsigned);
#elif defined(__ICC430__)
#include <yfuns.h>
#define HOSTwrite(x,y,z) __write((x),(unsigned char *)(y),(z))
#else
#include <stdio.h>
#endif

/*
 *  ======== SysMin_output__I ========
 *  HOSTWrite only writes a max of N chars at a time. The amount it writes
 *  is returned. This function loops until the entire buffer is written.
 *  Being a static function allows it to conditionally compile out.
 */
Void xdc_runtime_SysMin_output__I(Char *buf, UInt size)
{
#if defined(__ti__) || (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined)) || defined (__ICC430__)
    Int printCount;
    
    while (size != 0) {
        printCount = HOSTwrite(1, buf, size);
        if ((printCount <= 0) || (printCount > size)) {
            break;  /* ensure we never get stuck in an infinite loop */
        }
        size -= printCount;
        buf = buf + printCount;
    }    
#else
    fwrite(buf, 1, size, stdout);
#endif
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */


/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
Void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_Fxn visFxn, xdc_Ptr visState)
{
    xdc_String stack[6];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}


/*
 * ======== ti.sysbios.family.c64p.Hwi TEMPLATE ========
 */


asm("           .sect \".vecs\"         ");
asm("           .align 0x400            ");
asm("           .nocmp                  ");
asm("           .global _ti_sysbios_family_c64p_Hwi0          ");
asm("_ti_sysbios_family_c64p_Hwi0:                            ");
asm("           .global _ti_sysbios_family_c64p_Hwi_int0         ");
asm("           .global __c_int00         ");
asm("_ti_sysbios_family_c64p_Hwi_int0:                           ");
asm("           nop                     ");
asm("           nop                     ");
asm("           nop                     ");
asm("           mvkl    __c_int00, b0     ");
asm("           mvkh    __c_int00, b0     ");
asm("           b       b0              ");
asm("           nop                     ");
asm("           nop     4               ");

asm("           .global _ti_sysbios_family_c64p_Hwi_int1         ");
asm("           .global _ti_sysbios_family_c64p_Exception_dispatch__E         ");
asm("_ti_sysbios_family_c64p_Hwi_int1:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     1, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    _ti_sysbios_family_c64p_Exception_dispatch__E, b0     ");
asm("           mvkh    _ti_sysbios_family_c64p_Exception_dispatch__E, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global _ti_sysbios_family_c64p_Hwi_int2         ");
asm("           .global _ti_sysbios_family_c64p_Hwi_int2         ");
asm("_ti_sysbios_family_c64p_Hwi_int2:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     2, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    _ti_sysbios_family_c64p_Hwi_int2, b0     ");
asm("           mvkh    _ti_sysbios_family_c64p_Hwi_int2, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global _ti_sysbios_family_c64p_Hwi_int3         ");
asm("           .global _ti_sysbios_family_c64p_Hwi_int3         ");
asm("_ti_sysbios_family_c64p_Hwi_int3:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     3, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    _ti_sysbios_family_c64p_Hwi_int3, b0     ");
asm("           mvkh    _ti_sysbios_family_c64p_Hwi_int3, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global _ti_sysbios_family_c64p_Hwi_int4         ");
asm("           .global _ti_sysbios_family_c64p_Hwi_int4         ");
asm("_ti_sysbios_family_c64p_Hwi_int4:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     4, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    _ti_sysbios_family_c64p_Hwi_int4, b0     ");
asm("           mvkh    _ti_sysbios_family_c64p_Hwi_int4, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global _ti_sysbios_family_c64p_Hwi_int5         ");
asm("           .global _ti_sysbios_family_c64p_Hwi_int5         ");
asm("_ti_sysbios_family_c64p_Hwi_int5:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     5, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    _ti_sysbios_family_c64p_Hwi_int5, b0     ");
asm("           mvkh    _ti_sysbios_family_c64p_Hwi_int5, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global _ti_sysbios_family_c64p_Hwi_int6         ");
asm("           .global _ti_sysbios_family_c64p_Hwi_int6         ");
asm("_ti_sysbios_family_c64p_Hwi_int6:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     6, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    _ti_sysbios_family_c64p_Hwi_int6, b0     ");
asm("           mvkh    _ti_sysbios_family_c64p_Hwi_int6, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global _ti_sysbios_family_c64p_Hwi_int7         ");
asm("           .global _ti_sysbios_family_c64p_Hwi_int7         ");
asm("_ti_sysbios_family_c64p_Hwi_int7:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     7, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    _ti_sysbios_family_c64p_Hwi_int7, b0     ");
asm("           mvkh    _ti_sysbios_family_c64p_Hwi_int7, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global _ti_sysbios_family_c64p_Hwi_int8         ");
asm("           .global _ti_sysbios_family_c64p_Hwi_int8         ");
asm("_ti_sysbios_family_c64p_Hwi_int8:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     8, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    _ti_sysbios_family_c64p_Hwi_int8, b0     ");
asm("           mvkh    _ti_sysbios_family_c64p_Hwi_int8, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global _ti_sysbios_family_c64p_Hwi_int9         ");
asm("           .global _ti_sysbios_family_c64p_Hwi_int9         ");
asm("_ti_sysbios_family_c64p_Hwi_int9:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     9, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    _ti_sysbios_family_c64p_Hwi_int9, b0     ");
asm("           mvkh    _ti_sysbios_family_c64p_Hwi_int9, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global _ti_sysbios_family_c64p_Hwi_int10         ");
asm("           .global _ti_sysbios_family_c64p_Hwi_int10         ");
asm("_ti_sysbios_family_c64p_Hwi_int10:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     10, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    _ti_sysbios_family_c64p_Hwi_int10, b0     ");
asm("           mvkh    _ti_sysbios_family_c64p_Hwi_int10, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global _ti_sysbios_family_c64p_Hwi_int11         ");
asm("           .global _ti_sysbios_family_c64p_Hwi_int11         ");
asm("_ti_sysbios_family_c64p_Hwi_int11:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     11, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    _ti_sysbios_family_c64p_Hwi_int11, b0     ");
asm("           mvkh    _ti_sysbios_family_c64p_Hwi_int11, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global _ti_sysbios_family_c64p_Hwi_int12         ");
asm("           .global _ti_sysbios_family_c64p_Hwi_int12         ");
asm("_ti_sysbios_family_c64p_Hwi_int12:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     12, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    _ti_sysbios_family_c64p_Hwi_int12, b0     ");
asm("           mvkh    _ti_sysbios_family_c64p_Hwi_int12, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global _ti_sysbios_family_c64p_Hwi_int13         ");
asm("           .global _ti_sysbios_family_c64p_Hwi_int13         ");
asm("_ti_sysbios_family_c64p_Hwi_int13:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     13, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    _ti_sysbios_family_c64p_Hwi_int13, b0     ");
asm("           mvkh    _ti_sysbios_family_c64p_Hwi_int13, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global _ti_sysbios_family_c64p_Hwi_int14         ");
asm("           .global _ti_sysbios_family_c64p_Hwi_dispatchAlways         ");
asm("_ti_sysbios_family_c64p_Hwi_int14:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     14, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    _ti_sysbios_family_c64p_Hwi_dispatchAlways, b0     ");
asm("           mvkh    _ti_sysbios_family_c64p_Hwi_dispatchAlways, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global _ti_sysbios_family_c64p_Hwi_int15         ");
asm("           .global _ti_sysbios_family_c64p_Hwi_int15         ");
asm("_ti_sysbios_family_c64p_Hwi_int15:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     15, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    _ti_sysbios_family_c64p_Hwi_int15, b0     ");
asm("           mvkh    _ti_sysbios_family_c64p_Hwi_int15, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");



/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */

Void ti_sysbios_BIOS_exitFunc__I(Int);

extern Void ti_sysbios_BIOS_registerRTSLock();

Void ti_sysbios_BIOS_startFunc__I()
{
    xdc_runtime_System_atexit(
        (xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_exitFunc__I);
    ti_sysbios_BIOS_registerRTSLock();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_hal_Timer_startup();
    ti_sysbios_knl_Swi_startup();
    ti_sysbios_knl_Task_startup();
}

#if defined(__ti__)
#include <_lock.h>
#endif

Void ti_sysbios_BIOS_exitFunc__I(Int notused)
{
    ti_sysbios_knl_Swi_disable();
    ti_sysbios_knl_Task_disable();
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

#if defined(__ti__)
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(_nop);
        _register_unlock(_nop);
    }
#endif
}



#if defined(__ti__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);

#define ATTRIBUTE

#elif defined(__ICC430__)

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif


#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>

#if !defined(__ICC430__)
#include <stdlib.h>
#endif

#include <string.h>

/* malloc header */
typedef struct Header {
    Ptr   actualBuf;
    UArg  size;
} Header;

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    Header *packet;
    xdc_runtime_Error_Block eb;

    xdc_runtime_Error_init(&eb);

    if (size == 0) {
        return (NULL);
    }

    packet = (Header *)xdc_runtime_Memory_alloc(NULL,
        (SizeT)(size + sizeof(Header)), 0, &eb);

    if (packet == NULL) {
        return (NULL);
    }

    packet->actualBuf = (Ptr)packet;
    packet->size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    Header                      *packet;
    Void                        *tmp;
    xdc_runtime_Error_Block     eb;

    xdc_runtime_Error_init(&eb);

    if (size == 0) {
        return (NULL);
    }

    /*
     * If alignment is not a power of two or is less than the minimum
     * alignment of malloc(), then simply return what malloc() returns.
     * (same as behaviour as RTS library's memalign())
     * Note: HeapMem's header is the same as this header after it is raised
     * to a power of 2.
     */
    if (alignment <= sizeof(Header) || (alignment & (alignment-1))) {
        return malloc(size);
    }

    /*
     * Allocate 'align + size' so that we have room for the 'packet'
     * and can return an aligned buffer.
     */
    tmp = xdc_runtime_Memory_alloc(NULL, alignment + size,
        (SizeT)alignment, &eb);

    if (tmp == NULL) {
        return (NULL);
    }

    packet = (Header *)((char *)tmp + alignment - sizeof(Header));

    packet->actualBuf = tmp;
    packet->size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    SizeT       nbytes;
    Ptr         retval;

    nbytes = nmemb * size;

    retval = malloc(nbytes);
    if (retval != NULL) {
        (Void)memset(retval, (Int)'\0', nbytes);
    }

    return (retval);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
    Header      *packet;

    if (ptr != NULL) {
        packet = ((Header *)ptr) - 1;

        xdc_runtime_Memory_free(NULL, (Ptr)packet->actualBuf,
            (packet->size + ((char*)packet - (char*)packet->actualBuf)));
    }
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    Ptr         retval;
    Header      *packet;
    SizeT       oldSize;

    if (ptr == NULL) {
        retval = malloc(size);
    }
    else if (size == 0) {
        free(ptr);
        retval = NULL;
    }
    else {
        packet = (Header *)ptr - 1;
        retval = malloc(size);
        if (retval != NULL) {
            oldSize = packet->size - sizeof(Header);
            (Void)memcpy(retval, ptr, (size < oldSize) ? size : oldSize);
            free(ptr);
        }
    }

    return (retval);
}


/*
 * ======== ti.sysbios.Build TEMPLATE ========
 */




/*
 * ======== ti.sysbios.hal.Hwi TEMPLATE ========
 */

#ifdef __ti__
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_disable__E);
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_enable__E);
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_restore__E);
#endif

/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg)
{
    /* update system time */
    (&ti_sysbios_knl_Clock_Module__state__V)->ticks++;

    ti_sysbios_knl_Clock_logTick__E();

    if (!ti_sysbios_knl_Queue_empty(ti_sysbios_knl_Clock_Module_State_clockQ())) {
        (&ti_sysbios_knl_Clock_Module__state__V)->swiCount++;

        ti_sysbios_knl_Swi_post((&ti_sysbios_knl_Clock_Module__state__V)->swi);

    }
}

/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x2367b880,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    (ti_sysbios_BIOS_RtsGateProxy_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[1],  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((void*)0),  /* smpThreadType */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_BIOS_startFunc)),  /* startFunc */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((CT__ti_sysbios_BIOS_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((CT__ti_sysbios_BIOS_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((CT__ti_sysbios_BIOS_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x8016;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((CT__ti_sysbios_BIOS_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__startupDoneFxn ti_sysbios_BIOS_Module__startupDoneFxn__C = ((CT__ti_sysbios_BIOS_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = 0;

/* smpEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* cpuFreq__C */
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0x2367b880,  /* lo */
};

/* taskEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 1;

/* clockEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* heapSize__C */
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x1000;

/* heapSection__C */
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* heapTrackEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C = 0;

/* installedErrorHook__C */
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((CT__ti_sysbios_BIOS_installedErrorHook)((xdc_Fxn)xdc_runtime_Error_print__E));


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.c62.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__gateObj ti_sysbios_family_c62_IntrinsicsSupport_Module__gateObj__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_c62_IntrinsicsSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__id ti_sysbios_family_c62_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x8027;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__startupDoneFxn ti_sysbios_family_c62_IntrinsicsSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Object__count ti_sysbios_family_c62_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Object__heap ti_sysbios_family_c62_IntrinsicsSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Object__sizeof ti_sysbios_family_c62_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Object__table ti_sysbios_family_c62_IntrinsicsSupport_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.c62.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__diagsEnabled ti_sysbios_family_c62_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__diagsIncluded ti_sysbios_family_c62_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__diagsMask ti_sysbios_family_c62_TaskSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__gateObj ti_sysbios_family_c62_TaskSupport_Module__gateObj__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__gatePrms ti_sysbios_family_c62_TaskSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__id ti_sysbios_family_c62_TaskSupport_Module__id__C = (xdc_Bits16)0x8026;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerDefined ti_sysbios_family_c62_TaskSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerObj ti_sysbios_family_c62_TaskSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn0 ti_sysbios_family_c62_TaskSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn1 ti_sysbios_family_c62_TaskSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn2 ti_sysbios_family_c62_TaskSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn4 ti_sysbios_family_c62_TaskSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn8 ti_sysbios_family_c62_TaskSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__startupDoneFxn ti_sysbios_family_c62_TaskSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Object__count ti_sysbios_family_c62_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Object__heap ti_sysbios_family_c62_TaskSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Object__sizeof ti_sysbios_family_c62_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Object__table ti_sysbios_family_c62_TaskSupport_Object__table__C = 0;

/* defaultStackSize__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_defaultStackSize ti_sysbios_family_c62_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x800;

/* stackAlignment__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_stackAlignment ti_sysbios_family_c62_TaskSupport_stackAlignment__C = (xdc_UInt)0x8;


/*
 * ======== ti.sysbios.family.c64p.Cache INITIALIZERS ========
 */

/* Module__state__V */
ti_sysbios_family_c64p_Cache_Module_State__ ti_sysbios_family_c64p_Cache_Module__state__V = {
    ((xdc_UInt32*)0),  /* emifAddr */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__diagsEnabled ti_sysbios_family_c64p_Cache_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__diagsIncluded ti_sysbios_family_c64p_Cache_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__diagsMask ti_sysbios_family_c64p_Cache_Module__diagsMask__C = ((CT__ti_sysbios_family_c64p_Cache_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__gateObj ti_sysbios_family_c64p_Cache_Module__gateObj__C = ((CT__ti_sysbios_family_c64p_Cache_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__gatePrms ti_sysbios_family_c64p_Cache_Module__gatePrms__C = ((CT__ti_sysbios_family_c64p_Cache_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__id ti_sysbios_family_c64p_Cache_Module__id__C = (xdc_Bits16)0x8015;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__loggerDefined ti_sysbios_family_c64p_Cache_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__loggerObj ti_sysbios_family_c64p_Cache_Module__loggerObj__C = ((CT__ti_sysbios_family_c64p_Cache_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__loggerFxn0 ti_sysbios_family_c64p_Cache_Module__loggerFxn0__C = ((CT__ti_sysbios_family_c64p_Cache_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__loggerFxn1 ti_sysbios_family_c64p_Cache_Module__loggerFxn1__C = ((CT__ti_sysbios_family_c64p_Cache_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__loggerFxn2 ti_sysbios_family_c64p_Cache_Module__loggerFxn2__C = ((CT__ti_sysbios_family_c64p_Cache_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__loggerFxn4 ti_sysbios_family_c64p_Cache_Module__loggerFxn4__C = ((CT__ti_sysbios_family_c64p_Cache_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__loggerFxn8 ti_sysbios_family_c64p_Cache_Module__loggerFxn8__C = ((CT__ti_sysbios_family_c64p_Cache_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__startupDoneFxn ti_sysbios_family_c64p_Cache_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_c64p_Cache_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Object__count ti_sysbios_family_c64p_Cache_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Object__heap ti_sysbios_family_c64p_Cache_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Object__sizeof ti_sysbios_family_c64p_Cache_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Object__table ti_sysbios_family_c64p_Cache_Object__table__C = 0;

/* initSize__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_initSize ti_sysbios_family_c64p_Cache_initSize__C = {
    ti_sysbios_family_c64p_Cache_L1Size_32K,  /* l1pSize */
    ti_sysbios_family_c64p_Cache_L1Size_32K,  /* l1dSize */
    ti_sysbios_family_c64p_Cache_L2Size_0K,  /* l2Size */
};

/* EMIFA_CFG__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_EMIFA_CFG ti_sysbios_family_c64p_Cache_EMIFA_CFG__C = ((CT__ti_sysbios_family_c64p_Cache_EMIFA_CFG)((void*)0x1e00000));

/* EMIFA_BASE__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_EMIFA_BASE ti_sysbios_family_c64p_Cache_EMIFA_BASE__C = (xdc_UInt)0x2000000;

/* EMIFA_LENGTH__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_EMIFA_LENGTH ti_sysbios_family_c64p_Cache_EMIFA_LENGTH__C = (xdc_UInt)0x8000000;

/* EMIFB_CFG__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_EMIFB_CFG ti_sysbios_family_c64p_Cache_EMIFB_CFG__C = ((CT__ti_sysbios_family_c64p_Cache_EMIFB_CFG)((void*)0x20000000));

/* EMIFB_BASE__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_EMIFB_BASE ti_sysbios_family_c64p_Cache_EMIFB_BASE__C = (xdc_UInt)0x80000000;

/* EMIFB_LENGTH__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_EMIFB_LENGTH ti_sysbios_family_c64p_Cache_EMIFB_LENGTH__C = (xdc_UInt)0x10000000;

/* EMIFC_CFG__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_EMIFC_CFG ti_sysbios_family_c64p_Cache_EMIFC_CFG__C = ((CT__ti_sysbios_family_c64p_Cache_EMIFC_CFG)((void*)0x1e00000));

/* EMIFC_BASE__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_EMIFC_BASE ti_sysbios_family_c64p_Cache_EMIFC_BASE__C = (xdc_UInt)0x42000000;

/* EMIFC_LENGTH__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_EMIFC_LENGTH ti_sysbios_family_c64p_Cache_EMIFC_LENGTH__C = (xdc_UInt)0x8000000;

/* MAR0_31__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_MAR0_31 ti_sysbios_family_c64p_Cache_MAR0_31__C = (xdc_UInt32)0x10000;

/* MAR32_63__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_MAR32_63 ti_sysbios_family_c64p_Cache_MAR32_63__C = (xdc_UInt32)0x0;

/* MAR64_95__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_MAR64_95 ti_sysbios_family_c64p_Cache_MAR64_95__C = (xdc_UInt32)0x4;

/* MAR96_127__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_MAR96_127 ti_sysbios_family_c64p_Cache_MAR96_127__C = (xdc_UInt32)0x0;

/* MAR128_159__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_MAR128_159 ti_sysbios_family_c64p_Cache_MAR128_159__C = (xdc_UInt32)0xff;

/* MAR160_191__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_MAR160_191 ti_sysbios_family_c64p_Cache_MAR160_191__C = (xdc_UInt32)0x0;

/* MAR192_223__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_MAR192_223 ti_sysbios_family_c64p_Cache_MAR192_223__C = (xdc_UInt32)0x0;

/* MAR224_255__C */
__FAR__ const CT__ti_sysbios_family_c64p_Cache_MAR224_255 ti_sysbios_family_c64p_Cache_MAR224_255__C = (xdc_UInt32)0x0;


/*
 * ======== ti.sysbios.family.c64p.Exception INITIALIZERS ========
 */

/* Module__state__V */
ti_sysbios_family_c64p_Exception_Module_State__ ti_sysbios_family_c64p_Exception_Module__state__V = {
    (xdc_Bits32)0x0,  /* efr */
    (xdc_Bits32)0x0,  /* nrp */
    (xdc_Bits32)0x0,  /* ntsr */
    (xdc_Bits32)0x0,  /* ierr */
    ((xdc_Void(*)(xdc_Void))0),  /* returnHook */
    ((ti_sysbios_family_c64p_Exception_Context*)0),  /* excContext */
    {
        (xdc_Char)0x0,  /* [0] */
        (xdc_Char)0x0,  /* [1] */
        (xdc_Char)0x0,  /* [2] */
        (xdc_Char)0x0,  /* [3] */
        (xdc_Char)0x0,  /* [4] */
        (xdc_Char)0x0,  /* [5] */
        (xdc_Char)0x0,  /* [6] */
        (xdc_Char)0x0,  /* [7] */
        (xdc_Char)0x0,  /* [8] */
        (xdc_Char)0x0,  /* [9] */
        (xdc_Char)0x0,  /* [10] */
        (xdc_Char)0x0,  /* [11] */
        (xdc_Char)0x0,  /* [12] */
        (xdc_Char)0x0,  /* [13] */
        (xdc_Char)0x0,  /* [14] */
        (xdc_Char)0x0,  /* [15] */
    },  /* scratch */
    ((xdc_Char*)0),  /* isrStack */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__diagsEnabled ti_sysbios_family_c64p_Exception_Module__diagsEnabled__C = (xdc_Bits32)0x190;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__diagsIncluded ti_sysbios_family_c64p_Exception_Module__diagsIncluded__C = (xdc_Bits32)0x190;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__diagsMask ti_sysbios_family_c64p_Exception_Module__diagsMask__C = ((CT__ti_sysbios_family_c64p_Exception_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__gateObj ti_sysbios_family_c64p_Exception_Module__gateObj__C = ((CT__ti_sysbios_family_c64p_Exception_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__gatePrms ti_sysbios_family_c64p_Exception_Module__gatePrms__C = ((CT__ti_sysbios_family_c64p_Exception_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__id ti_sysbios_family_c64p_Exception_Module__id__C = (xdc_Bits16)0x8013;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerDefined ti_sysbios_family_c64p_Exception_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerObj ti_sysbios_family_c64p_Exception_Module__loggerObj__C = ((CT__ti_sysbios_family_c64p_Exception_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn0 ti_sysbios_family_c64p_Exception_Module__loggerFxn0__C = ((CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn1 ti_sysbios_family_c64p_Exception_Module__loggerFxn1__C = ((CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn2 ti_sysbios_family_c64p_Exception_Module__loggerFxn2__C = ((CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn4 ti_sysbios_family_c64p_Exception_Module__loggerFxn4__C = ((CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn8 ti_sysbios_family_c64p_Exception_Module__loggerFxn8__C = ((CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__startupDoneFxn ti_sysbios_family_c64p_Exception_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_c64p_Exception_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Object__count ti_sysbios_family_c64p_Exception_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Object__heap ti_sysbios_family_c64p_Exception_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Object__sizeof ti_sysbios_family_c64p_Exception_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Object__table ti_sysbios_family_c64p_Exception_Object__table__C = 0;

/* E_exceptionMin__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_E_exceptionMin ti_sysbios_family_c64p_Exception_E_exceptionMin__C = (((xdc_runtime_Error_Id)2950) << 16 | 0);

/* E_exceptionMax__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_E_exceptionMax ti_sysbios_family_c64p_Exception_E_exceptionMax__C = (((xdc_runtime_Error_Id)3092) << 16 | 0);

/* enableExternalMPC__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_enableExternalMPC ti_sysbios_family_c64p_Exception_enableExternalMPC__C = 0;

/* enablePrint__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_enablePrint ti_sysbios_family_c64p_Exception_enablePrint__C = 1;

/* exceptionHook__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_exceptionHook ti_sysbios_family_c64p_Exception_exceptionHook__C = ((CT__ti_sysbios_family_c64p_Exception_exceptionHook)0);

/* internalHook__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_internalHook ti_sysbios_family_c64p_Exception_internalHook__C = ((CT__ti_sysbios_family_c64p_Exception_internalHook)0);

/* externalHook__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_externalHook ti_sysbios_family_c64p_Exception_externalHook__C = ((CT__ti_sysbios_family_c64p_Exception_externalHook)0);

/* nmiHook__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_nmiHook ti_sysbios_family_c64p_Exception_nmiHook__C = ((CT__ti_sysbios_family_c64p_Exception_nmiHook)0);

/* returnHook__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_returnHook ti_sysbios_family_c64p_Exception_returnHook__C = ((CT__ti_sysbios_family_c64p_Exception_returnHook)0);


/*
 * ======== ti.sysbios.family.c64p.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_c64p_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_family_c64p_Hwi_Params ti_sysbios_family_c64p_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_c64p_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_c64p_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_SELF,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)0x0,  /* priority */
    (xdc_Bits16)0x0,  /* disableMask */
    (xdc_Bits16)0x0,  /* restoreMask */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_c64p_Hwi_Module__ ti_sysbios_family_c64p_Hwi_Module__root__V = {
    {&ti_sysbios_family_c64p_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_c64p_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_c64p_Hwi_Object__ ti_sysbios_family_c64p_Hwi_Object__table__V[1] = {
    {/* instance#0 */
        0,
        (xdc_Bits16)0x4000,  /* disableMask */
        (xdc_Bits16)0x4000,  /* restoreMask */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
};

/* Module__state__V */
ti_sysbios_family_c64p_Hwi_Module_State__ ti_sysbios_family_c64p_Hwi_Module__state__V = {
    {
        (xdc_Char)(-0x0 - 1),  /* [0] */
        (xdc_Char)(-0x0 - 1),  /* [1] */
        (xdc_Char)(-0x0 - 1),  /* [2] */
        (xdc_Char)(-0x0 - 1),  /* [3] */
        (xdc_Char)(-0x0 - 1),  /* [4] */
        (xdc_Char)(-0x0 - 1),  /* [5] */
        (xdc_Char)(-0x0 - 1),  /* [6] */
        (xdc_Char)(-0x0 - 1),  /* [7] */
        (xdc_Char)(-0x0 - 1),  /* [8] */
        (xdc_Char)(-0x0 - 1),  /* [9] */
        (xdc_Char)(-0x0 - 1),  /* [10] */
        (xdc_Char)(-0x0 - 1),  /* [11] */
        (xdc_Char)(-0x0 - 1),  /* [12] */
        (xdc_Char)(-0x0 - 1),  /* [13] */
        (xdc_Char)0x4,  /* [14] */
        (xdc_Char)(-0x0 - 1),  /* [15] */
    },  /* intEvents */
    (xdc_Bits16)0x4003,  /* ierMask */
    (xdc_Int)0x0,  /* intNum */
    ((xdc_Char*)0),  /* taskSP */
    ((xdc_Char*)0),  /* isrStack */
    ((xdc_Ptr)((void*)&ti_sysbios_family_c64p_Hwi0)),  /* vectorTableBase */
    ((xdc_Ptr)((void*)&__TI_STATIC_BASE)),  /* bss */
    {
        0,  /* [0] */
        0,  /* [1] */
        0,  /* [2] */
        0,  /* [3] */
        0,  /* [4] */
        0,  /* [5] */
        0,  /* [6] */
        0,  /* [7] */
        0,  /* [8] */
        0,  /* [9] */
        0,  /* [10] */
        0,  /* [11] */
        0,  /* [12] */
        0,  /* [13] */
        (ti_sysbios_family_c64p_Hwi_Handle)&ti_sysbios_family_c64p_Hwi_Object__table__V[0],  /* [14] */
        0,  /* [15] */
    },  /* dispatchTable */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__diagsEnabled ti_sysbios_family_c64p_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__diagsIncluded ti_sysbios_family_c64p_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__diagsMask ti_sysbios_family_c64p_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__gateObj ti_sysbios_family_c64p_Hwi_Module__gateObj__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__gatePrms ti_sysbios_family_c64p_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__id ti_sysbios_family_c64p_Hwi_Module__id__C = (xdc_Bits16)0x8014;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerDefined ti_sysbios_family_c64p_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerObj ti_sysbios_family_c64p_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn0 ti_sysbios_family_c64p_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn1 ti_sysbios_family_c64p_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn2 ti_sysbios_family_c64p_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn4 ti_sysbios_family_c64p_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn8 ti_sysbios_family_c64p_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__startupDoneFxn ti_sysbios_family_c64p_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Object__count ti_sysbios_family_c64p_Hwi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Object__heap ti_sysbios_family_c64p_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Object__sizeof ti_sysbios_family_c64p_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_c64p_Hwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Object__table ti_sysbios_family_c64p_Hwi_Object__table__C = ti_sysbios_family_c64p_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_c64p_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_dispatcherSwiSupport ti_sysbios_family_c64p_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_dispatcherTaskSupport ti_sysbios_family_c64p_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_c64p_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_alreadyDefined__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_E_alreadyDefined ti_sysbios_family_c64p_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)3134) << 16 | 0);

/* E_handleNotFound__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_E_handleNotFound ti_sysbios_family_c64p_Hwi_E_handleNotFound__C = (((xdc_runtime_Error_Id)3182) << 16 | 0);

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_LM_begin ti_sysbios_family_c64p_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)3824) << 16 | 768);

/* LD_end__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_LD_end ti_sysbios_family_c64p_Hwi_LD_end__C = (((xdc_runtime_Log_Event)3894) << 16 | 512);

/* enableException__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_enableException ti_sysbios_family_c64p_Hwi_enableException__C = 1;

/* swiDisable__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_swiDisable ti_sysbios_family_c64p_Hwi_swiDisable__C = ((CT__ti_sysbios_family_c64p_Hwi_swiDisable)((xdc_Fxn)ti_sysbios_knl_Swi_disable__E));

/* swiRestoreHwi__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_swiRestoreHwi ti_sysbios_family_c64p_Hwi_swiRestoreHwi__C = ((CT__ti_sysbios_family_c64p_Hwi_swiRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Swi_restoreHwi__E));

/* taskDisable__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_taskDisable ti_sysbios_family_c64p_Hwi_taskDisable__C = ((CT__ti_sysbios_family_c64p_Hwi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestoreHwi__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_taskRestoreHwi ti_sysbios_family_c64p_Hwi_taskRestoreHwi__C = ((CT__ti_sysbios_family_c64p_Hwi_taskRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Task_restoreHwi__E));

/* hooks__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_hooks ti_sysbios_family_c64p_Hwi_hooks__C = {0, 0};


/*
 * ======== ti.sysbios.family.c64p.dm6437.TimerSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_c64p_dm6437_TimerSupport_Module__diagsEnabled ti_sysbios_family_c64p_dm6437_TimerSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_c64p_dm6437_TimerSupport_Module__diagsIncluded ti_sysbios_family_c64p_dm6437_TimerSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_c64p_dm6437_TimerSupport_Module__diagsMask ti_sysbios_family_c64p_dm6437_TimerSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_c64p_dm6437_TimerSupport_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_c64p_dm6437_TimerSupport_Module__gateObj ti_sysbios_family_c64p_dm6437_TimerSupport_Module__gateObj__C = ((CT__ti_sysbios_family_c64p_dm6437_TimerSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_c64p_dm6437_TimerSupport_Module__gatePrms ti_sysbios_family_c64p_dm6437_TimerSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_c64p_dm6437_TimerSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_c64p_dm6437_TimerSupport_Module__id ti_sysbios_family_c64p_dm6437_TimerSupport_Module__id__C = (xdc_Bits16)0x802c;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerDefined ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerObj ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn0 ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn1 ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn2 ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn4 ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn8 ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_c64p_dm6437_TimerSupport_Module__startupDoneFxn ti_sysbios_family_c64p_dm6437_TimerSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_c64p_dm6437_TimerSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_c64p_dm6437_TimerSupport_Object__count ti_sysbios_family_c64p_dm6437_TimerSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_c64p_dm6437_TimerSupport_Object__heap ti_sysbios_family_c64p_dm6437_TimerSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_c64p_dm6437_TimerSupport_Object__sizeof ti_sysbios_family_c64p_dm6437_TimerSupport_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_c64p_dm6437_TimerSupport_Object__table ti_sysbios_family_c64p_dm6437_TimerSupport_Object__table__C = 0;


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateHwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateHwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x8023;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
    {/* instance#1 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateMutex_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateMutex_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x8024;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 2;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)1755) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_SELF,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_hal_Hwi_Object__ ti_sysbios_hal_Hwi_Object__table__V[1] = {
    {/* instance#0 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_c64p_Hwi_Object__table__V[0],  /* pi */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_hal_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((CT__ti_sysbios_hal_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_hal_Hwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x8018;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn ti_sysbios_hal_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = ti_sysbios_hal_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)3227) << 16 | 0);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.hal.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_hal_Timer_Params ti_sysbios_hal_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Timer_Module__ ti_sysbios_hal_Timer_Module__root__V = {
    {&ti_sysbios_hal_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_hal_Timer_Object__ ti_sysbios_hal_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        (ti_sysbios_hal_Timer_TimerProxy_Handle)&ti_sysbios_timers_timer64_Timer_Object__table__V[0],  /* pi */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsEnabled ti_sysbios_hal_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsIncluded ti_sysbios_hal_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsMask ti_sysbios_hal_Timer_Module__diagsMask__C = ((CT__ti_sysbios_hal_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__gateObj ti_sysbios_hal_Timer_Module__gateObj__C = ((CT__ti_sysbios_hal_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__gatePrms ti_sysbios_hal_Timer_Module__gatePrms__C = ((CT__ti_sysbios_hal_Timer_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__id ti_sysbios_hal_Timer_Module__id__C = (xdc_Bits16)0x8019;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerDefined ti_sysbios_hal_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerObj ti_sysbios_hal_Timer_Module__loggerObj__C = ((CT__ti_sysbios_hal_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn0 ti_sysbios_hal_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn1 ti_sysbios_hal_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn2 ti_sysbios_hal_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn4 ti_sysbios_hal_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn8 ti_sysbios_hal_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__startupDoneFxn ti_sysbios_hal_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__count ti_sysbios_hal_Timer_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__heap ti_sysbios_hal_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__sizeof ti_sysbios_hal_Timer_Object__sizeof__C = sizeof(ti_sysbios_hal_Timer_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__table ti_sysbios_hal_Timer_Object__table__C = ti_sysbios_hal_Timer_Object__table__V;


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapMem_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C.__iprms, /* instance */
    (xdc_SizeT)0x0,  /* minBlockAlign */
    ((xdc_Ptr)(0x0)),  /* buf */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096];

/* Module__root__V */
ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V = {
    {&ti_sysbios_heaps_HeapMem_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_heaps_HeapMem_Module__FXNS__C,
        ((xdc_UArg)(0x8)),  /* align */
        ((void*)ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A),  /* buf */
        {
            ((ti_sysbios_heaps_HeapMem_Header*)0),  /* next */
            ((xdc_UArg)(0x1000)),  /* size */
        },  /* head */
        (xdc_SizeT)0x8,  /* minBlockAlign */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C = ((CT__ti_sysbios_heaps_HeapMem_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gateObj ti_sysbios_heaps_HeapMem_Module__gateObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C = (xdc_Bits16)0x802e;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C = ((CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__count ti_sysbios_heaps_HeapMem_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapMem_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__table ti_sysbios_heaps_HeapMem_Object__table__C = ti_sysbios_heaps_HeapMem_Object__table__V;

/* A_zeroBlock__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)2328) << 16 | 16);

/* A_heapSize__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)2364) << 16 | 16);

/* A_align__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)2409) << 16 | 16);

/* E_memory__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C = (((xdc_runtime_Error_Id)3612) << 16 | 0);

/* A_invalidFree__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)2300) << 16 | 16);

/* reqAlign__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__C = (xdc_Int)0x8;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt)0x0,  /* period */
    ((xdc_UArg)0),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0,  /* ticks */
    (xdc_UInt)0x0,  /* swiCount */
    (ti_sysbios_hal_Timer_Handle)&ti_sysbios_hal_Timer_Object__table__V[0],  /* timer */
    (ti_sysbios_knl_Swi_Handle)&ti_sysbios_knl_Swi_Object__table__V[0],  /* swi */
    (xdc_UInt32)0x0,  /* periodCounts */
    (xdc_UInt)0x0,  /* numTickSkip */
    (xdc_UInt32)0x0,  /* skipsWorkFunc */
    0,  /* inWorkFunc */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((CT__ti_sysbios_knl_Clock_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((CT__ti_sysbios_knl_Clock_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((CT__ti_sysbios_knl_Clock_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x801b;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((CT__ti_sysbios_knl_Clock_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__startupDoneFxn ti_sysbios_knl_Clock_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Clock_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = 0;

/* LW_delayed__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)3912) << 16 | 1024);

/* LM_tick__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)3934) << 16 | 768);

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)3952) << 16 | 768);

/* A_clockDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)355) << 16 | 16);

/* A_badThreadType__C */
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)436) << 16 | 16);

/* tickSource__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* tickMode__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_PERIODIC;

/* timerId__C */
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0x3e8;


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[1] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_checkStack)),  /* [0] */
};

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[1] = {
    (xdc_UInt)0x0,  /* [0] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((CT__ti_sysbios_knl_Idle_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((CT__ti_sysbios_knl_Idle_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((CT__ti_sysbios_knl_Idle_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x801c;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((CT__ti_sysbios_knl_Idle_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__startupDoneFxn ti_sysbios_knl_Idle_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Idle_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = 0;

/* funcList__C */
__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {1, ((__T1_ti_sysbios_knl_Idle_funcList*)ti_sysbios_knl_Idle_funcList__A)};

/* coreList__C */
__FAR__ const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C = {1, ((__T1_ti_sysbios_knl_Idle_coreList*)ti_sysbios_knl_Idle_coreList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x801d;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((CT__ti_sysbios_knl_Queue_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((CT__ti_sysbios_knl_Queue_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((CT__ti_sysbios_knl_Queue_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x801e;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((CT__ti_sysbios_knl_Queue_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__startupDoneFxn ti_sysbios_knl_Queue_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Queue_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((CT__ti_sysbios_knl_Semaphore_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((CT__ti_sysbios_knl_Semaphore_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x801f;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = 0;

/* LM_post__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)3984) << 16 | 768);

/* LM_pend__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)4014) << 16 | 768);

/* A_noEvents__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)756) << 16 | 16);

/* A_invTimeout__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)811) << 16 | 16);

/* A_badContext__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)635) << 16 | 16);

/* A_overflow__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C = (((xdc_runtime_Assert_Id)876) << 16 | 16);

/* supportsEvents__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 0;

/* eventPost__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C = ((CT__ti_sysbios_knl_Semaphore_eventPost)0);

/* eventSync__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C = ((CT__ti_sysbios_knl_Semaphore_eventSync)0);


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V = {
    {&ti_sysbios_knl_Swi_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Swi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_workFunc__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        (xdc_UInt)0xf,  /* priority */
        (xdc_UInt)0x8000,  /* mask */
        0,  /* posted */
        (xdc_UInt)0x0,  /* initTrigger */
        (xdc_UInt)0x0,  /* trigger */
        (ti_sysbios_knl_Queue_Handle)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15],  /* readyQ */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    (xdc_UInt)0x0,  /* curTrigger */
    0,  /* curSwi */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* constructedSwis */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((CT__ti_sysbios_knl_Swi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((CT__ti_sysbios_knl_Swi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((CT__ti_sysbios_knl_Swi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x8020;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((CT__ti_sysbios_knl_Swi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__startupDoneFxn ti_sysbios_knl_Swi_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Swi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C = ti_sysbios_knl_Swi_Object__table__V;

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)4057) << 16 | 768);

/* LD_end__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)4104) << 16 | 512);

/* LM_post__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)4122) << 16 | 768);

/* A_swiDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)930) << 16 | 16);

/* A_badPriority__C */
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)987) << 16 | 16);

/* numPriorities__C */
__FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C = (xdc_UInt)0x10;

/* hooks__C */
__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {0, 0};

/* taskDisable__C */
__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((CT__ti_sysbios_knl_Swi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestore__C */
__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((CT__ti_sysbios_knl_Swi_taskRestore)((xdc_Fxn)ti_sysbios_knl_Task_restore__E));

/* numConstructedSwis__C */
__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)0),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)0),  /* env */
    1,  /* vitalTaskFlag */
    (xdc_UInt)0x0,  /* affinity */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048];

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[1];

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x800,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_hookEnv__A),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1] = {
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[0],  /* [0] */
};

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    0,  /* workFlag */
    (xdc_UInt)0x1,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* smpCurSet */
    ((void*)0),  /* smpCurMask */
    ((void*)0),  /* smpCurTask */
    ((void*)0),  /* smpCurQ */
    ((void*)0),  /* smpReadyQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_idleTask__A),  /* idleTask */
    ((void*)0),  /* constructedTasks */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_inactiveQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_terminatedQ */
};

/* --> ti_sysbios_knl_Task_hooks__A */
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[1] = {
    {
        ((xdc_Void(*)(xdc_Int))0),  /* registerFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle,xdc_runtime_Error_Block*))0),  /* createFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* readyFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle,ti_sysbios_knl_Task_Handle))((xdc_Fxn)ti_sysbios_knl_Task_checkStacks)),  /* switchFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* exitFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* deleteFxn */
    },  /* [0] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((CT__ti_sysbios_knl_Task_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((CT__ti_sysbios_knl_Task_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((CT__ti_sysbios_knl_Task_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x8021;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((CT__ti_sysbios_knl_Task_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__startupDoneFxn ti_sysbios_knl_Task_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Task_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = ti_sysbios_knl_Task_Object__table__V;

/* LM_switch__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)4162) << 16 | 768);

/* LM_sleep__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)4230) << 16 | 768);

/* LD_ready__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)4275) << 16 | 512);

/* LD_block__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)4316) << 16 | 512);

/* LM_yield__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)4348) << 16 | 768);

/* LM_setPri__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)4396) << 16 | 768);

/* LD_exit__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)4452) << 16 | 512);

/* LM_setAffinity__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C = (((xdc_runtime_Log_Event)4483) << 16 | 768);

/* LM_schedule__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C = (((xdc_runtime_Log_Event)4566) << 16 | 1024);

/* LM_noWork__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C = (((xdc_runtime_Log_Event)4652) << 16 | 1024);

/* E_stackOverflow__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)3264) << 16 | 0);

/* E_spOutOfBounds__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)3307) << 16 | 0);

/* E_deleteNotAllowed__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C = (((xdc_runtime_Error_Id)3358) << 16 | 0);

/* A_badThreadType__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)1036) << 16 | 16);

/* A_badTaskState__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)1105) << 16 | 16);

/* A_noPendElem__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)1159) << 16 | 16);

/* A_taskDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)1213) << 16 | 16);

/* A_badPriority__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)1276) << 16 | 16);

/* A_badTimeout__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)1326) << 16 | 16);

/* A_badAffinity__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C = (((xdc_runtime_Assert_Id)1361) << 16 | 16);

/* numPriorities__C */
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x10;

/* defaultStackSize__C */
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x800;

/* defaultStackHeap__C */
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C = 0;

/* allBlockedFunc__C */
__FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C = ((CT__ti_sysbios_knl_Task_allBlockedFunc)0);

/* initStackFlag__C */
__FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C = 1;

/* deleteTerminatedTasks__C */
__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 0;

/* hooks__C */
__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {1, ((__T1_ti_sysbios_knl_Task_hooks*)ti_sysbios_knl_Task_hooks__A)};

/* numConstructedTasks__C */
__FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C = (xdc_UInt)0x0;

/* startupHookFunc__C */
__FAR__ const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C = ((CT__ti_sysbios_knl_Task_startupHookFunc)0);


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.timers.timer64.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_timers_timer64_Timer_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_timers_timer64_Timer_Params ti_sysbios_timers_timer64_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_timers_timer64_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_timers_timer64_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    {
        (xdc_Bits8)0x0,  /* tien */
        (xdc_Bits8)0x0,  /* invout */
        (xdc_Bits8)0x0,  /* invin */
        (xdc_UInt8)0x1,  /* pwid */
        (xdc_Bits8)0x0,  /* cp */
    },  /* controlInit */
    {
        0,  /* free */
        0,  /* soft */
    },  /* emuMgtInit */
    {
        (xdc_Bits8)0x0,  /* gpint12_eni */
        (xdc_Bits8)0x0,  /* gpint12_eno */
        (xdc_Bits8)0x0,  /* gpint12_invi */
        (xdc_Bits8)0x0,  /* gpint12_invo */
        (xdc_Bits8)0x0,  /* gpint34_eni */
        (xdc_Bits8)0x0,  /* gpint34_eno */
        (xdc_Bits8)0x0,  /* gpint34_invi */
        (xdc_Bits8)0x0,  /* gpint34_invo */
        (xdc_Bits8)0x0,  /* gpio_eni12 */
        (xdc_Bits8)0x0,  /* gpio_eno12 */
        (xdc_Bits8)0x0,  /* gpio_eni34 */
        (xdc_Bits8)0x0,  /* gpio_eno34 */
    },  /* gpioIntEn */
    {
        (xdc_Bits8)0x0,  /* gpio_dati12 */
        (xdc_Bits8)0x0,  /* gpio_dato12 */
        (xdc_Bits8)0x0,  /* gpio_dati34 */
        (xdc_Bits8)0x0,  /* gpio_dato34 */
        (xdc_Bits8)0x0,  /* gpio_diri12 */
        (xdc_Bits8)0x0,  /* gpio_diro12 */
        (xdc_Bits8)0x0,  /* gpio_diri34 */
        (xdc_Bits8)0x0,  /* gpio_diro34 */
    },  /* gpioDatDir */
    ti_sysbios_timers_timer64_Timer_Half_DEFAULT,  /* half */
    ((ti_sysbios_hal_Hwi_Params*)0),  /* hwiParams */
    (xdc_Int)(-0x0 - 1),  /* intNum */
    (xdc_UInt)0x0,  /* prescalar */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_timers_timer64_Timer_Module__ ti_sysbios_timers_timer64_Timer_Module__root__V = {
    {&ti_sysbios_timers_timer64_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_timers_timer64_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_timers_timer64_Timer_Object__ ti_sysbios_timers_timer64_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        ti_sysbios_timers_timer64_Timer_Half_LOWER,  /* half */
        (xdc_UInt)0x10,  /* tcrInit */
        (xdc_UInt)0x0,  /* emumgtInit */
        (xdc_UInt)0x0,  /* gpioIntEn */
        (xdc_UInt)0x0,  /* gpioDatDir */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt)0x3e8,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
        (xdc_UInt)0x0,  /* prescalar */
        (xdc_UInt)0xe,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[0],  /* hwi */
    },
};

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_intFreqs__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__intFreqs ti_sysbios_timers_timer64_Timer_Module_State_0_intFreqs__A[2] = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x19bfcc0,  /* lo */
    },  /* [0] */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x19bfcc0,  /* lo */
    },  /* [1] */
};

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_gctrl__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__gctrl ti_sysbios_timers_timer64_Timer_Module_State_0_gctrl__A[2] = {
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [0] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [1] */
};

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_device__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__device ti_sysbios_timers_timer64_Timer_Module_State_0_device__A[4] = {
    {
        (xdc_UInt)0xe,  /* intNum */
        (xdc_UInt)0x4,  /* eventId */
        ((xdc_Ptr)((void*)0x1c21400)),  /* baseAddr */
    },  /* [0] */
    {
        (xdc_UInt)0x4,  /* intNum */
        (xdc_UInt)0x5,  /* eventId */
        ((xdc_Ptr)((void*)0x1c21400)),  /* baseAddr */
    },  /* [1] */
    {
        (xdc_UInt)0xf,  /* intNum */
        (xdc_UInt)0x6,  /* eventId */
        ((xdc_Ptr)((void*)0x1c21800)),  /* baseAddr */
    },  /* [2] */
    {
        (xdc_UInt)0x5,  /* intNum */
        (xdc_UInt)0x7,  /* eventId */
        ((xdc_Ptr)((void*)0x1c21800)),  /* baseAddr */
    },  /* [3] */
};

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__handles ti_sysbios_timers_timer64_Timer_Module_State_0_handles__A[4] = {
    (ti_sysbios_timers_timer64_Timer_Handle)&ti_sysbios_timers_timer64_Timer_Object__table__V[0],  /* [0] */
    0,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
};

/* Module__state__V */
ti_sysbios_timers_timer64_Timer_Module_State__ ti_sysbios_timers_timer64_Timer_Module__state__V = {
    (xdc_Bits32)0xe,  /* availMask */
    ((void*)ti_sysbios_timers_timer64_Timer_Module_State_0_intFreqs__A),  /* intFreqs */
    ((void*)ti_sysbios_timers_timer64_Timer_Module_State_0_gctrl__A),  /* gctrl */
    ((void*)ti_sysbios_timers_timer64_Timer_Module_State_0_device__A),  /* device */
    ((void*)ti_sysbios_timers_timer64_Timer_Module_State_0_handles__A),  /* handles */
};

/* --> ti_sysbios_timers_timer64_Timer_timerSettings__A */
const __T1_ti_sysbios_timers_timer64_Timer_timerSettings ti_sysbios_timers_timer64_Timer_timerSettings__A[2] = {
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [0] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [1] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__diagsEnabled ti_sysbios_timers_timer64_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__diagsIncluded ti_sysbios_timers_timer64_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__diagsMask ti_sysbios_timers_timer64_Timer_Module__diagsMask__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__gateObj ti_sysbios_timers_timer64_Timer_Module__gateObj__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__gatePrms ti_sysbios_timers_timer64_Timer_Module__gatePrms__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__id ti_sysbios_timers_timer64_Timer_Module__id__C = (xdc_Bits16)0x802a;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerDefined ti_sysbios_timers_timer64_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerObj ti_sysbios_timers_timer64_Timer_Module__loggerObj__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn0 ti_sysbios_timers_timer64_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn1 ti_sysbios_timers_timer64_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn2 ti_sysbios_timers_timer64_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn4 ti_sysbios_timers_timer64_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn8 ti_sysbios_timers_timer64_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__startupDoneFxn ti_sysbios_timers_timer64_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Object__count ti_sysbios_timers_timer64_Timer_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Object__heap ti_sysbios_timers_timer64_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Object__sizeof ti_sysbios_timers_timer64_Timer_Object__sizeof__C = sizeof(ti_sysbios_timers_timer64_Timer_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Object__table ti_sysbios_timers_timer64_Timer_Object__table__C = ti_sysbios_timers_timer64_Timer_Object__table__V;

/* A_notAvailable__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_A_notAvailable ti_sysbios_timers_timer64_Timer_A_notAvailable__C = (((xdc_runtime_Assert_Id)1825) << 16 | 16);

/* E_invalidTimer__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_E_invalidTimer ti_sysbios_timers_timer64_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)3431) << 16 | 0);

/* E_notAvailable__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_E_notAvailable ti_sysbios_timers_timer64_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)3467) << 16 | 0);

/* E_cannotSupport__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_E_cannotSupport ti_sysbios_timers_timer64_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)3506) << 16 | 0);

/* anyMask__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_anyMask ti_sysbios_timers_timer64_Timer_anyMask__C = (xdc_Bits32)0xf;

/* defaultHalf__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_defaultHalf ti_sysbios_timers_timer64_Timer_defaultHalf__C = ti_sysbios_timers_timer64_Timer_Half_LOWER;

/* timerSettings__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_timerSettings ti_sysbios_timers_timer64_Timer_timerSettings__C = ((CT__ti_sysbios_timers_timer64_Timer_timerSettings)ti_sysbios_timers_timer64_Timer_timerSettings__A);

/* startupNeeded__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_startupNeeded ti_sysbios_timers_timer64_Timer_startupNeeded__C = 1;

/* freqDivisor__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_freqDivisor ti_sysbios_timers_timer64_Timer_freqDivisor__C = (xdc_UInt)0x0;

/* numTimerDevices__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_numTimerDevices ti_sysbios_timers_timer64_Timer_numTimerDevices__C = (xdc_Int)0x4;

/* numLocalTimers__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_numLocalTimers ti_sysbios_timers_timer64_Timer_numLocalTimers__C = (xdc_Int)0x0;


/*
 * ======== ti.sysbios.timers.timer64.Timer_TimerSupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((CT__xdc_runtime_Assert_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((CT__xdc_runtime_Assert_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((CT__xdc_runtime_Assert_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x8002;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((CT__xdc_runtime_Assert_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((CT__xdc_runtime_Assert_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((CT__xdc_runtime_Assert_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((CT__xdc_runtime_Assert_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((CT__xdc_runtime_Assert_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((CT__xdc_runtime_Assert_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Assert_Module__startupDoneFxn xdc_runtime_Assert_Module__startupDoneFxn__C = ((CT__xdc_runtime_Assert_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = 0;

/* E_assertFailed__C */
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)2669) << 16 | 0);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((CT__xdc_runtime_Core_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((CT__xdc_runtime_Core_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((CT__xdc_runtime_Core_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x8003;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((CT__xdc_runtime_Core_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((CT__xdc_runtime_Core_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((CT__xdc_runtime_Core_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((CT__xdc_runtime_Core_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((CT__xdc_runtime_Core_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((CT__xdc_runtime_Core_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Core_Module__startupDoneFxn xdc_runtime_Core_Module__startupDoneFxn__C = ((CT__xdc_runtime_Core_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = 0;

/* A_initializedParams__C */
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((CT__xdc_runtime_Defaults_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((CT__xdc_runtime_Defaults_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((CT__xdc_runtime_Defaults_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x8004;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((CT__xdc_runtime_Defaults_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__startupDoneFxn xdc_runtime_Defaults_Module__startupDoneFxn__C = ((CT__xdc_runtime_Defaults_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = 0;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((CT__xdc_runtime_Diags_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((CT__xdc_runtime_Diags_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((CT__xdc_runtime_Diags_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x8005;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((CT__xdc_runtime_Diags_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((CT__xdc_runtime_Diags_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((CT__xdc_runtime_Diags_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((CT__xdc_runtime_Diags_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((CT__xdc_runtime_Diags_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((CT__xdc_runtime_Diags_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Diags_Module__startupDoneFxn xdc_runtime_Diags_Module__startupDoneFxn__C = ((CT__xdc_runtime_Diags_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = 0;

/* setMaskEnabled__C */
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 0;

/* dictBase__C */
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((CT__xdc_runtime_Diags_dictBase)0);


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0,  /* count */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((CT__xdc_runtime_Error_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((CT__xdc_runtime_Error_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((CT__xdc_runtime_Error_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x8006;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((CT__xdc_runtime_Error_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((CT__xdc_runtime_Error_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((CT__xdc_runtime_Error_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((CT__xdc_runtime_Error_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((CT__xdc_runtime_Error_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((CT__xdc_runtime_Error_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Error_Module__startupDoneFxn xdc_runtime_Error_Module__startupDoneFxn__C = ((CT__xdc_runtime_Error_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = 0;

/* E_generic__C */
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)2691) << 16 | 0);

/* E_memory__C */
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)2695) << 16 | 0);

/* E_msgCode__C */
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)2729) << 16 | 0);

/* policy__C */
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((CT__xdc_runtime_Error_raiseHook)((xdc_Fxn)ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x10;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((CT__xdc_runtime_Gate_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((CT__xdc_runtime_Gate_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((CT__xdc_runtime_Gate_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x8007;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((CT__xdc_runtime_Gate_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((CT__xdc_runtime_Gate_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((CT__xdc_runtime_Gate_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((CT__xdc_runtime_Gate_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((CT__xdc_runtime_Gate_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((CT__xdc_runtime_Gate_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Gate_Module__startupDoneFxn xdc_runtime_Gate_Module__startupDoneFxn__C = ((CT__xdc_runtime_Gate_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = 0;


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((CT__xdc_runtime_Log_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((CT__xdc_runtime_Log_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((CT__xdc_runtime_Log_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x8008;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((CT__xdc_runtime_Log_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((CT__xdc_runtime_Log_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((CT__xdc_runtime_Log_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((CT__xdc_runtime_Log_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((CT__xdc_runtime_Log_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((CT__xdc_runtime_Log_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Log_Module__startupDoneFxn xdc_runtime_Log_Module__startupDoneFxn__C = ((CT__xdc_runtime_Log_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = 0;

/* L_construct__C */
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)3648) << 16 | 4);

/* L_create__C */
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)3672) << 16 | 4);

/* L_destruct__C */
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)3693) << 16 | 4);

/* L_delete__C */
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)3712) << 16 | 4);

/* L_error__C */
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)3729) << 16 | 192);

/* L_warning__C */
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)3743) << 16 | 224);

/* L_info__C */
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)3759) << 16 | 16384);

/* L_start__C */
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)3766) << 16 | 32768);

/* L_stop__C */
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)3777) << 16 | 32768);

/* L_startInstance__C */
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)3787) << 16 | 32768);

/* L_stopInstance__C */
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)3806) << 16 | 32768);


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((CT__xdc_runtime_Main_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((CT__xdc_runtime_Main_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((CT__xdc_runtime_Main_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x8009;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((CT__xdc_runtime_Main_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((CT__xdc_runtime_Main_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((CT__xdc_runtime_Main_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((CT__xdc_runtime_Main_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((CT__xdc_runtime_Main_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((CT__xdc_runtime_Main_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Main_Module__startupDoneFxn xdc_runtime_Main_Module__startupDoneFxn__C = ((CT__xdc_runtime_Main_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = 0;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x8,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((CT__xdc_runtime_Memory_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((CT__xdc_runtime_Memory_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((CT__xdc_runtime_Memory_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x800a;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((CT__xdc_runtime_Memory_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((CT__xdc_runtime_Memory_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((CT__xdc_runtime_Memory_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((CT__xdc_runtime_Memory_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((CT__xdc_runtime_Memory_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((CT__xdc_runtime_Memory_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Memory_Module__startupDoneFxn xdc_runtime_Memory_Module__startupDoneFxn__C = ((CT__xdc_runtime_Memory_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = 0;

/* defaultHeapInstance__C */
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)0),  /* listHead */
    (xdc_Bits16)0x7fff,  /* curId */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((CT__xdc_runtime_Registry_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((CT__xdc_runtime_Registry_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((CT__xdc_runtime_Registry_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x800b;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((CT__xdc_runtime_Registry_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((CT__xdc_runtime_Registry_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((CT__xdc_runtime_Registry_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((CT__xdc_runtime_Registry_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((CT__xdc_runtime_Registry_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((CT__xdc_runtime_Registry_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Registry_Module__startupDoneFxn xdc_runtime_Registry_Module__startupDoneFxn__C = ((CT__xdc_runtime_Registry_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = 0;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)0),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[2] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_heaps_HeapMem_init__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_initStack)),  /* [1] */
};

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)xdc_runtime_System_lastFxn__I)),  /* [0] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[11] = {
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_System_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_SysMin_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_c64p_Exception_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_c64p_Hwi_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_c64p_Cache_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Hwi_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Timer_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Clock_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Swi_Module_startup__E)),  /* [8] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Task_Module_startup__E)),  /* [9] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_timers_timer64_Timer_Module_startup__E)),  /* [10] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[11] = {
    1,  /* [0] */
    1,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    0,  /* [8] */
    0,  /* [9] */
    0,  /* [10] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((CT__xdc_runtime_Startup_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((CT__xdc_runtime_Startup_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((CT__xdc_runtime_Startup_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0x800c;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((CT__xdc_runtime_Startup_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((CT__xdc_runtime_Startup_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((CT__xdc_runtime_Startup_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((CT__xdc_runtime_Startup_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((CT__xdc_runtime_Startup_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((CT__xdc_runtime_Startup_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Startup_Module__startupDoneFxn xdc_runtime_Startup_Module__startupDoneFxn__C = ((CT__xdc_runtime_Startup_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = 0;

/* maxPasses__C */
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {2, ((__T1_xdc_runtime_Startup_firstFxns*)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {1, ((__T1_xdc_runtime_Startup_lastFxns*)xdc_runtime_Startup_lastFxns__A)};

/* startModsFxn__C */
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((CT__xdc_runtime_Startup_startModsFxn)((xdc_Fxn)xdc_runtime_Startup_startMods__I));

/* execImpl__C */
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((CT__xdc_runtime_Startup_execImpl)((xdc_Fxn)xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysMin INITIALIZERS ========
 */

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[1024];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V = {
    ((void*)xdc_runtime_SysMin_Module_State_0_outbuf__A),  /* outbuf */
    (xdc_UInt)0x0,  /* outidx */
    0,  /* wrapped */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsEnabled xdc_runtime_SysMin_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsIncluded xdc_runtime_SysMin_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsMask xdc_runtime_SysMin_Module__diagsMask__C = ((CT__xdc_runtime_SysMin_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__gateObj xdc_runtime_SysMin_Module__gateObj__C = ((CT__xdc_runtime_SysMin_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__gatePrms xdc_runtime_SysMin_Module__gatePrms__C = ((CT__xdc_runtime_SysMin_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__id xdc_runtime_SysMin_Module__id__C = (xdc_Bits16)0x800e;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerDefined xdc_runtime_SysMin_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerObj xdc_runtime_SysMin_Module__loggerObj__C = ((CT__xdc_runtime_SysMin_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn0 xdc_runtime_SysMin_Module__loggerFxn0__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn1 xdc_runtime_SysMin_Module__loggerFxn1__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn2 xdc_runtime_SysMin_Module__loggerFxn2__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn4 xdc_runtime_SysMin_Module__loggerFxn4__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn8 xdc_runtime_SysMin_Module__loggerFxn8__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__startupDoneFxn xdc_runtime_SysMin_Module__startupDoneFxn__C = ((CT__xdc_runtime_SysMin_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__count xdc_runtime_SysMin_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__heap xdc_runtime_SysMin_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__sizeof xdc_runtime_SysMin_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__table xdc_runtime_SysMin_Object__table__C = 0;

/* bufSize__C */
__FAR__ const CT__xdc_runtime_SysMin_bufSize xdc_runtime_SysMin_bufSize__C = (xdc_SizeT)0x400;

/* flushAtExit__C */
__FAR__ const CT__xdc_runtime_SysMin_flushAtExit xdc_runtime_SysMin_flushAtExit__C = 1;

/* outputFxn__C */
__FAR__ const CT__xdc_runtime_SysMin_outputFxn xdc_runtime_SysMin_outputFxn__C = ((CT__xdc_runtime_SysMin_outputFxn)0);

/* outputFunc__C */
__FAR__ const CT__xdc_runtime_SysMin_outputFunc xdc_runtime_SysMin_outputFunc__C = ((CT__xdc_runtime_SysMin_outputFunc)((xdc_Fxn)xdc_runtime_SysMin_output__I));


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8] = {
    ((xdc_Void(*)(xdc_Int))0),  /* [0] */
    ((xdc_Void(*)(xdc_Int))0),  /* [1] */
    ((xdc_Void(*)(xdc_Int))0),  /* [2] */
    ((xdc_Void(*)(xdc_Int))0),  /* [3] */
    ((xdc_Void(*)(xdc_Int))0),  /* [4] */
    ((xdc_Void(*)(xdc_Int))0),  /* [5] */
    ((xdc_Void(*)(xdc_Int))0),  /* [6] */
    ((xdc_Void(*)(xdc_Int))0),  /* [7] */
};

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
    (xdc_Int)0xcafe,  /* exitStatus */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((CT__xdc_runtime_System_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((CT__xdc_runtime_System_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((CT__xdc_runtime_System_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0x800d;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((CT__xdc_runtime_System_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((CT__xdc_runtime_System_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((CT__xdc_runtime_System_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((CT__xdc_runtime_System_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((CT__xdc_runtime_System_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((CT__xdc_runtime_System_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_System_Module__startupDoneFxn xdc_runtime_System_Module__startupDoneFxn__C = ((CT__xdc_runtime_System_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = 0;

/* A_cannotFitIntoArg__C */
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)307) << 16 | 16);

/* maxAtexitHandlers__C */
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x8;

/* extendFxn__C */
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((CT__xdc_runtime_System_extendFxn)((xdc_Fxn)xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_Ptr)((void*)&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_Ptr)((void*)&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[5084] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x20,  /* [147] */
    (xdc_Char)0x69,  /* [148] */
    (xdc_Char)0x6e,  /* [149] */
    (xdc_Char)0x73,  /* [150] */
    (xdc_Char)0x74,  /* [151] */
    (xdc_Char)0x61,  /* [152] */
    (xdc_Char)0x6e,  /* [153] */
    (xdc_Char)0x63,  /* [154] */
    (xdc_Char)0x65,  /* [155] */
    (xdc_Char)0x20,  /* [156] */
    (xdc_Char)0x74,  /* [157] */
    (xdc_Char)0x6f,  /* [158] */
    (xdc_Char)0x74,  /* [159] */
    (xdc_Char)0x61,  /* [160] */
    (xdc_Char)0x6c,  /* [161] */
    (xdc_Char)0x46,  /* [162] */
    (xdc_Char)0x72,  /* [163] */
    (xdc_Char)0x65,  /* [164] */
    (xdc_Char)0x65,  /* [165] */
    (xdc_Char)0x53,  /* [166] */
    (xdc_Char)0x69,  /* [167] */
    (xdc_Char)0x7a,  /* [168] */
    (xdc_Char)0x65,  /* [169] */
    (xdc_Char)0x20,  /* [170] */
    (xdc_Char)0x69,  /* [171] */
    (xdc_Char)0x73,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x67,  /* [174] */
    (xdc_Char)0x72,  /* [175] */
    (xdc_Char)0x65,  /* [176] */
    (xdc_Char)0x61,  /* [177] */
    (xdc_Char)0x74,  /* [178] */
    (xdc_Char)0x65,  /* [179] */
    (xdc_Char)0x72,  /* [180] */
    (xdc_Char)0x20,  /* [181] */
    (xdc_Char)0x74,  /* [182] */
    (xdc_Char)0x68,  /* [183] */
    (xdc_Char)0x61,  /* [184] */
    (xdc_Char)0x6e,  /* [185] */
    (xdc_Char)0x20,  /* [186] */
    (xdc_Char)0x73,  /* [187] */
    (xdc_Char)0x74,  /* [188] */
    (xdc_Char)0x61,  /* [189] */
    (xdc_Char)0x72,  /* [190] */
    (xdc_Char)0x74,  /* [191] */
    (xdc_Char)0x69,  /* [192] */
    (xdc_Char)0x6e,  /* [193] */
    (xdc_Char)0x67,  /* [194] */
    (xdc_Char)0x20,  /* [195] */
    (xdc_Char)0x73,  /* [196] */
    (xdc_Char)0x69,  /* [197] */
    (xdc_Char)0x7a,  /* [198] */
    (xdc_Char)0x65,  /* [199] */
    (xdc_Char)0x0,  /* [200] */
    (xdc_Char)0x48,  /* [201] */
    (xdc_Char)0x65,  /* [202] */
    (xdc_Char)0x61,  /* [203] */
    (xdc_Char)0x70,  /* [204] */
    (xdc_Char)0x53,  /* [205] */
    (xdc_Char)0x74,  /* [206] */
    (xdc_Char)0x64,  /* [207] */
    (xdc_Char)0x5f,  /* [208] */
    (xdc_Char)0x61,  /* [209] */
    (xdc_Char)0x6c,  /* [210] */
    (xdc_Char)0x6c,  /* [211] */
    (xdc_Char)0x6f,  /* [212] */
    (xdc_Char)0x63,  /* [213] */
    (xdc_Char)0x20,  /* [214] */
    (xdc_Char)0x2d,  /* [215] */
    (xdc_Char)0x20,  /* [216] */
    (xdc_Char)0x72,  /* [217] */
    (xdc_Char)0x65,  /* [218] */
    (xdc_Char)0x71,  /* [219] */
    (xdc_Char)0x75,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x73,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x64,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x61,  /* [227] */
    (xdc_Char)0x6c,  /* [228] */
    (xdc_Char)0x69,  /* [229] */
    (xdc_Char)0x67,  /* [230] */
    (xdc_Char)0x6e,  /* [231] */
    (xdc_Char)0x6d,  /* [232] */
    (xdc_Char)0x65,  /* [233] */
    (xdc_Char)0x6e,  /* [234] */
    (xdc_Char)0x74,  /* [235] */
    (xdc_Char)0x20,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x73,  /* [238] */
    (xdc_Char)0x20,  /* [239] */
    (xdc_Char)0x67,  /* [240] */
    (xdc_Char)0x72,  /* [241] */
    (xdc_Char)0x65,  /* [242] */
    (xdc_Char)0x61,  /* [243] */
    (xdc_Char)0x74,  /* [244] */
    (xdc_Char)0x65,  /* [245] */
    (xdc_Char)0x72,  /* [246] */
    (xdc_Char)0x20,  /* [247] */
    (xdc_Char)0x74,  /* [248] */
    (xdc_Char)0x68,  /* [249] */
    (xdc_Char)0x61,  /* [250] */
    (xdc_Char)0x6e,  /* [251] */
    (xdc_Char)0x20,  /* [252] */
    (xdc_Char)0x61,  /* [253] */
    (xdc_Char)0x6c,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6f,  /* [256] */
    (xdc_Char)0x77,  /* [257] */
    (xdc_Char)0x65,  /* [258] */
    (xdc_Char)0x64,  /* [259] */
    (xdc_Char)0x0,  /* [260] */
    (xdc_Char)0x41,  /* [261] */
    (xdc_Char)0x5f,  /* [262] */
    (xdc_Char)0x69,  /* [263] */
    (xdc_Char)0x6e,  /* [264] */
    (xdc_Char)0x76,  /* [265] */
    (xdc_Char)0x61,  /* [266] */
    (xdc_Char)0x6c,  /* [267] */
    (xdc_Char)0x69,  /* [268] */
    (xdc_Char)0x64,  /* [269] */
    (xdc_Char)0x4c,  /* [270] */
    (xdc_Char)0x6f,  /* [271] */
    (xdc_Char)0x67,  /* [272] */
    (xdc_Char)0x67,  /* [273] */
    (xdc_Char)0x65,  /* [274] */
    (xdc_Char)0x72,  /* [275] */
    (xdc_Char)0x3a,  /* [276] */
    (xdc_Char)0x20,  /* [277] */
    (xdc_Char)0x54,  /* [278] */
    (xdc_Char)0x68,  /* [279] */
    (xdc_Char)0x65,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x6c,  /* [282] */
    (xdc_Char)0x6f,  /* [283] */
    (xdc_Char)0x67,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x65,  /* [286] */
    (xdc_Char)0x72,  /* [287] */
    (xdc_Char)0x20,  /* [288] */
    (xdc_Char)0x69,  /* [289] */
    (xdc_Char)0x64,  /* [290] */
    (xdc_Char)0x20,  /* [291] */
    (xdc_Char)0x25,  /* [292] */
    (xdc_Char)0x64,  /* [293] */
    (xdc_Char)0x20,  /* [294] */
    (xdc_Char)0x69,  /* [295] */
    (xdc_Char)0x73,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x69,  /* [298] */
    (xdc_Char)0x6e,  /* [299] */
    (xdc_Char)0x76,  /* [300] */
    (xdc_Char)0x61,  /* [301] */
    (xdc_Char)0x6c,  /* [302] */
    (xdc_Char)0x69,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x2e,  /* [305] */
    (xdc_Char)0x0,  /* [306] */
    (xdc_Char)0x41,  /* [307] */
    (xdc_Char)0x5f,  /* [308] */
    (xdc_Char)0x63,  /* [309] */
    (xdc_Char)0x61,  /* [310] */
    (xdc_Char)0x6e,  /* [311] */
    (xdc_Char)0x6e,  /* [312] */
    (xdc_Char)0x6f,  /* [313] */
    (xdc_Char)0x74,  /* [314] */
    (xdc_Char)0x46,  /* [315] */
    (xdc_Char)0x69,  /* [316] */
    (xdc_Char)0x74,  /* [317] */
    (xdc_Char)0x49,  /* [318] */
    (xdc_Char)0x6e,  /* [319] */
    (xdc_Char)0x74,  /* [320] */
    (xdc_Char)0x6f,  /* [321] */
    (xdc_Char)0x41,  /* [322] */
    (xdc_Char)0x72,  /* [323] */
    (xdc_Char)0x67,  /* [324] */
    (xdc_Char)0x3a,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x73,  /* [327] */
    (xdc_Char)0x69,  /* [328] */
    (xdc_Char)0x7a,  /* [329] */
    (xdc_Char)0x65,  /* [330] */
    (xdc_Char)0x6f,  /* [331] */
    (xdc_Char)0x66,  /* [332] */
    (xdc_Char)0x28,  /* [333] */
    (xdc_Char)0x46,  /* [334] */
    (xdc_Char)0x6c,  /* [335] */
    (xdc_Char)0x6f,  /* [336] */
    (xdc_Char)0x61,  /* [337] */
    (xdc_Char)0x74,  /* [338] */
    (xdc_Char)0x29,  /* [339] */
    (xdc_Char)0x20,  /* [340] */
    (xdc_Char)0x3e,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x73,  /* [343] */
    (xdc_Char)0x69,  /* [344] */
    (xdc_Char)0x7a,  /* [345] */
    (xdc_Char)0x65,  /* [346] */
    (xdc_Char)0x6f,  /* [347] */
    (xdc_Char)0x66,  /* [348] */
    (xdc_Char)0x28,  /* [349] */
    (xdc_Char)0x41,  /* [350] */
    (xdc_Char)0x72,  /* [351] */
    (xdc_Char)0x67,  /* [352] */
    (xdc_Char)0x29,  /* [353] */
    (xdc_Char)0x0,  /* [354] */
    (xdc_Char)0x41,  /* [355] */
    (xdc_Char)0x5f,  /* [356] */
    (xdc_Char)0x63,  /* [357] */
    (xdc_Char)0x6c,  /* [358] */
    (xdc_Char)0x6f,  /* [359] */
    (xdc_Char)0x63,  /* [360] */
    (xdc_Char)0x6b,  /* [361] */
    (xdc_Char)0x44,  /* [362] */
    (xdc_Char)0x69,  /* [363] */
    (xdc_Char)0x73,  /* [364] */
    (xdc_Char)0x61,  /* [365] */
    (xdc_Char)0x62,  /* [366] */
    (xdc_Char)0x6c,  /* [367] */
    (xdc_Char)0x65,  /* [368] */
    (xdc_Char)0x64,  /* [369] */
    (xdc_Char)0x3a,  /* [370] */
    (xdc_Char)0x20,  /* [371] */
    (xdc_Char)0x43,  /* [372] */
    (xdc_Char)0x61,  /* [373] */
    (xdc_Char)0x6e,  /* [374] */
    (xdc_Char)0x6e,  /* [375] */
    (xdc_Char)0x6f,  /* [376] */
    (xdc_Char)0x74,  /* [377] */
    (xdc_Char)0x20,  /* [378] */
    (xdc_Char)0x63,  /* [379] */
    (xdc_Char)0x72,  /* [380] */
    (xdc_Char)0x65,  /* [381] */
    (xdc_Char)0x61,  /* [382] */
    (xdc_Char)0x74,  /* [383] */
    (xdc_Char)0x65,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x61,  /* [386] */
    (xdc_Char)0x20,  /* [387] */
    (xdc_Char)0x63,  /* [388] */
    (xdc_Char)0x6c,  /* [389] */
    (xdc_Char)0x6f,  /* [390] */
    (xdc_Char)0x63,  /* [391] */
    (xdc_Char)0x6b,  /* [392] */
    (xdc_Char)0x20,  /* [393] */
    (xdc_Char)0x69,  /* [394] */
    (xdc_Char)0x6e,  /* [395] */
    (xdc_Char)0x73,  /* [396] */
    (xdc_Char)0x74,  /* [397] */
    (xdc_Char)0x61,  /* [398] */
    (xdc_Char)0x6e,  /* [399] */
    (xdc_Char)0x63,  /* [400] */
    (xdc_Char)0x65,  /* [401] */
    (xdc_Char)0x20,  /* [402] */
    (xdc_Char)0x77,  /* [403] */
    (xdc_Char)0x68,  /* [404] */
    (xdc_Char)0x65,  /* [405] */
    (xdc_Char)0x6e,  /* [406] */
    (xdc_Char)0x20,  /* [407] */
    (xdc_Char)0x42,  /* [408] */
    (xdc_Char)0x49,  /* [409] */
    (xdc_Char)0x4f,  /* [410] */
    (xdc_Char)0x53,  /* [411] */
    (xdc_Char)0x2e,  /* [412] */
    (xdc_Char)0x63,  /* [413] */
    (xdc_Char)0x6c,  /* [414] */
    (xdc_Char)0x6f,  /* [415] */
    (xdc_Char)0x63,  /* [416] */
    (xdc_Char)0x6b,  /* [417] */
    (xdc_Char)0x45,  /* [418] */
    (xdc_Char)0x6e,  /* [419] */
    (xdc_Char)0x61,  /* [420] */
    (xdc_Char)0x62,  /* [421] */
    (xdc_Char)0x6c,  /* [422] */
    (xdc_Char)0x65,  /* [423] */
    (xdc_Char)0x64,  /* [424] */
    (xdc_Char)0x20,  /* [425] */
    (xdc_Char)0x69,  /* [426] */
    (xdc_Char)0x73,  /* [427] */
    (xdc_Char)0x20,  /* [428] */
    (xdc_Char)0x66,  /* [429] */
    (xdc_Char)0x61,  /* [430] */
    (xdc_Char)0x6c,  /* [431] */
    (xdc_Char)0x73,  /* [432] */
    (xdc_Char)0x65,  /* [433] */
    (xdc_Char)0x2e,  /* [434] */
    (xdc_Char)0x0,  /* [435] */
    (xdc_Char)0x41,  /* [436] */
    (xdc_Char)0x5f,  /* [437] */
    (xdc_Char)0x62,  /* [438] */
    (xdc_Char)0x61,  /* [439] */
    (xdc_Char)0x64,  /* [440] */
    (xdc_Char)0x54,  /* [441] */
    (xdc_Char)0x68,  /* [442] */
    (xdc_Char)0x72,  /* [443] */
    (xdc_Char)0x65,  /* [444] */
    (xdc_Char)0x61,  /* [445] */
    (xdc_Char)0x64,  /* [446] */
    (xdc_Char)0x54,  /* [447] */
    (xdc_Char)0x79,  /* [448] */
    (xdc_Char)0x70,  /* [449] */
    (xdc_Char)0x65,  /* [450] */
    (xdc_Char)0x3a,  /* [451] */
    (xdc_Char)0x20,  /* [452] */
    (xdc_Char)0x43,  /* [453] */
    (xdc_Char)0x61,  /* [454] */
    (xdc_Char)0x6e,  /* [455] */
    (xdc_Char)0x6e,  /* [456] */
    (xdc_Char)0x6f,  /* [457] */
    (xdc_Char)0x74,  /* [458] */
    (xdc_Char)0x20,  /* [459] */
    (xdc_Char)0x63,  /* [460] */
    (xdc_Char)0x72,  /* [461] */
    (xdc_Char)0x65,  /* [462] */
    (xdc_Char)0x61,  /* [463] */
    (xdc_Char)0x74,  /* [464] */
    (xdc_Char)0x65,  /* [465] */
    (xdc_Char)0x2f,  /* [466] */
    (xdc_Char)0x64,  /* [467] */
    (xdc_Char)0x65,  /* [468] */
    (xdc_Char)0x6c,  /* [469] */
    (xdc_Char)0x65,  /* [470] */
    (xdc_Char)0x74,  /* [471] */
    (xdc_Char)0x65,  /* [472] */
    (xdc_Char)0x20,  /* [473] */
    (xdc_Char)0x61,  /* [474] */
    (xdc_Char)0x20,  /* [475] */
    (xdc_Char)0x43,  /* [476] */
    (xdc_Char)0x6c,  /* [477] */
    (xdc_Char)0x6f,  /* [478] */
    (xdc_Char)0x63,  /* [479] */
    (xdc_Char)0x6b,  /* [480] */
    (xdc_Char)0x20,  /* [481] */
    (xdc_Char)0x66,  /* [482] */
    (xdc_Char)0x72,  /* [483] */
    (xdc_Char)0x6f,  /* [484] */
    (xdc_Char)0x6d,  /* [485] */
    (xdc_Char)0x20,  /* [486] */
    (xdc_Char)0x48,  /* [487] */
    (xdc_Char)0x77,  /* [488] */
    (xdc_Char)0x69,  /* [489] */
    (xdc_Char)0x20,  /* [490] */
    (xdc_Char)0x6f,  /* [491] */
    (xdc_Char)0x72,  /* [492] */
    (xdc_Char)0x20,  /* [493] */
    (xdc_Char)0x53,  /* [494] */
    (xdc_Char)0x77,  /* [495] */
    (xdc_Char)0x69,  /* [496] */
    (xdc_Char)0x20,  /* [497] */
    (xdc_Char)0x74,  /* [498] */
    (xdc_Char)0x68,  /* [499] */
    (xdc_Char)0x72,  /* [500] */
    (xdc_Char)0x65,  /* [501] */
    (xdc_Char)0x61,  /* [502] */
    (xdc_Char)0x64,  /* [503] */
    (xdc_Char)0x2e,  /* [504] */
    (xdc_Char)0x0,  /* [505] */
    (xdc_Char)0x41,  /* [506] */
    (xdc_Char)0x5f,  /* [507] */
    (xdc_Char)0x6e,  /* [508] */
    (xdc_Char)0x75,  /* [509] */
    (xdc_Char)0x6c,  /* [510] */
    (xdc_Char)0x6c,  /* [511] */
    (xdc_Char)0x45,  /* [512] */
    (xdc_Char)0x76,  /* [513] */
    (xdc_Char)0x65,  /* [514] */
    (xdc_Char)0x6e,  /* [515] */
    (xdc_Char)0x74,  /* [516] */
    (xdc_Char)0x4d,  /* [517] */
    (xdc_Char)0x61,  /* [518] */
    (xdc_Char)0x73,  /* [519] */
    (xdc_Char)0x6b,  /* [520] */
    (xdc_Char)0x73,  /* [521] */
    (xdc_Char)0x3a,  /* [522] */
    (xdc_Char)0x20,  /* [523] */
    (xdc_Char)0x6f,  /* [524] */
    (xdc_Char)0x72,  /* [525] */
    (xdc_Char)0x4d,  /* [526] */
    (xdc_Char)0x61,  /* [527] */
    (xdc_Char)0x73,  /* [528] */
    (xdc_Char)0x6b,  /* [529] */
    (xdc_Char)0x20,  /* [530] */
    (xdc_Char)0x61,  /* [531] */
    (xdc_Char)0x6e,  /* [532] */
    (xdc_Char)0x64,  /* [533] */
    (xdc_Char)0x20,  /* [534] */
    (xdc_Char)0x61,  /* [535] */
    (xdc_Char)0x6e,  /* [536] */
    (xdc_Char)0x64,  /* [537] */
    (xdc_Char)0x4d,  /* [538] */
    (xdc_Char)0x61,  /* [539] */
    (xdc_Char)0x73,  /* [540] */
    (xdc_Char)0x6b,  /* [541] */
    (xdc_Char)0x20,  /* [542] */
    (xdc_Char)0x61,  /* [543] */
    (xdc_Char)0x72,  /* [544] */
    (xdc_Char)0x65,  /* [545] */
    (xdc_Char)0x20,  /* [546] */
    (xdc_Char)0x6e,  /* [547] */
    (xdc_Char)0x75,  /* [548] */
    (xdc_Char)0x6c,  /* [549] */
    (xdc_Char)0x6c,  /* [550] */
    (xdc_Char)0x2e,  /* [551] */
    (xdc_Char)0x0,  /* [552] */
    (xdc_Char)0x41,  /* [553] */
    (xdc_Char)0x5f,  /* [554] */
    (xdc_Char)0x6e,  /* [555] */
    (xdc_Char)0x75,  /* [556] */
    (xdc_Char)0x6c,  /* [557] */
    (xdc_Char)0x6c,  /* [558] */
    (xdc_Char)0x45,  /* [559] */
    (xdc_Char)0x76,  /* [560] */
    (xdc_Char)0x65,  /* [561] */
    (xdc_Char)0x6e,  /* [562] */
    (xdc_Char)0x74,  /* [563] */
    (xdc_Char)0x49,  /* [564] */
    (xdc_Char)0x64,  /* [565] */
    (xdc_Char)0x3a,  /* [566] */
    (xdc_Char)0x20,  /* [567] */
    (xdc_Char)0x70,  /* [568] */
    (xdc_Char)0x6f,  /* [569] */
    (xdc_Char)0x73,  /* [570] */
    (xdc_Char)0x74,  /* [571] */
    (xdc_Char)0x65,  /* [572] */
    (xdc_Char)0x64,  /* [573] */
    (xdc_Char)0x20,  /* [574] */
    (xdc_Char)0x65,  /* [575] */
    (xdc_Char)0x76,  /* [576] */
    (xdc_Char)0x65,  /* [577] */
    (xdc_Char)0x6e,  /* [578] */
    (xdc_Char)0x74,  /* [579] */
    (xdc_Char)0x49,  /* [580] */
    (xdc_Char)0x64,  /* [581] */
    (xdc_Char)0x20,  /* [582] */
    (xdc_Char)0x69,  /* [583] */
    (xdc_Char)0x73,  /* [584] */
    (xdc_Char)0x20,  /* [585] */
    (xdc_Char)0x6e,  /* [586] */
    (xdc_Char)0x75,  /* [587] */
    (xdc_Char)0x6c,  /* [588] */
    (xdc_Char)0x6c,  /* [589] */
    (xdc_Char)0x2e,  /* [590] */
    (xdc_Char)0x0,  /* [591] */
    (xdc_Char)0x41,  /* [592] */
    (xdc_Char)0x5f,  /* [593] */
    (xdc_Char)0x65,  /* [594] */
    (xdc_Char)0x76,  /* [595] */
    (xdc_Char)0x65,  /* [596] */
    (xdc_Char)0x6e,  /* [597] */
    (xdc_Char)0x74,  /* [598] */
    (xdc_Char)0x49,  /* [599] */
    (xdc_Char)0x6e,  /* [600] */
    (xdc_Char)0x55,  /* [601] */
    (xdc_Char)0x73,  /* [602] */
    (xdc_Char)0x65,  /* [603] */
    (xdc_Char)0x3a,  /* [604] */
    (xdc_Char)0x20,  /* [605] */
    (xdc_Char)0x45,  /* [606] */
    (xdc_Char)0x76,  /* [607] */
    (xdc_Char)0x65,  /* [608] */
    (xdc_Char)0x6e,  /* [609] */
    (xdc_Char)0x74,  /* [610] */
    (xdc_Char)0x20,  /* [611] */
    (xdc_Char)0x6f,  /* [612] */
    (xdc_Char)0x62,  /* [613] */
    (xdc_Char)0x6a,  /* [614] */
    (xdc_Char)0x65,  /* [615] */
    (xdc_Char)0x63,  /* [616] */
    (xdc_Char)0x74,  /* [617] */
    (xdc_Char)0x20,  /* [618] */
    (xdc_Char)0x61,  /* [619] */
    (xdc_Char)0x6c,  /* [620] */
    (xdc_Char)0x72,  /* [621] */
    (xdc_Char)0x65,  /* [622] */
    (xdc_Char)0x61,  /* [623] */
    (xdc_Char)0x64,  /* [624] */
    (xdc_Char)0x79,  /* [625] */
    (xdc_Char)0x20,  /* [626] */
    (xdc_Char)0x69,  /* [627] */
    (xdc_Char)0x6e,  /* [628] */
    (xdc_Char)0x20,  /* [629] */
    (xdc_Char)0x75,  /* [630] */
    (xdc_Char)0x73,  /* [631] */
    (xdc_Char)0x65,  /* [632] */
    (xdc_Char)0x2e,  /* [633] */
    (xdc_Char)0x0,  /* [634] */
    (xdc_Char)0x41,  /* [635] */
    (xdc_Char)0x5f,  /* [636] */
    (xdc_Char)0x62,  /* [637] */
    (xdc_Char)0x61,  /* [638] */
    (xdc_Char)0x64,  /* [639] */
    (xdc_Char)0x43,  /* [640] */
    (xdc_Char)0x6f,  /* [641] */
    (xdc_Char)0x6e,  /* [642] */
    (xdc_Char)0x74,  /* [643] */
    (xdc_Char)0x65,  /* [644] */
    (xdc_Char)0x78,  /* [645] */
    (xdc_Char)0x74,  /* [646] */
    (xdc_Char)0x3a,  /* [647] */
    (xdc_Char)0x20,  /* [648] */
    (xdc_Char)0x62,  /* [649] */
    (xdc_Char)0x61,  /* [650] */
    (xdc_Char)0x64,  /* [651] */
    (xdc_Char)0x20,  /* [652] */
    (xdc_Char)0x63,  /* [653] */
    (xdc_Char)0x61,  /* [654] */
    (xdc_Char)0x6c,  /* [655] */
    (xdc_Char)0x6c,  /* [656] */
    (xdc_Char)0x69,  /* [657] */
    (xdc_Char)0x6e,  /* [658] */
    (xdc_Char)0x67,  /* [659] */
    (xdc_Char)0x20,  /* [660] */
    (xdc_Char)0x63,  /* [661] */
    (xdc_Char)0x6f,  /* [662] */
    (xdc_Char)0x6e,  /* [663] */
    (xdc_Char)0x74,  /* [664] */
    (xdc_Char)0x65,  /* [665] */
    (xdc_Char)0x78,  /* [666] */
    (xdc_Char)0x74,  /* [667] */
    (xdc_Char)0x2e,  /* [668] */
    (xdc_Char)0x20,  /* [669] */
    (xdc_Char)0x4d,  /* [670] */
    (xdc_Char)0x75,  /* [671] */
    (xdc_Char)0x73,  /* [672] */
    (xdc_Char)0x74,  /* [673] */
    (xdc_Char)0x20,  /* [674] */
    (xdc_Char)0x62,  /* [675] */
    (xdc_Char)0x65,  /* [676] */
    (xdc_Char)0x20,  /* [677] */
    (xdc_Char)0x63,  /* [678] */
    (xdc_Char)0x61,  /* [679] */
    (xdc_Char)0x6c,  /* [680] */
    (xdc_Char)0x6c,  /* [681] */
    (xdc_Char)0x65,  /* [682] */
    (xdc_Char)0x64,  /* [683] */
    (xdc_Char)0x20,  /* [684] */
    (xdc_Char)0x66,  /* [685] */
    (xdc_Char)0x72,  /* [686] */
    (xdc_Char)0x6f,  /* [687] */
    (xdc_Char)0x6d,  /* [688] */
    (xdc_Char)0x20,  /* [689] */
    (xdc_Char)0x61,  /* [690] */
    (xdc_Char)0x20,  /* [691] */
    (xdc_Char)0x54,  /* [692] */
    (xdc_Char)0x61,  /* [693] */
    (xdc_Char)0x73,  /* [694] */
    (xdc_Char)0x6b,  /* [695] */
    (xdc_Char)0x2e,  /* [696] */
    (xdc_Char)0x0,  /* [697] */
    (xdc_Char)0x4d,  /* [698] */
    (xdc_Char)0x61,  /* [699] */
    (xdc_Char)0x69,  /* [700] */
    (xdc_Char)0x6c,  /* [701] */
    (xdc_Char)0x62,  /* [702] */
    (xdc_Char)0x6f,  /* [703] */
    (xdc_Char)0x78,  /* [704] */
    (xdc_Char)0x5f,  /* [705] */
    (xdc_Char)0x63,  /* [706] */
    (xdc_Char)0x72,  /* [707] */
    (xdc_Char)0x65,  /* [708] */
    (xdc_Char)0x61,  /* [709] */
    (xdc_Char)0x74,  /* [710] */
    (xdc_Char)0x65,  /* [711] */
    (xdc_Char)0x27,  /* [712] */
    (xdc_Char)0x73,  /* [713] */
    (xdc_Char)0x20,  /* [714] */
    (xdc_Char)0x62,  /* [715] */
    (xdc_Char)0x75,  /* [716] */
    (xdc_Char)0x66,  /* [717] */
    (xdc_Char)0x53,  /* [718] */
    (xdc_Char)0x69,  /* [719] */
    (xdc_Char)0x7a,  /* [720] */
    (xdc_Char)0x65,  /* [721] */
    (xdc_Char)0x20,  /* [722] */
    (xdc_Char)0x70,  /* [723] */
    (xdc_Char)0x61,  /* [724] */
    (xdc_Char)0x72,  /* [725] */
    (xdc_Char)0x61,  /* [726] */
    (xdc_Char)0x6d,  /* [727] */
    (xdc_Char)0x65,  /* [728] */
    (xdc_Char)0x74,  /* [729] */
    (xdc_Char)0x65,  /* [730] */
    (xdc_Char)0x72,  /* [731] */
    (xdc_Char)0x20,  /* [732] */
    (xdc_Char)0x69,  /* [733] */
    (xdc_Char)0x73,  /* [734] */
    (xdc_Char)0x20,  /* [735] */
    (xdc_Char)0x69,  /* [736] */
    (xdc_Char)0x6e,  /* [737] */
    (xdc_Char)0x76,  /* [738] */
    (xdc_Char)0x61,  /* [739] */
    (xdc_Char)0x6c,  /* [740] */
    (xdc_Char)0x69,  /* [741] */
    (xdc_Char)0x64,  /* [742] */
    (xdc_Char)0x20,  /* [743] */
    (xdc_Char)0x28,  /* [744] */
    (xdc_Char)0x74,  /* [745] */
    (xdc_Char)0x6f,  /* [746] */
    (xdc_Char)0x6f,  /* [747] */
    (xdc_Char)0x20,  /* [748] */
    (xdc_Char)0x73,  /* [749] */
    (xdc_Char)0x6d,  /* [750] */
    (xdc_Char)0x61,  /* [751] */
    (xdc_Char)0x6c,  /* [752] */
    (xdc_Char)0x6c,  /* [753] */
    (xdc_Char)0x29,  /* [754] */
    (xdc_Char)0x0,  /* [755] */
    (xdc_Char)0x41,  /* [756] */
    (xdc_Char)0x5f,  /* [757] */
    (xdc_Char)0x6e,  /* [758] */
    (xdc_Char)0x6f,  /* [759] */
    (xdc_Char)0x45,  /* [760] */
    (xdc_Char)0x76,  /* [761] */
    (xdc_Char)0x65,  /* [762] */
    (xdc_Char)0x6e,  /* [763] */
    (xdc_Char)0x74,  /* [764] */
    (xdc_Char)0x73,  /* [765] */
    (xdc_Char)0x3a,  /* [766] */
    (xdc_Char)0x20,  /* [767] */
    (xdc_Char)0x54,  /* [768] */
    (xdc_Char)0x68,  /* [769] */
    (xdc_Char)0x65,  /* [770] */
    (xdc_Char)0x20,  /* [771] */
    (xdc_Char)0x45,  /* [772] */
    (xdc_Char)0x76,  /* [773] */
    (xdc_Char)0x65,  /* [774] */
    (xdc_Char)0x6e,  /* [775] */
    (xdc_Char)0x74,  /* [776] */
    (xdc_Char)0x2e,  /* [777] */
    (xdc_Char)0x73,  /* [778] */
    (xdc_Char)0x75,  /* [779] */
    (xdc_Char)0x70,  /* [780] */
    (xdc_Char)0x70,  /* [781] */
    (xdc_Char)0x6f,  /* [782] */
    (xdc_Char)0x72,  /* [783] */
    (xdc_Char)0x74,  /* [784] */
    (xdc_Char)0x73,  /* [785] */
    (xdc_Char)0x45,  /* [786] */
    (xdc_Char)0x76,  /* [787] */
    (xdc_Char)0x65,  /* [788] */
    (xdc_Char)0x6e,  /* [789] */
    (xdc_Char)0x74,  /* [790] */
    (xdc_Char)0x73,  /* [791] */
    (xdc_Char)0x20,  /* [792] */
    (xdc_Char)0x66,  /* [793] */
    (xdc_Char)0x6c,  /* [794] */
    (xdc_Char)0x61,  /* [795] */
    (xdc_Char)0x67,  /* [796] */
    (xdc_Char)0x20,  /* [797] */
    (xdc_Char)0x69,  /* [798] */
    (xdc_Char)0x73,  /* [799] */
    (xdc_Char)0x20,  /* [800] */
    (xdc_Char)0x64,  /* [801] */
    (xdc_Char)0x69,  /* [802] */
    (xdc_Char)0x73,  /* [803] */
    (xdc_Char)0x61,  /* [804] */
    (xdc_Char)0x62,  /* [805] */
    (xdc_Char)0x6c,  /* [806] */
    (xdc_Char)0x65,  /* [807] */
    (xdc_Char)0x64,  /* [808] */
    (xdc_Char)0x2e,  /* [809] */
    (xdc_Char)0x0,  /* [810] */
    (xdc_Char)0x41,  /* [811] */
    (xdc_Char)0x5f,  /* [812] */
    (xdc_Char)0x69,  /* [813] */
    (xdc_Char)0x6e,  /* [814] */
    (xdc_Char)0x76,  /* [815] */
    (xdc_Char)0x54,  /* [816] */
    (xdc_Char)0x69,  /* [817] */
    (xdc_Char)0x6d,  /* [818] */
    (xdc_Char)0x65,  /* [819] */
    (xdc_Char)0x6f,  /* [820] */
    (xdc_Char)0x75,  /* [821] */
    (xdc_Char)0x74,  /* [822] */
    (xdc_Char)0x3a,  /* [823] */
    (xdc_Char)0x20,  /* [824] */
    (xdc_Char)0x43,  /* [825] */
    (xdc_Char)0x61,  /* [826] */
    (xdc_Char)0x6e,  /* [827] */
    (xdc_Char)0x27,  /* [828] */
    (xdc_Char)0x74,  /* [829] */
    (xdc_Char)0x20,  /* [830] */
    (xdc_Char)0x75,  /* [831] */
    (xdc_Char)0x73,  /* [832] */
    (xdc_Char)0x65,  /* [833] */
    (xdc_Char)0x20,  /* [834] */
    (xdc_Char)0x42,  /* [835] */
    (xdc_Char)0x49,  /* [836] */
    (xdc_Char)0x4f,  /* [837] */
    (xdc_Char)0x53,  /* [838] */
    (xdc_Char)0x5f,  /* [839] */
    (xdc_Char)0x45,  /* [840] */
    (xdc_Char)0x56,  /* [841] */
    (xdc_Char)0x45,  /* [842] */
    (xdc_Char)0x4e,  /* [843] */
    (xdc_Char)0x54,  /* [844] */
    (xdc_Char)0x5f,  /* [845] */
    (xdc_Char)0x41,  /* [846] */
    (xdc_Char)0x43,  /* [847] */
    (xdc_Char)0x51,  /* [848] */
    (xdc_Char)0x55,  /* [849] */
    (xdc_Char)0x49,  /* [850] */
    (xdc_Char)0x52,  /* [851] */
    (xdc_Char)0x45,  /* [852] */
    (xdc_Char)0x44,  /* [853] */
    (xdc_Char)0x20,  /* [854] */
    (xdc_Char)0x77,  /* [855] */
    (xdc_Char)0x69,  /* [856] */
    (xdc_Char)0x74,  /* [857] */
    (xdc_Char)0x68,  /* [858] */
    (xdc_Char)0x20,  /* [859] */
    (xdc_Char)0x74,  /* [860] */
    (xdc_Char)0x68,  /* [861] */
    (xdc_Char)0x69,  /* [862] */
    (xdc_Char)0x73,  /* [863] */
    (xdc_Char)0x20,  /* [864] */
    (xdc_Char)0x53,  /* [865] */
    (xdc_Char)0x65,  /* [866] */
    (xdc_Char)0x6d,  /* [867] */
    (xdc_Char)0x61,  /* [868] */
    (xdc_Char)0x70,  /* [869] */
    (xdc_Char)0x68,  /* [870] */
    (xdc_Char)0x6f,  /* [871] */
    (xdc_Char)0x72,  /* [872] */
    (xdc_Char)0x65,  /* [873] */
    (xdc_Char)0x2e,  /* [874] */
    (xdc_Char)0x0,  /* [875] */
    (xdc_Char)0x41,  /* [876] */
    (xdc_Char)0x5f,  /* [877] */
    (xdc_Char)0x6f,  /* [878] */
    (xdc_Char)0x76,  /* [879] */
    (xdc_Char)0x65,  /* [880] */
    (xdc_Char)0x72,  /* [881] */
    (xdc_Char)0x66,  /* [882] */
    (xdc_Char)0x6c,  /* [883] */
    (xdc_Char)0x6f,  /* [884] */
    (xdc_Char)0x77,  /* [885] */
    (xdc_Char)0x3a,  /* [886] */
    (xdc_Char)0x20,  /* [887] */
    (xdc_Char)0x43,  /* [888] */
    (xdc_Char)0x6f,  /* [889] */
    (xdc_Char)0x75,  /* [890] */
    (xdc_Char)0x6e,  /* [891] */
    (xdc_Char)0x74,  /* [892] */
    (xdc_Char)0x20,  /* [893] */
    (xdc_Char)0x68,  /* [894] */
    (xdc_Char)0x61,  /* [895] */
    (xdc_Char)0x73,  /* [896] */
    (xdc_Char)0x20,  /* [897] */
    (xdc_Char)0x65,  /* [898] */
    (xdc_Char)0x78,  /* [899] */
    (xdc_Char)0x63,  /* [900] */
    (xdc_Char)0x65,  /* [901] */
    (xdc_Char)0x65,  /* [902] */
    (xdc_Char)0x64,  /* [903] */
    (xdc_Char)0x65,  /* [904] */
    (xdc_Char)0x64,  /* [905] */
    (xdc_Char)0x20,  /* [906] */
    (xdc_Char)0x36,  /* [907] */
    (xdc_Char)0x35,  /* [908] */
    (xdc_Char)0x35,  /* [909] */
    (xdc_Char)0x33,  /* [910] */
    (xdc_Char)0x35,  /* [911] */
    (xdc_Char)0x20,  /* [912] */
    (xdc_Char)0x61,  /* [913] */
    (xdc_Char)0x6e,  /* [914] */
    (xdc_Char)0x64,  /* [915] */
    (xdc_Char)0x20,  /* [916] */
    (xdc_Char)0x72,  /* [917] */
    (xdc_Char)0x6f,  /* [918] */
    (xdc_Char)0x6c,  /* [919] */
    (xdc_Char)0x6c,  /* [920] */
    (xdc_Char)0x65,  /* [921] */
    (xdc_Char)0x64,  /* [922] */
    (xdc_Char)0x20,  /* [923] */
    (xdc_Char)0x6f,  /* [924] */
    (xdc_Char)0x76,  /* [925] */
    (xdc_Char)0x65,  /* [926] */
    (xdc_Char)0x72,  /* [927] */
    (xdc_Char)0x2e,  /* [928] */
    (xdc_Char)0x0,  /* [929] */
    (xdc_Char)0x41,  /* [930] */
    (xdc_Char)0x5f,  /* [931] */
    (xdc_Char)0x73,  /* [932] */
    (xdc_Char)0x77,  /* [933] */
    (xdc_Char)0x69,  /* [934] */
    (xdc_Char)0x44,  /* [935] */
    (xdc_Char)0x69,  /* [936] */
    (xdc_Char)0x73,  /* [937] */
    (xdc_Char)0x61,  /* [938] */
    (xdc_Char)0x62,  /* [939] */
    (xdc_Char)0x6c,  /* [940] */
    (xdc_Char)0x65,  /* [941] */
    (xdc_Char)0x64,  /* [942] */
    (xdc_Char)0x3a,  /* [943] */
    (xdc_Char)0x20,  /* [944] */
    (xdc_Char)0x43,  /* [945] */
    (xdc_Char)0x61,  /* [946] */
    (xdc_Char)0x6e,  /* [947] */
    (xdc_Char)0x6e,  /* [948] */
    (xdc_Char)0x6f,  /* [949] */
    (xdc_Char)0x74,  /* [950] */
    (xdc_Char)0x20,  /* [951] */
    (xdc_Char)0x63,  /* [952] */
    (xdc_Char)0x72,  /* [953] */
    (xdc_Char)0x65,  /* [954] */
    (xdc_Char)0x61,  /* [955] */
    (xdc_Char)0x74,  /* [956] */
    (xdc_Char)0x65,  /* [957] */
    (xdc_Char)0x20,  /* [958] */
    (xdc_Char)0x61,  /* [959] */
    (xdc_Char)0x20,  /* [960] */
    (xdc_Char)0x53,  /* [961] */
    (xdc_Char)0x77,  /* [962] */
    (xdc_Char)0x69,  /* [963] */
    (xdc_Char)0x20,  /* [964] */
    (xdc_Char)0x77,  /* [965] */
    (xdc_Char)0x68,  /* [966] */
    (xdc_Char)0x65,  /* [967] */
    (xdc_Char)0x6e,  /* [968] */
    (xdc_Char)0x20,  /* [969] */
    (xdc_Char)0x53,  /* [970] */
    (xdc_Char)0x77,  /* [971] */
    (xdc_Char)0x69,  /* [972] */
    (xdc_Char)0x20,  /* [973] */
    (xdc_Char)0x69,  /* [974] */
    (xdc_Char)0x73,  /* [975] */
    (xdc_Char)0x20,  /* [976] */
    (xdc_Char)0x64,  /* [977] */
    (xdc_Char)0x69,  /* [978] */
    (xdc_Char)0x73,  /* [979] */
    (xdc_Char)0x61,  /* [980] */
    (xdc_Char)0x62,  /* [981] */
    (xdc_Char)0x6c,  /* [982] */
    (xdc_Char)0x65,  /* [983] */
    (xdc_Char)0x64,  /* [984] */
    (xdc_Char)0x2e,  /* [985] */
    (xdc_Char)0x0,  /* [986] */
    (xdc_Char)0x41,  /* [987] */
    (xdc_Char)0x5f,  /* [988] */
    (xdc_Char)0x62,  /* [989] */
    (xdc_Char)0x61,  /* [990] */
    (xdc_Char)0x64,  /* [991] */
    (xdc_Char)0x50,  /* [992] */
    (xdc_Char)0x72,  /* [993] */
    (xdc_Char)0x69,  /* [994] */
    (xdc_Char)0x6f,  /* [995] */
    (xdc_Char)0x72,  /* [996] */
    (xdc_Char)0x69,  /* [997] */
    (xdc_Char)0x74,  /* [998] */
    (xdc_Char)0x79,  /* [999] */
    (xdc_Char)0x3a,  /* [1000] */
    (xdc_Char)0x20,  /* [1001] */
    (xdc_Char)0x41,  /* [1002] */
    (xdc_Char)0x6e,  /* [1003] */
    (xdc_Char)0x20,  /* [1004] */
    (xdc_Char)0x69,  /* [1005] */
    (xdc_Char)0x6e,  /* [1006] */
    (xdc_Char)0x76,  /* [1007] */
    (xdc_Char)0x61,  /* [1008] */
    (xdc_Char)0x6c,  /* [1009] */
    (xdc_Char)0x69,  /* [1010] */
    (xdc_Char)0x64,  /* [1011] */
    (xdc_Char)0x20,  /* [1012] */
    (xdc_Char)0x53,  /* [1013] */
    (xdc_Char)0x77,  /* [1014] */
    (xdc_Char)0x69,  /* [1015] */
    (xdc_Char)0x20,  /* [1016] */
    (xdc_Char)0x70,  /* [1017] */
    (xdc_Char)0x72,  /* [1018] */
    (xdc_Char)0x69,  /* [1019] */
    (xdc_Char)0x6f,  /* [1020] */
    (xdc_Char)0x72,  /* [1021] */
    (xdc_Char)0x69,  /* [1022] */
    (xdc_Char)0x74,  /* [1023] */
    (xdc_Char)0x79,  /* [1024] */
    (xdc_Char)0x20,  /* [1025] */
    (xdc_Char)0x77,  /* [1026] */
    (xdc_Char)0x61,  /* [1027] */
    (xdc_Char)0x73,  /* [1028] */
    (xdc_Char)0x20,  /* [1029] */
    (xdc_Char)0x75,  /* [1030] */
    (xdc_Char)0x73,  /* [1031] */
    (xdc_Char)0x65,  /* [1032] */
    (xdc_Char)0x64,  /* [1033] */
    (xdc_Char)0x2e,  /* [1034] */
    (xdc_Char)0x0,  /* [1035] */
    (xdc_Char)0x41,  /* [1036] */
    (xdc_Char)0x5f,  /* [1037] */
    (xdc_Char)0x62,  /* [1038] */
    (xdc_Char)0x61,  /* [1039] */
    (xdc_Char)0x64,  /* [1040] */
    (xdc_Char)0x54,  /* [1041] */
    (xdc_Char)0x68,  /* [1042] */
    (xdc_Char)0x72,  /* [1043] */
    (xdc_Char)0x65,  /* [1044] */
    (xdc_Char)0x61,  /* [1045] */
    (xdc_Char)0x64,  /* [1046] */
    (xdc_Char)0x54,  /* [1047] */
    (xdc_Char)0x79,  /* [1048] */
    (xdc_Char)0x70,  /* [1049] */
    (xdc_Char)0x65,  /* [1050] */
    (xdc_Char)0x3a,  /* [1051] */
    (xdc_Char)0x20,  /* [1052] */
    (xdc_Char)0x43,  /* [1053] */
    (xdc_Char)0x61,  /* [1054] */
    (xdc_Char)0x6e,  /* [1055] */
    (xdc_Char)0x6e,  /* [1056] */
    (xdc_Char)0x6f,  /* [1057] */
    (xdc_Char)0x74,  /* [1058] */
    (xdc_Char)0x20,  /* [1059] */
    (xdc_Char)0x63,  /* [1060] */
    (xdc_Char)0x72,  /* [1061] */
    (xdc_Char)0x65,  /* [1062] */
    (xdc_Char)0x61,  /* [1063] */
    (xdc_Char)0x74,  /* [1064] */
    (xdc_Char)0x65,  /* [1065] */
    (xdc_Char)0x2f,  /* [1066] */
    (xdc_Char)0x64,  /* [1067] */
    (xdc_Char)0x65,  /* [1068] */
    (xdc_Char)0x6c,  /* [1069] */
    (xdc_Char)0x65,  /* [1070] */
    (xdc_Char)0x74,  /* [1071] */
    (xdc_Char)0x65,  /* [1072] */
    (xdc_Char)0x20,  /* [1073] */
    (xdc_Char)0x61,  /* [1074] */
    (xdc_Char)0x20,  /* [1075] */
    (xdc_Char)0x74,  /* [1076] */
    (xdc_Char)0x61,  /* [1077] */
    (xdc_Char)0x73,  /* [1078] */
    (xdc_Char)0x6b,  /* [1079] */
    (xdc_Char)0x20,  /* [1080] */
    (xdc_Char)0x66,  /* [1081] */
    (xdc_Char)0x72,  /* [1082] */
    (xdc_Char)0x6f,  /* [1083] */
    (xdc_Char)0x6d,  /* [1084] */
    (xdc_Char)0x20,  /* [1085] */
    (xdc_Char)0x48,  /* [1086] */
    (xdc_Char)0x77,  /* [1087] */
    (xdc_Char)0x69,  /* [1088] */
    (xdc_Char)0x20,  /* [1089] */
    (xdc_Char)0x6f,  /* [1090] */
    (xdc_Char)0x72,  /* [1091] */
    (xdc_Char)0x20,  /* [1092] */
    (xdc_Char)0x53,  /* [1093] */
    (xdc_Char)0x77,  /* [1094] */
    (xdc_Char)0x69,  /* [1095] */
    (xdc_Char)0x20,  /* [1096] */
    (xdc_Char)0x74,  /* [1097] */
    (xdc_Char)0x68,  /* [1098] */
    (xdc_Char)0x72,  /* [1099] */
    (xdc_Char)0x65,  /* [1100] */
    (xdc_Char)0x61,  /* [1101] */
    (xdc_Char)0x64,  /* [1102] */
    (xdc_Char)0x2e,  /* [1103] */
    (xdc_Char)0x0,  /* [1104] */
    (xdc_Char)0x41,  /* [1105] */
    (xdc_Char)0x5f,  /* [1106] */
    (xdc_Char)0x62,  /* [1107] */
    (xdc_Char)0x61,  /* [1108] */
    (xdc_Char)0x64,  /* [1109] */
    (xdc_Char)0x54,  /* [1110] */
    (xdc_Char)0x61,  /* [1111] */
    (xdc_Char)0x73,  /* [1112] */
    (xdc_Char)0x6b,  /* [1113] */
    (xdc_Char)0x53,  /* [1114] */
    (xdc_Char)0x74,  /* [1115] */
    (xdc_Char)0x61,  /* [1116] */
    (xdc_Char)0x74,  /* [1117] */
    (xdc_Char)0x65,  /* [1118] */
    (xdc_Char)0x3a,  /* [1119] */
    (xdc_Char)0x20,  /* [1120] */
    (xdc_Char)0x43,  /* [1121] */
    (xdc_Char)0x61,  /* [1122] */
    (xdc_Char)0x6e,  /* [1123] */
    (xdc_Char)0x27,  /* [1124] */
    (xdc_Char)0x74,  /* [1125] */
    (xdc_Char)0x20,  /* [1126] */
    (xdc_Char)0x64,  /* [1127] */
    (xdc_Char)0x65,  /* [1128] */
    (xdc_Char)0x6c,  /* [1129] */
    (xdc_Char)0x65,  /* [1130] */
    (xdc_Char)0x74,  /* [1131] */
    (xdc_Char)0x65,  /* [1132] */
    (xdc_Char)0x20,  /* [1133] */
    (xdc_Char)0x61,  /* [1134] */
    (xdc_Char)0x20,  /* [1135] */
    (xdc_Char)0x74,  /* [1136] */
    (xdc_Char)0x61,  /* [1137] */
    (xdc_Char)0x73,  /* [1138] */
    (xdc_Char)0x6b,  /* [1139] */
    (xdc_Char)0x20,  /* [1140] */
    (xdc_Char)0x69,  /* [1141] */
    (xdc_Char)0x6e,  /* [1142] */
    (xdc_Char)0x20,  /* [1143] */
    (xdc_Char)0x52,  /* [1144] */
    (xdc_Char)0x55,  /* [1145] */
    (xdc_Char)0x4e,  /* [1146] */
    (xdc_Char)0x4e,  /* [1147] */
    (xdc_Char)0x49,  /* [1148] */
    (xdc_Char)0x4e,  /* [1149] */
    (xdc_Char)0x47,  /* [1150] */
    (xdc_Char)0x20,  /* [1151] */
    (xdc_Char)0x73,  /* [1152] */
    (xdc_Char)0x74,  /* [1153] */
    (xdc_Char)0x61,  /* [1154] */
    (xdc_Char)0x74,  /* [1155] */
    (xdc_Char)0x65,  /* [1156] */
    (xdc_Char)0x2e,  /* [1157] */
    (xdc_Char)0x0,  /* [1158] */
    (xdc_Char)0x41,  /* [1159] */
    (xdc_Char)0x5f,  /* [1160] */
    (xdc_Char)0x6e,  /* [1161] */
    (xdc_Char)0x6f,  /* [1162] */
    (xdc_Char)0x50,  /* [1163] */
    (xdc_Char)0x65,  /* [1164] */
    (xdc_Char)0x6e,  /* [1165] */
    (xdc_Char)0x64,  /* [1166] */
    (xdc_Char)0x45,  /* [1167] */
    (xdc_Char)0x6c,  /* [1168] */
    (xdc_Char)0x65,  /* [1169] */
    (xdc_Char)0x6d,  /* [1170] */
    (xdc_Char)0x3a,  /* [1171] */
    (xdc_Char)0x20,  /* [1172] */
    (xdc_Char)0x4e,  /* [1173] */
    (xdc_Char)0x6f,  /* [1174] */
    (xdc_Char)0x74,  /* [1175] */
    (xdc_Char)0x20,  /* [1176] */
    (xdc_Char)0x65,  /* [1177] */
    (xdc_Char)0x6e,  /* [1178] */
    (xdc_Char)0x6f,  /* [1179] */
    (xdc_Char)0x75,  /* [1180] */
    (xdc_Char)0x67,  /* [1181] */
    (xdc_Char)0x68,  /* [1182] */
    (xdc_Char)0x20,  /* [1183] */
    (xdc_Char)0x69,  /* [1184] */
    (xdc_Char)0x6e,  /* [1185] */
    (xdc_Char)0x66,  /* [1186] */
    (xdc_Char)0x6f,  /* [1187] */
    (xdc_Char)0x20,  /* [1188] */
    (xdc_Char)0x74,  /* [1189] */
    (xdc_Char)0x6f,  /* [1190] */
    (xdc_Char)0x20,  /* [1191] */
    (xdc_Char)0x64,  /* [1192] */
    (xdc_Char)0x65,  /* [1193] */
    (xdc_Char)0x6c,  /* [1194] */
    (xdc_Char)0x65,  /* [1195] */
    (xdc_Char)0x74,  /* [1196] */
    (xdc_Char)0x65,  /* [1197] */
    (xdc_Char)0x20,  /* [1198] */
    (xdc_Char)0x42,  /* [1199] */
    (xdc_Char)0x4c,  /* [1200] */
    (xdc_Char)0x4f,  /* [1201] */
    (xdc_Char)0x43,  /* [1202] */
    (xdc_Char)0x4b,  /* [1203] */
    (xdc_Char)0x45,  /* [1204] */
    (xdc_Char)0x44,  /* [1205] */
    (xdc_Char)0x20,  /* [1206] */
    (xdc_Char)0x74,  /* [1207] */
    (xdc_Char)0x61,  /* [1208] */
    (xdc_Char)0x73,  /* [1209] */
    (xdc_Char)0x6b,  /* [1210] */
    (xdc_Char)0x2e,  /* [1211] */
    (xdc_Char)0x0,  /* [1212] */
    (xdc_Char)0x41,  /* [1213] */
    (xdc_Char)0x5f,  /* [1214] */
    (xdc_Char)0x74,  /* [1215] */
    (xdc_Char)0x61,  /* [1216] */
    (xdc_Char)0x73,  /* [1217] */
    (xdc_Char)0x6b,  /* [1218] */
    (xdc_Char)0x44,  /* [1219] */
    (xdc_Char)0x69,  /* [1220] */
    (xdc_Char)0x73,  /* [1221] */
    (xdc_Char)0x61,  /* [1222] */
    (xdc_Char)0x62,  /* [1223] */
    (xdc_Char)0x6c,  /* [1224] */
    (xdc_Char)0x65,  /* [1225] */
    (xdc_Char)0x64,  /* [1226] */
    (xdc_Char)0x3a,  /* [1227] */
    (xdc_Char)0x20,  /* [1228] */
    (xdc_Char)0x43,  /* [1229] */
    (xdc_Char)0x61,  /* [1230] */
    (xdc_Char)0x6e,  /* [1231] */
    (xdc_Char)0x6e,  /* [1232] */
    (xdc_Char)0x6f,  /* [1233] */
    (xdc_Char)0x74,  /* [1234] */
    (xdc_Char)0x20,  /* [1235] */
    (xdc_Char)0x63,  /* [1236] */
    (xdc_Char)0x72,  /* [1237] */
    (xdc_Char)0x65,  /* [1238] */
    (xdc_Char)0x61,  /* [1239] */
    (xdc_Char)0x74,  /* [1240] */
    (xdc_Char)0x65,  /* [1241] */
    (xdc_Char)0x20,  /* [1242] */
    (xdc_Char)0x61,  /* [1243] */
    (xdc_Char)0x20,  /* [1244] */
    (xdc_Char)0x74,  /* [1245] */
    (xdc_Char)0x61,  /* [1246] */
    (xdc_Char)0x73,  /* [1247] */
    (xdc_Char)0x6b,  /* [1248] */
    (xdc_Char)0x20,  /* [1249] */
    (xdc_Char)0x77,  /* [1250] */
    (xdc_Char)0x68,  /* [1251] */
    (xdc_Char)0x65,  /* [1252] */
    (xdc_Char)0x6e,  /* [1253] */
    (xdc_Char)0x20,  /* [1254] */
    (xdc_Char)0x74,  /* [1255] */
    (xdc_Char)0x61,  /* [1256] */
    (xdc_Char)0x73,  /* [1257] */
    (xdc_Char)0x6b,  /* [1258] */
    (xdc_Char)0x69,  /* [1259] */
    (xdc_Char)0x6e,  /* [1260] */
    (xdc_Char)0x67,  /* [1261] */
    (xdc_Char)0x20,  /* [1262] */
    (xdc_Char)0x69,  /* [1263] */
    (xdc_Char)0x73,  /* [1264] */
    (xdc_Char)0x20,  /* [1265] */
    (xdc_Char)0x64,  /* [1266] */
    (xdc_Char)0x69,  /* [1267] */
    (xdc_Char)0x73,  /* [1268] */
    (xdc_Char)0x61,  /* [1269] */
    (xdc_Char)0x62,  /* [1270] */
    (xdc_Char)0x6c,  /* [1271] */
    (xdc_Char)0x65,  /* [1272] */
    (xdc_Char)0x64,  /* [1273] */
    (xdc_Char)0x2e,  /* [1274] */
    (xdc_Char)0x0,  /* [1275] */
    (xdc_Char)0x41,  /* [1276] */
    (xdc_Char)0x5f,  /* [1277] */
    (xdc_Char)0x62,  /* [1278] */
    (xdc_Char)0x61,  /* [1279] */
    (xdc_Char)0x64,  /* [1280] */
    (xdc_Char)0x50,  /* [1281] */
    (xdc_Char)0x72,  /* [1282] */
    (xdc_Char)0x69,  /* [1283] */
    (xdc_Char)0x6f,  /* [1284] */
    (xdc_Char)0x72,  /* [1285] */
    (xdc_Char)0x69,  /* [1286] */
    (xdc_Char)0x74,  /* [1287] */
    (xdc_Char)0x79,  /* [1288] */
    (xdc_Char)0x3a,  /* [1289] */
    (xdc_Char)0x20,  /* [1290] */
    (xdc_Char)0x41,  /* [1291] */
    (xdc_Char)0x6e,  /* [1292] */
    (xdc_Char)0x20,  /* [1293] */
    (xdc_Char)0x69,  /* [1294] */
    (xdc_Char)0x6e,  /* [1295] */
    (xdc_Char)0x76,  /* [1296] */
    (xdc_Char)0x61,  /* [1297] */
    (xdc_Char)0x6c,  /* [1298] */
    (xdc_Char)0x69,  /* [1299] */
    (xdc_Char)0x64,  /* [1300] */
    (xdc_Char)0x20,  /* [1301] */
    (xdc_Char)0x74,  /* [1302] */
    (xdc_Char)0x61,  /* [1303] */
    (xdc_Char)0x73,  /* [1304] */
    (xdc_Char)0x6b,  /* [1305] */
    (xdc_Char)0x20,  /* [1306] */
    (xdc_Char)0x70,  /* [1307] */
    (xdc_Char)0x72,  /* [1308] */
    (xdc_Char)0x69,  /* [1309] */
    (xdc_Char)0x6f,  /* [1310] */
    (xdc_Char)0x72,  /* [1311] */
    (xdc_Char)0x69,  /* [1312] */
    (xdc_Char)0x74,  /* [1313] */
    (xdc_Char)0x79,  /* [1314] */
    (xdc_Char)0x20,  /* [1315] */
    (xdc_Char)0x77,  /* [1316] */
    (xdc_Char)0x61,  /* [1317] */
    (xdc_Char)0x73,  /* [1318] */
    (xdc_Char)0x20,  /* [1319] */
    (xdc_Char)0x75,  /* [1320] */
    (xdc_Char)0x73,  /* [1321] */
    (xdc_Char)0x65,  /* [1322] */
    (xdc_Char)0x64,  /* [1323] */
    (xdc_Char)0x2e,  /* [1324] */
    (xdc_Char)0x0,  /* [1325] */
    (xdc_Char)0x41,  /* [1326] */
    (xdc_Char)0x5f,  /* [1327] */
    (xdc_Char)0x62,  /* [1328] */
    (xdc_Char)0x61,  /* [1329] */
    (xdc_Char)0x64,  /* [1330] */
    (xdc_Char)0x54,  /* [1331] */
    (xdc_Char)0x69,  /* [1332] */
    (xdc_Char)0x6d,  /* [1333] */
    (xdc_Char)0x65,  /* [1334] */
    (xdc_Char)0x6f,  /* [1335] */
    (xdc_Char)0x75,  /* [1336] */
    (xdc_Char)0x74,  /* [1337] */
    (xdc_Char)0x3a,  /* [1338] */
    (xdc_Char)0x20,  /* [1339] */
    (xdc_Char)0x43,  /* [1340] */
    (xdc_Char)0x61,  /* [1341] */
    (xdc_Char)0x6e,  /* [1342] */
    (xdc_Char)0x27,  /* [1343] */
    (xdc_Char)0x74,  /* [1344] */
    (xdc_Char)0x20,  /* [1345] */
    (xdc_Char)0x73,  /* [1346] */
    (xdc_Char)0x6c,  /* [1347] */
    (xdc_Char)0x65,  /* [1348] */
    (xdc_Char)0x65,  /* [1349] */
    (xdc_Char)0x70,  /* [1350] */
    (xdc_Char)0x20,  /* [1351] */
    (xdc_Char)0x46,  /* [1352] */
    (xdc_Char)0x4f,  /* [1353] */
    (xdc_Char)0x52,  /* [1354] */
    (xdc_Char)0x45,  /* [1355] */
    (xdc_Char)0x56,  /* [1356] */
    (xdc_Char)0x45,  /* [1357] */
    (xdc_Char)0x52,  /* [1358] */
    (xdc_Char)0x2e,  /* [1359] */
    (xdc_Char)0x0,  /* [1360] */
    (xdc_Char)0x41,  /* [1361] */
    (xdc_Char)0x5f,  /* [1362] */
    (xdc_Char)0x62,  /* [1363] */
    (xdc_Char)0x61,  /* [1364] */
    (xdc_Char)0x64,  /* [1365] */
    (xdc_Char)0x41,  /* [1366] */
    (xdc_Char)0x66,  /* [1367] */
    (xdc_Char)0x66,  /* [1368] */
    (xdc_Char)0x69,  /* [1369] */
    (xdc_Char)0x6e,  /* [1370] */
    (xdc_Char)0x69,  /* [1371] */
    (xdc_Char)0x74,  /* [1372] */
    (xdc_Char)0x79,  /* [1373] */
    (xdc_Char)0x3a,  /* [1374] */
    (xdc_Char)0x20,  /* [1375] */
    (xdc_Char)0x49,  /* [1376] */
    (xdc_Char)0x6e,  /* [1377] */
    (xdc_Char)0x76,  /* [1378] */
    (xdc_Char)0x61,  /* [1379] */
    (xdc_Char)0x6c,  /* [1380] */
    (xdc_Char)0x69,  /* [1381] */
    (xdc_Char)0x64,  /* [1382] */
    (xdc_Char)0x20,  /* [1383] */
    (xdc_Char)0x61,  /* [1384] */
    (xdc_Char)0x66,  /* [1385] */
    (xdc_Char)0x66,  /* [1386] */
    (xdc_Char)0x69,  /* [1387] */
    (xdc_Char)0x6e,  /* [1388] */
    (xdc_Char)0x69,  /* [1389] */
    (xdc_Char)0x74,  /* [1390] */
    (xdc_Char)0x79,  /* [1391] */
    (xdc_Char)0x2e,  /* [1392] */
    (xdc_Char)0x0,  /* [1393] */
    (xdc_Char)0x41,  /* [1394] */
    (xdc_Char)0x5f,  /* [1395] */
    (xdc_Char)0x7a,  /* [1396] */
    (xdc_Char)0x65,  /* [1397] */
    (xdc_Char)0x72,  /* [1398] */
    (xdc_Char)0x6f,  /* [1399] */
    (xdc_Char)0x54,  /* [1400] */
    (xdc_Char)0x69,  /* [1401] */
    (xdc_Char)0x6d,  /* [1402] */
    (xdc_Char)0x65,  /* [1403] */
    (xdc_Char)0x6f,  /* [1404] */
    (xdc_Char)0x75,  /* [1405] */
    (xdc_Char)0x74,  /* [1406] */
    (xdc_Char)0x3a,  /* [1407] */
    (xdc_Char)0x20,  /* [1408] */
    (xdc_Char)0x54,  /* [1409] */
    (xdc_Char)0x69,  /* [1410] */
    (xdc_Char)0x6d,  /* [1411] */
    (xdc_Char)0x65,  /* [1412] */
    (xdc_Char)0x6f,  /* [1413] */
    (xdc_Char)0x75,  /* [1414] */
    (xdc_Char)0x74,  /* [1415] */
    (xdc_Char)0x20,  /* [1416] */
    (xdc_Char)0x76,  /* [1417] */
    (xdc_Char)0x61,  /* [1418] */
    (xdc_Char)0x6c,  /* [1419] */
    (xdc_Char)0x75,  /* [1420] */
    (xdc_Char)0x65,  /* [1421] */
    (xdc_Char)0x20,  /* [1422] */
    (xdc_Char)0x61,  /* [1423] */
    (xdc_Char)0x6e,  /* [1424] */
    (xdc_Char)0x6e,  /* [1425] */
    (xdc_Char)0x6f,  /* [1426] */
    (xdc_Char)0x74,  /* [1427] */
    (xdc_Char)0x20,  /* [1428] */
    (xdc_Char)0x62,  /* [1429] */
    (xdc_Char)0x65,  /* [1430] */
    (xdc_Char)0x20,  /* [1431] */
    (xdc_Char)0x7a,  /* [1432] */
    (xdc_Char)0x65,  /* [1433] */
    (xdc_Char)0x72,  /* [1434] */
    (xdc_Char)0x6f,  /* [1435] */
    (xdc_Char)0x0,  /* [1436] */
    (xdc_Char)0x41,  /* [1437] */
    (xdc_Char)0x5f,  /* [1438] */
    (xdc_Char)0x69,  /* [1439] */
    (xdc_Char)0x6e,  /* [1440] */
    (xdc_Char)0x76,  /* [1441] */
    (xdc_Char)0x61,  /* [1442] */
    (xdc_Char)0x6c,  /* [1443] */
    (xdc_Char)0x69,  /* [1444] */
    (xdc_Char)0x64,  /* [1445] */
    (xdc_Char)0x4b,  /* [1446] */
    (xdc_Char)0x65,  /* [1447] */
    (xdc_Char)0x79,  /* [1448] */
    (xdc_Char)0x3a,  /* [1449] */
    (xdc_Char)0x20,  /* [1450] */
    (xdc_Char)0x74,  /* [1451] */
    (xdc_Char)0x68,  /* [1452] */
    (xdc_Char)0x65,  /* [1453] */
    (xdc_Char)0x20,  /* [1454] */
    (xdc_Char)0x6b,  /* [1455] */
    (xdc_Char)0x65,  /* [1456] */
    (xdc_Char)0x79,  /* [1457] */
    (xdc_Char)0x20,  /* [1458] */
    (xdc_Char)0x6d,  /* [1459] */
    (xdc_Char)0x75,  /* [1460] */
    (xdc_Char)0x73,  /* [1461] */
    (xdc_Char)0x74,  /* [1462] */
    (xdc_Char)0x20,  /* [1463] */
    (xdc_Char)0x62,  /* [1464] */
    (xdc_Char)0x65,  /* [1465] */
    (xdc_Char)0x20,  /* [1466] */
    (xdc_Char)0x73,  /* [1467] */
    (xdc_Char)0x65,  /* [1468] */
    (xdc_Char)0x74,  /* [1469] */
    (xdc_Char)0x20,  /* [1470] */
    (xdc_Char)0x74,  /* [1471] */
    (xdc_Char)0x6f,  /* [1472] */
    (xdc_Char)0x20,  /* [1473] */
    (xdc_Char)0x61,  /* [1474] */
    (xdc_Char)0x20,  /* [1475] */
    (xdc_Char)0x6e,  /* [1476] */
    (xdc_Char)0x6f,  /* [1477] */
    (xdc_Char)0x6e,  /* [1478] */
    (xdc_Char)0x2d,  /* [1479] */
    (xdc_Char)0x64,  /* [1480] */
    (xdc_Char)0x65,  /* [1481] */
    (xdc_Char)0x66,  /* [1482] */
    (xdc_Char)0x61,  /* [1483] */
    (xdc_Char)0x75,  /* [1484] */
    (xdc_Char)0x6c,  /* [1485] */
    (xdc_Char)0x74,  /* [1486] */
    (xdc_Char)0x20,  /* [1487] */
    (xdc_Char)0x76,  /* [1488] */
    (xdc_Char)0x61,  /* [1489] */
    (xdc_Char)0x6c,  /* [1490] */
    (xdc_Char)0x75,  /* [1491] */
    (xdc_Char)0x65,  /* [1492] */
    (xdc_Char)0x0,  /* [1493] */
    (xdc_Char)0x41,  /* [1494] */
    (xdc_Char)0x5f,  /* [1495] */
    (xdc_Char)0x62,  /* [1496] */
    (xdc_Char)0x61,  /* [1497] */
    (xdc_Char)0x64,  /* [1498] */
    (xdc_Char)0x43,  /* [1499] */
    (xdc_Char)0x6f,  /* [1500] */
    (xdc_Char)0x6e,  /* [1501] */
    (xdc_Char)0x74,  /* [1502] */
    (xdc_Char)0x65,  /* [1503] */
    (xdc_Char)0x78,  /* [1504] */
    (xdc_Char)0x74,  /* [1505] */
    (xdc_Char)0x3a,  /* [1506] */
    (xdc_Char)0x20,  /* [1507] */
    (xdc_Char)0x62,  /* [1508] */
    (xdc_Char)0x61,  /* [1509] */
    (xdc_Char)0x64,  /* [1510] */
    (xdc_Char)0x20,  /* [1511] */
    (xdc_Char)0x63,  /* [1512] */
    (xdc_Char)0x61,  /* [1513] */
    (xdc_Char)0x6c,  /* [1514] */
    (xdc_Char)0x6c,  /* [1515] */
    (xdc_Char)0x69,  /* [1516] */
    (xdc_Char)0x6e,  /* [1517] */
    (xdc_Char)0x67,  /* [1518] */
    (xdc_Char)0x20,  /* [1519] */
    (xdc_Char)0x63,  /* [1520] */
    (xdc_Char)0x6f,  /* [1521] */
    (xdc_Char)0x6e,  /* [1522] */
    (xdc_Char)0x74,  /* [1523] */
    (xdc_Char)0x65,  /* [1524] */
    (xdc_Char)0x78,  /* [1525] */
    (xdc_Char)0x74,  /* [1526] */
    (xdc_Char)0x2e,  /* [1527] */
    (xdc_Char)0x20,  /* [1528] */
    (xdc_Char)0x4d,  /* [1529] */
    (xdc_Char)0x61,  /* [1530] */
    (xdc_Char)0x79,  /* [1531] */
    (xdc_Char)0x20,  /* [1532] */
    (xdc_Char)0x6e,  /* [1533] */
    (xdc_Char)0x6f,  /* [1534] */
    (xdc_Char)0x74,  /* [1535] */
    (xdc_Char)0x20,  /* [1536] */
    (xdc_Char)0x62,  /* [1537] */
    (xdc_Char)0x65,  /* [1538] */
    (xdc_Char)0x20,  /* [1539] */
    (xdc_Char)0x65,  /* [1540] */
    (xdc_Char)0x6e,  /* [1541] */
    (xdc_Char)0x74,  /* [1542] */
    (xdc_Char)0x65,  /* [1543] */
    (xdc_Char)0x72,  /* [1544] */
    (xdc_Char)0x65,  /* [1545] */
    (xdc_Char)0x64,  /* [1546] */
    (xdc_Char)0x20,  /* [1547] */
    (xdc_Char)0x66,  /* [1548] */
    (xdc_Char)0x72,  /* [1549] */
    (xdc_Char)0x6f,  /* [1550] */
    (xdc_Char)0x6d,  /* [1551] */
    (xdc_Char)0x20,  /* [1552] */
    (xdc_Char)0x61,  /* [1553] */
    (xdc_Char)0x20,  /* [1554] */
    (xdc_Char)0x68,  /* [1555] */
    (xdc_Char)0x61,  /* [1556] */
    (xdc_Char)0x72,  /* [1557] */
    (xdc_Char)0x64,  /* [1558] */
    (xdc_Char)0x77,  /* [1559] */
    (xdc_Char)0x61,  /* [1560] */
    (xdc_Char)0x72,  /* [1561] */
    (xdc_Char)0x65,  /* [1562] */
    (xdc_Char)0x20,  /* [1563] */
    (xdc_Char)0x69,  /* [1564] */
    (xdc_Char)0x6e,  /* [1565] */
    (xdc_Char)0x74,  /* [1566] */
    (xdc_Char)0x65,  /* [1567] */
    (xdc_Char)0x72,  /* [1568] */
    (xdc_Char)0x72,  /* [1569] */
    (xdc_Char)0x75,  /* [1570] */
    (xdc_Char)0x70,  /* [1571] */
    (xdc_Char)0x74,  /* [1572] */
    (xdc_Char)0x20,  /* [1573] */
    (xdc_Char)0x74,  /* [1574] */
    (xdc_Char)0x68,  /* [1575] */
    (xdc_Char)0x72,  /* [1576] */
    (xdc_Char)0x65,  /* [1577] */
    (xdc_Char)0x61,  /* [1578] */
    (xdc_Char)0x64,  /* [1579] */
    (xdc_Char)0x2e,  /* [1580] */
    (xdc_Char)0x0,  /* [1581] */
    (xdc_Char)0x41,  /* [1582] */
    (xdc_Char)0x5f,  /* [1583] */
    (xdc_Char)0x62,  /* [1584] */
    (xdc_Char)0x61,  /* [1585] */
    (xdc_Char)0x64,  /* [1586] */
    (xdc_Char)0x43,  /* [1587] */
    (xdc_Char)0x6f,  /* [1588] */
    (xdc_Char)0x6e,  /* [1589] */
    (xdc_Char)0x74,  /* [1590] */
    (xdc_Char)0x65,  /* [1591] */
    (xdc_Char)0x78,  /* [1592] */
    (xdc_Char)0x74,  /* [1593] */
    (xdc_Char)0x3a,  /* [1594] */
    (xdc_Char)0x20,  /* [1595] */
    (xdc_Char)0x62,  /* [1596] */
    (xdc_Char)0x61,  /* [1597] */
    (xdc_Char)0x64,  /* [1598] */
    (xdc_Char)0x20,  /* [1599] */
    (xdc_Char)0x63,  /* [1600] */
    (xdc_Char)0x61,  /* [1601] */
    (xdc_Char)0x6c,  /* [1602] */
    (xdc_Char)0x6c,  /* [1603] */
    (xdc_Char)0x69,  /* [1604] */
    (xdc_Char)0x6e,  /* [1605] */
    (xdc_Char)0x67,  /* [1606] */
    (xdc_Char)0x20,  /* [1607] */
    (xdc_Char)0x63,  /* [1608] */
    (xdc_Char)0x6f,  /* [1609] */
    (xdc_Char)0x6e,  /* [1610] */
    (xdc_Char)0x74,  /* [1611] */
    (xdc_Char)0x65,  /* [1612] */
    (xdc_Char)0x78,  /* [1613] */
    (xdc_Char)0x74,  /* [1614] */
    (xdc_Char)0x2e,  /* [1615] */
    (xdc_Char)0x20,  /* [1616] */
    (xdc_Char)0x4d,  /* [1617] */
    (xdc_Char)0x61,  /* [1618] */
    (xdc_Char)0x79,  /* [1619] */
    (xdc_Char)0x20,  /* [1620] */
    (xdc_Char)0x6e,  /* [1621] */
    (xdc_Char)0x6f,  /* [1622] */
    (xdc_Char)0x74,  /* [1623] */
    (xdc_Char)0x20,  /* [1624] */
    (xdc_Char)0x62,  /* [1625] */
    (xdc_Char)0x65,  /* [1626] */
    (xdc_Char)0x20,  /* [1627] */
    (xdc_Char)0x65,  /* [1628] */
    (xdc_Char)0x6e,  /* [1629] */
    (xdc_Char)0x74,  /* [1630] */
    (xdc_Char)0x65,  /* [1631] */
    (xdc_Char)0x72,  /* [1632] */
    (xdc_Char)0x65,  /* [1633] */
    (xdc_Char)0x64,  /* [1634] */
    (xdc_Char)0x20,  /* [1635] */
    (xdc_Char)0x66,  /* [1636] */
    (xdc_Char)0x72,  /* [1637] */
    (xdc_Char)0x6f,  /* [1638] */
    (xdc_Char)0x6d,  /* [1639] */
    (xdc_Char)0x20,  /* [1640] */
    (xdc_Char)0x61,  /* [1641] */
    (xdc_Char)0x20,  /* [1642] */
    (xdc_Char)0x73,  /* [1643] */
    (xdc_Char)0x6f,  /* [1644] */
    (xdc_Char)0x66,  /* [1645] */
    (xdc_Char)0x74,  /* [1646] */
    (xdc_Char)0x77,  /* [1647] */
    (xdc_Char)0x61,  /* [1648] */
    (xdc_Char)0x72,  /* [1649] */
    (xdc_Char)0x65,  /* [1650] */
    (xdc_Char)0x20,  /* [1651] */
    (xdc_Char)0x6f,  /* [1652] */
    (xdc_Char)0x72,  /* [1653] */
    (xdc_Char)0x20,  /* [1654] */
    (xdc_Char)0x68,  /* [1655] */
    (xdc_Char)0x61,  /* [1656] */
    (xdc_Char)0x72,  /* [1657] */
    (xdc_Char)0x64,  /* [1658] */
    (xdc_Char)0x77,  /* [1659] */
    (xdc_Char)0x61,  /* [1660] */
    (xdc_Char)0x72,  /* [1661] */
    (xdc_Char)0x65,  /* [1662] */
    (xdc_Char)0x20,  /* [1663] */
    (xdc_Char)0x69,  /* [1664] */
    (xdc_Char)0x6e,  /* [1665] */
    (xdc_Char)0x74,  /* [1666] */
    (xdc_Char)0x65,  /* [1667] */
    (xdc_Char)0x72,  /* [1668] */
    (xdc_Char)0x72,  /* [1669] */
    (xdc_Char)0x75,  /* [1670] */
    (xdc_Char)0x70,  /* [1671] */
    (xdc_Char)0x74,  /* [1672] */
    (xdc_Char)0x20,  /* [1673] */
    (xdc_Char)0x74,  /* [1674] */
    (xdc_Char)0x68,  /* [1675] */
    (xdc_Char)0x72,  /* [1676] */
    (xdc_Char)0x65,  /* [1677] */
    (xdc_Char)0x61,  /* [1678] */
    (xdc_Char)0x64,  /* [1679] */
    (xdc_Char)0x2e,  /* [1680] */
    (xdc_Char)0x0,  /* [1681] */
    (xdc_Char)0x41,  /* [1682] */
    (xdc_Char)0x5f,  /* [1683] */
    (xdc_Char)0x62,  /* [1684] */
    (xdc_Char)0x61,  /* [1685] */
    (xdc_Char)0x64,  /* [1686] */
    (xdc_Char)0x43,  /* [1687] */
    (xdc_Char)0x6f,  /* [1688] */
    (xdc_Char)0x6e,  /* [1689] */
    (xdc_Char)0x74,  /* [1690] */
    (xdc_Char)0x65,  /* [1691] */
    (xdc_Char)0x78,  /* [1692] */
    (xdc_Char)0x74,  /* [1693] */
    (xdc_Char)0x3a,  /* [1694] */
    (xdc_Char)0x20,  /* [1695] */
    (xdc_Char)0x62,  /* [1696] */
    (xdc_Char)0x61,  /* [1697] */
    (xdc_Char)0x64,  /* [1698] */
    (xdc_Char)0x20,  /* [1699] */
    (xdc_Char)0x63,  /* [1700] */
    (xdc_Char)0x61,  /* [1701] */
    (xdc_Char)0x6c,  /* [1702] */
    (xdc_Char)0x6c,  /* [1703] */
    (xdc_Char)0x69,  /* [1704] */
    (xdc_Char)0x6e,  /* [1705] */
    (xdc_Char)0x67,  /* [1706] */
    (xdc_Char)0x20,  /* [1707] */
    (xdc_Char)0x63,  /* [1708] */
    (xdc_Char)0x6f,  /* [1709] */
    (xdc_Char)0x6e,  /* [1710] */
    (xdc_Char)0x74,  /* [1711] */
    (xdc_Char)0x65,  /* [1712] */
    (xdc_Char)0x78,  /* [1713] */
    (xdc_Char)0x74,  /* [1714] */
    (xdc_Char)0x2e,  /* [1715] */
    (xdc_Char)0x20,  /* [1716] */
    (xdc_Char)0x53,  /* [1717] */
    (xdc_Char)0x65,  /* [1718] */
    (xdc_Char)0x65,  /* [1719] */
    (xdc_Char)0x20,  /* [1720] */
    (xdc_Char)0x47,  /* [1721] */
    (xdc_Char)0x61,  /* [1722] */
    (xdc_Char)0x74,  /* [1723] */
    (xdc_Char)0x65,  /* [1724] */
    (xdc_Char)0x4d,  /* [1725] */
    (xdc_Char)0x75,  /* [1726] */
    (xdc_Char)0x74,  /* [1727] */
    (xdc_Char)0x65,  /* [1728] */
    (xdc_Char)0x78,  /* [1729] */
    (xdc_Char)0x50,  /* [1730] */
    (xdc_Char)0x72,  /* [1731] */
    (xdc_Char)0x69,  /* [1732] */
    (xdc_Char)0x20,  /* [1733] */
    (xdc_Char)0x41,  /* [1734] */
    (xdc_Char)0x50,  /* [1735] */
    (xdc_Char)0x49,  /* [1736] */
    (xdc_Char)0x20,  /* [1737] */
    (xdc_Char)0x64,  /* [1738] */
    (xdc_Char)0x6f,  /* [1739] */
    (xdc_Char)0x63,  /* [1740] */
    (xdc_Char)0x20,  /* [1741] */
    (xdc_Char)0x66,  /* [1742] */
    (xdc_Char)0x6f,  /* [1743] */
    (xdc_Char)0x72,  /* [1744] */
    (xdc_Char)0x20,  /* [1745] */
    (xdc_Char)0x64,  /* [1746] */
    (xdc_Char)0x65,  /* [1747] */
    (xdc_Char)0x74,  /* [1748] */
    (xdc_Char)0x61,  /* [1749] */
    (xdc_Char)0x69,  /* [1750] */
    (xdc_Char)0x6c,  /* [1751] */
    (xdc_Char)0x73,  /* [1752] */
    (xdc_Char)0x2e,  /* [1753] */
    (xdc_Char)0x0,  /* [1754] */
    (xdc_Char)0x41,  /* [1755] */
    (xdc_Char)0x5f,  /* [1756] */
    (xdc_Char)0x62,  /* [1757] */
    (xdc_Char)0x61,  /* [1758] */
    (xdc_Char)0x64,  /* [1759] */
    (xdc_Char)0x43,  /* [1760] */
    (xdc_Char)0x6f,  /* [1761] */
    (xdc_Char)0x6e,  /* [1762] */
    (xdc_Char)0x74,  /* [1763] */
    (xdc_Char)0x65,  /* [1764] */
    (xdc_Char)0x78,  /* [1765] */
    (xdc_Char)0x74,  /* [1766] */
    (xdc_Char)0x3a,  /* [1767] */
    (xdc_Char)0x20,  /* [1768] */
    (xdc_Char)0x62,  /* [1769] */
    (xdc_Char)0x61,  /* [1770] */
    (xdc_Char)0x64,  /* [1771] */
    (xdc_Char)0x20,  /* [1772] */
    (xdc_Char)0x63,  /* [1773] */
    (xdc_Char)0x61,  /* [1774] */
    (xdc_Char)0x6c,  /* [1775] */
    (xdc_Char)0x6c,  /* [1776] */
    (xdc_Char)0x69,  /* [1777] */
    (xdc_Char)0x6e,  /* [1778] */
    (xdc_Char)0x67,  /* [1779] */
    (xdc_Char)0x20,  /* [1780] */
    (xdc_Char)0x63,  /* [1781] */
    (xdc_Char)0x6f,  /* [1782] */
    (xdc_Char)0x6e,  /* [1783] */
    (xdc_Char)0x74,  /* [1784] */
    (xdc_Char)0x65,  /* [1785] */
    (xdc_Char)0x78,  /* [1786] */
    (xdc_Char)0x74,  /* [1787] */
    (xdc_Char)0x2e,  /* [1788] */
    (xdc_Char)0x20,  /* [1789] */
    (xdc_Char)0x53,  /* [1790] */
    (xdc_Char)0x65,  /* [1791] */
    (xdc_Char)0x65,  /* [1792] */
    (xdc_Char)0x20,  /* [1793] */
    (xdc_Char)0x47,  /* [1794] */
    (xdc_Char)0x61,  /* [1795] */
    (xdc_Char)0x74,  /* [1796] */
    (xdc_Char)0x65,  /* [1797] */
    (xdc_Char)0x4d,  /* [1798] */
    (xdc_Char)0x75,  /* [1799] */
    (xdc_Char)0x74,  /* [1800] */
    (xdc_Char)0x65,  /* [1801] */
    (xdc_Char)0x78,  /* [1802] */
    (xdc_Char)0x20,  /* [1803] */
    (xdc_Char)0x41,  /* [1804] */
    (xdc_Char)0x50,  /* [1805] */
    (xdc_Char)0x49,  /* [1806] */
    (xdc_Char)0x20,  /* [1807] */
    (xdc_Char)0x64,  /* [1808] */
    (xdc_Char)0x6f,  /* [1809] */
    (xdc_Char)0x63,  /* [1810] */
    (xdc_Char)0x20,  /* [1811] */
    (xdc_Char)0x66,  /* [1812] */
    (xdc_Char)0x6f,  /* [1813] */
    (xdc_Char)0x72,  /* [1814] */
    (xdc_Char)0x20,  /* [1815] */
    (xdc_Char)0x64,  /* [1816] */
    (xdc_Char)0x65,  /* [1817] */
    (xdc_Char)0x74,  /* [1818] */
    (xdc_Char)0x61,  /* [1819] */
    (xdc_Char)0x69,  /* [1820] */
    (xdc_Char)0x6c,  /* [1821] */
    (xdc_Char)0x73,  /* [1822] */
    (xdc_Char)0x2e,  /* [1823] */
    (xdc_Char)0x0,  /* [1824] */
    (xdc_Char)0x41,  /* [1825] */
    (xdc_Char)0x5f,  /* [1826] */
    (xdc_Char)0x6e,  /* [1827] */
    (xdc_Char)0x6f,  /* [1828] */
    (xdc_Char)0x74,  /* [1829] */
    (xdc_Char)0x41,  /* [1830] */
    (xdc_Char)0x76,  /* [1831] */
    (xdc_Char)0x61,  /* [1832] */
    (xdc_Char)0x69,  /* [1833] */
    (xdc_Char)0x6c,  /* [1834] */
    (xdc_Char)0x61,  /* [1835] */
    (xdc_Char)0x62,  /* [1836] */
    (xdc_Char)0x6c,  /* [1837] */
    (xdc_Char)0x65,  /* [1838] */
    (xdc_Char)0x3a,  /* [1839] */
    (xdc_Char)0x20,  /* [1840] */
    (xdc_Char)0x73,  /* [1841] */
    (xdc_Char)0x74,  /* [1842] */
    (xdc_Char)0x61,  /* [1843] */
    (xdc_Char)0x74,  /* [1844] */
    (xdc_Char)0x69,  /* [1845] */
    (xdc_Char)0x63,  /* [1846] */
    (xdc_Char)0x20,  /* [1847] */
    (xdc_Char)0x63,  /* [1848] */
    (xdc_Char)0x72,  /* [1849] */
    (xdc_Char)0x65,  /* [1850] */
    (xdc_Char)0x61,  /* [1851] */
    (xdc_Char)0x74,  /* [1852] */
    (xdc_Char)0x65,  /* [1853] */
    (xdc_Char)0x64,  /* [1854] */
    (xdc_Char)0x20,  /* [1855] */
    (xdc_Char)0x74,  /* [1856] */
    (xdc_Char)0x69,  /* [1857] */
    (xdc_Char)0x6d,  /* [1858] */
    (xdc_Char)0x65,  /* [1859] */
    (xdc_Char)0x72,  /* [1860] */
    (xdc_Char)0x20,  /* [1861] */
    (xdc_Char)0x6e,  /* [1862] */
    (xdc_Char)0x6f,  /* [1863] */
    (xdc_Char)0x74,  /* [1864] */
    (xdc_Char)0x20,  /* [1865] */
    (xdc_Char)0x61,  /* [1866] */
    (xdc_Char)0x76,  /* [1867] */
    (xdc_Char)0x61,  /* [1868] */
    (xdc_Char)0x69,  /* [1869] */
    (xdc_Char)0x6c,  /* [1870] */
    (xdc_Char)0x61,  /* [1871] */
    (xdc_Char)0x62,  /* [1872] */
    (xdc_Char)0x6c,  /* [1873] */
    (xdc_Char)0x65,  /* [1874] */
    (xdc_Char)0x0,  /* [1875] */
    (xdc_Char)0x62,  /* [1876] */
    (xdc_Char)0x75,  /* [1877] */
    (xdc_Char)0x66,  /* [1878] */
    (xdc_Char)0x20,  /* [1879] */
    (xdc_Char)0x70,  /* [1880] */
    (xdc_Char)0x61,  /* [1881] */
    (xdc_Char)0x72,  /* [1882] */
    (xdc_Char)0x61,  /* [1883] */
    (xdc_Char)0x6d,  /* [1884] */
    (xdc_Char)0x65,  /* [1885] */
    (xdc_Char)0x74,  /* [1886] */
    (xdc_Char)0x65,  /* [1887] */
    (xdc_Char)0x72,  /* [1888] */
    (xdc_Char)0x20,  /* [1889] */
    (xdc_Char)0x63,  /* [1890] */
    (xdc_Char)0x61,  /* [1891] */
    (xdc_Char)0x6e,  /* [1892] */
    (xdc_Char)0x6e,  /* [1893] */
    (xdc_Char)0x6f,  /* [1894] */
    (xdc_Char)0x74,  /* [1895] */
    (xdc_Char)0x20,  /* [1896] */
    (xdc_Char)0x62,  /* [1897] */
    (xdc_Char)0x65,  /* [1898] */
    (xdc_Char)0x20,  /* [1899] */
    (xdc_Char)0x6e,  /* [1900] */
    (xdc_Char)0x75,  /* [1901] */
    (xdc_Char)0x6c,  /* [1902] */
    (xdc_Char)0x6c,  /* [1903] */
    (xdc_Char)0x0,  /* [1904] */
    (xdc_Char)0x62,  /* [1905] */
    (xdc_Char)0x75,  /* [1906] */
    (xdc_Char)0x66,  /* [1907] */
    (xdc_Char)0x20,  /* [1908] */
    (xdc_Char)0x6e,  /* [1909] */
    (xdc_Char)0x6f,  /* [1910] */
    (xdc_Char)0x74,  /* [1911] */
    (xdc_Char)0x20,  /* [1912] */
    (xdc_Char)0x70,  /* [1913] */
    (xdc_Char)0x72,  /* [1914] */
    (xdc_Char)0x6f,  /* [1915] */
    (xdc_Char)0x70,  /* [1916] */
    (xdc_Char)0x65,  /* [1917] */
    (xdc_Char)0x72,  /* [1918] */
    (xdc_Char)0x6c,  /* [1919] */
    (xdc_Char)0x79,  /* [1920] */
    (xdc_Char)0x20,  /* [1921] */
    (xdc_Char)0x61,  /* [1922] */
    (xdc_Char)0x6c,  /* [1923] */
    (xdc_Char)0x69,  /* [1924] */
    (xdc_Char)0x67,  /* [1925] */
    (xdc_Char)0x6e,  /* [1926] */
    (xdc_Char)0x65,  /* [1927] */
    (xdc_Char)0x64,  /* [1928] */
    (xdc_Char)0x0,  /* [1929] */
    (xdc_Char)0x61,  /* [1930] */
    (xdc_Char)0x6c,  /* [1931] */
    (xdc_Char)0x69,  /* [1932] */
    (xdc_Char)0x67,  /* [1933] */
    (xdc_Char)0x6e,  /* [1934] */
    (xdc_Char)0x20,  /* [1935] */
    (xdc_Char)0x70,  /* [1936] */
    (xdc_Char)0x61,  /* [1937] */
    (xdc_Char)0x72,  /* [1938] */
    (xdc_Char)0x61,  /* [1939] */
    (xdc_Char)0x6d,  /* [1940] */
    (xdc_Char)0x65,  /* [1941] */
    (xdc_Char)0x74,  /* [1942] */
    (xdc_Char)0x65,  /* [1943] */
    (xdc_Char)0x72,  /* [1944] */
    (xdc_Char)0x20,  /* [1945] */
    (xdc_Char)0x6d,  /* [1946] */
    (xdc_Char)0x75,  /* [1947] */
    (xdc_Char)0x73,  /* [1948] */
    (xdc_Char)0x74,  /* [1949] */
    (xdc_Char)0x20,  /* [1950] */
    (xdc_Char)0x62,  /* [1951] */
    (xdc_Char)0x65,  /* [1952] */
    (xdc_Char)0x20,  /* [1953] */
    (xdc_Char)0x30,  /* [1954] */
    (xdc_Char)0x20,  /* [1955] */
    (xdc_Char)0x6f,  /* [1956] */
    (xdc_Char)0x72,  /* [1957] */
    (xdc_Char)0x20,  /* [1958] */
    (xdc_Char)0x61,  /* [1959] */
    (xdc_Char)0x20,  /* [1960] */
    (xdc_Char)0x70,  /* [1961] */
    (xdc_Char)0x6f,  /* [1962] */
    (xdc_Char)0x77,  /* [1963] */
    (xdc_Char)0x65,  /* [1964] */
    (xdc_Char)0x72,  /* [1965] */
    (xdc_Char)0x20,  /* [1966] */
    (xdc_Char)0x6f,  /* [1967] */
    (xdc_Char)0x66,  /* [1968] */
    (xdc_Char)0x20,  /* [1969] */
    (xdc_Char)0x32,  /* [1970] */
    (xdc_Char)0x20,  /* [1971] */
    (xdc_Char)0x3e,  /* [1972] */
    (xdc_Char)0x3d,  /* [1973] */
    (xdc_Char)0x20,  /* [1974] */
    (xdc_Char)0x74,  /* [1975] */
    (xdc_Char)0x68,  /* [1976] */
    (xdc_Char)0x65,  /* [1977] */
    (xdc_Char)0x20,  /* [1978] */
    (xdc_Char)0x76,  /* [1979] */
    (xdc_Char)0x61,  /* [1980] */
    (xdc_Char)0x6c,  /* [1981] */
    (xdc_Char)0x75,  /* [1982] */
    (xdc_Char)0x65,  /* [1983] */
    (xdc_Char)0x20,  /* [1984] */
    (xdc_Char)0x6f,  /* [1985] */
    (xdc_Char)0x66,  /* [1986] */
    (xdc_Char)0x20,  /* [1987] */
    (xdc_Char)0x4d,  /* [1988] */
    (xdc_Char)0x65,  /* [1989] */
    (xdc_Char)0x6d,  /* [1990] */
    (xdc_Char)0x6f,  /* [1991] */
    (xdc_Char)0x72,  /* [1992] */
    (xdc_Char)0x79,  /* [1993] */
    (xdc_Char)0x5f,  /* [1994] */
    (xdc_Char)0x67,  /* [1995] */
    (xdc_Char)0x65,  /* [1996] */
    (xdc_Char)0x74,  /* [1997] */
    (xdc_Char)0x4d,  /* [1998] */
    (xdc_Char)0x61,  /* [1999] */
    (xdc_Char)0x78,  /* [2000] */
    (xdc_Char)0x44,  /* [2001] */
    (xdc_Char)0x65,  /* [2002] */
    (xdc_Char)0x66,  /* [2003] */
    (xdc_Char)0x61,  /* [2004] */
    (xdc_Char)0x75,  /* [2005] */
    (xdc_Char)0x6c,  /* [2006] */
    (xdc_Char)0x74,  /* [2007] */
    (xdc_Char)0x54,  /* [2008] */
    (xdc_Char)0x79,  /* [2009] */
    (xdc_Char)0x70,  /* [2010] */
    (xdc_Char)0x65,  /* [2011] */
    (xdc_Char)0x41,  /* [2012] */
    (xdc_Char)0x6c,  /* [2013] */
    (xdc_Char)0x69,  /* [2014] */
    (xdc_Char)0x67,  /* [2015] */
    (xdc_Char)0x6e,  /* [2016] */
    (xdc_Char)0x28,  /* [2017] */
    (xdc_Char)0x29,  /* [2018] */
    (xdc_Char)0x0,  /* [2019] */
    (xdc_Char)0x61,  /* [2020] */
    (xdc_Char)0x6c,  /* [2021] */
    (xdc_Char)0x69,  /* [2022] */
    (xdc_Char)0x67,  /* [2023] */
    (xdc_Char)0x6e,  /* [2024] */
    (xdc_Char)0x20,  /* [2025] */
    (xdc_Char)0x70,  /* [2026] */
    (xdc_Char)0x61,  /* [2027] */
    (xdc_Char)0x72,  /* [2028] */
    (xdc_Char)0x61,  /* [2029] */
    (xdc_Char)0x6d,  /* [2030] */
    (xdc_Char)0x65,  /* [2031] */
    (xdc_Char)0x74,  /* [2032] */
    (xdc_Char)0x65,  /* [2033] */
    (xdc_Char)0x72,  /* [2034] */
    (xdc_Char)0x20,  /* [2035] */
    (xdc_Char)0x31,  /* [2036] */
    (xdc_Char)0x29,  /* [2037] */
    (xdc_Char)0x20,  /* [2038] */
    (xdc_Char)0x6d,  /* [2039] */
    (xdc_Char)0x75,  /* [2040] */
    (xdc_Char)0x73,  /* [2041] */
    (xdc_Char)0x74,  /* [2042] */
    (xdc_Char)0x20,  /* [2043] */
    (xdc_Char)0x62,  /* [2044] */
    (xdc_Char)0x65,  /* [2045] */
    (xdc_Char)0x20,  /* [2046] */
    (xdc_Char)0x30,  /* [2047] */
    (xdc_Char)0x20,  /* [2048] */
    (xdc_Char)0x6f,  /* [2049] */
    (xdc_Char)0x72,  /* [2050] */
    (xdc_Char)0x20,  /* [2051] */
    (xdc_Char)0x61,  /* [2052] */
    (xdc_Char)0x20,  /* [2053] */
    (xdc_Char)0x70,  /* [2054] */
    (xdc_Char)0x6f,  /* [2055] */
    (xdc_Char)0x77,  /* [2056] */
    (xdc_Char)0x65,  /* [2057] */
    (xdc_Char)0x72,  /* [2058] */
    (xdc_Char)0x20,  /* [2059] */
    (xdc_Char)0x6f,  /* [2060] */
    (xdc_Char)0x66,  /* [2061] */
    (xdc_Char)0x20,  /* [2062] */
    (xdc_Char)0x32,  /* [2063] */
    (xdc_Char)0x20,  /* [2064] */
    (xdc_Char)0x61,  /* [2065] */
    (xdc_Char)0x6e,  /* [2066] */
    (xdc_Char)0x64,  /* [2067] */
    (xdc_Char)0x20,  /* [2068] */
    (xdc_Char)0x32,  /* [2069] */
    (xdc_Char)0x29,  /* [2070] */
    (xdc_Char)0x20,  /* [2071] */
    (xdc_Char)0x6e,  /* [2072] */
    (xdc_Char)0x6f,  /* [2073] */
    (xdc_Char)0x74,  /* [2074] */
    (xdc_Char)0x20,  /* [2075] */
    (xdc_Char)0x67,  /* [2076] */
    (xdc_Char)0x72,  /* [2077] */
    (xdc_Char)0x65,  /* [2078] */
    (xdc_Char)0x61,  /* [2079] */
    (xdc_Char)0x74,  /* [2080] */
    (xdc_Char)0x65,  /* [2081] */
    (xdc_Char)0x72,  /* [2082] */
    (xdc_Char)0x20,  /* [2083] */
    (xdc_Char)0x74,  /* [2084] */
    (xdc_Char)0x68,  /* [2085] */
    (xdc_Char)0x61,  /* [2086] */
    (xdc_Char)0x6e,  /* [2087] */
    (xdc_Char)0x20,  /* [2088] */
    (xdc_Char)0x74,  /* [2089] */
    (xdc_Char)0x68,  /* [2090] */
    (xdc_Char)0x65,  /* [2091] */
    (xdc_Char)0x20,  /* [2092] */
    (xdc_Char)0x68,  /* [2093] */
    (xdc_Char)0x65,  /* [2094] */
    (xdc_Char)0x61,  /* [2095] */
    (xdc_Char)0x70,  /* [2096] */
    (xdc_Char)0x73,  /* [2097] */
    (xdc_Char)0x20,  /* [2098] */
    (xdc_Char)0x61,  /* [2099] */
    (xdc_Char)0x6c,  /* [2100] */
    (xdc_Char)0x69,  /* [2101] */
    (xdc_Char)0x67,  /* [2102] */
    (xdc_Char)0x6e,  /* [2103] */
    (xdc_Char)0x6d,  /* [2104] */
    (xdc_Char)0x65,  /* [2105] */
    (xdc_Char)0x6e,  /* [2106] */
    (xdc_Char)0x74,  /* [2107] */
    (xdc_Char)0x0,  /* [2108] */
    (xdc_Char)0x62,  /* [2109] */
    (xdc_Char)0x6c,  /* [2110] */
    (xdc_Char)0x6f,  /* [2111] */
    (xdc_Char)0x63,  /* [2112] */
    (xdc_Char)0x6b,  /* [2113] */
    (xdc_Char)0x53,  /* [2114] */
    (xdc_Char)0x69,  /* [2115] */
    (xdc_Char)0x7a,  /* [2116] */
    (xdc_Char)0x65,  /* [2117] */
    (xdc_Char)0x20,  /* [2118] */
    (xdc_Char)0x63,  /* [2119] */
    (xdc_Char)0x61,  /* [2120] */
    (xdc_Char)0x6e,  /* [2121] */
    (xdc_Char)0x6e,  /* [2122] */
    (xdc_Char)0x6f,  /* [2123] */
    (xdc_Char)0x74,  /* [2124] */
    (xdc_Char)0x20,  /* [2125] */
    (xdc_Char)0x62,  /* [2126] */
    (xdc_Char)0x65,  /* [2127] */
    (xdc_Char)0x20,  /* [2128] */
    (xdc_Char)0x7a,  /* [2129] */
    (xdc_Char)0x65,  /* [2130] */
    (xdc_Char)0x72,  /* [2131] */
    (xdc_Char)0x6f,  /* [2132] */
    (xdc_Char)0x0,  /* [2133] */
    (xdc_Char)0x6e,  /* [2134] */
    (xdc_Char)0x75,  /* [2135] */
    (xdc_Char)0x6d,  /* [2136] */
    (xdc_Char)0x42,  /* [2137] */
    (xdc_Char)0x6c,  /* [2138] */
    (xdc_Char)0x6f,  /* [2139] */
    (xdc_Char)0x63,  /* [2140] */
    (xdc_Char)0x6b,  /* [2141] */
    (xdc_Char)0x73,  /* [2142] */
    (xdc_Char)0x20,  /* [2143] */
    (xdc_Char)0x63,  /* [2144] */
    (xdc_Char)0x61,  /* [2145] */
    (xdc_Char)0x6e,  /* [2146] */
    (xdc_Char)0x6e,  /* [2147] */
    (xdc_Char)0x6f,  /* [2148] */
    (xdc_Char)0x74,  /* [2149] */
    (xdc_Char)0x20,  /* [2150] */
    (xdc_Char)0x62,  /* [2151] */
    (xdc_Char)0x65,  /* [2152] */
    (xdc_Char)0x20,  /* [2153] */
    (xdc_Char)0x7a,  /* [2154] */
    (xdc_Char)0x65,  /* [2155] */
    (xdc_Char)0x72,  /* [2156] */
    (xdc_Char)0x6f,  /* [2157] */
    (xdc_Char)0x0,  /* [2158] */
    (xdc_Char)0x62,  /* [2159] */
    (xdc_Char)0x75,  /* [2160] */
    (xdc_Char)0x66,  /* [2161] */
    (xdc_Char)0x53,  /* [2162] */
    (xdc_Char)0x69,  /* [2163] */
    (xdc_Char)0x7a,  /* [2164] */
    (xdc_Char)0x65,  /* [2165] */
    (xdc_Char)0x20,  /* [2166] */
    (xdc_Char)0x63,  /* [2167] */
    (xdc_Char)0x61,  /* [2168] */
    (xdc_Char)0x6e,  /* [2169] */
    (xdc_Char)0x6e,  /* [2170] */
    (xdc_Char)0x6f,  /* [2171] */
    (xdc_Char)0x74,  /* [2172] */
    (xdc_Char)0x20,  /* [2173] */
    (xdc_Char)0x62,  /* [2174] */
    (xdc_Char)0x65,  /* [2175] */
    (xdc_Char)0x20,  /* [2176] */
    (xdc_Char)0x7a,  /* [2177] */
    (xdc_Char)0x65,  /* [2178] */
    (xdc_Char)0x72,  /* [2179] */
    (xdc_Char)0x6f,  /* [2180] */
    (xdc_Char)0x0,  /* [2181] */
    (xdc_Char)0x48,  /* [2182] */
    (xdc_Char)0x65,  /* [2183] */
    (xdc_Char)0x61,  /* [2184] */
    (xdc_Char)0x70,  /* [2185] */
    (xdc_Char)0x42,  /* [2186] */
    (xdc_Char)0x75,  /* [2187] */
    (xdc_Char)0x66,  /* [2188] */
    (xdc_Char)0x5f,  /* [2189] */
    (xdc_Char)0x63,  /* [2190] */
    (xdc_Char)0x72,  /* [2191] */
    (xdc_Char)0x65,  /* [2192] */
    (xdc_Char)0x61,  /* [2193] */
    (xdc_Char)0x74,  /* [2194] */
    (xdc_Char)0x65,  /* [2195] */
    (xdc_Char)0x27,  /* [2196] */
    (xdc_Char)0x73,  /* [2197] */
    (xdc_Char)0x20,  /* [2198] */
    (xdc_Char)0x62,  /* [2199] */
    (xdc_Char)0x75,  /* [2200] */
    (xdc_Char)0x66,  /* [2201] */
    (xdc_Char)0x53,  /* [2202] */
    (xdc_Char)0x69,  /* [2203] */
    (xdc_Char)0x7a,  /* [2204] */
    (xdc_Char)0x65,  /* [2205] */
    (xdc_Char)0x20,  /* [2206] */
    (xdc_Char)0x70,  /* [2207] */
    (xdc_Char)0x61,  /* [2208] */
    (xdc_Char)0x72,  /* [2209] */
    (xdc_Char)0x61,  /* [2210] */
    (xdc_Char)0x6d,  /* [2211] */
    (xdc_Char)0x65,  /* [2212] */
    (xdc_Char)0x74,  /* [2213] */
    (xdc_Char)0x65,  /* [2214] */
    (xdc_Char)0x72,  /* [2215] */
    (xdc_Char)0x20,  /* [2216] */
    (xdc_Char)0x69,  /* [2217] */
    (xdc_Char)0x73,  /* [2218] */
    (xdc_Char)0x20,  /* [2219] */
    (xdc_Char)0x69,  /* [2220] */
    (xdc_Char)0x6e,  /* [2221] */
    (xdc_Char)0x76,  /* [2222] */
    (xdc_Char)0x61,  /* [2223] */
    (xdc_Char)0x6c,  /* [2224] */
    (xdc_Char)0x69,  /* [2225] */
    (xdc_Char)0x64,  /* [2226] */
    (xdc_Char)0x20,  /* [2227] */
    (xdc_Char)0x28,  /* [2228] */
    (xdc_Char)0x74,  /* [2229] */
    (xdc_Char)0x6f,  /* [2230] */
    (xdc_Char)0x6f,  /* [2231] */
    (xdc_Char)0x20,  /* [2232] */
    (xdc_Char)0x73,  /* [2233] */
    (xdc_Char)0x6d,  /* [2234] */
    (xdc_Char)0x61,  /* [2235] */
    (xdc_Char)0x6c,  /* [2236] */
    (xdc_Char)0x6c,  /* [2237] */
    (xdc_Char)0x29,  /* [2238] */
    (xdc_Char)0x0,  /* [2239] */
    (xdc_Char)0x43,  /* [2240] */
    (xdc_Char)0x61,  /* [2241] */
    (xdc_Char)0x6e,  /* [2242] */
    (xdc_Char)0x6e,  /* [2243] */
    (xdc_Char)0x6f,  /* [2244] */
    (xdc_Char)0x74,  /* [2245] */
    (xdc_Char)0x20,  /* [2246] */
    (xdc_Char)0x63,  /* [2247] */
    (xdc_Char)0x61,  /* [2248] */
    (xdc_Char)0x6c,  /* [2249] */
    (xdc_Char)0x6c,  /* [2250] */
    (xdc_Char)0x20,  /* [2251] */
    (xdc_Char)0x48,  /* [2252] */
    (xdc_Char)0x65,  /* [2253] */
    (xdc_Char)0x61,  /* [2254] */
    (xdc_Char)0x70,  /* [2255] */
    (xdc_Char)0x42,  /* [2256] */
    (xdc_Char)0x75,  /* [2257] */
    (xdc_Char)0x66,  /* [2258] */
    (xdc_Char)0x5f,  /* [2259] */
    (xdc_Char)0x66,  /* [2260] */
    (xdc_Char)0x72,  /* [2261] */
    (xdc_Char)0x65,  /* [2262] */
    (xdc_Char)0x65,  /* [2263] */
    (xdc_Char)0x20,  /* [2264] */
    (xdc_Char)0x77,  /* [2265] */
    (xdc_Char)0x68,  /* [2266] */
    (xdc_Char)0x65,  /* [2267] */
    (xdc_Char)0x6e,  /* [2268] */
    (xdc_Char)0x20,  /* [2269] */
    (xdc_Char)0x6e,  /* [2270] */
    (xdc_Char)0x6f,  /* [2271] */
    (xdc_Char)0x20,  /* [2272] */
    (xdc_Char)0x62,  /* [2273] */
    (xdc_Char)0x6c,  /* [2274] */
    (xdc_Char)0x6f,  /* [2275] */
    (xdc_Char)0x63,  /* [2276] */
    (xdc_Char)0x6b,  /* [2277] */
    (xdc_Char)0x73,  /* [2278] */
    (xdc_Char)0x20,  /* [2279] */
    (xdc_Char)0x68,  /* [2280] */
    (xdc_Char)0x61,  /* [2281] */
    (xdc_Char)0x76,  /* [2282] */
    (xdc_Char)0x65,  /* [2283] */
    (xdc_Char)0x20,  /* [2284] */
    (xdc_Char)0x62,  /* [2285] */
    (xdc_Char)0x65,  /* [2286] */
    (xdc_Char)0x65,  /* [2287] */
    (xdc_Char)0x6e,  /* [2288] */
    (xdc_Char)0x20,  /* [2289] */
    (xdc_Char)0x61,  /* [2290] */
    (xdc_Char)0x6c,  /* [2291] */
    (xdc_Char)0x6c,  /* [2292] */
    (xdc_Char)0x6f,  /* [2293] */
    (xdc_Char)0x63,  /* [2294] */
    (xdc_Char)0x61,  /* [2295] */
    (xdc_Char)0x74,  /* [2296] */
    (xdc_Char)0x65,  /* [2297] */
    (xdc_Char)0x64,  /* [2298] */
    (xdc_Char)0x0,  /* [2299] */
    (xdc_Char)0x41,  /* [2300] */
    (xdc_Char)0x5f,  /* [2301] */
    (xdc_Char)0x69,  /* [2302] */
    (xdc_Char)0x6e,  /* [2303] */
    (xdc_Char)0x76,  /* [2304] */
    (xdc_Char)0x61,  /* [2305] */
    (xdc_Char)0x6c,  /* [2306] */
    (xdc_Char)0x69,  /* [2307] */
    (xdc_Char)0x64,  /* [2308] */
    (xdc_Char)0x46,  /* [2309] */
    (xdc_Char)0x72,  /* [2310] */
    (xdc_Char)0x65,  /* [2311] */
    (xdc_Char)0x65,  /* [2312] */
    (xdc_Char)0x3a,  /* [2313] */
    (xdc_Char)0x20,  /* [2314] */
    (xdc_Char)0x49,  /* [2315] */
    (xdc_Char)0x6e,  /* [2316] */
    (xdc_Char)0x76,  /* [2317] */
    (xdc_Char)0x61,  /* [2318] */
    (xdc_Char)0x6c,  /* [2319] */
    (xdc_Char)0x69,  /* [2320] */
    (xdc_Char)0x64,  /* [2321] */
    (xdc_Char)0x20,  /* [2322] */
    (xdc_Char)0x66,  /* [2323] */
    (xdc_Char)0x72,  /* [2324] */
    (xdc_Char)0x65,  /* [2325] */
    (xdc_Char)0x65,  /* [2326] */
    (xdc_Char)0x0,  /* [2327] */
    (xdc_Char)0x41,  /* [2328] */
    (xdc_Char)0x5f,  /* [2329] */
    (xdc_Char)0x7a,  /* [2330] */
    (xdc_Char)0x65,  /* [2331] */
    (xdc_Char)0x72,  /* [2332] */
    (xdc_Char)0x6f,  /* [2333] */
    (xdc_Char)0x42,  /* [2334] */
    (xdc_Char)0x6c,  /* [2335] */
    (xdc_Char)0x6f,  /* [2336] */
    (xdc_Char)0x63,  /* [2337] */
    (xdc_Char)0x6b,  /* [2338] */
    (xdc_Char)0x3a,  /* [2339] */
    (xdc_Char)0x20,  /* [2340] */
    (xdc_Char)0x43,  /* [2341] */
    (xdc_Char)0x61,  /* [2342] */
    (xdc_Char)0x6e,  /* [2343] */
    (xdc_Char)0x6e,  /* [2344] */
    (xdc_Char)0x6f,  /* [2345] */
    (xdc_Char)0x74,  /* [2346] */
    (xdc_Char)0x20,  /* [2347] */
    (xdc_Char)0x61,  /* [2348] */
    (xdc_Char)0x6c,  /* [2349] */
    (xdc_Char)0x6c,  /* [2350] */
    (xdc_Char)0x6f,  /* [2351] */
    (xdc_Char)0x63,  /* [2352] */
    (xdc_Char)0x61,  /* [2353] */
    (xdc_Char)0x74,  /* [2354] */
    (xdc_Char)0x65,  /* [2355] */
    (xdc_Char)0x20,  /* [2356] */
    (xdc_Char)0x73,  /* [2357] */
    (xdc_Char)0x69,  /* [2358] */
    (xdc_Char)0x7a,  /* [2359] */
    (xdc_Char)0x65,  /* [2360] */
    (xdc_Char)0x20,  /* [2361] */
    (xdc_Char)0x30,  /* [2362] */
    (xdc_Char)0x0,  /* [2363] */
    (xdc_Char)0x41,  /* [2364] */
    (xdc_Char)0x5f,  /* [2365] */
    (xdc_Char)0x68,  /* [2366] */
    (xdc_Char)0x65,  /* [2367] */
    (xdc_Char)0x61,  /* [2368] */
    (xdc_Char)0x70,  /* [2369] */
    (xdc_Char)0x53,  /* [2370] */
    (xdc_Char)0x69,  /* [2371] */
    (xdc_Char)0x7a,  /* [2372] */
    (xdc_Char)0x65,  /* [2373] */
    (xdc_Char)0x3a,  /* [2374] */
    (xdc_Char)0x20,  /* [2375] */
    (xdc_Char)0x52,  /* [2376] */
    (xdc_Char)0x65,  /* [2377] */
    (xdc_Char)0x71,  /* [2378] */
    (xdc_Char)0x75,  /* [2379] */
    (xdc_Char)0x65,  /* [2380] */
    (xdc_Char)0x73,  /* [2381] */
    (xdc_Char)0x74,  /* [2382] */
    (xdc_Char)0x65,  /* [2383] */
    (xdc_Char)0x64,  /* [2384] */
    (xdc_Char)0x20,  /* [2385] */
    (xdc_Char)0x68,  /* [2386] */
    (xdc_Char)0x65,  /* [2387] */
    (xdc_Char)0x61,  /* [2388] */
    (xdc_Char)0x70,  /* [2389] */
    (xdc_Char)0x20,  /* [2390] */
    (xdc_Char)0x73,  /* [2391] */
    (xdc_Char)0x69,  /* [2392] */
    (xdc_Char)0x7a,  /* [2393] */
    (xdc_Char)0x65,  /* [2394] */
    (xdc_Char)0x20,  /* [2395] */
    (xdc_Char)0x69,  /* [2396] */
    (xdc_Char)0x73,  /* [2397] */
    (xdc_Char)0x20,  /* [2398] */
    (xdc_Char)0x74,  /* [2399] */
    (xdc_Char)0x6f,  /* [2400] */
    (xdc_Char)0x6f,  /* [2401] */
    (xdc_Char)0x20,  /* [2402] */
    (xdc_Char)0x73,  /* [2403] */
    (xdc_Char)0x6d,  /* [2404] */
    (xdc_Char)0x61,  /* [2405] */
    (xdc_Char)0x6c,  /* [2406] */
    (xdc_Char)0x6c,  /* [2407] */
    (xdc_Char)0x0,  /* [2408] */
    (xdc_Char)0x41,  /* [2409] */
    (xdc_Char)0x5f,  /* [2410] */
    (xdc_Char)0x61,  /* [2411] */
    (xdc_Char)0x6c,  /* [2412] */
    (xdc_Char)0x69,  /* [2413] */
    (xdc_Char)0x67,  /* [2414] */
    (xdc_Char)0x6e,  /* [2415] */
    (xdc_Char)0x3a,  /* [2416] */
    (xdc_Char)0x20,  /* [2417] */
    (xdc_Char)0x52,  /* [2418] */
    (xdc_Char)0x65,  /* [2419] */
    (xdc_Char)0x71,  /* [2420] */
    (xdc_Char)0x75,  /* [2421] */
    (xdc_Char)0x65,  /* [2422] */
    (xdc_Char)0x73,  /* [2423] */
    (xdc_Char)0x74,  /* [2424] */
    (xdc_Char)0x65,  /* [2425] */
    (xdc_Char)0x64,  /* [2426] */
    (xdc_Char)0x20,  /* [2427] */
    (xdc_Char)0x61,  /* [2428] */
    (xdc_Char)0x6c,  /* [2429] */
    (xdc_Char)0x69,  /* [2430] */
    (xdc_Char)0x67,  /* [2431] */
    (xdc_Char)0x6e,  /* [2432] */
    (xdc_Char)0x20,  /* [2433] */
    (xdc_Char)0x69,  /* [2434] */
    (xdc_Char)0x73,  /* [2435] */
    (xdc_Char)0x20,  /* [2436] */
    (xdc_Char)0x6e,  /* [2437] */
    (xdc_Char)0x6f,  /* [2438] */
    (xdc_Char)0x74,  /* [2439] */
    (xdc_Char)0x20,  /* [2440] */
    (xdc_Char)0x61,  /* [2441] */
    (xdc_Char)0x20,  /* [2442] */
    (xdc_Char)0x70,  /* [2443] */
    (xdc_Char)0x6f,  /* [2444] */
    (xdc_Char)0x77,  /* [2445] */
    (xdc_Char)0x65,  /* [2446] */
    (xdc_Char)0x72,  /* [2447] */
    (xdc_Char)0x20,  /* [2448] */
    (xdc_Char)0x6f,  /* [2449] */
    (xdc_Char)0x66,  /* [2450] */
    (xdc_Char)0x20,  /* [2451] */
    (xdc_Char)0x32,  /* [2452] */
    (xdc_Char)0x0,  /* [2453] */
    (xdc_Char)0x49,  /* [2454] */
    (xdc_Char)0x6e,  /* [2455] */
    (xdc_Char)0x76,  /* [2456] */
    (xdc_Char)0x61,  /* [2457] */
    (xdc_Char)0x6c,  /* [2458] */
    (xdc_Char)0x69,  /* [2459] */
    (xdc_Char)0x64,  /* [2460] */
    (xdc_Char)0x20,  /* [2461] */
    (xdc_Char)0x62,  /* [2462] */
    (xdc_Char)0x6c,  /* [2463] */
    (xdc_Char)0x6f,  /* [2464] */
    (xdc_Char)0x63,  /* [2465] */
    (xdc_Char)0x6b,  /* [2466] */
    (xdc_Char)0x20,  /* [2467] */
    (xdc_Char)0x61,  /* [2468] */
    (xdc_Char)0x64,  /* [2469] */
    (xdc_Char)0x64,  /* [2470] */
    (xdc_Char)0x72,  /* [2471] */
    (xdc_Char)0x65,  /* [2472] */
    (xdc_Char)0x73,  /* [2473] */
    (xdc_Char)0x73,  /* [2474] */
    (xdc_Char)0x20,  /* [2475] */
    (xdc_Char)0x6f,  /* [2476] */
    (xdc_Char)0x6e,  /* [2477] */
    (xdc_Char)0x20,  /* [2478] */
    (xdc_Char)0x74,  /* [2479] */
    (xdc_Char)0x68,  /* [2480] */
    (xdc_Char)0x65,  /* [2481] */
    (xdc_Char)0x20,  /* [2482] */
    (xdc_Char)0x66,  /* [2483] */
    (xdc_Char)0x72,  /* [2484] */
    (xdc_Char)0x65,  /* [2485] */
    (xdc_Char)0x65,  /* [2486] */
    (xdc_Char)0x2e,  /* [2487] */
    (xdc_Char)0x20,  /* [2488] */
    (xdc_Char)0x46,  /* [2489] */
    (xdc_Char)0x61,  /* [2490] */
    (xdc_Char)0x69,  /* [2491] */
    (xdc_Char)0x6c,  /* [2492] */
    (xdc_Char)0x65,  /* [2493] */
    (xdc_Char)0x64,  /* [2494] */
    (xdc_Char)0x20,  /* [2495] */
    (xdc_Char)0x74,  /* [2496] */
    (xdc_Char)0x6f,  /* [2497] */
    (xdc_Char)0x20,  /* [2498] */
    (xdc_Char)0x66,  /* [2499] */
    (xdc_Char)0x72,  /* [2500] */
    (xdc_Char)0x65,  /* [2501] */
    (xdc_Char)0x65,  /* [2502] */
    (xdc_Char)0x20,  /* [2503] */
    (xdc_Char)0x62,  /* [2504] */
    (xdc_Char)0x6c,  /* [2505] */
    (xdc_Char)0x6f,  /* [2506] */
    (xdc_Char)0x63,  /* [2507] */
    (xdc_Char)0x6b,  /* [2508] */
    (xdc_Char)0x20,  /* [2509] */
    (xdc_Char)0x62,  /* [2510] */
    (xdc_Char)0x61,  /* [2511] */
    (xdc_Char)0x63,  /* [2512] */
    (xdc_Char)0x6b,  /* [2513] */
    (xdc_Char)0x20,  /* [2514] */
    (xdc_Char)0x74,  /* [2515] */
    (xdc_Char)0x6f,  /* [2516] */
    (xdc_Char)0x20,  /* [2517] */
    (xdc_Char)0x68,  /* [2518] */
    (xdc_Char)0x65,  /* [2519] */
    (xdc_Char)0x61,  /* [2520] */
    (xdc_Char)0x70,  /* [2521] */
    (xdc_Char)0x2e,  /* [2522] */
    (xdc_Char)0x0,  /* [2523] */
    (xdc_Char)0x41,  /* [2524] */
    (xdc_Char)0x5f,  /* [2525] */
    (xdc_Char)0x64,  /* [2526] */
    (xdc_Char)0x6f,  /* [2527] */
    (xdc_Char)0x75,  /* [2528] */
    (xdc_Char)0x62,  /* [2529] */
    (xdc_Char)0x6c,  /* [2530] */
    (xdc_Char)0x65,  /* [2531] */
    (xdc_Char)0x46,  /* [2532] */
    (xdc_Char)0x72,  /* [2533] */
    (xdc_Char)0x65,  /* [2534] */
    (xdc_Char)0x65,  /* [2535] */
    (xdc_Char)0x3a,  /* [2536] */
    (xdc_Char)0x20,  /* [2537] */
    (xdc_Char)0x48,  /* [2538] */
    (xdc_Char)0x65,  /* [2539] */
    (xdc_Char)0x61,  /* [2540] */
    (xdc_Char)0x70,  /* [2541] */
    (xdc_Char)0x20,  /* [2542] */
    (xdc_Char)0x61,  /* [2543] */
    (xdc_Char)0x6c,  /* [2544] */
    (xdc_Char)0x72,  /* [2545] */
    (xdc_Char)0x65,  /* [2546] */
    (xdc_Char)0x61,  /* [2547] */
    (xdc_Char)0x64,  /* [2548] */
    (xdc_Char)0x79,  /* [2549] */
    (xdc_Char)0x20,  /* [2550] */
    (xdc_Char)0x66,  /* [2551] */
    (xdc_Char)0x72,  /* [2552] */
    (xdc_Char)0x65,  /* [2553] */
    (xdc_Char)0x65,  /* [2554] */
    (xdc_Char)0x0,  /* [2555] */
    (xdc_Char)0x41,  /* [2556] */
    (xdc_Char)0x5f,  /* [2557] */
    (xdc_Char)0x62,  /* [2558] */
    (xdc_Char)0x75,  /* [2559] */
    (xdc_Char)0x66,  /* [2560] */
    (xdc_Char)0x4f,  /* [2561] */
    (xdc_Char)0x76,  /* [2562] */
    (xdc_Char)0x65,  /* [2563] */
    (xdc_Char)0x72,  /* [2564] */
    (xdc_Char)0x66,  /* [2565] */
    (xdc_Char)0x6c,  /* [2566] */
    (xdc_Char)0x6f,  /* [2567] */
    (xdc_Char)0x77,  /* [2568] */
    (xdc_Char)0x3a,  /* [2569] */
    (xdc_Char)0x20,  /* [2570] */
    (xdc_Char)0x42,  /* [2571] */
    (xdc_Char)0x75,  /* [2572] */
    (xdc_Char)0x66,  /* [2573] */
    (xdc_Char)0x66,  /* [2574] */
    (xdc_Char)0x65,  /* [2575] */
    (xdc_Char)0x72,  /* [2576] */
    (xdc_Char)0x20,  /* [2577] */
    (xdc_Char)0x6f,  /* [2578] */
    (xdc_Char)0x76,  /* [2579] */
    (xdc_Char)0x65,  /* [2580] */
    (xdc_Char)0x72,  /* [2581] */
    (xdc_Char)0x66,  /* [2582] */
    (xdc_Char)0x6c,  /* [2583] */
    (xdc_Char)0x6f,  /* [2584] */
    (xdc_Char)0x77,  /* [2585] */
    (xdc_Char)0x0,  /* [2586] */
    (xdc_Char)0x41,  /* [2587] */
    (xdc_Char)0x5f,  /* [2588] */
    (xdc_Char)0x6e,  /* [2589] */
    (xdc_Char)0x6f,  /* [2590] */
    (xdc_Char)0x74,  /* [2591] */
    (xdc_Char)0x45,  /* [2592] */
    (xdc_Char)0x6d,  /* [2593] */
    (xdc_Char)0x70,  /* [2594] */
    (xdc_Char)0x74,  /* [2595] */
    (xdc_Char)0x79,  /* [2596] */
    (xdc_Char)0x3a,  /* [2597] */
    (xdc_Char)0x20,  /* [2598] */
    (xdc_Char)0x48,  /* [2599] */
    (xdc_Char)0x65,  /* [2600] */
    (xdc_Char)0x61,  /* [2601] */
    (xdc_Char)0x70,  /* [2602] */
    (xdc_Char)0x20,  /* [2603] */
    (xdc_Char)0x6e,  /* [2604] */
    (xdc_Char)0x6f,  /* [2605] */
    (xdc_Char)0x74,  /* [2606] */
    (xdc_Char)0x20,  /* [2607] */
    (xdc_Char)0x65,  /* [2608] */
    (xdc_Char)0x6d,  /* [2609] */
    (xdc_Char)0x70,  /* [2610] */
    (xdc_Char)0x74,  /* [2611] */
    (xdc_Char)0x79,  /* [2612] */
    (xdc_Char)0x0,  /* [2613] */
    (xdc_Char)0x41,  /* [2614] */
    (xdc_Char)0x5f,  /* [2615] */
    (xdc_Char)0x6e,  /* [2616] */
    (xdc_Char)0x75,  /* [2617] */
    (xdc_Char)0x6c,  /* [2618] */
    (xdc_Char)0x6c,  /* [2619] */
    (xdc_Char)0x4f,  /* [2620] */
    (xdc_Char)0x62,  /* [2621] */
    (xdc_Char)0x6a,  /* [2622] */
    (xdc_Char)0x65,  /* [2623] */
    (xdc_Char)0x63,  /* [2624] */
    (xdc_Char)0x74,  /* [2625] */
    (xdc_Char)0x3a,  /* [2626] */
    (xdc_Char)0x20,  /* [2627] */
    (xdc_Char)0x48,  /* [2628] */
    (xdc_Char)0x65,  /* [2629] */
    (xdc_Char)0x61,  /* [2630] */
    (xdc_Char)0x70,  /* [2631] */
    (xdc_Char)0x54,  /* [2632] */
    (xdc_Char)0x72,  /* [2633] */
    (xdc_Char)0x61,  /* [2634] */
    (xdc_Char)0x63,  /* [2635] */
    (xdc_Char)0x6b,  /* [2636] */
    (xdc_Char)0x5f,  /* [2637] */
    (xdc_Char)0x70,  /* [2638] */
    (xdc_Char)0x72,  /* [2639] */
    (xdc_Char)0x69,  /* [2640] */
    (xdc_Char)0x6e,  /* [2641] */
    (xdc_Char)0x74,  /* [2642] */
    (xdc_Char)0x48,  /* [2643] */
    (xdc_Char)0x65,  /* [2644] */
    (xdc_Char)0x61,  /* [2645] */
    (xdc_Char)0x70,  /* [2646] */
    (xdc_Char)0x20,  /* [2647] */
    (xdc_Char)0x63,  /* [2648] */
    (xdc_Char)0x61,  /* [2649] */
    (xdc_Char)0x6c,  /* [2650] */
    (xdc_Char)0x6c,  /* [2651] */
    (xdc_Char)0x65,  /* [2652] */
    (xdc_Char)0x64,  /* [2653] */
    (xdc_Char)0x20,  /* [2654] */
    (xdc_Char)0x77,  /* [2655] */
    (xdc_Char)0x69,  /* [2656] */
    (xdc_Char)0x74,  /* [2657] */
    (xdc_Char)0x68,  /* [2658] */
    (xdc_Char)0x20,  /* [2659] */
    (xdc_Char)0x6e,  /* [2660] */
    (xdc_Char)0x75,  /* [2661] */
    (xdc_Char)0x6c,  /* [2662] */
    (xdc_Char)0x6c,  /* [2663] */
    (xdc_Char)0x20,  /* [2664] */
    (xdc_Char)0x6f,  /* [2665] */
    (xdc_Char)0x62,  /* [2666] */
    (xdc_Char)0x6a,  /* [2667] */
    (xdc_Char)0x0,  /* [2668] */
    (xdc_Char)0x61,  /* [2669] */
    (xdc_Char)0x73,  /* [2670] */
    (xdc_Char)0x73,  /* [2671] */
    (xdc_Char)0x65,  /* [2672] */
    (xdc_Char)0x72,  /* [2673] */
    (xdc_Char)0x74,  /* [2674] */
    (xdc_Char)0x69,  /* [2675] */
    (xdc_Char)0x6f,  /* [2676] */
    (xdc_Char)0x6e,  /* [2677] */
    (xdc_Char)0x20,  /* [2678] */
    (xdc_Char)0x66,  /* [2679] */
    (xdc_Char)0x61,  /* [2680] */
    (xdc_Char)0x69,  /* [2681] */
    (xdc_Char)0x6c,  /* [2682] */
    (xdc_Char)0x75,  /* [2683] */
    (xdc_Char)0x72,  /* [2684] */
    (xdc_Char)0x65,  /* [2685] */
    (xdc_Char)0x25,  /* [2686] */
    (xdc_Char)0x73,  /* [2687] */
    (xdc_Char)0x25,  /* [2688] */
    (xdc_Char)0x73,  /* [2689] */
    (xdc_Char)0x0,  /* [2690] */
    (xdc_Char)0x25,  /* [2691] */
    (xdc_Char)0x24,  /* [2692] */
    (xdc_Char)0x53,  /* [2693] */
    (xdc_Char)0x0,  /* [2694] */
    (xdc_Char)0x6f,  /* [2695] */
    (xdc_Char)0x75,  /* [2696] */
    (xdc_Char)0x74,  /* [2697] */
    (xdc_Char)0x20,  /* [2698] */
    (xdc_Char)0x6f,  /* [2699] */
    (xdc_Char)0x66,  /* [2700] */
    (xdc_Char)0x20,  /* [2701] */
    (xdc_Char)0x6d,  /* [2702] */
    (xdc_Char)0x65,  /* [2703] */
    (xdc_Char)0x6d,  /* [2704] */
    (xdc_Char)0x6f,  /* [2705] */
    (xdc_Char)0x72,  /* [2706] */
    (xdc_Char)0x79,  /* [2707] */
    (xdc_Char)0x3a,  /* [2708] */
    (xdc_Char)0x20,  /* [2709] */
    (xdc_Char)0x68,  /* [2710] */
    (xdc_Char)0x65,  /* [2711] */
    (xdc_Char)0x61,  /* [2712] */
    (xdc_Char)0x70,  /* [2713] */
    (xdc_Char)0x3d,  /* [2714] */
    (xdc_Char)0x30,  /* [2715] */
    (xdc_Char)0x78,  /* [2716] */
    (xdc_Char)0x25,  /* [2717] */
    (xdc_Char)0x78,  /* [2718] */
    (xdc_Char)0x2c,  /* [2719] */
    (xdc_Char)0x20,  /* [2720] */
    (xdc_Char)0x73,  /* [2721] */
    (xdc_Char)0x69,  /* [2722] */
    (xdc_Char)0x7a,  /* [2723] */
    (xdc_Char)0x65,  /* [2724] */
    (xdc_Char)0x3d,  /* [2725] */
    (xdc_Char)0x25,  /* [2726] */
    (xdc_Char)0x75,  /* [2727] */
    (xdc_Char)0x0,  /* [2728] */
    (xdc_Char)0x25,  /* [2729] */
    (xdc_Char)0x73,  /* [2730] */
    (xdc_Char)0x20,  /* [2731] */
    (xdc_Char)0x30,  /* [2732] */
    (xdc_Char)0x78,  /* [2733] */
    (xdc_Char)0x25,  /* [2734] */
    (xdc_Char)0x78,  /* [2735] */
    (xdc_Char)0x0,  /* [2736] */
    (xdc_Char)0x45,  /* [2737] */
    (xdc_Char)0x5f,  /* [2738] */
    (xdc_Char)0x62,  /* [2739] */
    (xdc_Char)0x61,  /* [2740] */
    (xdc_Char)0x64,  /* [2741] */
    (xdc_Char)0x4c,  /* [2742] */
    (xdc_Char)0x65,  /* [2743] */
    (xdc_Char)0x76,  /* [2744] */
    (xdc_Char)0x65,  /* [2745] */
    (xdc_Char)0x6c,  /* [2746] */
    (xdc_Char)0x3a,  /* [2747] */
    (xdc_Char)0x20,  /* [2748] */
    (xdc_Char)0x42,  /* [2749] */
    (xdc_Char)0x61,  /* [2750] */
    (xdc_Char)0x64,  /* [2751] */
    (xdc_Char)0x20,  /* [2752] */
    (xdc_Char)0x66,  /* [2753] */
    (xdc_Char)0x69,  /* [2754] */
    (xdc_Char)0x6c,  /* [2755] */
    (xdc_Char)0x74,  /* [2756] */
    (xdc_Char)0x65,  /* [2757] */
    (xdc_Char)0x72,  /* [2758] */
    (xdc_Char)0x20,  /* [2759] */
    (xdc_Char)0x6c,  /* [2760] */
    (xdc_Char)0x65,  /* [2761] */
    (xdc_Char)0x76,  /* [2762] */
    (xdc_Char)0x65,  /* [2763] */
    (xdc_Char)0x6c,  /* [2764] */
    (xdc_Char)0x20,  /* [2765] */
    (xdc_Char)0x76,  /* [2766] */
    (xdc_Char)0x61,  /* [2767] */
    (xdc_Char)0x6c,  /* [2768] */
    (xdc_Char)0x75,  /* [2769] */
    (xdc_Char)0x65,  /* [2770] */
    (xdc_Char)0x3a,  /* [2771] */
    (xdc_Char)0x20,  /* [2772] */
    (xdc_Char)0x25,  /* [2773] */
    (xdc_Char)0x64,  /* [2774] */
    (xdc_Char)0x0,  /* [2775] */
    (xdc_Char)0x66,  /* [2776] */
    (xdc_Char)0x72,  /* [2777] */
    (xdc_Char)0x65,  /* [2778] */
    (xdc_Char)0x65,  /* [2779] */
    (xdc_Char)0x28,  /* [2780] */
    (xdc_Char)0x29,  /* [2781] */
    (xdc_Char)0x20,  /* [2782] */
    (xdc_Char)0x69,  /* [2783] */
    (xdc_Char)0x6e,  /* [2784] */
    (xdc_Char)0x76,  /* [2785] */
    (xdc_Char)0x61,  /* [2786] */
    (xdc_Char)0x6c,  /* [2787] */
    (xdc_Char)0x69,  /* [2788] */
    (xdc_Char)0x64,  /* [2789] */
    (xdc_Char)0x20,  /* [2790] */
    (xdc_Char)0x69,  /* [2791] */
    (xdc_Char)0x6e,  /* [2792] */
    (xdc_Char)0x20,  /* [2793] */
    (xdc_Char)0x67,  /* [2794] */
    (xdc_Char)0x72,  /* [2795] */
    (xdc_Char)0x6f,  /* [2796] */
    (xdc_Char)0x77,  /* [2797] */
    (xdc_Char)0x74,  /* [2798] */
    (xdc_Char)0x68,  /* [2799] */
    (xdc_Char)0x2d,  /* [2800] */
    (xdc_Char)0x6f,  /* [2801] */
    (xdc_Char)0x6e,  /* [2802] */
    (xdc_Char)0x6c,  /* [2803] */
    (xdc_Char)0x79,  /* [2804] */
    (xdc_Char)0x20,  /* [2805] */
    (xdc_Char)0x48,  /* [2806] */
    (xdc_Char)0x65,  /* [2807] */
    (xdc_Char)0x61,  /* [2808] */
    (xdc_Char)0x70,  /* [2809] */
    (xdc_Char)0x4d,  /* [2810] */
    (xdc_Char)0x69,  /* [2811] */
    (xdc_Char)0x6e,  /* [2812] */
    (xdc_Char)0x0,  /* [2813] */
    (xdc_Char)0x54,  /* [2814] */
    (xdc_Char)0x68,  /* [2815] */
    (xdc_Char)0x65,  /* [2816] */
    (xdc_Char)0x20,  /* [2817] */
    (xdc_Char)0x52,  /* [2818] */
    (xdc_Char)0x54,  /* [2819] */
    (xdc_Char)0x53,  /* [2820] */
    (xdc_Char)0x20,  /* [2821] */
    (xdc_Char)0x68,  /* [2822] */
    (xdc_Char)0x65,  /* [2823] */
    (xdc_Char)0x61,  /* [2824] */
    (xdc_Char)0x70,  /* [2825] */
    (xdc_Char)0x20,  /* [2826] */
    (xdc_Char)0x69,  /* [2827] */
    (xdc_Char)0x73,  /* [2828] */
    (xdc_Char)0x20,  /* [2829] */
    (xdc_Char)0x75,  /* [2830] */
    (xdc_Char)0x73,  /* [2831] */
    (xdc_Char)0x65,  /* [2832] */
    (xdc_Char)0x64,  /* [2833] */
    (xdc_Char)0x20,  /* [2834] */
    (xdc_Char)0x75,  /* [2835] */
    (xdc_Char)0x70,  /* [2836] */
    (xdc_Char)0x2e,  /* [2837] */
    (xdc_Char)0x20,  /* [2838] */
    (xdc_Char)0x45,  /* [2839] */
    (xdc_Char)0x78,  /* [2840] */
    (xdc_Char)0x61,  /* [2841] */
    (xdc_Char)0x6d,  /* [2842] */
    (xdc_Char)0x69,  /* [2843] */
    (xdc_Char)0x6e,  /* [2844] */
    (xdc_Char)0x65,  /* [2845] */
    (xdc_Char)0x20,  /* [2846] */
    (xdc_Char)0x50,  /* [2847] */
    (xdc_Char)0x72,  /* [2848] */
    (xdc_Char)0x6f,  /* [2849] */
    (xdc_Char)0x67,  /* [2850] */
    (xdc_Char)0x72,  /* [2851] */
    (xdc_Char)0x61,  /* [2852] */
    (xdc_Char)0x6d,  /* [2853] */
    (xdc_Char)0x2e,  /* [2854] */
    (xdc_Char)0x68,  /* [2855] */
    (xdc_Char)0x65,  /* [2856] */
    (xdc_Char)0x61,  /* [2857] */
    (xdc_Char)0x70,  /* [2858] */
    (xdc_Char)0x2e,  /* [2859] */
    (xdc_Char)0x0,  /* [2860] */
    (xdc_Char)0x45,  /* [2861] */
    (xdc_Char)0x5f,  /* [2862] */
    (xdc_Char)0x62,  /* [2863] */
    (xdc_Char)0x61,  /* [2864] */
    (xdc_Char)0x64,  /* [2865] */
    (xdc_Char)0x43,  /* [2866] */
    (xdc_Char)0x6f,  /* [2867] */
    (xdc_Char)0x6d,  /* [2868] */
    (xdc_Char)0x6d,  /* [2869] */
    (xdc_Char)0x61,  /* [2870] */
    (xdc_Char)0x6e,  /* [2871] */
    (xdc_Char)0x64,  /* [2872] */
    (xdc_Char)0x3a,  /* [2873] */
    (xdc_Char)0x20,  /* [2874] */
    (xdc_Char)0x52,  /* [2875] */
    (xdc_Char)0x65,  /* [2876] */
    (xdc_Char)0x63,  /* [2877] */
    (xdc_Char)0x65,  /* [2878] */
    (xdc_Char)0x69,  /* [2879] */
    (xdc_Char)0x76,  /* [2880] */
    (xdc_Char)0x65,  /* [2881] */
    (xdc_Char)0x64,  /* [2882] */
    (xdc_Char)0x20,  /* [2883] */
    (xdc_Char)0x69,  /* [2884] */
    (xdc_Char)0x6e,  /* [2885] */
    (xdc_Char)0x76,  /* [2886] */
    (xdc_Char)0x61,  /* [2887] */
    (xdc_Char)0x6c,  /* [2888] */
    (xdc_Char)0x69,  /* [2889] */
    (xdc_Char)0x64,  /* [2890] */
    (xdc_Char)0x20,  /* [2891] */
    (xdc_Char)0x63,  /* [2892] */
    (xdc_Char)0x6f,  /* [2893] */
    (xdc_Char)0x6d,  /* [2894] */
    (xdc_Char)0x6d,  /* [2895] */
    (xdc_Char)0x61,  /* [2896] */
    (xdc_Char)0x6e,  /* [2897] */
    (xdc_Char)0x64,  /* [2898] */
    (xdc_Char)0x2c,  /* [2899] */
    (xdc_Char)0x20,  /* [2900] */
    (xdc_Char)0x69,  /* [2901] */
    (xdc_Char)0x64,  /* [2902] */
    (xdc_Char)0x3a,  /* [2903] */
    (xdc_Char)0x20,  /* [2904] */
    (xdc_Char)0x25,  /* [2905] */
    (xdc_Char)0x64,  /* [2906] */
    (xdc_Char)0x2e,  /* [2907] */
    (xdc_Char)0x0,  /* [2908] */
    (xdc_Char)0x45,  /* [2909] */
    (xdc_Char)0x5f,  /* [2910] */
    (xdc_Char)0x75,  /* [2911] */
    (xdc_Char)0x6e,  /* [2912] */
    (xdc_Char)0x70,  /* [2913] */
    (xdc_Char)0x6c,  /* [2914] */
    (xdc_Char)0x75,  /* [2915] */
    (xdc_Char)0x67,  /* [2916] */
    (xdc_Char)0x67,  /* [2917] */
    (xdc_Char)0x65,  /* [2918] */
    (xdc_Char)0x64,  /* [2919] */
    (xdc_Char)0x45,  /* [2920] */
    (xdc_Char)0x76,  /* [2921] */
    (xdc_Char)0x65,  /* [2922] */
    (xdc_Char)0x6e,  /* [2923] */
    (xdc_Char)0x74,  /* [2924] */
    (xdc_Char)0x3a,  /* [2925] */
    (xdc_Char)0x20,  /* [2926] */
    (xdc_Char)0x45,  /* [2927] */
    (xdc_Char)0x76,  /* [2928] */
    (xdc_Char)0x65,  /* [2929] */
    (xdc_Char)0x6e,  /* [2930] */
    (xdc_Char)0x74,  /* [2931] */
    (xdc_Char)0x23,  /* [2932] */
    (xdc_Char)0x20,  /* [2933] */
    (xdc_Char)0x25,  /* [2934] */
    (xdc_Char)0x64,  /* [2935] */
    (xdc_Char)0x20,  /* [2936] */
    (xdc_Char)0x69,  /* [2937] */
    (xdc_Char)0x73,  /* [2938] */
    (xdc_Char)0x20,  /* [2939] */
    (xdc_Char)0x75,  /* [2940] */
    (xdc_Char)0x6e,  /* [2941] */
    (xdc_Char)0x70,  /* [2942] */
    (xdc_Char)0x6c,  /* [2943] */
    (xdc_Char)0x75,  /* [2944] */
    (xdc_Char)0x67,  /* [2945] */
    (xdc_Char)0x67,  /* [2946] */
    (xdc_Char)0x65,  /* [2947] */
    (xdc_Char)0x64,  /* [2948] */
    (xdc_Char)0x0,  /* [2949] */
    (xdc_Char)0x45,  /* [2950] */
    (xdc_Char)0x5f,  /* [2951] */
    (xdc_Char)0x65,  /* [2952] */
    (xdc_Char)0x78,  /* [2953] */
    (xdc_Char)0x63,  /* [2954] */
    (xdc_Char)0x65,  /* [2955] */
    (xdc_Char)0x70,  /* [2956] */
    (xdc_Char)0x74,  /* [2957] */
    (xdc_Char)0x69,  /* [2958] */
    (xdc_Char)0x6f,  /* [2959] */
    (xdc_Char)0x6e,  /* [2960] */
    (xdc_Char)0x4d,  /* [2961] */
    (xdc_Char)0x69,  /* [2962] */
    (xdc_Char)0x6e,  /* [2963] */
    (xdc_Char)0x3a,  /* [2964] */
    (xdc_Char)0x20,  /* [2965] */
    (xdc_Char)0x70,  /* [2966] */
    (xdc_Char)0x63,  /* [2967] */
    (xdc_Char)0x20,  /* [2968] */
    (xdc_Char)0x3d,  /* [2969] */
    (xdc_Char)0x20,  /* [2970] */
    (xdc_Char)0x30,  /* [2971] */
    (xdc_Char)0x78,  /* [2972] */
    (xdc_Char)0x25,  /* [2973] */
    (xdc_Char)0x30,  /* [2974] */
    (xdc_Char)0x38,  /* [2975] */
    (xdc_Char)0x78,  /* [2976] */
    (xdc_Char)0x2c,  /* [2977] */
    (xdc_Char)0x20,  /* [2978] */
    (xdc_Char)0x73,  /* [2979] */
    (xdc_Char)0x70,  /* [2980] */
    (xdc_Char)0x20,  /* [2981] */
    (xdc_Char)0x3d,  /* [2982] */
    (xdc_Char)0x20,  /* [2983] */
    (xdc_Char)0x30,  /* [2984] */
    (xdc_Char)0x78,  /* [2985] */
    (xdc_Char)0x25,  /* [2986] */
    (xdc_Char)0x30,  /* [2987] */
    (xdc_Char)0x38,  /* [2988] */
    (xdc_Char)0x78,  /* [2989] */
    (xdc_Char)0x2e,  /* [2990] */
    (xdc_Char)0xa,  /* [2991] */
    (xdc_Char)0x54,  /* [2992] */
    (xdc_Char)0x6f,  /* [2993] */
    (xdc_Char)0x20,  /* [2994] */
    (xdc_Char)0x73,  /* [2995] */
    (xdc_Char)0x65,  /* [2996] */
    (xdc_Char)0x65,  /* [2997] */
    (xdc_Char)0x20,  /* [2998] */
    (xdc_Char)0x6d,  /* [2999] */
    (xdc_Char)0x6f,  /* [3000] */
    (xdc_Char)0x72,  /* [3001] */
    (xdc_Char)0x65,  /* [3002] */
    (xdc_Char)0x20,  /* [3003] */
    (xdc_Char)0x65,  /* [3004] */
    (xdc_Char)0x78,  /* [3005] */
    (xdc_Char)0x63,  /* [3006] */
    (xdc_Char)0x65,  /* [3007] */
    (xdc_Char)0x70,  /* [3008] */
    (xdc_Char)0x74,  /* [3009] */
    (xdc_Char)0x69,  /* [3010] */
    (xdc_Char)0x6f,  /* [3011] */
    (xdc_Char)0x6e,  /* [3012] */
    (xdc_Char)0x20,  /* [3013] */
    (xdc_Char)0x64,  /* [3014] */
    (xdc_Char)0x65,  /* [3015] */
    (xdc_Char)0x74,  /* [3016] */
    (xdc_Char)0x61,  /* [3017] */
    (xdc_Char)0x69,  /* [3018] */
    (xdc_Char)0x6c,  /* [3019] */
    (xdc_Char)0x2c,  /* [3020] */
    (xdc_Char)0x20,  /* [3021] */
    (xdc_Char)0x75,  /* [3022] */
    (xdc_Char)0x73,  /* [3023] */
    (xdc_Char)0x65,  /* [3024] */
    (xdc_Char)0x20,  /* [3025] */
    (xdc_Char)0x52,  /* [3026] */
    (xdc_Char)0x4f,  /* [3027] */
    (xdc_Char)0x56,  /* [3028] */
    (xdc_Char)0x20,  /* [3029] */
    (xdc_Char)0x6f,  /* [3030] */
    (xdc_Char)0x72,  /* [3031] */
    (xdc_Char)0x20,  /* [3032] */
    (xdc_Char)0x73,  /* [3033] */
    (xdc_Char)0x65,  /* [3034] */
    (xdc_Char)0x74,  /* [3035] */
    (xdc_Char)0x20,  /* [3036] */
    (xdc_Char)0x27,  /* [3037] */
    (xdc_Char)0x74,  /* [3038] */
    (xdc_Char)0x69,  /* [3039] */
    (xdc_Char)0x2e,  /* [3040] */
    (xdc_Char)0x73,  /* [3041] */
    (xdc_Char)0x79,  /* [3042] */
    (xdc_Char)0x73,  /* [3043] */
    (xdc_Char)0x62,  /* [3044] */
    (xdc_Char)0x69,  /* [3045] */
    (xdc_Char)0x6f,  /* [3046] */
    (xdc_Char)0x73,  /* [3047] */
    (xdc_Char)0x2e,  /* [3048] */
    (xdc_Char)0x66,  /* [3049] */
    (xdc_Char)0x61,  /* [3050] */
    (xdc_Char)0x6d,  /* [3051] */
    (xdc_Char)0x69,  /* [3052] */
    (xdc_Char)0x6c,  /* [3053] */
    (xdc_Char)0x79,  /* [3054] */
    (xdc_Char)0x2e,  /* [3055] */
    (xdc_Char)0x63,  /* [3056] */
    (xdc_Char)0x36,  /* [3057] */
    (xdc_Char)0x34,  /* [3058] */
    (xdc_Char)0x70,  /* [3059] */
    (xdc_Char)0x2e,  /* [3060] */
    (xdc_Char)0x45,  /* [3061] */
    (xdc_Char)0x78,  /* [3062] */
    (xdc_Char)0x63,  /* [3063] */
    (xdc_Char)0x65,  /* [3064] */
    (xdc_Char)0x70,  /* [3065] */
    (xdc_Char)0x74,  /* [3066] */
    (xdc_Char)0x69,  /* [3067] */
    (xdc_Char)0x6f,  /* [3068] */
    (xdc_Char)0x6e,  /* [3069] */
    (xdc_Char)0x2e,  /* [3070] */
    (xdc_Char)0x65,  /* [3071] */
    (xdc_Char)0x6e,  /* [3072] */
    (xdc_Char)0x61,  /* [3073] */
    (xdc_Char)0x62,  /* [3074] */
    (xdc_Char)0x6c,  /* [3075] */
    (xdc_Char)0x65,  /* [3076] */
    (xdc_Char)0x50,  /* [3077] */
    (xdc_Char)0x72,  /* [3078] */
    (xdc_Char)0x69,  /* [3079] */
    (xdc_Char)0x6e,  /* [3080] */
    (xdc_Char)0x74,  /* [3081] */
    (xdc_Char)0x20,  /* [3082] */
    (xdc_Char)0x3d,  /* [3083] */
    (xdc_Char)0x20,  /* [3084] */
    (xdc_Char)0x74,  /* [3085] */
    (xdc_Char)0x72,  /* [3086] */
    (xdc_Char)0x75,  /* [3087] */
    (xdc_Char)0x65,  /* [3088] */
    (xdc_Char)0x3b,  /* [3089] */
    (xdc_Char)0x27,  /* [3090] */
    (xdc_Char)0x0,  /* [3091] */
    (xdc_Char)0x45,  /* [3092] */
    (xdc_Char)0x5f,  /* [3093] */
    (xdc_Char)0x65,  /* [3094] */
    (xdc_Char)0x78,  /* [3095] */
    (xdc_Char)0x63,  /* [3096] */
    (xdc_Char)0x65,  /* [3097] */
    (xdc_Char)0x70,  /* [3098] */
    (xdc_Char)0x74,  /* [3099] */
    (xdc_Char)0x69,  /* [3100] */
    (xdc_Char)0x6f,  /* [3101] */
    (xdc_Char)0x6e,  /* [3102] */
    (xdc_Char)0x4d,  /* [3103] */
    (xdc_Char)0x61,  /* [3104] */
    (xdc_Char)0x78,  /* [3105] */
    (xdc_Char)0x3a,  /* [3106] */
    (xdc_Char)0x20,  /* [3107] */
    (xdc_Char)0x70,  /* [3108] */
    (xdc_Char)0x63,  /* [3109] */
    (xdc_Char)0x20,  /* [3110] */
    (xdc_Char)0x3d,  /* [3111] */
    (xdc_Char)0x20,  /* [3112] */
    (xdc_Char)0x30,  /* [3113] */
    (xdc_Char)0x78,  /* [3114] */
    (xdc_Char)0x25,  /* [3115] */
    (xdc_Char)0x30,  /* [3116] */
    (xdc_Char)0x38,  /* [3117] */
    (xdc_Char)0x78,  /* [3118] */
    (xdc_Char)0x2c,  /* [3119] */
    (xdc_Char)0x20,  /* [3120] */
    (xdc_Char)0x73,  /* [3121] */
    (xdc_Char)0x70,  /* [3122] */
    (xdc_Char)0x20,  /* [3123] */
    (xdc_Char)0x3d,  /* [3124] */
    (xdc_Char)0x20,  /* [3125] */
    (xdc_Char)0x30,  /* [3126] */
    (xdc_Char)0x78,  /* [3127] */
    (xdc_Char)0x25,  /* [3128] */
    (xdc_Char)0x30,  /* [3129] */
    (xdc_Char)0x38,  /* [3130] */
    (xdc_Char)0x78,  /* [3131] */
    (xdc_Char)0x2e,  /* [3132] */
    (xdc_Char)0x0,  /* [3133] */
    (xdc_Char)0x45,  /* [3134] */
    (xdc_Char)0x5f,  /* [3135] */
    (xdc_Char)0x61,  /* [3136] */
    (xdc_Char)0x6c,  /* [3137] */
    (xdc_Char)0x72,  /* [3138] */
    (xdc_Char)0x65,  /* [3139] */
    (xdc_Char)0x61,  /* [3140] */
    (xdc_Char)0x64,  /* [3141] */
    (xdc_Char)0x79,  /* [3142] */
    (xdc_Char)0x44,  /* [3143] */
    (xdc_Char)0x65,  /* [3144] */
    (xdc_Char)0x66,  /* [3145] */
    (xdc_Char)0x69,  /* [3146] */
    (xdc_Char)0x6e,  /* [3147] */
    (xdc_Char)0x65,  /* [3148] */
    (xdc_Char)0x64,  /* [3149] */
    (xdc_Char)0x3a,  /* [3150] */
    (xdc_Char)0x20,  /* [3151] */
    (xdc_Char)0x48,  /* [3152] */
    (xdc_Char)0x77,  /* [3153] */
    (xdc_Char)0x69,  /* [3154] */
    (xdc_Char)0x20,  /* [3155] */
    (xdc_Char)0x61,  /* [3156] */
    (xdc_Char)0x6c,  /* [3157] */
    (xdc_Char)0x72,  /* [3158] */
    (xdc_Char)0x65,  /* [3159] */
    (xdc_Char)0x61,  /* [3160] */
    (xdc_Char)0x64,  /* [3161] */
    (xdc_Char)0x79,  /* [3162] */
    (xdc_Char)0x20,  /* [3163] */
    (xdc_Char)0x64,  /* [3164] */
    (xdc_Char)0x65,  /* [3165] */
    (xdc_Char)0x66,  /* [3166] */
    (xdc_Char)0x69,  /* [3167] */
    (xdc_Char)0x6e,  /* [3168] */
    (xdc_Char)0x65,  /* [3169] */
    (xdc_Char)0x64,  /* [3170] */
    (xdc_Char)0x3a,  /* [3171] */
    (xdc_Char)0x20,  /* [3172] */
    (xdc_Char)0x69,  /* [3173] */
    (xdc_Char)0x6e,  /* [3174] */
    (xdc_Char)0x74,  /* [3175] */
    (xdc_Char)0x72,  /* [3176] */
    (xdc_Char)0x23,  /* [3177] */
    (xdc_Char)0x20,  /* [3178] */
    (xdc_Char)0x25,  /* [3179] */
    (xdc_Char)0x64,  /* [3180] */
    (xdc_Char)0x0,  /* [3181] */
    (xdc_Char)0x45,  /* [3182] */
    (xdc_Char)0x5f,  /* [3183] */
    (xdc_Char)0x68,  /* [3184] */
    (xdc_Char)0x61,  /* [3185] */
    (xdc_Char)0x6e,  /* [3186] */
    (xdc_Char)0x64,  /* [3187] */
    (xdc_Char)0x6c,  /* [3188] */
    (xdc_Char)0x65,  /* [3189] */
    (xdc_Char)0x4e,  /* [3190] */
    (xdc_Char)0x6f,  /* [3191] */
    (xdc_Char)0x74,  /* [3192] */
    (xdc_Char)0x46,  /* [3193] */
    (xdc_Char)0x6f,  /* [3194] */
    (xdc_Char)0x75,  /* [3195] */
    (xdc_Char)0x6e,  /* [3196] */
    (xdc_Char)0x64,  /* [3197] */
    (xdc_Char)0x3a,  /* [3198] */
    (xdc_Char)0x20,  /* [3199] */
    (xdc_Char)0x48,  /* [3200] */
    (xdc_Char)0x77,  /* [3201] */
    (xdc_Char)0x69,  /* [3202] */
    (xdc_Char)0x20,  /* [3203] */
    (xdc_Char)0x68,  /* [3204] */
    (xdc_Char)0x61,  /* [3205] */
    (xdc_Char)0x6e,  /* [3206] */
    (xdc_Char)0x64,  /* [3207] */
    (xdc_Char)0x6c,  /* [3208] */
    (xdc_Char)0x65,  /* [3209] */
    (xdc_Char)0x20,  /* [3210] */
    (xdc_Char)0x6e,  /* [3211] */
    (xdc_Char)0x6f,  /* [3212] */
    (xdc_Char)0x74,  /* [3213] */
    (xdc_Char)0x20,  /* [3214] */
    (xdc_Char)0x66,  /* [3215] */
    (xdc_Char)0x6f,  /* [3216] */
    (xdc_Char)0x75,  /* [3217] */
    (xdc_Char)0x6e,  /* [3218] */
    (xdc_Char)0x64,  /* [3219] */
    (xdc_Char)0x3a,  /* [3220] */
    (xdc_Char)0x20,  /* [3221] */
    (xdc_Char)0x30,  /* [3222] */
    (xdc_Char)0x78,  /* [3223] */
    (xdc_Char)0x25,  /* [3224] */
    (xdc_Char)0x78,  /* [3225] */
    (xdc_Char)0x0,  /* [3226] */
    (xdc_Char)0x45,  /* [3227] */
    (xdc_Char)0x5f,  /* [3228] */
    (xdc_Char)0x73,  /* [3229] */
    (xdc_Char)0x74,  /* [3230] */
    (xdc_Char)0x61,  /* [3231] */
    (xdc_Char)0x63,  /* [3232] */
    (xdc_Char)0x6b,  /* [3233] */
    (xdc_Char)0x4f,  /* [3234] */
    (xdc_Char)0x76,  /* [3235] */
    (xdc_Char)0x65,  /* [3236] */
    (xdc_Char)0x72,  /* [3237] */
    (xdc_Char)0x66,  /* [3238] */
    (xdc_Char)0x6c,  /* [3239] */
    (xdc_Char)0x6f,  /* [3240] */
    (xdc_Char)0x77,  /* [3241] */
    (xdc_Char)0x3a,  /* [3242] */
    (xdc_Char)0x20,  /* [3243] */
    (xdc_Char)0x49,  /* [3244] */
    (xdc_Char)0x53,  /* [3245] */
    (xdc_Char)0x52,  /* [3246] */
    (xdc_Char)0x20,  /* [3247] */
    (xdc_Char)0x73,  /* [3248] */
    (xdc_Char)0x74,  /* [3249] */
    (xdc_Char)0x61,  /* [3250] */
    (xdc_Char)0x63,  /* [3251] */
    (xdc_Char)0x6b,  /* [3252] */
    (xdc_Char)0x20,  /* [3253] */
    (xdc_Char)0x6f,  /* [3254] */
    (xdc_Char)0x76,  /* [3255] */
    (xdc_Char)0x65,  /* [3256] */
    (xdc_Char)0x72,  /* [3257] */
    (xdc_Char)0x66,  /* [3258] */
    (xdc_Char)0x6c,  /* [3259] */
    (xdc_Char)0x6f,  /* [3260] */
    (xdc_Char)0x77,  /* [3261] */
    (xdc_Char)0x2e,  /* [3262] */
    (xdc_Char)0x0,  /* [3263] */
    (xdc_Char)0x45,  /* [3264] */
    (xdc_Char)0x5f,  /* [3265] */
    (xdc_Char)0x73,  /* [3266] */
    (xdc_Char)0x74,  /* [3267] */
    (xdc_Char)0x61,  /* [3268] */
    (xdc_Char)0x63,  /* [3269] */
    (xdc_Char)0x6b,  /* [3270] */
    (xdc_Char)0x4f,  /* [3271] */
    (xdc_Char)0x76,  /* [3272] */
    (xdc_Char)0x65,  /* [3273] */
    (xdc_Char)0x72,  /* [3274] */
    (xdc_Char)0x66,  /* [3275] */
    (xdc_Char)0x6c,  /* [3276] */
    (xdc_Char)0x6f,  /* [3277] */
    (xdc_Char)0x77,  /* [3278] */
    (xdc_Char)0x3a,  /* [3279] */
    (xdc_Char)0x20,  /* [3280] */
    (xdc_Char)0x54,  /* [3281] */
    (xdc_Char)0x61,  /* [3282] */
    (xdc_Char)0x73,  /* [3283] */
    (xdc_Char)0x6b,  /* [3284] */
    (xdc_Char)0x20,  /* [3285] */
    (xdc_Char)0x30,  /* [3286] */
    (xdc_Char)0x78,  /* [3287] */
    (xdc_Char)0x25,  /* [3288] */
    (xdc_Char)0x78,  /* [3289] */
    (xdc_Char)0x20,  /* [3290] */
    (xdc_Char)0x73,  /* [3291] */
    (xdc_Char)0x74,  /* [3292] */
    (xdc_Char)0x61,  /* [3293] */
    (xdc_Char)0x63,  /* [3294] */
    (xdc_Char)0x6b,  /* [3295] */
    (xdc_Char)0x20,  /* [3296] */
    (xdc_Char)0x6f,  /* [3297] */
    (xdc_Char)0x76,  /* [3298] */
    (xdc_Char)0x65,  /* [3299] */
    (xdc_Char)0x72,  /* [3300] */
    (xdc_Char)0x66,  /* [3301] */
    (xdc_Char)0x6c,  /* [3302] */
    (xdc_Char)0x6f,  /* [3303] */
    (xdc_Char)0x77,  /* [3304] */
    (xdc_Char)0x2e,  /* [3305] */
    (xdc_Char)0x0,  /* [3306] */
    (xdc_Char)0x45,  /* [3307] */
    (xdc_Char)0x5f,  /* [3308] */
    (xdc_Char)0x73,  /* [3309] */
    (xdc_Char)0x70,  /* [3310] */
    (xdc_Char)0x4f,  /* [3311] */
    (xdc_Char)0x75,  /* [3312] */
    (xdc_Char)0x74,  /* [3313] */
    (xdc_Char)0x4f,  /* [3314] */
    (xdc_Char)0x66,  /* [3315] */
    (xdc_Char)0x42,  /* [3316] */
    (xdc_Char)0x6f,  /* [3317] */
    (xdc_Char)0x75,  /* [3318] */
    (xdc_Char)0x6e,  /* [3319] */
    (xdc_Char)0x64,  /* [3320] */
    (xdc_Char)0x73,  /* [3321] */
    (xdc_Char)0x3a,  /* [3322] */
    (xdc_Char)0x20,  /* [3323] */
    (xdc_Char)0x54,  /* [3324] */
    (xdc_Char)0x61,  /* [3325] */
    (xdc_Char)0x73,  /* [3326] */
    (xdc_Char)0x6b,  /* [3327] */
    (xdc_Char)0x20,  /* [3328] */
    (xdc_Char)0x30,  /* [3329] */
    (xdc_Char)0x78,  /* [3330] */
    (xdc_Char)0x25,  /* [3331] */
    (xdc_Char)0x78,  /* [3332] */
    (xdc_Char)0x20,  /* [3333] */
    (xdc_Char)0x73,  /* [3334] */
    (xdc_Char)0x74,  /* [3335] */
    (xdc_Char)0x61,  /* [3336] */
    (xdc_Char)0x63,  /* [3337] */
    (xdc_Char)0x6b,  /* [3338] */
    (xdc_Char)0x20,  /* [3339] */
    (xdc_Char)0x65,  /* [3340] */
    (xdc_Char)0x72,  /* [3341] */
    (xdc_Char)0x72,  /* [3342] */
    (xdc_Char)0x6f,  /* [3343] */
    (xdc_Char)0x72,  /* [3344] */
    (xdc_Char)0x2c,  /* [3345] */
    (xdc_Char)0x20,  /* [3346] */
    (xdc_Char)0x53,  /* [3347] */
    (xdc_Char)0x50,  /* [3348] */
    (xdc_Char)0x20,  /* [3349] */
    (xdc_Char)0x3d,  /* [3350] */
    (xdc_Char)0x20,  /* [3351] */
    (xdc_Char)0x30,  /* [3352] */
    (xdc_Char)0x78,  /* [3353] */
    (xdc_Char)0x25,  /* [3354] */
    (xdc_Char)0x78,  /* [3355] */
    (xdc_Char)0x2e,  /* [3356] */
    (xdc_Char)0x0,  /* [3357] */
    (xdc_Char)0x45,  /* [3358] */
    (xdc_Char)0x5f,  /* [3359] */
    (xdc_Char)0x64,  /* [3360] */
    (xdc_Char)0x65,  /* [3361] */
    (xdc_Char)0x6c,  /* [3362] */
    (xdc_Char)0x65,  /* [3363] */
    (xdc_Char)0x74,  /* [3364] */
    (xdc_Char)0x65,  /* [3365] */
    (xdc_Char)0x4e,  /* [3366] */
    (xdc_Char)0x6f,  /* [3367] */
    (xdc_Char)0x74,  /* [3368] */
    (xdc_Char)0x41,  /* [3369] */
    (xdc_Char)0x6c,  /* [3370] */
    (xdc_Char)0x6c,  /* [3371] */
    (xdc_Char)0x6f,  /* [3372] */
    (xdc_Char)0x77,  /* [3373] */
    (xdc_Char)0x65,  /* [3374] */
    (xdc_Char)0x64,  /* [3375] */
    (xdc_Char)0x3a,  /* [3376] */
    (xdc_Char)0x20,  /* [3377] */
    (xdc_Char)0x54,  /* [3378] */
    (xdc_Char)0x61,  /* [3379] */
    (xdc_Char)0x73,  /* [3380] */
    (xdc_Char)0x6b,  /* [3381] */
    (xdc_Char)0x20,  /* [3382] */
    (xdc_Char)0x30,  /* [3383] */
    (xdc_Char)0x78,  /* [3384] */
    (xdc_Char)0x25,  /* [3385] */
    (xdc_Char)0x78,  /* [3386] */
    (xdc_Char)0x2e,  /* [3387] */
    (xdc_Char)0x0,  /* [3388] */
    (xdc_Char)0x45,  /* [3389] */
    (xdc_Char)0x5f,  /* [3390] */
    (xdc_Char)0x70,  /* [3391] */
    (xdc_Char)0x72,  /* [3392] */
    (xdc_Char)0x69,  /* [3393] */
    (xdc_Char)0x6f,  /* [3394] */
    (xdc_Char)0x72,  /* [3395] */
    (xdc_Char)0x69,  /* [3396] */
    (xdc_Char)0x74,  /* [3397] */
    (xdc_Char)0x79,  /* [3398] */
    (xdc_Char)0x3a,  /* [3399] */
    (xdc_Char)0x20,  /* [3400] */
    (xdc_Char)0x54,  /* [3401] */
    (xdc_Char)0x68,  /* [3402] */
    (xdc_Char)0x72,  /* [3403] */
    (xdc_Char)0x65,  /* [3404] */
    (xdc_Char)0x61,  /* [3405] */
    (xdc_Char)0x64,  /* [3406] */
    (xdc_Char)0x20,  /* [3407] */
    (xdc_Char)0x70,  /* [3408] */
    (xdc_Char)0x72,  /* [3409] */
    (xdc_Char)0x69,  /* [3410] */
    (xdc_Char)0x6f,  /* [3411] */
    (xdc_Char)0x72,  /* [3412] */
    (xdc_Char)0x69,  /* [3413] */
    (xdc_Char)0x74,  /* [3414] */
    (xdc_Char)0x79,  /* [3415] */
    (xdc_Char)0x20,  /* [3416] */
    (xdc_Char)0x69,  /* [3417] */
    (xdc_Char)0x73,  /* [3418] */
    (xdc_Char)0x20,  /* [3419] */
    (xdc_Char)0x69,  /* [3420] */
    (xdc_Char)0x6e,  /* [3421] */
    (xdc_Char)0x76,  /* [3422] */
    (xdc_Char)0x61,  /* [3423] */
    (xdc_Char)0x6c,  /* [3424] */
    (xdc_Char)0x69,  /* [3425] */
    (xdc_Char)0x64,  /* [3426] */
    (xdc_Char)0x20,  /* [3427] */
    (xdc_Char)0x25,  /* [3428] */
    (xdc_Char)0x64,  /* [3429] */
    (xdc_Char)0x0,  /* [3430] */
    (xdc_Char)0x45,  /* [3431] */
    (xdc_Char)0x5f,  /* [3432] */
    (xdc_Char)0x69,  /* [3433] */
    (xdc_Char)0x6e,  /* [3434] */
    (xdc_Char)0x76,  /* [3435] */
    (xdc_Char)0x61,  /* [3436] */
    (xdc_Char)0x6c,  /* [3437] */
    (xdc_Char)0x69,  /* [3438] */
    (xdc_Char)0x64,  /* [3439] */
    (xdc_Char)0x54,  /* [3440] */
    (xdc_Char)0x69,  /* [3441] */
    (xdc_Char)0x6d,  /* [3442] */
    (xdc_Char)0x65,  /* [3443] */
    (xdc_Char)0x72,  /* [3444] */
    (xdc_Char)0x3a,  /* [3445] */
    (xdc_Char)0x20,  /* [3446] */
    (xdc_Char)0x49,  /* [3447] */
    (xdc_Char)0x6e,  /* [3448] */
    (xdc_Char)0x76,  /* [3449] */
    (xdc_Char)0x61,  /* [3450] */
    (xdc_Char)0x6c,  /* [3451] */
    (xdc_Char)0x69,  /* [3452] */
    (xdc_Char)0x64,  /* [3453] */
    (xdc_Char)0x20,  /* [3454] */
    (xdc_Char)0x54,  /* [3455] */
    (xdc_Char)0x69,  /* [3456] */
    (xdc_Char)0x6d,  /* [3457] */
    (xdc_Char)0x65,  /* [3458] */
    (xdc_Char)0x72,  /* [3459] */
    (xdc_Char)0x20,  /* [3460] */
    (xdc_Char)0x49,  /* [3461] */
    (xdc_Char)0x64,  /* [3462] */
    (xdc_Char)0x20,  /* [3463] */
    (xdc_Char)0x25,  /* [3464] */
    (xdc_Char)0x64,  /* [3465] */
    (xdc_Char)0x0,  /* [3466] */
    (xdc_Char)0x45,  /* [3467] */
    (xdc_Char)0x5f,  /* [3468] */
    (xdc_Char)0x6e,  /* [3469] */
    (xdc_Char)0x6f,  /* [3470] */
    (xdc_Char)0x74,  /* [3471] */
    (xdc_Char)0x41,  /* [3472] */
    (xdc_Char)0x76,  /* [3473] */
    (xdc_Char)0x61,  /* [3474] */
    (xdc_Char)0x69,  /* [3475] */
    (xdc_Char)0x6c,  /* [3476] */
    (xdc_Char)0x61,  /* [3477] */
    (xdc_Char)0x62,  /* [3478] */
    (xdc_Char)0x6c,  /* [3479] */
    (xdc_Char)0x65,  /* [3480] */
    (xdc_Char)0x3a,  /* [3481] */
    (xdc_Char)0x20,  /* [3482] */
    (xdc_Char)0x54,  /* [3483] */
    (xdc_Char)0x69,  /* [3484] */
    (xdc_Char)0x6d,  /* [3485] */
    (xdc_Char)0x65,  /* [3486] */
    (xdc_Char)0x72,  /* [3487] */
    (xdc_Char)0x20,  /* [3488] */
    (xdc_Char)0x6e,  /* [3489] */
    (xdc_Char)0x6f,  /* [3490] */
    (xdc_Char)0x74,  /* [3491] */
    (xdc_Char)0x20,  /* [3492] */
    (xdc_Char)0x61,  /* [3493] */
    (xdc_Char)0x76,  /* [3494] */
    (xdc_Char)0x61,  /* [3495] */
    (xdc_Char)0x69,  /* [3496] */
    (xdc_Char)0x6c,  /* [3497] */
    (xdc_Char)0x61,  /* [3498] */
    (xdc_Char)0x62,  /* [3499] */
    (xdc_Char)0x6c,  /* [3500] */
    (xdc_Char)0x65,  /* [3501] */
    (xdc_Char)0x20,  /* [3502] */
    (xdc_Char)0x25,  /* [3503] */
    (xdc_Char)0x64,  /* [3504] */
    (xdc_Char)0x0,  /* [3505] */
    (xdc_Char)0x45,  /* [3506] */
    (xdc_Char)0x5f,  /* [3507] */
    (xdc_Char)0x63,  /* [3508] */
    (xdc_Char)0x61,  /* [3509] */
    (xdc_Char)0x6e,  /* [3510] */
    (xdc_Char)0x6e,  /* [3511] */
    (xdc_Char)0x6f,  /* [3512] */
    (xdc_Char)0x74,  /* [3513] */
    (xdc_Char)0x53,  /* [3514] */
    (xdc_Char)0x75,  /* [3515] */
    (xdc_Char)0x70,  /* [3516] */
    (xdc_Char)0x70,  /* [3517] */
    (xdc_Char)0x6f,  /* [3518] */
    (xdc_Char)0x72,  /* [3519] */
    (xdc_Char)0x74,  /* [3520] */
    (xdc_Char)0x3a,  /* [3521] */
    (xdc_Char)0x20,  /* [3522] */
    (xdc_Char)0x54,  /* [3523] */
    (xdc_Char)0x69,  /* [3524] */
    (xdc_Char)0x6d,  /* [3525] */
    (xdc_Char)0x65,  /* [3526] */
    (xdc_Char)0x72,  /* [3527] */
    (xdc_Char)0x20,  /* [3528] */
    (xdc_Char)0x63,  /* [3529] */
    (xdc_Char)0x61,  /* [3530] */
    (xdc_Char)0x6e,  /* [3531] */
    (xdc_Char)0x6e,  /* [3532] */
    (xdc_Char)0x6f,  /* [3533] */
    (xdc_Char)0x74,  /* [3534] */
    (xdc_Char)0x20,  /* [3535] */
    (xdc_Char)0x73,  /* [3536] */
    (xdc_Char)0x75,  /* [3537] */
    (xdc_Char)0x70,  /* [3538] */
    (xdc_Char)0x70,  /* [3539] */
    (xdc_Char)0x6f,  /* [3540] */
    (xdc_Char)0x72,  /* [3541] */
    (xdc_Char)0x74,  /* [3542] */
    (xdc_Char)0x20,  /* [3543] */
    (xdc_Char)0x72,  /* [3544] */
    (xdc_Char)0x65,  /* [3545] */
    (xdc_Char)0x71,  /* [3546] */
    (xdc_Char)0x75,  /* [3547] */
    (xdc_Char)0x65,  /* [3548] */
    (xdc_Char)0x73,  /* [3549] */
    (xdc_Char)0x74,  /* [3550] */
    (xdc_Char)0x65,  /* [3551] */
    (xdc_Char)0x64,  /* [3552] */
    (xdc_Char)0x20,  /* [3553] */
    (xdc_Char)0x70,  /* [3554] */
    (xdc_Char)0x65,  /* [3555] */
    (xdc_Char)0x72,  /* [3556] */
    (xdc_Char)0x69,  /* [3557] */
    (xdc_Char)0x6f,  /* [3558] */
    (xdc_Char)0x64,  /* [3559] */
    (xdc_Char)0x20,  /* [3560] */
    (xdc_Char)0x25,  /* [3561] */
    (xdc_Char)0x64,  /* [3562] */
    (xdc_Char)0x0,  /* [3563] */
    (xdc_Char)0x72,  /* [3564] */
    (xdc_Char)0x65,  /* [3565] */
    (xdc_Char)0x71,  /* [3566] */
    (xdc_Char)0x75,  /* [3567] */
    (xdc_Char)0x65,  /* [3568] */
    (xdc_Char)0x73,  /* [3569] */
    (xdc_Char)0x74,  /* [3570] */
    (xdc_Char)0x65,  /* [3571] */
    (xdc_Char)0x64,  /* [3572] */
    (xdc_Char)0x20,  /* [3573] */
    (xdc_Char)0x73,  /* [3574] */
    (xdc_Char)0x69,  /* [3575] */
    (xdc_Char)0x7a,  /* [3576] */
    (xdc_Char)0x65,  /* [3577] */
    (xdc_Char)0x20,  /* [3578] */
    (xdc_Char)0x69,  /* [3579] */
    (xdc_Char)0x73,  /* [3580] */
    (xdc_Char)0x20,  /* [3581] */
    (xdc_Char)0x74,  /* [3582] */
    (xdc_Char)0x6f,  /* [3583] */
    (xdc_Char)0x6f,  /* [3584] */
    (xdc_Char)0x20,  /* [3585] */
    (xdc_Char)0x62,  /* [3586] */
    (xdc_Char)0x69,  /* [3587] */
    (xdc_Char)0x67,  /* [3588] */
    (xdc_Char)0x3a,  /* [3589] */
    (xdc_Char)0x20,  /* [3590] */
    (xdc_Char)0x68,  /* [3591] */
    (xdc_Char)0x61,  /* [3592] */
    (xdc_Char)0x6e,  /* [3593] */
    (xdc_Char)0x64,  /* [3594] */
    (xdc_Char)0x6c,  /* [3595] */
    (xdc_Char)0x65,  /* [3596] */
    (xdc_Char)0x3d,  /* [3597] */
    (xdc_Char)0x30,  /* [3598] */
    (xdc_Char)0x78,  /* [3599] */
    (xdc_Char)0x25,  /* [3600] */
    (xdc_Char)0x78,  /* [3601] */
    (xdc_Char)0x2c,  /* [3602] */
    (xdc_Char)0x20,  /* [3603] */
    (xdc_Char)0x73,  /* [3604] */
    (xdc_Char)0x69,  /* [3605] */
    (xdc_Char)0x7a,  /* [3606] */
    (xdc_Char)0x65,  /* [3607] */
    (xdc_Char)0x3d,  /* [3608] */
    (xdc_Char)0x25,  /* [3609] */
    (xdc_Char)0x75,  /* [3610] */
    (xdc_Char)0x0,  /* [3611] */
    (xdc_Char)0x6f,  /* [3612] */
    (xdc_Char)0x75,  /* [3613] */
    (xdc_Char)0x74,  /* [3614] */
    (xdc_Char)0x20,  /* [3615] */
    (xdc_Char)0x6f,  /* [3616] */
    (xdc_Char)0x66,  /* [3617] */
    (xdc_Char)0x20,  /* [3618] */
    (xdc_Char)0x6d,  /* [3619] */
    (xdc_Char)0x65,  /* [3620] */
    (xdc_Char)0x6d,  /* [3621] */
    (xdc_Char)0x6f,  /* [3622] */
    (xdc_Char)0x72,  /* [3623] */
    (xdc_Char)0x79,  /* [3624] */
    (xdc_Char)0x3a,  /* [3625] */
    (xdc_Char)0x20,  /* [3626] */
    (xdc_Char)0x68,  /* [3627] */
    (xdc_Char)0x61,  /* [3628] */
    (xdc_Char)0x6e,  /* [3629] */
    (xdc_Char)0x64,  /* [3630] */
    (xdc_Char)0x6c,  /* [3631] */
    (xdc_Char)0x65,  /* [3632] */
    (xdc_Char)0x3d,  /* [3633] */
    (xdc_Char)0x30,  /* [3634] */
    (xdc_Char)0x78,  /* [3635] */
    (xdc_Char)0x25,  /* [3636] */
    (xdc_Char)0x78,  /* [3637] */
    (xdc_Char)0x2c,  /* [3638] */
    (xdc_Char)0x20,  /* [3639] */
    (xdc_Char)0x73,  /* [3640] */
    (xdc_Char)0x69,  /* [3641] */
    (xdc_Char)0x7a,  /* [3642] */
    (xdc_Char)0x65,  /* [3643] */
    (xdc_Char)0x3d,  /* [3644] */
    (xdc_Char)0x25,  /* [3645] */
    (xdc_Char)0x75,  /* [3646] */
    (xdc_Char)0x0,  /* [3647] */
    (xdc_Char)0x3c,  /* [3648] */
    (xdc_Char)0x2d,  /* [3649] */
    (xdc_Char)0x2d,  /* [3650] */
    (xdc_Char)0x20,  /* [3651] */
    (xdc_Char)0x63,  /* [3652] */
    (xdc_Char)0x6f,  /* [3653] */
    (xdc_Char)0x6e,  /* [3654] */
    (xdc_Char)0x73,  /* [3655] */
    (xdc_Char)0x74,  /* [3656] */
    (xdc_Char)0x72,  /* [3657] */
    (xdc_Char)0x75,  /* [3658] */
    (xdc_Char)0x63,  /* [3659] */
    (xdc_Char)0x74,  /* [3660] */
    (xdc_Char)0x3a,  /* [3661] */
    (xdc_Char)0x20,  /* [3662] */
    (xdc_Char)0x25,  /* [3663] */
    (xdc_Char)0x70,  /* [3664] */
    (xdc_Char)0x28,  /* [3665] */
    (xdc_Char)0x27,  /* [3666] */
    (xdc_Char)0x25,  /* [3667] */
    (xdc_Char)0x73,  /* [3668] */
    (xdc_Char)0x27,  /* [3669] */
    (xdc_Char)0x29,  /* [3670] */
    (xdc_Char)0x0,  /* [3671] */
    (xdc_Char)0x3c,  /* [3672] */
    (xdc_Char)0x2d,  /* [3673] */
    (xdc_Char)0x2d,  /* [3674] */
    (xdc_Char)0x20,  /* [3675] */
    (xdc_Char)0x63,  /* [3676] */
    (xdc_Char)0x72,  /* [3677] */
    (xdc_Char)0x65,  /* [3678] */
    (xdc_Char)0x61,  /* [3679] */
    (xdc_Char)0x74,  /* [3680] */
    (xdc_Char)0x65,  /* [3681] */
    (xdc_Char)0x3a,  /* [3682] */
    (xdc_Char)0x20,  /* [3683] */
    (xdc_Char)0x25,  /* [3684] */
    (xdc_Char)0x70,  /* [3685] */
    (xdc_Char)0x28,  /* [3686] */
    (xdc_Char)0x27,  /* [3687] */
    (xdc_Char)0x25,  /* [3688] */
    (xdc_Char)0x73,  /* [3689] */
    (xdc_Char)0x27,  /* [3690] */
    (xdc_Char)0x29,  /* [3691] */
    (xdc_Char)0x0,  /* [3692] */
    (xdc_Char)0x2d,  /* [3693] */
    (xdc_Char)0x2d,  /* [3694] */
    (xdc_Char)0x3e,  /* [3695] */
    (xdc_Char)0x20,  /* [3696] */
    (xdc_Char)0x64,  /* [3697] */
    (xdc_Char)0x65,  /* [3698] */
    (xdc_Char)0x73,  /* [3699] */
    (xdc_Char)0x74,  /* [3700] */
    (xdc_Char)0x72,  /* [3701] */
    (xdc_Char)0x75,  /* [3702] */
    (xdc_Char)0x63,  /* [3703] */
    (xdc_Char)0x74,  /* [3704] */
    (xdc_Char)0x3a,  /* [3705] */
    (xdc_Char)0x20,  /* [3706] */
    (xdc_Char)0x28,  /* [3707] */
    (xdc_Char)0x25,  /* [3708] */
    (xdc_Char)0x70,  /* [3709] */
    (xdc_Char)0x29,  /* [3710] */
    (xdc_Char)0x0,  /* [3711] */
    (xdc_Char)0x2d,  /* [3712] */
    (xdc_Char)0x2d,  /* [3713] */
    (xdc_Char)0x3e,  /* [3714] */
    (xdc_Char)0x20,  /* [3715] */
    (xdc_Char)0x64,  /* [3716] */
    (xdc_Char)0x65,  /* [3717] */
    (xdc_Char)0x6c,  /* [3718] */
    (xdc_Char)0x65,  /* [3719] */
    (xdc_Char)0x74,  /* [3720] */
    (xdc_Char)0x65,  /* [3721] */
    (xdc_Char)0x3a,  /* [3722] */
    (xdc_Char)0x20,  /* [3723] */
    (xdc_Char)0x28,  /* [3724] */
    (xdc_Char)0x25,  /* [3725] */
    (xdc_Char)0x70,  /* [3726] */
    (xdc_Char)0x29,  /* [3727] */
    (xdc_Char)0x0,  /* [3728] */
    (xdc_Char)0x45,  /* [3729] */
    (xdc_Char)0x52,  /* [3730] */
    (xdc_Char)0x52,  /* [3731] */
    (xdc_Char)0x4f,  /* [3732] */
    (xdc_Char)0x52,  /* [3733] */
    (xdc_Char)0x3a,  /* [3734] */
    (xdc_Char)0x20,  /* [3735] */
    (xdc_Char)0x25,  /* [3736] */
    (xdc_Char)0x24,  /* [3737] */
    (xdc_Char)0x46,  /* [3738] */
    (xdc_Char)0x25,  /* [3739] */
    (xdc_Char)0x24,  /* [3740] */
    (xdc_Char)0x53,  /* [3741] */
    (xdc_Char)0x0,  /* [3742] */
    (xdc_Char)0x57,  /* [3743] */
    (xdc_Char)0x41,  /* [3744] */
    (xdc_Char)0x52,  /* [3745] */
    (xdc_Char)0x4e,  /* [3746] */
    (xdc_Char)0x49,  /* [3747] */
    (xdc_Char)0x4e,  /* [3748] */
    (xdc_Char)0x47,  /* [3749] */
    (xdc_Char)0x3a,  /* [3750] */
    (xdc_Char)0x20,  /* [3751] */
    (xdc_Char)0x25,  /* [3752] */
    (xdc_Char)0x24,  /* [3753] */
    (xdc_Char)0x46,  /* [3754] */
    (xdc_Char)0x25,  /* [3755] */
    (xdc_Char)0x24,  /* [3756] */
    (xdc_Char)0x53,  /* [3757] */
    (xdc_Char)0x0,  /* [3758] */
    (xdc_Char)0x25,  /* [3759] */
    (xdc_Char)0x24,  /* [3760] */
    (xdc_Char)0x46,  /* [3761] */
    (xdc_Char)0x25,  /* [3762] */
    (xdc_Char)0x24,  /* [3763] */
    (xdc_Char)0x53,  /* [3764] */
    (xdc_Char)0x0,  /* [3765] */
    (xdc_Char)0x53,  /* [3766] */
    (xdc_Char)0x74,  /* [3767] */
    (xdc_Char)0x61,  /* [3768] */
    (xdc_Char)0x72,  /* [3769] */
    (xdc_Char)0x74,  /* [3770] */
    (xdc_Char)0x3a,  /* [3771] */
    (xdc_Char)0x20,  /* [3772] */
    (xdc_Char)0x25,  /* [3773] */
    (xdc_Char)0x24,  /* [3774] */
    (xdc_Char)0x53,  /* [3775] */
    (xdc_Char)0x0,  /* [3776] */
    (xdc_Char)0x53,  /* [3777] */
    (xdc_Char)0x74,  /* [3778] */
    (xdc_Char)0x6f,  /* [3779] */
    (xdc_Char)0x70,  /* [3780] */
    (xdc_Char)0x3a,  /* [3781] */
    (xdc_Char)0x20,  /* [3782] */
    (xdc_Char)0x25,  /* [3783] */
    (xdc_Char)0x24,  /* [3784] */
    (xdc_Char)0x53,  /* [3785] */
    (xdc_Char)0x0,  /* [3786] */
    (xdc_Char)0x53,  /* [3787] */
    (xdc_Char)0x74,  /* [3788] */
    (xdc_Char)0x61,  /* [3789] */
    (xdc_Char)0x72,  /* [3790] */
    (xdc_Char)0x74,  /* [3791] */
    (xdc_Char)0x49,  /* [3792] */
    (xdc_Char)0x6e,  /* [3793] */
    (xdc_Char)0x73,  /* [3794] */
    (xdc_Char)0x74,  /* [3795] */
    (xdc_Char)0x61,  /* [3796] */
    (xdc_Char)0x6e,  /* [3797] */
    (xdc_Char)0x63,  /* [3798] */
    (xdc_Char)0x65,  /* [3799] */
    (xdc_Char)0x3a,  /* [3800] */
    (xdc_Char)0x20,  /* [3801] */
    (xdc_Char)0x25,  /* [3802] */
    (xdc_Char)0x24,  /* [3803] */
    (xdc_Char)0x53,  /* [3804] */
    (xdc_Char)0x0,  /* [3805] */
    (xdc_Char)0x53,  /* [3806] */
    (xdc_Char)0x74,  /* [3807] */
    (xdc_Char)0x6f,  /* [3808] */
    (xdc_Char)0x70,  /* [3809] */
    (xdc_Char)0x49,  /* [3810] */
    (xdc_Char)0x6e,  /* [3811] */
    (xdc_Char)0x73,  /* [3812] */
    (xdc_Char)0x74,  /* [3813] */
    (xdc_Char)0x61,  /* [3814] */
    (xdc_Char)0x6e,  /* [3815] */
    (xdc_Char)0x63,  /* [3816] */
    (xdc_Char)0x65,  /* [3817] */
    (xdc_Char)0x3a,  /* [3818] */
    (xdc_Char)0x20,  /* [3819] */
    (xdc_Char)0x25,  /* [3820] */
    (xdc_Char)0x24,  /* [3821] */
    (xdc_Char)0x53,  /* [3822] */
    (xdc_Char)0x0,  /* [3823] */
    (xdc_Char)0x4c,  /* [3824] */
    (xdc_Char)0x4d,  /* [3825] */
    (xdc_Char)0x5f,  /* [3826] */
    (xdc_Char)0x62,  /* [3827] */
    (xdc_Char)0x65,  /* [3828] */
    (xdc_Char)0x67,  /* [3829] */
    (xdc_Char)0x69,  /* [3830] */
    (xdc_Char)0x6e,  /* [3831] */
    (xdc_Char)0x3a,  /* [3832] */
    (xdc_Char)0x20,  /* [3833] */
    (xdc_Char)0x68,  /* [3834] */
    (xdc_Char)0x77,  /* [3835] */
    (xdc_Char)0x69,  /* [3836] */
    (xdc_Char)0x3a,  /* [3837] */
    (xdc_Char)0x20,  /* [3838] */
    (xdc_Char)0x30,  /* [3839] */
    (xdc_Char)0x78,  /* [3840] */
    (xdc_Char)0x25,  /* [3841] */
    (xdc_Char)0x78,  /* [3842] */
    (xdc_Char)0x2c,  /* [3843] */
    (xdc_Char)0x20,  /* [3844] */
    (xdc_Char)0x66,  /* [3845] */
    (xdc_Char)0x75,  /* [3846] */
    (xdc_Char)0x6e,  /* [3847] */
    (xdc_Char)0x63,  /* [3848] */
    (xdc_Char)0x3a,  /* [3849] */
    (xdc_Char)0x20,  /* [3850] */
    (xdc_Char)0x30,  /* [3851] */
    (xdc_Char)0x78,  /* [3852] */
    (xdc_Char)0x25,  /* [3853] */
    (xdc_Char)0x78,  /* [3854] */
    (xdc_Char)0x2c,  /* [3855] */
    (xdc_Char)0x20,  /* [3856] */
    (xdc_Char)0x70,  /* [3857] */
    (xdc_Char)0x72,  /* [3858] */
    (xdc_Char)0x65,  /* [3859] */
    (xdc_Char)0x54,  /* [3860] */
    (xdc_Char)0x68,  /* [3861] */
    (xdc_Char)0x72,  /* [3862] */
    (xdc_Char)0x65,  /* [3863] */
    (xdc_Char)0x61,  /* [3864] */
    (xdc_Char)0x64,  /* [3865] */
    (xdc_Char)0x3a,  /* [3866] */
    (xdc_Char)0x20,  /* [3867] */
    (xdc_Char)0x25,  /* [3868] */
    (xdc_Char)0x64,  /* [3869] */
    (xdc_Char)0x2c,  /* [3870] */
    (xdc_Char)0x20,  /* [3871] */
    (xdc_Char)0x69,  /* [3872] */
    (xdc_Char)0x6e,  /* [3873] */
    (xdc_Char)0x74,  /* [3874] */
    (xdc_Char)0x4e,  /* [3875] */
    (xdc_Char)0x75,  /* [3876] */
    (xdc_Char)0x6d,  /* [3877] */
    (xdc_Char)0x3a,  /* [3878] */
    (xdc_Char)0x20,  /* [3879] */
    (xdc_Char)0x25,  /* [3880] */
    (xdc_Char)0x64,  /* [3881] */
    (xdc_Char)0x2c,  /* [3882] */
    (xdc_Char)0x20,  /* [3883] */
    (xdc_Char)0x69,  /* [3884] */
    (xdc_Char)0x72,  /* [3885] */
    (xdc_Char)0x70,  /* [3886] */
    (xdc_Char)0x3a,  /* [3887] */
    (xdc_Char)0x20,  /* [3888] */
    (xdc_Char)0x30,  /* [3889] */
    (xdc_Char)0x78,  /* [3890] */
    (xdc_Char)0x25,  /* [3891] */
    (xdc_Char)0x78,  /* [3892] */
    (xdc_Char)0x0,  /* [3893] */
    (xdc_Char)0x4c,  /* [3894] */
    (xdc_Char)0x44,  /* [3895] */
    (xdc_Char)0x5f,  /* [3896] */
    (xdc_Char)0x65,  /* [3897] */
    (xdc_Char)0x6e,  /* [3898] */
    (xdc_Char)0x64,  /* [3899] */
    (xdc_Char)0x3a,  /* [3900] */
    (xdc_Char)0x20,  /* [3901] */
    (xdc_Char)0x68,  /* [3902] */
    (xdc_Char)0x77,  /* [3903] */
    (xdc_Char)0x69,  /* [3904] */
    (xdc_Char)0x3a,  /* [3905] */
    (xdc_Char)0x20,  /* [3906] */
    (xdc_Char)0x30,  /* [3907] */
    (xdc_Char)0x78,  /* [3908] */
    (xdc_Char)0x25,  /* [3909] */
    (xdc_Char)0x78,  /* [3910] */
    (xdc_Char)0x0,  /* [3911] */
    (xdc_Char)0x4c,  /* [3912] */
    (xdc_Char)0x57,  /* [3913] */
    (xdc_Char)0x5f,  /* [3914] */
    (xdc_Char)0x64,  /* [3915] */
    (xdc_Char)0x65,  /* [3916] */
    (xdc_Char)0x6c,  /* [3917] */
    (xdc_Char)0x61,  /* [3918] */
    (xdc_Char)0x79,  /* [3919] */
    (xdc_Char)0x65,  /* [3920] */
    (xdc_Char)0x64,  /* [3921] */
    (xdc_Char)0x3a,  /* [3922] */
    (xdc_Char)0x20,  /* [3923] */
    (xdc_Char)0x64,  /* [3924] */
    (xdc_Char)0x65,  /* [3925] */
    (xdc_Char)0x6c,  /* [3926] */
    (xdc_Char)0x61,  /* [3927] */
    (xdc_Char)0x79,  /* [3928] */
    (xdc_Char)0x3a,  /* [3929] */
    (xdc_Char)0x20,  /* [3930] */
    (xdc_Char)0x25,  /* [3931] */
    (xdc_Char)0x64,  /* [3932] */
    (xdc_Char)0x0,  /* [3933] */
    (xdc_Char)0x4c,  /* [3934] */
    (xdc_Char)0x4d,  /* [3935] */
    (xdc_Char)0x5f,  /* [3936] */
    (xdc_Char)0x74,  /* [3937] */
    (xdc_Char)0x69,  /* [3938] */
    (xdc_Char)0x63,  /* [3939] */
    (xdc_Char)0x6b,  /* [3940] */
    (xdc_Char)0x3a,  /* [3941] */
    (xdc_Char)0x20,  /* [3942] */
    (xdc_Char)0x74,  /* [3943] */
    (xdc_Char)0x69,  /* [3944] */
    (xdc_Char)0x63,  /* [3945] */
    (xdc_Char)0x6b,  /* [3946] */
    (xdc_Char)0x3a,  /* [3947] */
    (xdc_Char)0x20,  /* [3948] */
    (xdc_Char)0x25,  /* [3949] */
    (xdc_Char)0x64,  /* [3950] */
    (xdc_Char)0x0,  /* [3951] */
    (xdc_Char)0x4c,  /* [3952] */
    (xdc_Char)0x4d,  /* [3953] */
    (xdc_Char)0x5f,  /* [3954] */
    (xdc_Char)0x62,  /* [3955] */
    (xdc_Char)0x65,  /* [3956] */
    (xdc_Char)0x67,  /* [3957] */
    (xdc_Char)0x69,  /* [3958] */
    (xdc_Char)0x6e,  /* [3959] */
    (xdc_Char)0x3a,  /* [3960] */
    (xdc_Char)0x20,  /* [3961] */
    (xdc_Char)0x63,  /* [3962] */
    (xdc_Char)0x6c,  /* [3963] */
    (xdc_Char)0x6b,  /* [3964] */
    (xdc_Char)0x3a,  /* [3965] */
    (xdc_Char)0x20,  /* [3966] */
    (xdc_Char)0x30,  /* [3967] */
    (xdc_Char)0x78,  /* [3968] */
    (xdc_Char)0x25,  /* [3969] */
    (xdc_Char)0x78,  /* [3970] */
    (xdc_Char)0x2c,  /* [3971] */
    (xdc_Char)0x20,  /* [3972] */
    (xdc_Char)0x66,  /* [3973] */
    (xdc_Char)0x75,  /* [3974] */
    (xdc_Char)0x6e,  /* [3975] */
    (xdc_Char)0x63,  /* [3976] */
    (xdc_Char)0x3a,  /* [3977] */
    (xdc_Char)0x20,  /* [3978] */
    (xdc_Char)0x30,  /* [3979] */
    (xdc_Char)0x78,  /* [3980] */
    (xdc_Char)0x25,  /* [3981] */
    (xdc_Char)0x78,  /* [3982] */
    (xdc_Char)0x0,  /* [3983] */
    (xdc_Char)0x4c,  /* [3984] */
    (xdc_Char)0x4d,  /* [3985] */
    (xdc_Char)0x5f,  /* [3986] */
    (xdc_Char)0x70,  /* [3987] */
    (xdc_Char)0x6f,  /* [3988] */
    (xdc_Char)0x73,  /* [3989] */
    (xdc_Char)0x74,  /* [3990] */
    (xdc_Char)0x3a,  /* [3991] */
    (xdc_Char)0x20,  /* [3992] */
    (xdc_Char)0x73,  /* [3993] */
    (xdc_Char)0x65,  /* [3994] */
    (xdc_Char)0x6d,  /* [3995] */
    (xdc_Char)0x3a,  /* [3996] */
    (xdc_Char)0x20,  /* [3997] */
    (xdc_Char)0x30,  /* [3998] */
    (xdc_Char)0x78,  /* [3999] */
    (xdc_Char)0x25,  /* [4000] */
    (xdc_Char)0x78,  /* [4001] */
    (xdc_Char)0x2c,  /* [4002] */
    (xdc_Char)0x20,  /* [4003] */
    (xdc_Char)0x63,  /* [4004] */
    (xdc_Char)0x6f,  /* [4005] */
    (xdc_Char)0x75,  /* [4006] */
    (xdc_Char)0x6e,  /* [4007] */
    (xdc_Char)0x74,  /* [4008] */
    (xdc_Char)0x3a,  /* [4009] */
    (xdc_Char)0x20,  /* [4010] */
    (xdc_Char)0x25,  /* [4011] */
    (xdc_Char)0x64,  /* [4012] */
    (xdc_Char)0x0,  /* [4013] */
    (xdc_Char)0x4c,  /* [4014] */
    (xdc_Char)0x4d,  /* [4015] */
    (xdc_Char)0x5f,  /* [4016] */
    (xdc_Char)0x70,  /* [4017] */
    (xdc_Char)0x65,  /* [4018] */
    (xdc_Char)0x6e,  /* [4019] */
    (xdc_Char)0x64,  /* [4020] */
    (xdc_Char)0x3a,  /* [4021] */
    (xdc_Char)0x20,  /* [4022] */
    (xdc_Char)0x73,  /* [4023] */
    (xdc_Char)0x65,  /* [4024] */
    (xdc_Char)0x6d,  /* [4025] */
    (xdc_Char)0x3a,  /* [4026] */
    (xdc_Char)0x20,  /* [4027] */
    (xdc_Char)0x30,  /* [4028] */
    (xdc_Char)0x78,  /* [4029] */
    (xdc_Char)0x25,  /* [4030] */
    (xdc_Char)0x78,  /* [4031] */
    (xdc_Char)0x2c,  /* [4032] */
    (xdc_Char)0x20,  /* [4033] */
    (xdc_Char)0x63,  /* [4034] */
    (xdc_Char)0x6f,  /* [4035] */
    (xdc_Char)0x75,  /* [4036] */
    (xdc_Char)0x6e,  /* [4037] */
    (xdc_Char)0x74,  /* [4038] */
    (xdc_Char)0x3a,  /* [4039] */
    (xdc_Char)0x20,  /* [4040] */
    (xdc_Char)0x25,  /* [4041] */
    (xdc_Char)0x64,  /* [4042] */
    (xdc_Char)0x2c,  /* [4043] */
    (xdc_Char)0x20,  /* [4044] */
    (xdc_Char)0x74,  /* [4045] */
    (xdc_Char)0x69,  /* [4046] */
    (xdc_Char)0x6d,  /* [4047] */
    (xdc_Char)0x65,  /* [4048] */
    (xdc_Char)0x6f,  /* [4049] */
    (xdc_Char)0x75,  /* [4050] */
    (xdc_Char)0x74,  /* [4051] */
    (xdc_Char)0x3a,  /* [4052] */
    (xdc_Char)0x20,  /* [4053] */
    (xdc_Char)0x25,  /* [4054] */
    (xdc_Char)0x64,  /* [4055] */
    (xdc_Char)0x0,  /* [4056] */
    (xdc_Char)0x4c,  /* [4057] */
    (xdc_Char)0x4d,  /* [4058] */
    (xdc_Char)0x5f,  /* [4059] */
    (xdc_Char)0x62,  /* [4060] */
    (xdc_Char)0x65,  /* [4061] */
    (xdc_Char)0x67,  /* [4062] */
    (xdc_Char)0x69,  /* [4063] */
    (xdc_Char)0x6e,  /* [4064] */
    (xdc_Char)0x3a,  /* [4065] */
    (xdc_Char)0x20,  /* [4066] */
    (xdc_Char)0x73,  /* [4067] */
    (xdc_Char)0x77,  /* [4068] */
    (xdc_Char)0x69,  /* [4069] */
    (xdc_Char)0x3a,  /* [4070] */
    (xdc_Char)0x20,  /* [4071] */
    (xdc_Char)0x30,  /* [4072] */
    (xdc_Char)0x78,  /* [4073] */
    (xdc_Char)0x25,  /* [4074] */
    (xdc_Char)0x78,  /* [4075] */
    (xdc_Char)0x2c,  /* [4076] */
    (xdc_Char)0x20,  /* [4077] */
    (xdc_Char)0x66,  /* [4078] */
    (xdc_Char)0x75,  /* [4079] */
    (xdc_Char)0x6e,  /* [4080] */
    (xdc_Char)0x63,  /* [4081] */
    (xdc_Char)0x3a,  /* [4082] */
    (xdc_Char)0x20,  /* [4083] */
    (xdc_Char)0x30,  /* [4084] */
    (xdc_Char)0x78,  /* [4085] */
    (xdc_Char)0x25,  /* [4086] */
    (xdc_Char)0x78,  /* [4087] */
    (xdc_Char)0x2c,  /* [4088] */
    (xdc_Char)0x20,  /* [4089] */
    (xdc_Char)0x70,  /* [4090] */
    (xdc_Char)0x72,  /* [4091] */
    (xdc_Char)0x65,  /* [4092] */
    (xdc_Char)0x54,  /* [4093] */
    (xdc_Char)0x68,  /* [4094] */
    (xdc_Char)0x72,  /* [4095] */
    (xdc_Char)0x65,  /* [4096] */
    (xdc_Char)0x61,  /* [4097] */
    (xdc_Char)0x64,  /* [4098] */
    (xdc_Char)0x3a,  /* [4099] */
    (xdc_Char)0x20,  /* [4100] */
    (xdc_Char)0x25,  /* [4101] */
    (xdc_Char)0x64,  /* [4102] */
    (xdc_Char)0x0,  /* [4103] */
    (xdc_Char)0x4c,  /* [4104] */
    (xdc_Char)0x44,  /* [4105] */
    (xdc_Char)0x5f,  /* [4106] */
    (xdc_Char)0x65,  /* [4107] */
    (xdc_Char)0x6e,  /* [4108] */
    (xdc_Char)0x64,  /* [4109] */
    (xdc_Char)0x3a,  /* [4110] */
    (xdc_Char)0x20,  /* [4111] */
    (xdc_Char)0x73,  /* [4112] */
    (xdc_Char)0x77,  /* [4113] */
    (xdc_Char)0x69,  /* [4114] */
    (xdc_Char)0x3a,  /* [4115] */
    (xdc_Char)0x20,  /* [4116] */
    (xdc_Char)0x30,  /* [4117] */
    (xdc_Char)0x78,  /* [4118] */
    (xdc_Char)0x25,  /* [4119] */
    (xdc_Char)0x78,  /* [4120] */
    (xdc_Char)0x0,  /* [4121] */
    (xdc_Char)0x4c,  /* [4122] */
    (xdc_Char)0x4d,  /* [4123] */
    (xdc_Char)0x5f,  /* [4124] */
    (xdc_Char)0x70,  /* [4125] */
    (xdc_Char)0x6f,  /* [4126] */
    (xdc_Char)0x73,  /* [4127] */
    (xdc_Char)0x74,  /* [4128] */
    (xdc_Char)0x3a,  /* [4129] */
    (xdc_Char)0x20,  /* [4130] */
    (xdc_Char)0x73,  /* [4131] */
    (xdc_Char)0x77,  /* [4132] */
    (xdc_Char)0x69,  /* [4133] */
    (xdc_Char)0x3a,  /* [4134] */
    (xdc_Char)0x20,  /* [4135] */
    (xdc_Char)0x30,  /* [4136] */
    (xdc_Char)0x78,  /* [4137] */
    (xdc_Char)0x25,  /* [4138] */
    (xdc_Char)0x78,  /* [4139] */
    (xdc_Char)0x2c,  /* [4140] */
    (xdc_Char)0x20,  /* [4141] */
    (xdc_Char)0x66,  /* [4142] */
    (xdc_Char)0x75,  /* [4143] */
    (xdc_Char)0x6e,  /* [4144] */
    (xdc_Char)0x63,  /* [4145] */
    (xdc_Char)0x3a,  /* [4146] */
    (xdc_Char)0x20,  /* [4147] */
    (xdc_Char)0x30,  /* [4148] */
    (xdc_Char)0x78,  /* [4149] */
    (xdc_Char)0x25,  /* [4150] */
    (xdc_Char)0x78,  /* [4151] */
    (xdc_Char)0x2c,  /* [4152] */
    (xdc_Char)0x20,  /* [4153] */
    (xdc_Char)0x70,  /* [4154] */
    (xdc_Char)0x72,  /* [4155] */
    (xdc_Char)0x69,  /* [4156] */
    (xdc_Char)0x3a,  /* [4157] */
    (xdc_Char)0x20,  /* [4158] */
    (xdc_Char)0x25,  /* [4159] */
    (xdc_Char)0x64,  /* [4160] */
    (xdc_Char)0x0,  /* [4161] */
    (xdc_Char)0x4c,  /* [4162] */
    (xdc_Char)0x4d,  /* [4163] */
    (xdc_Char)0x5f,  /* [4164] */
    (xdc_Char)0x73,  /* [4165] */
    (xdc_Char)0x77,  /* [4166] */
    (xdc_Char)0x69,  /* [4167] */
    (xdc_Char)0x74,  /* [4168] */
    (xdc_Char)0x63,  /* [4169] */
    (xdc_Char)0x68,  /* [4170] */
    (xdc_Char)0x3a,  /* [4171] */
    (xdc_Char)0x20,  /* [4172] */
    (xdc_Char)0x6f,  /* [4173] */
    (xdc_Char)0x6c,  /* [4174] */
    (xdc_Char)0x64,  /* [4175] */
    (xdc_Char)0x74,  /* [4176] */
    (xdc_Char)0x73,  /* [4177] */
    (xdc_Char)0x6b,  /* [4178] */
    (xdc_Char)0x3a,  /* [4179] */
    (xdc_Char)0x20,  /* [4180] */
    (xdc_Char)0x30,  /* [4181] */
    (xdc_Char)0x78,  /* [4182] */
    (xdc_Char)0x25,  /* [4183] */
    (xdc_Char)0x78,  /* [4184] */
    (xdc_Char)0x2c,  /* [4185] */
    (xdc_Char)0x20,  /* [4186] */
    (xdc_Char)0x6f,  /* [4187] */
    (xdc_Char)0x6c,  /* [4188] */
    (xdc_Char)0x64,  /* [4189] */
    (xdc_Char)0x66,  /* [4190] */
    (xdc_Char)0x75,  /* [4191] */
    (xdc_Char)0x6e,  /* [4192] */
    (xdc_Char)0x63,  /* [4193] */
    (xdc_Char)0x3a,  /* [4194] */
    (xdc_Char)0x20,  /* [4195] */
    (xdc_Char)0x30,  /* [4196] */
    (xdc_Char)0x78,  /* [4197] */
    (xdc_Char)0x25,  /* [4198] */
    (xdc_Char)0x78,  /* [4199] */
    (xdc_Char)0x2c,  /* [4200] */
    (xdc_Char)0x20,  /* [4201] */
    (xdc_Char)0x6e,  /* [4202] */
    (xdc_Char)0x65,  /* [4203] */
    (xdc_Char)0x77,  /* [4204] */
    (xdc_Char)0x74,  /* [4205] */
    (xdc_Char)0x73,  /* [4206] */
    (xdc_Char)0x6b,  /* [4207] */
    (xdc_Char)0x3a,  /* [4208] */
    (xdc_Char)0x20,  /* [4209] */
    (xdc_Char)0x30,  /* [4210] */
    (xdc_Char)0x78,  /* [4211] */
    (xdc_Char)0x25,  /* [4212] */
    (xdc_Char)0x78,  /* [4213] */
    (xdc_Char)0x2c,  /* [4214] */
    (xdc_Char)0x20,  /* [4215] */
    (xdc_Char)0x6e,  /* [4216] */
    (xdc_Char)0x65,  /* [4217] */
    (xdc_Char)0x77,  /* [4218] */
    (xdc_Char)0x66,  /* [4219] */
    (xdc_Char)0x75,  /* [4220] */
    (xdc_Char)0x6e,  /* [4221] */
    (xdc_Char)0x63,  /* [4222] */
    (xdc_Char)0x3a,  /* [4223] */
    (xdc_Char)0x20,  /* [4224] */
    (xdc_Char)0x30,  /* [4225] */
    (xdc_Char)0x78,  /* [4226] */
    (xdc_Char)0x25,  /* [4227] */
    (xdc_Char)0x78,  /* [4228] */
    (xdc_Char)0x0,  /* [4229] */
    (xdc_Char)0x4c,  /* [4230] */
    (xdc_Char)0x4d,  /* [4231] */
    (xdc_Char)0x5f,  /* [4232] */
    (xdc_Char)0x73,  /* [4233] */
    (xdc_Char)0x6c,  /* [4234] */
    (xdc_Char)0x65,  /* [4235] */
    (xdc_Char)0x65,  /* [4236] */
    (xdc_Char)0x70,  /* [4237] */
    (xdc_Char)0x3a,  /* [4238] */
    (xdc_Char)0x20,  /* [4239] */
    (xdc_Char)0x74,  /* [4240] */
    (xdc_Char)0x73,  /* [4241] */
    (xdc_Char)0x6b,  /* [4242] */
    (xdc_Char)0x3a,  /* [4243] */
    (xdc_Char)0x20,  /* [4244] */
    (xdc_Char)0x30,  /* [4245] */
    (xdc_Char)0x78,  /* [4246] */
    (xdc_Char)0x25,  /* [4247] */
    (xdc_Char)0x78,  /* [4248] */
    (xdc_Char)0x2c,  /* [4249] */
    (xdc_Char)0x20,  /* [4250] */
    (xdc_Char)0x66,  /* [4251] */
    (xdc_Char)0x75,  /* [4252] */
    (xdc_Char)0x6e,  /* [4253] */
    (xdc_Char)0x63,  /* [4254] */
    (xdc_Char)0x3a,  /* [4255] */
    (xdc_Char)0x20,  /* [4256] */
    (xdc_Char)0x30,  /* [4257] */
    (xdc_Char)0x78,  /* [4258] */
    (xdc_Char)0x25,  /* [4259] */
    (xdc_Char)0x78,  /* [4260] */
    (xdc_Char)0x2c,  /* [4261] */
    (xdc_Char)0x20,  /* [4262] */
    (xdc_Char)0x74,  /* [4263] */
    (xdc_Char)0x69,  /* [4264] */
    (xdc_Char)0x6d,  /* [4265] */
    (xdc_Char)0x65,  /* [4266] */
    (xdc_Char)0x6f,  /* [4267] */
    (xdc_Char)0x75,  /* [4268] */
    (xdc_Char)0x74,  /* [4269] */
    (xdc_Char)0x3a,  /* [4270] */
    (xdc_Char)0x20,  /* [4271] */
    (xdc_Char)0x25,  /* [4272] */
    (xdc_Char)0x64,  /* [4273] */
    (xdc_Char)0x0,  /* [4274] */
    (xdc_Char)0x4c,  /* [4275] */
    (xdc_Char)0x44,  /* [4276] */
    (xdc_Char)0x5f,  /* [4277] */
    (xdc_Char)0x72,  /* [4278] */
    (xdc_Char)0x65,  /* [4279] */
    (xdc_Char)0x61,  /* [4280] */
    (xdc_Char)0x64,  /* [4281] */
    (xdc_Char)0x79,  /* [4282] */
    (xdc_Char)0x3a,  /* [4283] */
    (xdc_Char)0x20,  /* [4284] */
    (xdc_Char)0x74,  /* [4285] */
    (xdc_Char)0x73,  /* [4286] */
    (xdc_Char)0x6b,  /* [4287] */
    (xdc_Char)0x3a,  /* [4288] */
    (xdc_Char)0x20,  /* [4289] */
    (xdc_Char)0x30,  /* [4290] */
    (xdc_Char)0x78,  /* [4291] */
    (xdc_Char)0x25,  /* [4292] */
    (xdc_Char)0x78,  /* [4293] */
    (xdc_Char)0x2c,  /* [4294] */
    (xdc_Char)0x20,  /* [4295] */
    (xdc_Char)0x66,  /* [4296] */
    (xdc_Char)0x75,  /* [4297] */
    (xdc_Char)0x6e,  /* [4298] */
    (xdc_Char)0x63,  /* [4299] */
    (xdc_Char)0x3a,  /* [4300] */
    (xdc_Char)0x20,  /* [4301] */
    (xdc_Char)0x30,  /* [4302] */
    (xdc_Char)0x78,  /* [4303] */
    (xdc_Char)0x25,  /* [4304] */
    (xdc_Char)0x78,  /* [4305] */
    (xdc_Char)0x2c,  /* [4306] */
    (xdc_Char)0x20,  /* [4307] */
    (xdc_Char)0x70,  /* [4308] */
    (xdc_Char)0x72,  /* [4309] */
    (xdc_Char)0x69,  /* [4310] */
    (xdc_Char)0x3a,  /* [4311] */
    (xdc_Char)0x20,  /* [4312] */
    (xdc_Char)0x25,  /* [4313] */
    (xdc_Char)0x64,  /* [4314] */
    (xdc_Char)0x0,  /* [4315] */
    (xdc_Char)0x4c,  /* [4316] */
    (xdc_Char)0x44,  /* [4317] */
    (xdc_Char)0x5f,  /* [4318] */
    (xdc_Char)0x62,  /* [4319] */
    (xdc_Char)0x6c,  /* [4320] */
    (xdc_Char)0x6f,  /* [4321] */
    (xdc_Char)0x63,  /* [4322] */
    (xdc_Char)0x6b,  /* [4323] */
    (xdc_Char)0x3a,  /* [4324] */
    (xdc_Char)0x20,  /* [4325] */
    (xdc_Char)0x74,  /* [4326] */
    (xdc_Char)0x73,  /* [4327] */
    (xdc_Char)0x6b,  /* [4328] */
    (xdc_Char)0x3a,  /* [4329] */
    (xdc_Char)0x20,  /* [4330] */
    (xdc_Char)0x30,  /* [4331] */
    (xdc_Char)0x78,  /* [4332] */
    (xdc_Char)0x25,  /* [4333] */
    (xdc_Char)0x78,  /* [4334] */
    (xdc_Char)0x2c,  /* [4335] */
    (xdc_Char)0x20,  /* [4336] */
    (xdc_Char)0x66,  /* [4337] */
    (xdc_Char)0x75,  /* [4338] */
    (xdc_Char)0x6e,  /* [4339] */
    (xdc_Char)0x63,  /* [4340] */
    (xdc_Char)0x3a,  /* [4341] */
    (xdc_Char)0x20,  /* [4342] */
    (xdc_Char)0x30,  /* [4343] */
    (xdc_Char)0x78,  /* [4344] */
    (xdc_Char)0x25,  /* [4345] */
    (xdc_Char)0x78,  /* [4346] */
    (xdc_Char)0x0,  /* [4347] */
    (xdc_Char)0x4c,  /* [4348] */
    (xdc_Char)0x4d,  /* [4349] */
    (xdc_Char)0x5f,  /* [4350] */
    (xdc_Char)0x79,  /* [4351] */
    (xdc_Char)0x69,  /* [4352] */
    (xdc_Char)0x65,  /* [4353] */
    (xdc_Char)0x6c,  /* [4354] */
    (xdc_Char)0x64,  /* [4355] */
    (xdc_Char)0x3a,  /* [4356] */
    (xdc_Char)0x20,  /* [4357] */
    (xdc_Char)0x74,  /* [4358] */
    (xdc_Char)0x73,  /* [4359] */
    (xdc_Char)0x6b,  /* [4360] */
    (xdc_Char)0x3a,  /* [4361] */
    (xdc_Char)0x20,  /* [4362] */
    (xdc_Char)0x30,  /* [4363] */
    (xdc_Char)0x78,  /* [4364] */
    (xdc_Char)0x25,  /* [4365] */
    (xdc_Char)0x78,  /* [4366] */
    (xdc_Char)0x2c,  /* [4367] */
    (xdc_Char)0x20,  /* [4368] */
    (xdc_Char)0x66,  /* [4369] */
    (xdc_Char)0x75,  /* [4370] */
    (xdc_Char)0x6e,  /* [4371] */
    (xdc_Char)0x63,  /* [4372] */
    (xdc_Char)0x3a,  /* [4373] */
    (xdc_Char)0x20,  /* [4374] */
    (xdc_Char)0x30,  /* [4375] */
    (xdc_Char)0x78,  /* [4376] */
    (xdc_Char)0x25,  /* [4377] */
    (xdc_Char)0x78,  /* [4378] */
    (xdc_Char)0x2c,  /* [4379] */
    (xdc_Char)0x20,  /* [4380] */
    (xdc_Char)0x63,  /* [4381] */
    (xdc_Char)0x75,  /* [4382] */
    (xdc_Char)0x72,  /* [4383] */
    (xdc_Char)0x72,  /* [4384] */
    (xdc_Char)0x54,  /* [4385] */
    (xdc_Char)0x68,  /* [4386] */
    (xdc_Char)0x72,  /* [4387] */
    (xdc_Char)0x65,  /* [4388] */
    (xdc_Char)0x61,  /* [4389] */
    (xdc_Char)0x64,  /* [4390] */
    (xdc_Char)0x3a,  /* [4391] */
    (xdc_Char)0x20,  /* [4392] */
    (xdc_Char)0x25,  /* [4393] */
    (xdc_Char)0x64,  /* [4394] */
    (xdc_Char)0x0,  /* [4395] */
    (xdc_Char)0x4c,  /* [4396] */
    (xdc_Char)0x4d,  /* [4397] */
    (xdc_Char)0x5f,  /* [4398] */
    (xdc_Char)0x73,  /* [4399] */
    (xdc_Char)0x65,  /* [4400] */
    (xdc_Char)0x74,  /* [4401] */
    (xdc_Char)0x50,  /* [4402] */
    (xdc_Char)0x72,  /* [4403] */
    (xdc_Char)0x69,  /* [4404] */
    (xdc_Char)0x3a,  /* [4405] */
    (xdc_Char)0x20,  /* [4406] */
    (xdc_Char)0x74,  /* [4407] */
    (xdc_Char)0x73,  /* [4408] */
    (xdc_Char)0x6b,  /* [4409] */
    (xdc_Char)0x3a,  /* [4410] */
    (xdc_Char)0x20,  /* [4411] */
    (xdc_Char)0x30,  /* [4412] */
    (xdc_Char)0x78,  /* [4413] */
    (xdc_Char)0x25,  /* [4414] */
    (xdc_Char)0x78,  /* [4415] */
    (xdc_Char)0x2c,  /* [4416] */
    (xdc_Char)0x20,  /* [4417] */
    (xdc_Char)0x66,  /* [4418] */
    (xdc_Char)0x75,  /* [4419] */
    (xdc_Char)0x6e,  /* [4420] */
    (xdc_Char)0x63,  /* [4421] */
    (xdc_Char)0x3a,  /* [4422] */
    (xdc_Char)0x20,  /* [4423] */
    (xdc_Char)0x30,  /* [4424] */
    (xdc_Char)0x78,  /* [4425] */
    (xdc_Char)0x25,  /* [4426] */
    (xdc_Char)0x78,  /* [4427] */
    (xdc_Char)0x2c,  /* [4428] */
    (xdc_Char)0x20,  /* [4429] */
    (xdc_Char)0x6f,  /* [4430] */
    (xdc_Char)0x6c,  /* [4431] */
    (xdc_Char)0x64,  /* [4432] */
    (xdc_Char)0x50,  /* [4433] */
    (xdc_Char)0x72,  /* [4434] */
    (xdc_Char)0x69,  /* [4435] */
    (xdc_Char)0x3a,  /* [4436] */
    (xdc_Char)0x20,  /* [4437] */
    (xdc_Char)0x25,  /* [4438] */
    (xdc_Char)0x64,  /* [4439] */
    (xdc_Char)0x2c,  /* [4440] */
    (xdc_Char)0x20,  /* [4441] */
    (xdc_Char)0x6e,  /* [4442] */
    (xdc_Char)0x65,  /* [4443] */
    (xdc_Char)0x77,  /* [4444] */
    (xdc_Char)0x50,  /* [4445] */
    (xdc_Char)0x72,  /* [4446] */
    (xdc_Char)0x69,  /* [4447] */
    (xdc_Char)0x20,  /* [4448] */
    (xdc_Char)0x25,  /* [4449] */
    (xdc_Char)0x64,  /* [4450] */
    (xdc_Char)0x0,  /* [4451] */
    (xdc_Char)0x4c,  /* [4452] */
    (xdc_Char)0x44,  /* [4453] */
    (xdc_Char)0x5f,  /* [4454] */
    (xdc_Char)0x65,  /* [4455] */
    (xdc_Char)0x78,  /* [4456] */
    (xdc_Char)0x69,  /* [4457] */
    (xdc_Char)0x74,  /* [4458] */
    (xdc_Char)0x3a,  /* [4459] */
    (xdc_Char)0x20,  /* [4460] */
    (xdc_Char)0x74,  /* [4461] */
    (xdc_Char)0x73,  /* [4462] */
    (xdc_Char)0x6b,  /* [4463] */
    (xdc_Char)0x3a,  /* [4464] */
    (xdc_Char)0x20,  /* [4465] */
    (xdc_Char)0x30,  /* [4466] */
    (xdc_Char)0x78,  /* [4467] */
    (xdc_Char)0x25,  /* [4468] */
    (xdc_Char)0x78,  /* [4469] */
    (xdc_Char)0x2c,  /* [4470] */
    (xdc_Char)0x20,  /* [4471] */
    (xdc_Char)0x66,  /* [4472] */
    (xdc_Char)0x75,  /* [4473] */
    (xdc_Char)0x6e,  /* [4474] */
    (xdc_Char)0x63,  /* [4475] */
    (xdc_Char)0x3a,  /* [4476] */
    (xdc_Char)0x20,  /* [4477] */
    (xdc_Char)0x30,  /* [4478] */
    (xdc_Char)0x78,  /* [4479] */
    (xdc_Char)0x25,  /* [4480] */
    (xdc_Char)0x78,  /* [4481] */
    (xdc_Char)0x0,  /* [4482] */
    (xdc_Char)0x4c,  /* [4483] */
    (xdc_Char)0x4d,  /* [4484] */
    (xdc_Char)0x5f,  /* [4485] */
    (xdc_Char)0x73,  /* [4486] */
    (xdc_Char)0x65,  /* [4487] */
    (xdc_Char)0x74,  /* [4488] */
    (xdc_Char)0x41,  /* [4489] */
    (xdc_Char)0x66,  /* [4490] */
    (xdc_Char)0x66,  /* [4491] */
    (xdc_Char)0x69,  /* [4492] */
    (xdc_Char)0x6e,  /* [4493] */
    (xdc_Char)0x69,  /* [4494] */
    (xdc_Char)0x74,  /* [4495] */
    (xdc_Char)0x79,  /* [4496] */
    (xdc_Char)0x3a,  /* [4497] */
    (xdc_Char)0x20,  /* [4498] */
    (xdc_Char)0x74,  /* [4499] */
    (xdc_Char)0x73,  /* [4500] */
    (xdc_Char)0x6b,  /* [4501] */
    (xdc_Char)0x3a,  /* [4502] */
    (xdc_Char)0x20,  /* [4503] */
    (xdc_Char)0x30,  /* [4504] */
    (xdc_Char)0x78,  /* [4505] */
    (xdc_Char)0x25,  /* [4506] */
    (xdc_Char)0x78,  /* [4507] */
    (xdc_Char)0x2c,  /* [4508] */
    (xdc_Char)0x20,  /* [4509] */
    (xdc_Char)0x66,  /* [4510] */
    (xdc_Char)0x75,  /* [4511] */
    (xdc_Char)0x6e,  /* [4512] */
    (xdc_Char)0x63,  /* [4513] */
    (xdc_Char)0x3a,  /* [4514] */
    (xdc_Char)0x20,  /* [4515] */
    (xdc_Char)0x30,  /* [4516] */
    (xdc_Char)0x78,  /* [4517] */
    (xdc_Char)0x25,  /* [4518] */
    (xdc_Char)0x78,  /* [4519] */
    (xdc_Char)0x2c,  /* [4520] */
    (xdc_Char)0x20,  /* [4521] */
    (xdc_Char)0x6f,  /* [4522] */
    (xdc_Char)0x6c,  /* [4523] */
    (xdc_Char)0x64,  /* [4524] */
    (xdc_Char)0x43,  /* [4525] */
    (xdc_Char)0x6f,  /* [4526] */
    (xdc_Char)0x72,  /* [4527] */
    (xdc_Char)0x65,  /* [4528] */
    (xdc_Char)0x3a,  /* [4529] */
    (xdc_Char)0x20,  /* [4530] */
    (xdc_Char)0x25,  /* [4531] */
    (xdc_Char)0x64,  /* [4532] */
    (xdc_Char)0x2c,  /* [4533] */
    (xdc_Char)0x20,  /* [4534] */
    (xdc_Char)0x6f,  /* [4535] */
    (xdc_Char)0x6c,  /* [4536] */
    (xdc_Char)0x64,  /* [4537] */
    (xdc_Char)0x41,  /* [4538] */
    (xdc_Char)0x66,  /* [4539] */
    (xdc_Char)0x66,  /* [4540] */
    (xdc_Char)0x69,  /* [4541] */
    (xdc_Char)0x6e,  /* [4542] */
    (xdc_Char)0x69,  /* [4543] */
    (xdc_Char)0x74,  /* [4544] */
    (xdc_Char)0x79,  /* [4545] */
    (xdc_Char)0x20,  /* [4546] */
    (xdc_Char)0x25,  /* [4547] */
    (xdc_Char)0x64,  /* [4548] */
    (xdc_Char)0x2c,  /* [4549] */
    (xdc_Char)0x20,  /* [4550] */
    (xdc_Char)0x6e,  /* [4551] */
    (xdc_Char)0x65,  /* [4552] */
    (xdc_Char)0x77,  /* [4553] */
    (xdc_Char)0x41,  /* [4554] */
    (xdc_Char)0x66,  /* [4555] */
    (xdc_Char)0x66,  /* [4556] */
    (xdc_Char)0x69,  /* [4557] */
    (xdc_Char)0x6e,  /* [4558] */
    (xdc_Char)0x69,  /* [4559] */
    (xdc_Char)0x74,  /* [4560] */
    (xdc_Char)0x79,  /* [4561] */
    (xdc_Char)0x20,  /* [4562] */
    (xdc_Char)0x25,  /* [4563] */
    (xdc_Char)0x64,  /* [4564] */
    (xdc_Char)0x0,  /* [4565] */
    (xdc_Char)0x4c,  /* [4566] */
    (xdc_Char)0x44,  /* [4567] */
    (xdc_Char)0x5f,  /* [4568] */
    (xdc_Char)0x73,  /* [4569] */
    (xdc_Char)0x63,  /* [4570] */
    (xdc_Char)0x68,  /* [4571] */
    (xdc_Char)0x65,  /* [4572] */
    (xdc_Char)0x64,  /* [4573] */
    (xdc_Char)0x75,  /* [4574] */
    (xdc_Char)0x6c,  /* [4575] */
    (xdc_Char)0x65,  /* [4576] */
    (xdc_Char)0x3a,  /* [4577] */
    (xdc_Char)0x20,  /* [4578] */
    (xdc_Char)0x63,  /* [4579] */
    (xdc_Char)0x6f,  /* [4580] */
    (xdc_Char)0x72,  /* [4581] */
    (xdc_Char)0x65,  /* [4582] */
    (xdc_Char)0x49,  /* [4583] */
    (xdc_Char)0x64,  /* [4584] */
    (xdc_Char)0x3a,  /* [4585] */
    (xdc_Char)0x20,  /* [4586] */
    (xdc_Char)0x25,  /* [4587] */
    (xdc_Char)0x64,  /* [4588] */
    (xdc_Char)0x2c,  /* [4589] */
    (xdc_Char)0x20,  /* [4590] */
    (xdc_Char)0x77,  /* [4591] */
    (xdc_Char)0x6f,  /* [4592] */
    (xdc_Char)0x72,  /* [4593] */
    (xdc_Char)0x6b,  /* [4594] */
    (xdc_Char)0x46,  /* [4595] */
    (xdc_Char)0x6c,  /* [4596] */
    (xdc_Char)0x61,  /* [4597] */
    (xdc_Char)0x67,  /* [4598] */
    (xdc_Char)0x3a,  /* [4599] */
    (xdc_Char)0x20,  /* [4600] */
    (xdc_Char)0x25,  /* [4601] */
    (xdc_Char)0x64,  /* [4602] */
    (xdc_Char)0x2c,  /* [4603] */
    (xdc_Char)0x20,  /* [4604] */
    (xdc_Char)0x63,  /* [4605] */
    (xdc_Char)0x75,  /* [4606] */
    (xdc_Char)0x72,  /* [4607] */
    (xdc_Char)0x53,  /* [4608] */
    (xdc_Char)0x65,  /* [4609] */
    (xdc_Char)0x74,  /* [4610] */
    (xdc_Char)0x4c,  /* [4611] */
    (xdc_Char)0x6f,  /* [4612] */
    (xdc_Char)0x63,  /* [4613] */
    (xdc_Char)0x61,  /* [4614] */
    (xdc_Char)0x6c,  /* [4615] */
    (xdc_Char)0x3a,  /* [4616] */
    (xdc_Char)0x20,  /* [4617] */
    (xdc_Char)0x25,  /* [4618] */
    (xdc_Char)0x64,  /* [4619] */
    (xdc_Char)0x2c,  /* [4620] */
    (xdc_Char)0x20,  /* [4621] */
    (xdc_Char)0x63,  /* [4622] */
    (xdc_Char)0x75,  /* [4623] */
    (xdc_Char)0x72,  /* [4624] */
    (xdc_Char)0x53,  /* [4625] */
    (xdc_Char)0x65,  /* [4626] */
    (xdc_Char)0x74,  /* [4627] */
    (xdc_Char)0x58,  /* [4628] */
    (xdc_Char)0x3a,  /* [4629] */
    (xdc_Char)0x20,  /* [4630] */
    (xdc_Char)0x25,  /* [4631] */
    (xdc_Char)0x64,  /* [4632] */
    (xdc_Char)0x2c,  /* [4633] */
    (xdc_Char)0x20,  /* [4634] */
    (xdc_Char)0x63,  /* [4635] */
    (xdc_Char)0x75,  /* [4636] */
    (xdc_Char)0x72,  /* [4637] */
    (xdc_Char)0x4d,  /* [4638] */
    (xdc_Char)0x61,  /* [4639] */
    (xdc_Char)0x73,  /* [4640] */
    (xdc_Char)0x6b,  /* [4641] */
    (xdc_Char)0x4c,  /* [4642] */
    (xdc_Char)0x6f,  /* [4643] */
    (xdc_Char)0x63,  /* [4644] */
    (xdc_Char)0x61,  /* [4645] */
    (xdc_Char)0x6c,  /* [4646] */
    (xdc_Char)0x3a,  /* [4647] */
    (xdc_Char)0x20,  /* [4648] */
    (xdc_Char)0x25,  /* [4649] */
    (xdc_Char)0x64,  /* [4650] */
    (xdc_Char)0x0,  /* [4651] */
    (xdc_Char)0x4c,  /* [4652] */
    (xdc_Char)0x44,  /* [4653] */
    (xdc_Char)0x5f,  /* [4654] */
    (xdc_Char)0x6e,  /* [4655] */
    (xdc_Char)0x6f,  /* [4656] */
    (xdc_Char)0x57,  /* [4657] */
    (xdc_Char)0x6f,  /* [4658] */
    (xdc_Char)0x72,  /* [4659] */
    (xdc_Char)0x6b,  /* [4660] */
    (xdc_Char)0x3a,  /* [4661] */
    (xdc_Char)0x20,  /* [4662] */
    (xdc_Char)0x63,  /* [4663] */
    (xdc_Char)0x6f,  /* [4664] */
    (xdc_Char)0x72,  /* [4665] */
    (xdc_Char)0x65,  /* [4666] */
    (xdc_Char)0x49,  /* [4667] */
    (xdc_Char)0x64,  /* [4668] */
    (xdc_Char)0x3a,  /* [4669] */
    (xdc_Char)0x20,  /* [4670] */
    (xdc_Char)0x25,  /* [4671] */
    (xdc_Char)0x64,  /* [4672] */
    (xdc_Char)0x2c,  /* [4673] */
    (xdc_Char)0x20,  /* [4674] */
    (xdc_Char)0x63,  /* [4675] */
    (xdc_Char)0x75,  /* [4676] */
    (xdc_Char)0x72,  /* [4677] */
    (xdc_Char)0x53,  /* [4678] */
    (xdc_Char)0x65,  /* [4679] */
    (xdc_Char)0x74,  /* [4680] */
    (xdc_Char)0x4c,  /* [4681] */
    (xdc_Char)0x6f,  /* [4682] */
    (xdc_Char)0x63,  /* [4683] */
    (xdc_Char)0x61,  /* [4684] */
    (xdc_Char)0x6c,  /* [4685] */
    (xdc_Char)0x3a,  /* [4686] */
    (xdc_Char)0x20,  /* [4687] */
    (xdc_Char)0x25,  /* [4688] */
    (xdc_Char)0x64,  /* [4689] */
    (xdc_Char)0x2c,  /* [4690] */
    (xdc_Char)0x20,  /* [4691] */
    (xdc_Char)0x63,  /* [4692] */
    (xdc_Char)0x75,  /* [4693] */
    (xdc_Char)0x72,  /* [4694] */
    (xdc_Char)0x53,  /* [4695] */
    (xdc_Char)0x65,  /* [4696] */
    (xdc_Char)0x74,  /* [4697] */
    (xdc_Char)0x58,  /* [4698] */
    (xdc_Char)0x3a,  /* [4699] */
    (xdc_Char)0x20,  /* [4700] */
    (xdc_Char)0x25,  /* [4701] */
    (xdc_Char)0x3a,  /* [4702] */
    (xdc_Char)0x64,  /* [4703] */
    (xdc_Char)0x2c,  /* [4704] */
    (xdc_Char)0x20,  /* [4705] */
    (xdc_Char)0x63,  /* [4706] */
    (xdc_Char)0x75,  /* [4707] */
    (xdc_Char)0x72,  /* [4708] */
    (xdc_Char)0x4d,  /* [4709] */
    (xdc_Char)0x61,  /* [4710] */
    (xdc_Char)0x73,  /* [4711] */
    (xdc_Char)0x6b,  /* [4712] */
    (xdc_Char)0x4c,  /* [4713] */
    (xdc_Char)0x6f,  /* [4714] */
    (xdc_Char)0x63,  /* [4715] */
    (xdc_Char)0x61,  /* [4716] */
    (xdc_Char)0x6c,  /* [4717] */
    (xdc_Char)0x3a,  /* [4718] */
    (xdc_Char)0x20,  /* [4719] */
    (xdc_Char)0x25,  /* [4720] */
    (xdc_Char)0x64,  /* [4721] */
    (xdc_Char)0x0,  /* [4722] */
    (xdc_Char)0x78,  /* [4723] */
    (xdc_Char)0x64,  /* [4724] */
    (xdc_Char)0x63,  /* [4725] */
    (xdc_Char)0x2e,  /* [4726] */
    (xdc_Char)0x0,  /* [4727] */
    (xdc_Char)0x72,  /* [4728] */
    (xdc_Char)0x75,  /* [4729] */
    (xdc_Char)0x6e,  /* [4730] */
    (xdc_Char)0x74,  /* [4731] */
    (xdc_Char)0x69,  /* [4732] */
    (xdc_Char)0x6d,  /* [4733] */
    (xdc_Char)0x65,  /* [4734] */
    (xdc_Char)0x2e,  /* [4735] */
    (xdc_Char)0x0,  /* [4736] */
    (xdc_Char)0x41,  /* [4737] */
    (xdc_Char)0x73,  /* [4738] */
    (xdc_Char)0x73,  /* [4739] */
    (xdc_Char)0x65,  /* [4740] */
    (xdc_Char)0x72,  /* [4741] */
    (xdc_Char)0x74,  /* [4742] */
    (xdc_Char)0x0,  /* [4743] */
    (xdc_Char)0x43,  /* [4744] */
    (xdc_Char)0x6f,  /* [4745] */
    (xdc_Char)0x72,  /* [4746] */
    (xdc_Char)0x65,  /* [4747] */
    (xdc_Char)0x0,  /* [4748] */
    (xdc_Char)0x44,  /* [4749] */
    (xdc_Char)0x65,  /* [4750] */
    (xdc_Char)0x66,  /* [4751] */
    (xdc_Char)0x61,  /* [4752] */
    (xdc_Char)0x75,  /* [4753] */
    (xdc_Char)0x6c,  /* [4754] */
    (xdc_Char)0x74,  /* [4755] */
    (xdc_Char)0x73,  /* [4756] */
    (xdc_Char)0x0,  /* [4757] */
    (xdc_Char)0x44,  /* [4758] */
    (xdc_Char)0x69,  /* [4759] */
    (xdc_Char)0x61,  /* [4760] */
    (xdc_Char)0x67,  /* [4761] */
    (xdc_Char)0x73,  /* [4762] */
    (xdc_Char)0x0,  /* [4763] */
    (xdc_Char)0x45,  /* [4764] */
    (xdc_Char)0x72,  /* [4765] */
    (xdc_Char)0x72,  /* [4766] */
    (xdc_Char)0x6f,  /* [4767] */
    (xdc_Char)0x72,  /* [4768] */
    (xdc_Char)0x0,  /* [4769] */
    (xdc_Char)0x47,  /* [4770] */
    (xdc_Char)0x61,  /* [4771] */
    (xdc_Char)0x74,  /* [4772] */
    (xdc_Char)0x65,  /* [4773] */
    (xdc_Char)0x0,  /* [4774] */
    (xdc_Char)0x4c,  /* [4775] */
    (xdc_Char)0x6f,  /* [4776] */
    (xdc_Char)0x67,  /* [4777] */
    (xdc_Char)0x0,  /* [4778] */
    (xdc_Char)0x4d,  /* [4779] */
    (xdc_Char)0x61,  /* [4780] */
    (xdc_Char)0x69,  /* [4781] */
    (xdc_Char)0x6e,  /* [4782] */
    (xdc_Char)0x0,  /* [4783] */
    (xdc_Char)0x4d,  /* [4784] */
    (xdc_Char)0x65,  /* [4785] */
    (xdc_Char)0x6d,  /* [4786] */
    (xdc_Char)0x6f,  /* [4787] */
    (xdc_Char)0x72,  /* [4788] */
    (xdc_Char)0x79,  /* [4789] */
    (xdc_Char)0x0,  /* [4790] */
    (xdc_Char)0x52,  /* [4791] */
    (xdc_Char)0x65,  /* [4792] */
    (xdc_Char)0x67,  /* [4793] */
    (xdc_Char)0x69,  /* [4794] */
    (xdc_Char)0x73,  /* [4795] */
    (xdc_Char)0x74,  /* [4796] */
    (xdc_Char)0x72,  /* [4797] */
    (xdc_Char)0x79,  /* [4798] */
    (xdc_Char)0x0,  /* [4799] */
    (xdc_Char)0x53,  /* [4800] */
    (xdc_Char)0x74,  /* [4801] */
    (xdc_Char)0x61,  /* [4802] */
    (xdc_Char)0x72,  /* [4803] */
    (xdc_Char)0x74,  /* [4804] */
    (xdc_Char)0x75,  /* [4805] */
    (xdc_Char)0x70,  /* [4806] */
    (xdc_Char)0x0,  /* [4807] */
    (xdc_Char)0x53,  /* [4808] */
    (xdc_Char)0x79,  /* [4809] */
    (xdc_Char)0x73,  /* [4810] */
    (xdc_Char)0x74,  /* [4811] */
    (xdc_Char)0x65,  /* [4812] */
    (xdc_Char)0x6d,  /* [4813] */
    (xdc_Char)0x0,  /* [4814] */
    (xdc_Char)0x53,  /* [4815] */
    (xdc_Char)0x79,  /* [4816] */
    (xdc_Char)0x73,  /* [4817] */
    (xdc_Char)0x4d,  /* [4818] */
    (xdc_Char)0x69,  /* [4819] */
    (xdc_Char)0x6e,  /* [4820] */
    (xdc_Char)0x0,  /* [4821] */
    (xdc_Char)0x54,  /* [4822] */
    (xdc_Char)0x65,  /* [4823] */
    (xdc_Char)0x78,  /* [4824] */
    (xdc_Char)0x74,  /* [4825] */
    (xdc_Char)0x0,  /* [4826] */
    (xdc_Char)0x74,  /* [4827] */
    (xdc_Char)0x69,  /* [4828] */
    (xdc_Char)0x2e,  /* [4829] */
    (xdc_Char)0x0,  /* [4830] */
    (xdc_Char)0x73,  /* [4831] */
    (xdc_Char)0x79,  /* [4832] */
    (xdc_Char)0x73,  /* [4833] */
    (xdc_Char)0x62,  /* [4834] */
    (xdc_Char)0x69,  /* [4835] */
    (xdc_Char)0x6f,  /* [4836] */
    (xdc_Char)0x73,  /* [4837] */
    (xdc_Char)0x2e,  /* [4838] */
    (xdc_Char)0x0,  /* [4839] */
    (xdc_Char)0x66,  /* [4840] */
    (xdc_Char)0x61,  /* [4841] */
    (xdc_Char)0x6d,  /* [4842] */
    (xdc_Char)0x69,  /* [4843] */
    (xdc_Char)0x6c,  /* [4844] */
    (xdc_Char)0x79,  /* [4845] */
    (xdc_Char)0x2e,  /* [4846] */
    (xdc_Char)0x0,  /* [4847] */
    (xdc_Char)0x63,  /* [4848] */
    (xdc_Char)0x36,  /* [4849] */
    (xdc_Char)0x34,  /* [4850] */
    (xdc_Char)0x70,  /* [4851] */
    (xdc_Char)0x2e,  /* [4852] */
    (xdc_Char)0x0,  /* [4853] */
    (xdc_Char)0x45,  /* [4854] */
    (xdc_Char)0x78,  /* [4855] */
    (xdc_Char)0x63,  /* [4856] */
    (xdc_Char)0x65,  /* [4857] */
    (xdc_Char)0x70,  /* [4858] */
    (xdc_Char)0x74,  /* [4859] */
    (xdc_Char)0x69,  /* [4860] */
    (xdc_Char)0x6f,  /* [4861] */
    (xdc_Char)0x6e,  /* [4862] */
    (xdc_Char)0x0,  /* [4863] */
    (xdc_Char)0x48,  /* [4864] */
    (xdc_Char)0x77,  /* [4865] */
    (xdc_Char)0x69,  /* [4866] */
    (xdc_Char)0x0,  /* [4867] */
    (xdc_Char)0x43,  /* [4868] */
    (xdc_Char)0x61,  /* [4869] */
    (xdc_Char)0x63,  /* [4870] */
    (xdc_Char)0x68,  /* [4871] */
    (xdc_Char)0x65,  /* [4872] */
    (xdc_Char)0x0,  /* [4873] */
    (xdc_Char)0x42,  /* [4874] */
    (xdc_Char)0x49,  /* [4875] */
    (xdc_Char)0x4f,  /* [4876] */
    (xdc_Char)0x53,  /* [4877] */
    (xdc_Char)0x0,  /* [4878] */
    (xdc_Char)0x68,  /* [4879] */
    (xdc_Char)0x61,  /* [4880] */
    (xdc_Char)0x6c,  /* [4881] */
    (xdc_Char)0x2e,  /* [4882] */
    (xdc_Char)0x0,  /* [4883] */
    (xdc_Char)0x54,  /* [4884] */
    (xdc_Char)0x69,  /* [4885] */
    (xdc_Char)0x6d,  /* [4886] */
    (xdc_Char)0x65,  /* [4887] */
    (xdc_Char)0x72,  /* [4888] */
    (xdc_Char)0x0,  /* [4889] */
    (xdc_Char)0x6b,  /* [4890] */
    (xdc_Char)0x6e,  /* [4891] */
    (xdc_Char)0x6c,  /* [4892] */
    (xdc_Char)0x2e,  /* [4893] */
    (xdc_Char)0x0,  /* [4894] */
    (xdc_Char)0x43,  /* [4895] */
    (xdc_Char)0x6c,  /* [4896] */
    (xdc_Char)0x6f,  /* [4897] */
    (xdc_Char)0x63,  /* [4898] */
    (xdc_Char)0x6b,  /* [4899] */
    (xdc_Char)0x0,  /* [4900] */
    (xdc_Char)0x49,  /* [4901] */
    (xdc_Char)0x64,  /* [4902] */
    (xdc_Char)0x6c,  /* [4903] */
    (xdc_Char)0x65,  /* [4904] */
    (xdc_Char)0x0,  /* [4905] */
    (xdc_Char)0x49,  /* [4906] */
    (xdc_Char)0x6e,  /* [4907] */
    (xdc_Char)0x74,  /* [4908] */
    (xdc_Char)0x72,  /* [4909] */
    (xdc_Char)0x69,  /* [4910] */
    (xdc_Char)0x6e,  /* [4911] */
    (xdc_Char)0x73,  /* [4912] */
    (xdc_Char)0x69,  /* [4913] */
    (xdc_Char)0x63,  /* [4914] */
    (xdc_Char)0x73,  /* [4915] */
    (xdc_Char)0x0,  /* [4916] */
    (xdc_Char)0x51,  /* [4917] */
    (xdc_Char)0x75,  /* [4918] */
    (xdc_Char)0x65,  /* [4919] */
    (xdc_Char)0x75,  /* [4920] */
    (xdc_Char)0x65,  /* [4921] */
    (xdc_Char)0x0,  /* [4922] */
    (xdc_Char)0x53,  /* [4923] */
    (xdc_Char)0x65,  /* [4924] */
    (xdc_Char)0x6d,  /* [4925] */
    (xdc_Char)0x61,  /* [4926] */
    (xdc_Char)0x70,  /* [4927] */
    (xdc_Char)0x68,  /* [4928] */
    (xdc_Char)0x6f,  /* [4929] */
    (xdc_Char)0x72,  /* [4930] */
    (xdc_Char)0x65,  /* [4931] */
    (xdc_Char)0x0,  /* [4932] */
    (xdc_Char)0x53,  /* [4933] */
    (xdc_Char)0x77,  /* [4934] */
    (xdc_Char)0x69,  /* [4935] */
    (xdc_Char)0x0,  /* [4936] */
    (xdc_Char)0x54,  /* [4937] */
    (xdc_Char)0x61,  /* [4938] */
    (xdc_Char)0x73,  /* [4939] */
    (xdc_Char)0x6b,  /* [4940] */
    (xdc_Char)0x0,  /* [4941] */
    (xdc_Char)0x67,  /* [4942] */
    (xdc_Char)0x61,  /* [4943] */
    (xdc_Char)0x74,  /* [4944] */
    (xdc_Char)0x65,  /* [4945] */
    (xdc_Char)0x73,  /* [4946] */
    (xdc_Char)0x2e,  /* [4947] */
    (xdc_Char)0x0,  /* [4948] */
    (xdc_Char)0x47,  /* [4949] */
    (xdc_Char)0x61,  /* [4950] */
    (xdc_Char)0x74,  /* [4951] */
    (xdc_Char)0x65,  /* [4952] */
    (xdc_Char)0x48,  /* [4953] */
    (xdc_Char)0x77,  /* [4954] */
    (xdc_Char)0x69,  /* [4955] */
    (xdc_Char)0x0,  /* [4956] */
    (xdc_Char)0x47,  /* [4957] */
    (xdc_Char)0x61,  /* [4958] */
    (xdc_Char)0x74,  /* [4959] */
    (xdc_Char)0x65,  /* [4960] */
    (xdc_Char)0x4d,  /* [4961] */
    (xdc_Char)0x75,  /* [4962] */
    (xdc_Char)0x74,  /* [4963] */
    (xdc_Char)0x65,  /* [4964] */
    (xdc_Char)0x78,  /* [4965] */
    (xdc_Char)0x0,  /* [4966] */
    (xdc_Char)0x63,  /* [4967] */
    (xdc_Char)0x36,  /* [4968] */
    (xdc_Char)0x32,  /* [4969] */
    (xdc_Char)0x2e,  /* [4970] */
    (xdc_Char)0x0,  /* [4971] */
    (xdc_Char)0x54,  /* [4972] */
    (xdc_Char)0x61,  /* [4973] */
    (xdc_Char)0x73,  /* [4974] */
    (xdc_Char)0x6b,  /* [4975] */
    (xdc_Char)0x53,  /* [4976] */
    (xdc_Char)0x75,  /* [4977] */
    (xdc_Char)0x70,  /* [4978] */
    (xdc_Char)0x70,  /* [4979] */
    (xdc_Char)0x6f,  /* [4980] */
    (xdc_Char)0x72,  /* [4981] */
    (xdc_Char)0x74,  /* [4982] */
    (xdc_Char)0x0,  /* [4983] */
    (xdc_Char)0x49,  /* [4984] */
    (xdc_Char)0x6e,  /* [4985] */
    (xdc_Char)0x74,  /* [4986] */
    (xdc_Char)0x72,  /* [4987] */
    (xdc_Char)0x69,  /* [4988] */
    (xdc_Char)0x6e,  /* [4989] */
    (xdc_Char)0x73,  /* [4990] */
    (xdc_Char)0x69,  /* [4991] */
    (xdc_Char)0x63,  /* [4992] */
    (xdc_Char)0x73,  /* [4993] */
    (xdc_Char)0x53,  /* [4994] */
    (xdc_Char)0x75,  /* [4995] */
    (xdc_Char)0x70,  /* [4996] */
    (xdc_Char)0x70,  /* [4997] */
    (xdc_Char)0x6f,  /* [4998] */
    (xdc_Char)0x72,  /* [4999] */
    (xdc_Char)0x74,  /* [5000] */
    (xdc_Char)0x0,  /* [5001] */
    (xdc_Char)0x74,  /* [5002] */
    (xdc_Char)0x69,  /* [5003] */
    (xdc_Char)0x6d,  /* [5004] */
    (xdc_Char)0x65,  /* [5005] */
    (xdc_Char)0x72,  /* [5006] */
    (xdc_Char)0x73,  /* [5007] */
    (xdc_Char)0x2e,  /* [5008] */
    (xdc_Char)0x0,  /* [5009] */
    (xdc_Char)0x74,  /* [5010] */
    (xdc_Char)0x69,  /* [5011] */
    (xdc_Char)0x6d,  /* [5012] */
    (xdc_Char)0x65,  /* [5013] */
    (xdc_Char)0x72,  /* [5014] */
    (xdc_Char)0x36,  /* [5015] */
    (xdc_Char)0x34,  /* [5016] */
    (xdc_Char)0x2e,  /* [5017] */
    (xdc_Char)0x0,  /* [5018] */
    (xdc_Char)0x64,  /* [5019] */
    (xdc_Char)0x6d,  /* [5020] */
    (xdc_Char)0x36,  /* [5021] */
    (xdc_Char)0x34,  /* [5022] */
    (xdc_Char)0x33,  /* [5023] */
    (xdc_Char)0x37,  /* [5024] */
    (xdc_Char)0x2e,  /* [5025] */
    (xdc_Char)0x0,  /* [5026] */
    (xdc_Char)0x54,  /* [5027] */
    (xdc_Char)0x69,  /* [5028] */
    (xdc_Char)0x6d,  /* [5029] */
    (xdc_Char)0x65,  /* [5030] */
    (xdc_Char)0x72,  /* [5031] */
    (xdc_Char)0x53,  /* [5032] */
    (xdc_Char)0x75,  /* [5033] */
    (xdc_Char)0x70,  /* [5034] */
    (xdc_Char)0x70,  /* [5035] */
    (xdc_Char)0x6f,  /* [5036] */
    (xdc_Char)0x72,  /* [5037] */
    (xdc_Char)0x74,  /* [5038] */
    (xdc_Char)0x0,  /* [5039] */
    (xdc_Char)0x68,  /* [5040] */
    (xdc_Char)0x65,  /* [5041] */
    (xdc_Char)0x61,  /* [5042] */
    (xdc_Char)0x70,  /* [5043] */
    (xdc_Char)0x73,  /* [5044] */
    (xdc_Char)0x2e,  /* [5045] */
    (xdc_Char)0x0,  /* [5046] */
    (xdc_Char)0x48,  /* [5047] */
    (xdc_Char)0x65,  /* [5048] */
    (xdc_Char)0x61,  /* [5049] */
    (xdc_Char)0x70,  /* [5050] */
    (xdc_Char)0x4d,  /* [5051] */
    (xdc_Char)0x65,  /* [5052] */
    (xdc_Char)0x6d,  /* [5053] */
    (xdc_Char)0x0,  /* [5054] */
    (xdc_Char)0x74,  /* [5055] */
    (xdc_Char)0x69,  /* [5056] */
    (xdc_Char)0x2e,  /* [5057] */
    (xdc_Char)0x73,  /* [5058] */
    (xdc_Char)0x79,  /* [5059] */
    (xdc_Char)0x73,  /* [5060] */
    (xdc_Char)0x62,  /* [5061] */
    (xdc_Char)0x69,  /* [5062] */
    (xdc_Char)0x6f,  /* [5063] */
    (xdc_Char)0x73,  /* [5064] */
    (xdc_Char)0x2e,  /* [5065] */
    (xdc_Char)0x6b,  /* [5066] */
    (xdc_Char)0x6e,  /* [5067] */
    (xdc_Char)0x6c,  /* [5068] */
    (xdc_Char)0x2e,  /* [5069] */
    (xdc_Char)0x54,  /* [5070] */
    (xdc_Char)0x61,  /* [5071] */
    (xdc_Char)0x73,  /* [5072] */
    (xdc_Char)0x6b,  /* [5073] */
    (xdc_Char)0x2e,  /* [5074] */
    (xdc_Char)0x49,  /* [5075] */
    (xdc_Char)0x64,  /* [5076] */
    (xdc_Char)0x6c,  /* [5077] */
    (xdc_Char)0x65,  /* [5078] */
    (xdc_Char)0x54,  /* [5079] */
    (xdc_Char)0x61,  /* [5080] */
    (xdc_Char)0x73,  /* [5081] */
    (xdc_Char)0x6b,  /* [5082] */
    (xdc_Char)0x0,  /* [5083] */
};

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[47] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0x1273,  /* left */
        (xdc_Bits16)0x1278,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1281,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1288,  /* right */
    },  /* [3] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x128d,  /* right */
    },  /* [4] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1296,  /* right */
    },  /* [5] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x129c,  /* right */
    },  /* [6] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x12a2,  /* right */
    },  /* [7] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x12a7,  /* right */
    },  /* [8] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x12ab,  /* right */
    },  /* [9] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x12b0,  /* right */
    },  /* [10] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x12b7,  /* right */
    },  /* [11] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x12c0,  /* right */
    },  /* [12] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x12c8,  /* right */
    },  /* [13] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x12cf,  /* right */
    },  /* [14] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x12d6,  /* right */
    },  /* [15] */
    {
        (xdc_Bits16)0x12db,  /* left */
        (xdc_Bits16)0x12df,  /* right */
    },  /* [16] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x12e8,  /* right */
    },  /* [17] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x12f0,  /* right */
    },  /* [18] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x12f6,  /* right */
    },  /* [19] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1300,  /* right */
    },  /* [20] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1304,  /* right */
    },  /* [21] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x130a,  /* right */
    },  /* [22] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x130f,  /* right */
    },  /* [23] */
    {
        (xdc_Bits16)0x8017,  /* left */
        (xdc_Bits16)0x1300,  /* right */
    },  /* [24] */
    {
        (xdc_Bits16)0x8017,  /* left */
        (xdc_Bits16)0x1314,  /* right */
    },  /* [25] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x131a,  /* right */
    },  /* [26] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x131f,  /* right */
    },  /* [27] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x1325,  /* right */
    },  /* [28] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x132a,  /* right */
    },  /* [29] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x1335,  /* right */
    },  /* [30] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x133b,  /* right */
    },  /* [31] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x1345,  /* right */
    },  /* [32] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x1349,  /* right */
    },  /* [33] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x134e,  /* right */
    },  /* [34] */
    {
        (xdc_Bits16)0x8022,  /* left */
        (xdc_Bits16)0x1355,  /* right */
    },  /* [35] */
    {
        (xdc_Bits16)0x8022,  /* left */
        (xdc_Bits16)0x135d,  /* right */
    },  /* [36] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x1367,  /* right */
    },  /* [37] */
    {
        (xdc_Bits16)0x8025,  /* left */
        (xdc_Bits16)0x136c,  /* right */
    },  /* [38] */
    {
        (xdc_Bits16)0x8025,  /* left */
        (xdc_Bits16)0x1378,  /* right */
    },  /* [39] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x138a,  /* right */
    },  /* [40] */
    {
        (xdc_Bits16)0x8028,  /* left */
        (xdc_Bits16)0x1392,  /* right */
    },  /* [41] */
    {
        (xdc_Bits16)0x8029,  /* left */
        (xdc_Bits16)0x1314,  /* right */
    },  /* [42] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x139b,  /* right */
    },  /* [43] */
    {
        (xdc_Bits16)0x802b,  /* left */
        (xdc_Bits16)0x13a3,  /* right */
    },  /* [44] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x13b0,  /* right */
    },  /* [45] */
    {
        (xdc_Bits16)0x802d,  /* left */
        (xdc_Bits16)0x13b7,  /* right */
    },  /* [46] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((CT__xdc_runtime_Text_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((CT__xdc_runtime_Text_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((CT__xdc_runtime_Text_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0x800f;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((CT__xdc_runtime_Text_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((CT__xdc_runtime_Text_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((CT__xdc_runtime_Text_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((CT__xdc_runtime_Text_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((CT__xdc_runtime_Text_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((CT__xdc_runtime_Text_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Text_Module__startupDoneFxn xdc_runtime_Text_Module__startupDoneFxn__C = ((CT__xdc_runtime_Text_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = 0;

/* nameUnknown__C */
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x13dc;

/* nodeCnt__C */
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x2f;

/* unnamedModsLastId__C */
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000;

/* registryModsLastId__C */
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fff;

/* visitRopeFxn__C */
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((CT__xdc_runtime_Text_visitRopeFxn)((xdc_Fxn)xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((CT__xdc_runtime_Text_visitRopeFxn2)((xdc_Fxn)xdc_runtime_Text_visitRope2__I));

/* Module_startup */
xdc_Int ti_sysbios_family_c64p_Cache_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_c64p_Cache_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_family_c64p_Exception_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_c64p_Exception_Module_startup__F(state);
}


/*
 * ======== ti.sysbios.family.c64p.Hwi FUNCTION STUBS ========
 */

/* getStackInfo__E */
xdc_Bool ti_sysbios_family_c64p_Hwi_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo* stkInfo, xdc_Bool computeStackDepth ) 
{
    return ti_sysbios_family_c64p_Hwi_getStackInfo__F(stkInfo, computeStackDepth);
}

/* Module_startup */
xdc_Int ti_sysbios_family_c64p_Hwi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_c64p_Hwi_Module_startup__F(state);
}


/*
 * ======== ti.sysbios.gates.GateHwi FUNCTION STUBS ========
 */

/* query__E */
xdc_Bool ti_sysbios_gates_GateHwi_query__E( xdc_Int qual ) 
{
    return ti_sysbios_gates_GateHwi_query__F(qual);
}


/*
 * ======== ti.sysbios.gates.GateMutex FUNCTION STUBS ========
 */

/* query__E */
xdc_Bool ti_sysbios_gates_GateMutex_query__E( xdc_Int qual ) 
{
    return ti_sysbios_gates_GateMutex_query__F(qual);
}


/*
 * ======== ti.sysbios.hal.Hwi FUNCTION STUBS ========
 */

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo* stkInfo, xdc_Bool computeStackDepth ) 
{
    return ti_sysbios_hal_Hwi_getStackInfo__F(stkInfo, computeStackDepth);
}

/* Module_startup */
xdc_Int ti_sysbios_hal_Hwi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_hal_Hwi_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_hal_Timer_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_hal_Timer_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_knl_Clock_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_knl_Clock_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_knl_Swi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_knl_Swi_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_knl_Task_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_knl_Task_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_timers_timer64_Timer_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_timers_timer64_Timer_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.Diags FUNCTION STUBS ========
 */

/* setMask__E */
xdc_Void xdc_runtime_Diags_setMask__E( xdc_String control ) 
{
    xdc_runtime_Diags_setMask__F(control);
}


/*
 * ======== xdc.runtime.Error FUNCTION STUBS ========
 */

/* check__E */
xdc_Bool xdc_runtime_Error_check__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_check__F(eb);
}

/* getData__E */
xdc_runtime_Error_Data* xdc_runtime_Error_getData__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getData__F(eb);
}

/* getCode__E */
xdc_UInt16 xdc_runtime_Error_getCode__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getCode__F(eb);
}

/* getId__E */
xdc_runtime_Error_Id xdc_runtime_Error_getId__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getId__F(eb);
}

/* getMsg__E */
xdc_String xdc_runtime_Error_getMsg__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getMsg__F(eb);
}

/* getSite__E */
xdc_runtime_Types_Site* xdc_runtime_Error_getSite__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getSite__F(eb);
}

/* init__E */
xdc_Void xdc_runtime_Error_init__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_runtime_Error_init__F(eb);
}

/* print__E */
xdc_Void xdc_runtime_Error_print__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_runtime_Error_print__F(eb);
}

/* raiseX__E */
xdc_Void xdc_runtime_Error_raiseX__E( xdc_runtime_Error_Block* eb, xdc_runtime_Types_ModuleId mod, xdc_String file, xdc_Int line, xdc_runtime_Error_Id id, xdc_IArg arg1, xdc_IArg arg2 ) 
{
    xdc_runtime_Error_raiseX__F(eb, mod, file, line, id, arg1, arg2);
}


/*
 * ======== xdc.runtime.Gate FUNCTION STUBS ========
 */

/* enterSystem__E */
xdc_IArg xdc_runtime_Gate_enterSystem__E( void ) 
{
    return xdc_runtime_Gate_enterSystem__F();
}

/* leaveSystem__E */
xdc_Void xdc_runtime_Gate_leaveSystem__E( xdc_IArg key ) 
{
    xdc_runtime_Gate_leaveSystem__F(key);
}


/*
 * ======== xdc.runtime.Log FUNCTION STUBS ========
 */

/* doPrint__E */
xdc_Void xdc_runtime_Log_doPrint__E( xdc_runtime_Log_EventRec* evRec ) 
{
    xdc_runtime_Log_doPrint__F(evRec);
}


/*
 * ======== xdc.runtime.Memory FUNCTION STUBS ========
 */

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_alloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_alloc__F(heap, size, align, eb);
}

/* calloc__E */
xdc_Ptr xdc_runtime_Memory_calloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_calloc__F(heap, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_free__E( xdc_runtime_IHeap_Handle heap, xdc_Ptr block, xdc_SizeT size ) 
{
    xdc_runtime_Memory_free__F(heap, block, size);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_getStats__E( xdc_runtime_IHeap_Handle heap, xdc_runtime_Memory_Stats* stats ) 
{
    xdc_runtime_Memory_getStats__F(heap, stats);
}

/* query__E */
xdc_Bool xdc_runtime_Memory_query__E( xdc_runtime_IHeap_Handle heap, xdc_Int qual ) 
{
    return xdc_runtime_Memory_query__F(heap, qual);
}

/* getMaxDefaultTypeAlign__E */
xdc_SizeT xdc_runtime_Memory_getMaxDefaultTypeAlign__E( void ) 
{
    return xdc_runtime_Memory_getMaxDefaultTypeAlign__F();
}

/* valloc__E */
xdc_Ptr xdc_runtime_Memory_valloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_Char value, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_valloc__F(heap, size, align, value, eb);
}


/*
 * ======== xdc.runtime.Registry FUNCTION STUBS ========
 */

/* addModule__E */
xdc_runtime_Registry_Result xdc_runtime_Registry_addModule__E( xdc_runtime_Registry_Desc* desc, xdc_String modName ) 
{
    return xdc_runtime_Registry_addModule__F(desc, modName);
}

/* findByName__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findByName__E( xdc_String modName ) 
{
    return xdc_runtime_Registry_findByName__F(modName);
}

/* findByNamePattern__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findByNamePattern__E( xdc_String namePat, xdc_Int len, xdc_runtime_Registry_Desc* prev ) 
{
    return xdc_runtime_Registry_findByNamePattern__F(namePat, len, prev);
}

/* findById__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findById__E( xdc_runtime_Types_ModuleId mid ) 
{
    return xdc_runtime_Registry_findById__F(mid);
}

/* getMask__E */
xdc_Bool xdc_runtime_Registry_getMask__E( xdc_String name, xdc_runtime_Types_DiagsMask* mask ) 
{
    return xdc_runtime_Registry_getMask__F(name, mask);
}

/* isMember__E */
xdc_Bool xdc_runtime_Registry_isMember__E( xdc_runtime_Types_ModuleId mid ) 
{
    return xdc_runtime_Registry_isMember__F(mid);
}

/* getNextModule__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_getNextModule__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getNextModule__F(desc);
}

/* getModuleName__E */
xdc_String xdc_runtime_Registry_getModuleName__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getModuleName__F(desc);
}

/* getModuleId__E */
xdc_runtime_Types_ModuleId xdc_runtime_Registry_getModuleId__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getModuleId__F(desc);
}


/*
 * ======== xdc.runtime.Startup FUNCTION STUBS ========
 */

/* exec__E */
xdc_Void xdc_runtime_Startup_exec__E( void ) 
{
    xdc_runtime_Startup_exec__F();
}

/* rtsDone__E */
xdc_Bool xdc_runtime_Startup_rtsDone__E( void ) 
{
    return xdc_runtime_Startup_rtsDone__F();
}


/*
 * ======== xdc.runtime.SysMin FUNCTION STUBS ========
 */

/* abort__E */
xdc_Void xdc_runtime_SysMin_abort__E( xdc_String str ) 
{
    xdc_runtime_SysMin_abort__F(str);
}

/* exit__E */
xdc_Void xdc_runtime_SysMin_exit__E( xdc_Int stat ) 
{
    xdc_runtime_SysMin_exit__F(stat);
}

/* flush__E */
xdc_Void xdc_runtime_SysMin_flush__E( void ) 
{
    xdc_runtime_SysMin_flush__F();
}

/* putch__E */
xdc_Void xdc_runtime_SysMin_putch__E( xdc_Char ch ) 
{
    xdc_runtime_SysMin_putch__F(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_SysMin_ready__E( void ) 
{
    return xdc_runtime_SysMin_ready__F();
}

/* Module_startup */
xdc_Int xdc_runtime_SysMin_Module_startup__E( xdc_Int state )
{
    return xdc_runtime_SysMin_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.System FUNCTION STUBS ========
 */

/* abort__E */
xdc_Void xdc_runtime_System_abort__E( xdc_String str ) 
{
    xdc_runtime_System_abort__F(str);
}

/* atexit__E */
xdc_Bool xdc_runtime_System_atexit__E( xdc_runtime_System_AtexitHandler handler ) 
{
    return xdc_runtime_System_atexit__F(handler);
}

/* exit__E */
xdc_Void xdc_runtime_System_exit__E( xdc_Int stat ) 
{
    xdc_runtime_System_exit__F(stat);
}

/* putch__E */
xdc_Void xdc_runtime_System_putch__E( xdc_Char ch ) 
{
    xdc_runtime_System_putch__F(ch);
}

/* flush__E */
xdc_Void xdc_runtime_System_flush__E( void ) 
{
    xdc_runtime_System_flush__F();
}

/* printf_va__E */
xdc_Int xdc_runtime_System_printf_va__E( xdc_String fmt, va_list __va ) 
{
    return xdc_runtime_System_printf_va__F(fmt, __va);
}

/* printf__E */
xdc_Int xdc_runtime_System_printf__E( xdc_String fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_printf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* aprintf_va__E */
xdc_Int xdc_runtime_System_aprintf_va__E( xdc_String fmt, va_list __va ) 
{
    return xdc_runtime_System_aprintf_va__F(fmt, __va);
}

/* aprintf__E */
xdc_Int xdc_runtime_System_aprintf__E( xdc_String fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_aprintf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* sprintf_va__E */
xdc_Int xdc_runtime_System_sprintf_va__E( xdc_Char buf[], xdc_String fmt, va_list __va ) 
{
    return xdc_runtime_System_sprintf_va__F(buf, fmt, __va);
}

/* sprintf__E */
xdc_Int xdc_runtime_System_sprintf__E( xdc_Char buf[], xdc_String fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_sprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* asprintf_va__E */
xdc_Int xdc_runtime_System_asprintf_va__E( xdc_Char buf[], xdc_String fmt, va_list __va ) 
{
    return xdc_runtime_System_asprintf_va__F(buf, fmt, __va);
}

/* asprintf__E */
xdc_Int xdc_runtime_System_asprintf__E( xdc_Char buf[], xdc_String fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_asprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* vprintf__E */
xdc_Int xdc_runtime_System_vprintf__E( xdc_String fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_vprintf__F(fmt, va);
}

/* avprintf__E */
xdc_Int xdc_runtime_System_avprintf__E( xdc_String fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_avprintf__F(fmt, va);
}

/* vsprintf__E */
xdc_Int xdc_runtime_System_vsprintf__E( xdc_Char buf[], xdc_String fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_vsprintf__F(buf, fmt, va);
}

/* avsprintf__E */
xdc_Int xdc_runtime_System_avsprintf__E( xdc_Char buf[], xdc_String fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_avsprintf__F(buf, fmt, va);
}

/* Module_startup */
xdc_Int xdc_runtime_System_Module_startup__E( xdc_Int state )
{
    return xdc_runtime_System_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.Text FUNCTION STUBS ========
 */

/* cordText__E */
xdc_String xdc_runtime_Text_cordText__E( xdc_runtime_Text_CordAddr cord ) 
{
    return xdc_runtime_Text_cordText__F(cord);
}

/* ropeText__E */
xdc_String xdc_runtime_Text_ropeText__E( xdc_runtime_Text_RopeId rope ) 
{
    return xdc_runtime_Text_ropeText__F(rope);
}

/* matchRope__E */
xdc_Int xdc_runtime_Text_matchRope__E( xdc_runtime_Text_RopeId rope, xdc_String pat, xdc_Int* lenp ) 
{
    return xdc_runtime_Text_matchRope__F(rope, pat, lenp);
}

/* putLab__E */
xdc_Int xdc_runtime_Text_putLab__E( xdc_runtime_Types_Label* lab, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putLab__F(lab, bufp, len);
}

/* putMod__E */
xdc_Int xdc_runtime_Text_putMod__E( xdc_runtime_Types_ModuleId mid, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putMod__F(mid, bufp, len);
}

/* putSite__E */
xdc_Int xdc_runtime_Text_putSite__E( xdc_runtime_Types_Site* site, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putSite__F(site, bufp, len);
}


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_BIOS_RtsGateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateMutex_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateMutex___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_BIOS_RtsGateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_BIOS_RtsGateProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_BIOS_RtsGateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_BIOS_RtsGateProxy_enter__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_BIOS_RtsGateProxy_leave__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c64p.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c64p_Hwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_family_c64p_Hwi_Object__create__S(oa, osz, aa, (ti_sysbios_family_c64p_Hwi___ParamsPtr)pa, sizeof(ti_sysbios_interfaces_IHwi_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Hwi_HwiProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_family_c64p_Hwi_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_c64p_Hwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_family_c64p_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo* stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_c64p_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_c64p_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_c64p_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_c64p_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_c64p_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_c64p_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_c64p_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char* ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_c64p_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_c64p_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_c64p_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_c64p_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_c64p_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_UArg* arg )
{
    return ti_sysbios_family_c64p_Hwi_getFunc((ti_sysbios_family_c64p_Hwi_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_c64p_Hwi_setFunc((ti_sysbios_family_c64p_Hwi_Handle)__inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id )
{
    return ti_sysbios_family_c64p_Hwi_getHookContext((ti_sysbios_family_c64p_Hwi_Handle)__inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_c64p_Hwi_setHookContext((ti_sysbios_family_c64p_Hwi_Handle)__inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst )
{
    return ti_sysbios_family_c64p_Hwi_getIrp((ti_sysbios_family_c64p_Hwi_Handle)__inst);
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.timers.timer64.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_timers_timer64_Timer_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Timer_TimerProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_timers_timer64_Timer_Object__create__S(oa, osz, aa, (ti_sysbios_timers_timer64_Timer___ParamsPtr)pa, sizeof(ti_sysbios_interfaces_ITimer_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Timer_TimerProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_timers_timer64_Timer_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Timer_TimerProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_timers_timer64_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Timer_TimerProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_timers_timer64_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_hal_Timer_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_timers_timer64_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_hal_Timer_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_timers_timer64_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_startup__E( void )
{
    ti_sysbios_timers_timer64_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getMaxTicks__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 periodCounts )
{
    return ti_sysbios_timers_timer64_Timer_getMaxTicks((ti_sysbios_timers_timer64_Timer_Handle)__inst, periodCounts);
}

/* setNextTick__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setNextTick__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 newPeriod, xdc_UInt32 countsPerTick )
{
    ti_sysbios_timers_timer64_Timer_setNextTick((ti_sysbios_timers_timer64_Timer_Handle)__inst, newPeriod, countsPerTick);
}

/* start__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_start__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_timers_timer64_Timer_start((ti_sysbios_timers_timer64_Timer_Handle)__inst);
}

/* stop__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_stop__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_timers_timer64_Timer_stop((ti_sysbios_timers_timer64_Timer_Handle)__inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 period )
{
    ti_sysbios_timers_timer64_Timer_setPeriod((ti_sysbios_timers_timer64_Timer_Handle)__inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_timers_timer64_Timer_setPeriodMicroSecs((ti_sysbios_timers_timer64_Timer_Handle)__inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_timer64_Timer_getPeriod((ti_sysbios_timers_timer64_Timer_Handle)__inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getCount__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_timer64_Timer_getCount((ti_sysbios_timers_timer64_Timer_Handle)__inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_getFreq__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_runtime_Types_FreqHz* freq )
{
    ti_sysbios_timers_timer64_Timer_getFreq((ti_sysbios_timers_timer64_Timer_Handle)__inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_hal_Timer_TimerProxy_getFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UArg* arg )
{
    return ti_sysbios_timers_timer64_Timer_getFunc((ti_sysbios_timers_timer64_Timer_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_timers_timer64_Timer_setFunc((ti_sysbios_timers_timer64_Timer_Handle)__inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_trigger__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 cycles )
{
    ti_sysbios_timers_timer64_Timer_trigger((ti_sysbios_timers_timer64_Timer_Handle)__inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getExpiredCounts__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_timer64_Timer_getExpiredCounts((ti_sysbios_timers_timer64_Timer_Handle)__inst);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateMutex_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateMutex___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_heaps_HeapMem_Module_GateProxy_enter__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_heaps_HeapMem_Module_GateProxy_leave__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c62.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c62_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_c62_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c62.TaskSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c62_TaskSupport_Module__startupDone__S();
}

/* start__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_start__E( xdc_Ptr curTask, ti_sysbios_interfaces_ITaskSupport_FuncPtr enter, ti_sysbios_interfaces_ITaskSupport_FuncPtr exit, xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_family_c62_TaskSupport_start(curTask, enter, exit, eb);
}

/* swap__E */
xdc_Void ti_sysbios_knl_Task_SupportProxy_swap__E( xdc_Ptr* oldtskContext, xdc_Ptr* newtskContext )
{
    ti_sysbios_family_c62_TaskSupport_swap(oldtskContext, newtskContext);
}

/* checkStack__E */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_checkStack__E( xdc_Char* stack, xdc_SizeT size )
{
    return ti_sysbios_family_c62_TaskSupport_checkStack(stack, size);
}

/* stackUsed__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_stackUsed__E( xdc_Char* stack, xdc_SizeT size )
{
    return ti_sysbios_family_c62_TaskSupport_stackUsed(stack, size);
}

/* getStackAlignment__E */
xdc_UInt ti_sysbios_knl_Task_SupportProxy_getStackAlignment__E( void )
{
    return ti_sysbios_family_c62_TaskSupport_getStackAlignment();
}

/* getDefaultStackSize__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_getDefaultStackSize__E( void )
{
    return ti_sysbios_family_c62_TaskSupport_getDefaultStackSize();
}


/*
 * ======== ti.sysbios.timers.timer64.Timer_TimerSupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c64p.dm6437.TimerSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_timers_timer64_Timer_TimerSupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c64p_dm6437_TimerSupport_Module__startupDone__S();
}

/* enable__E */
xdc_Void ti_sysbios_timers_timer64_Timer_TimerSupportProxy_enable__E( xdc_UInt timerId, xdc_runtime_Error_Block* eb )
{
    ti_sysbios_family_c64p_dm6437_TimerSupport_enable(timerId, eb);
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_Main_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateHwi_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateHwi___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_Main_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_Main_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.Memory_HeapProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.heaps.HeapMem */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_HeapProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_heaps_HeapMem_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Memory_HeapProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_Memory_HeapProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_heaps_HeapMem_Object__create__S(oa, osz, aa, (ti_sysbios_heaps_HeapMem___ParamsPtr)pa, sizeof(xdc_runtime_IHeap_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_Memory_HeapProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Memory_HeapProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_heaps_HeapMem_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_Memory_HeapProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_heaps_HeapMem_Handle__label__S(obj, lab);
}

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_HeapProxy_alloc__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb )
{
    return xdc_runtime_IHeap_alloc((xdc_runtime_IHeap_Handle)__inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_HeapProxy_free__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_Ptr block, xdc_SizeT size )
{
    xdc_runtime_IHeap_free((xdc_runtime_IHeap_Handle)__inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_Memory_HeapProxy_isBlocking__E( xdc_runtime_Memory_HeapProxy_Handle __inst )
{
    return xdc_runtime_IHeap_isBlocking((xdc_runtime_IHeap_Handle)__inst);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_HeapProxy_getStats__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_runtime_Memory_Stats* stats )
{
    xdc_runtime_IHeap_getStats((xdc_runtime_IHeap_Handle)__inst, stats);
}


/*
 * ======== xdc.runtime.System_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_System_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_System_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateHwi_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateHwi___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_System_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_System_Module_GateProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_System_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_System_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_System_Module_GateProxy_enter__E( xdc_runtime_System_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_System_Module_GateProxy_leave__E( xdc_runtime_System_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysMin */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysMin_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_String str )
{
    xdc_runtime_SysMin_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysMin_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysMin_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysMin_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysMin_ready();
}


/*
 * ======== ti.sysbios.family.c64p.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_c64p_Hwi_Object2__ s0; char c; } ti_sysbios_family_c64p_Hwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_c64p_Hwi_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_family_c64p_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_c64p_Hwi___S1) - sizeof(ti_sysbios_family_c64p_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_c64p_Hwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_family_c64p_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_c64p_Hwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C = {
    (Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
    (Ptr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.hal.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Timer_Object2__ s0; char c; } ti_sysbios_hal_Timer___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Timer___S1) - sizeof(ti_sysbios_hal_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Timer_Object2__), /* objSize */
    (Ptr)&ti_sysbios_hal_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Timer_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.heaps.HeapMem OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapMem_Object2__ s0; char c; } ti_sysbios_heaps_HeapMem___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C = {
    (Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapMem___S1) - sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objSize */
    (Ptr)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapMem_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Swi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.timers.timer64.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_timers_timer64_Timer_Object2__ s0; char c; } ti_sysbios_timers_timer64_Timer___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_timers_timer64_Timer_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_timers_timer64_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_timers_timer64_Timer___S1) - sizeof(ti_sysbios_timers_timer64_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_timers_timer64_Timer_Object2__), /* objSize */
    (Ptr)&ti_sysbios_timers_timer64_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_timers_timer64_Timer_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.BIOS SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS_RtsGateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_BIOS_RtsGateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.family.c62.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c62_IntrinsicsSupport_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.family.c62.TaskSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c62_TaskSupport_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.family.c64p.Cache SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c64p_Cache_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c64p_Cache_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.c64p.Exception SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c64p_Exception_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c64p_Exception_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.c64p.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_c64p_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_c64p_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_c64p_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_c64p_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_c64p_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_c64p_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_c64p_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_c64p_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_c64p_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_c64p_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_c64p_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_c64p_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_c64p_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_c64p_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_c64p_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_c64p_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_c64p_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_c64p_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c64p_Hwi_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c64p_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_family_c64p_Hwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32788;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_c64p_Hwi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_c64p_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_c64p_Hwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_family_c64p_Hwi_Object__*)oa) + i;
    }

    if (ti_sysbios_family_c64p_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_c64p_Hwi_Object__*)ti_sysbios_family_c64p_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_c64p_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_c64p_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_c64p_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_c64p_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_c64p_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_c64p_Hwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_family_c64p_Hwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_family_c64p_Hwi_Params prms;
    ti_sysbios_family_c64p_Hwi_Object* obj;
    int iStat;

    ti_sysbios_family_c64p_Hwi_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_c64p_Hwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_c64p_Hwi_Instance_init__F(obj, args->intNum, args->hwiFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c64p_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_c64p_Hwi_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_c64p_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c64p_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_c64p_Hwi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_c64p_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c64p_Hwi_Object__DESC__C, *((ti_sysbios_family_c64p_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_family_c64p_Hwi_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_family_c64p_Hwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.family.c64p.dm6437.TimerSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c64p_dm6437_TimerSupport_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.gates.GateHwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateHwi_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_gates_GateHwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32803;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateHwi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateHwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_gates_GateHwi_Object__*)oa) + i;
    }

    if (ti_sysbios_gates_GateHwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateHwi_Object__*)ti_sysbios_gates_GateHwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateHwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_gates_GateHwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_gates_GateHwi_Params prms;
    ti_sysbios_gates_GateHwi_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, *((ti_sysbios_gates_GateHwi_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_gates_GateHwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.gates.GateMutex SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateMutex_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateMutex_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateMutex_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateMutex_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateMutex_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateMutex_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateMutex_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutex_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutex_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutex_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutex_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutex_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateMutex_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_gates_GateMutex_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32804;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateMutex_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateMutex_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_gates_GateMutex_Object__*)oa) + i;
    }

    if (ti_sysbios_gates_GateMutex_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateMutex_Object__*)ti_sysbios_gates_GateMutex_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateMutex_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_gates_GateMutex___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_gates_GateMutex_Params prms;
    ti_sysbios_gates_GateMutex_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__F, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, *((ti_sysbios_gates_GateMutex_Object**)instp), (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__F, -1, FALSE);
    *((ti_sysbios_gates_GateMutex_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.hal.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S( void ) 
{
    return ti_sysbios_hal_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Hwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32792;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Hwi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_hal_Hwi_Object__*)oa) + i;
    }

    if (ti_sysbios_hal_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Hwi_Object__*)ti_sysbios_hal_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Hwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_hal_Hwi_Params prms;
    ti_sysbios_hal_Hwi_Object* obj;
    int iStat;

    ti_sysbios_hal_Hwi_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__F(obj, args->intNum, args->hwiFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, *((ti_sysbios_hal_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_hal_Hwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_HwiProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.hal.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__S( void ) 
{
    return ti_sysbios_hal_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Timer_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32793;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Timer_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_hal_Timer_Object__*)oa) + i;
    }

    if (ti_sysbios_hal_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Timer_Object__*)ti_sysbios_hal_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Timer___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_hal_Timer_Params prms;
    ti_sysbios_hal_Timer_Object* obj;
    int iStat;

    ti_sysbios_hal_Timer_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Timer_Instance_init__F(obj, args->id, args->tickFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, *((ti_sysbios_hal_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_hal_Timer_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_TimerProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_TimerProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_TimerProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_TimerProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_TimerProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_TimerProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_TimerProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_TimerProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.heaps.HeapMem SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_heaps_HeapMem_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32814;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_heaps_HeapMem_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_heaps_HeapMem_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_heaps_HeapMem_Object__*)oa) + i;
    }

    if (ti_sysbios_heaps_HeapMem_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_heaps_HeapMem_Object__*)ti_sysbios_heaps_HeapMem_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_heaps_HeapMem_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_heaps_HeapMem___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_heaps_HeapMem_Params prms;
    ti_sysbios_heaps_HeapMem_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, *((ti_sysbios_heaps_HeapMem_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_heaps_HeapMem_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.knl.Clock SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S( void ) 
{
    return ti_sysbios_knl_Clock_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Clock_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32795;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Clock_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Clock_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Clock_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Clock_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Clock_Object__*)ti_sysbios_knl_Clock_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Clock_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Clock___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Clock_Params prms;
    ti_sysbios_knl_Clock_Object* obj;

    ti_sysbios_knl_Clock_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__F(obj, args->clockFxn, args->timeout, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Clock_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__F, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Clock_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, *((ti_sysbios_knl_Clock_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__F, -1, FALSE);
    *((ti_sysbios_knl_Clock_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== ti.sysbios.knl.Queue SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Queue_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Queue_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Queue_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Queue_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Queue_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Queue_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Queue_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Queue_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Queue_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Queue_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Queue_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Queue_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Queue_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Queue_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Queue_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Queue_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Queue_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Queue_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Queue_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32798;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Queue_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Queue_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Queue_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Queue_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Queue_Object__*)ti_sysbios_knl_Queue_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Queue_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Queue___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Queue_Params prms;
    ti_sysbios_knl_Queue_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Queue_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Queue_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, *((ti_sysbios_knl_Queue_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Queue_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Semaphore SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Semaphore_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Semaphore_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Semaphore_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Semaphore_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Semaphore_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Semaphore_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Semaphore_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Semaphore_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Semaphore_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Semaphore_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Semaphore_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Semaphore_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Semaphore_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Semaphore_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32799;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Semaphore_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Semaphore_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Semaphore_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Semaphore_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Semaphore_Object__*)ti_sysbios_knl_Semaphore_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Semaphore_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Semaphore___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Semaphore_Params prms;
    ti_sysbios_knl_Semaphore_Object* obj;

    ti_sysbios_knl_Semaphore_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__F(obj, args->count, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__F, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, *((ti_sysbios_knl_Semaphore_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__F, -1, FALSE);
    *((ti_sysbios_knl_Semaphore_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Swi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Swi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Swi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Swi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Swi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Swi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Swi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Swi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Swi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Swi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Swi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Swi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Swi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Swi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Swi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Swi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Swi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Swi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S( void ) 
{
    return ti_sysbios_knl_Swi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Swi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32800;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Swi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Swi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Swi_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Swi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Swi_Object__*)ti_sysbios_knl_Swi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Swi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Swi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Swi_Params prms;
    ti_sysbios_knl_Swi_Object* obj;
    int iStat;

    ti_sysbios_knl_Swi_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__F(obj, args->fxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Swi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Swi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, *((ti_sysbios_knl_Swi_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_knl_Swi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Task SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Task_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Task_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Task_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Task_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Task_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Task_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Task_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Task_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Task_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Task_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Task_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Task_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Task_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Task_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Task_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Task_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Task_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S( void ) 
{
    return ti_sysbios_knl_Task_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Task_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32801;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Task_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Task_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Task_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Task_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Task_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Task_Object__*)ti_sysbios_knl_Task_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Task_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Task_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Task_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Task_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Task___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Task_Params prms;
    ti_sysbios_knl_Task_Object* obj;
    int iStat;

    ti_sysbios_knl_Task_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__F(obj, args->fxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Task_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Task_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, *((ti_sysbios_knl_Task_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_knl_Task_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_sysbios_knl_Task_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== ti.sysbios.timers.timer64.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_timers_timer64_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_timers_timer64_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_timers_timer64_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_timers_timer64_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_timers_timer64_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_timers_timer64_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_timers_timer64_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_timers_timer64_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_timers_timer64_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_timers_timer64_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_timers_timer64_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_timers_timer64_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_timers_timer64_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_timers_timer64_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_timers_timer64_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_timers_timer64_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_timers_timer64_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_timers_timer64_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_timers_timer64_Timer_Module__startupDone__S( void ) 
{
    return ti_sysbios_timers_timer64_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_timers_timer64_Timer_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32810;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_timers_timer64_Timer_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_timers_timer64_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_timers_timer64_Timer_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_timers_timer64_Timer_Object__*)oa) + i;
    }

    if (ti_sysbios_timers_timer64_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_timers_timer64_Timer_Object__*)ti_sysbios_timers_timer64_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_timers_timer64_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_timers_timer64_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_timers_timer64_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_timers_timer64_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_timers_timer64_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_timers_timer64_Timer_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_timers_timer64_Timer___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_timers_timer64_Timer_Params prms;
    ti_sysbios_timers_timer64_Timer_Object* obj;
    int iStat;

    ti_sysbios_timers_timer64_Timer_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_timers_timer64_Timer_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_timers_timer64_Timer_Instance_init__F(obj, args->id, args->tickFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_timer64_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_timers_timer64_Timer_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_timers_timer64_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_timer64_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_timers_timer64_Timer_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_timers_timer64_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_timer64_Timer_Object__DESC__C, *((ti_sysbios_timers_timer64_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_timers_timer64_Timer_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_timers_timer64_Timer_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.timers.timer64.Timer_TimerSupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_sysbios_timers_timer64_Timer_TimerSupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_timers_timer64_Timer_TimerSupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_family_c64p_dm6437_TimerSupport_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Error SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Error_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Memory SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Memory_HeapProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Memory_HeapProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Memory_HeapProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Memory_HeapProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Memory_HeapProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Memory_HeapProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Memory_HeapProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Memory_HeapProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Memory_HeapProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Memory_HeapProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_Memory_HeapProxy_Proxy__abstract__S( void )
{
    return 1;
}
xdc_Ptr xdc_runtime_Memory_HeapProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.SysMin SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysMin_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module__startupDone__S( void ) 
{
    return xdc_runtime_System_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_System_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_System_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_System_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_System_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_System_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_System_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_System_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_System_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_System_Module_GateProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_System_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_SysMin_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

extern int __xdc__init(void);
#ifdef __GNUC__
#if __GNUC__ >= 4
    __attribute__ ((externally_visible))
#endif
#endif
__FAR__ int (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */


/*
 * ======== CONSTANTS ========
 */

#pragma DATA_SECTION(xdc_runtime_IModule_Interface__BASE__C, ".const:xdc_runtime_IModule_Interface__BASE__C");
asm("	.sect \".const:xdc_runtime_IModule_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_IModule_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_IModule_Interface__BASE__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_interfaces_ITimerSupport_Interface__BASE__C, ".const:ti_sysbios_interfaces_ITimerSupport_Interface__BASE__C");
asm("	.sect \".const:ti_sysbios_interfaces_ITimerSupport_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_interfaces_ITimerSupport_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_interfaces_ITimerSupport_Interface__BASE__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_IGateProvider_Interface__BASE__C, ".const:xdc_runtime_IGateProvider_Interface__BASE__C");
asm("	.sect \".const:xdc_runtime_IGateProvider_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_IGateProvider_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_IGateProvider_Interface__BASE__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_IHeap_Interface__BASE__C, ".const:xdc_runtime_IHeap_Interface__BASE__C");
asm("	.sect \".const:xdc_runtime_IHeap_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_IHeap_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_IHeap_Interface__BASE__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_ISystemSupport_Interface__BASE__C, ".const:xdc_runtime_ISystemSupport_Interface__BASE__C");
asm("	.sect \".const:xdc_runtime_ISystemSupport_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_ISystemSupport_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_ISystemSupport_Interface__BASE__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_dm6437_TimerSupport_Module__FXNS__C, ".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__FXNS__C");
asm("	.sect \".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__FXNS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__FXNS__C, ".const:ti_sysbios_gates_GateHwi_Module__FXNS__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Module__FXNS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__FXNS__C, ".const:ti_sysbios_gates_GateMutex_Module__FXNS__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Module__FXNS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__FXNS__C, ".const:ti_sysbios_heaps_HeapMem_Module__FXNS__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Module__FXNS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__FXNS__C, ".const:xdc_runtime_SysMin_Module__FXNS__C");
asm("	.sect \".const:xdc_runtime_SysMin_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Module__FXNS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_c64p_Hwi_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__PARAMS__C, ".const:ti_sysbios_hal_Timer_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__PARAMS__C, ".const:ti_sysbios_timers_timer64_Timer_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Instance_State_sem__O, ".const:ti_sysbios_gates_GateMutex_Instance_State_sem__O");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Instance_State_sem__O\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Instance_State_sem__O\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Instance_State_sem__O\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module_State_clockQ__O, ".const:ti_sysbios_knl_Clock_Module_State_clockQ__O");
asm("	.sect \".const:ti_sysbios_knl_Clock_Module_State_clockQ__O\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Module_State_clockQ__O\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Module_State_clockQ__O\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_inactiveQ__O, ".const:ti_sysbios_knl_Task_Module_State_inactiveQ__O");
asm("	.sect \".const:ti_sysbios_knl_Task_Module_State_inactiveQ__O\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Module_State_inactiveQ__O\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Module_State_inactiveQ__O\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_terminatedQ__O, ".const:ti_sysbios_knl_Task_Module_State_terminatedQ__O");
asm("	.sect \".const:ti_sysbios_knl_Task_Module_State_terminatedQ__O\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Module_State_terminatedQ__O\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Module_State_terminatedQ__O\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsEnabled__C, ".const:ti_sysbios_BIOS_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_BIOS_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsIncluded__C, ".const:ti_sysbios_BIOS_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_BIOS_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsMask__C, ".const:ti_sysbios_BIOS_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_BIOS_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gateObj__C, ".const:ti_sysbios_BIOS_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_BIOS_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gatePrms__C, ".const:ti_sysbios_BIOS_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_BIOS_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__id__C, ".const:ti_sysbios_BIOS_Module__id__C");
asm("	.sect \".const:ti_sysbios_BIOS_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerDefined__C, ".const:ti_sysbios_BIOS_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_BIOS_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerObj__C, ".const:ti_sysbios_BIOS_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_BIOS_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn0__C, ".const:ti_sysbios_BIOS_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_BIOS_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn1__C, ".const:ti_sysbios_BIOS_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_BIOS_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn2__C, ".const:ti_sysbios_BIOS_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_BIOS_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn4__C, ".const:ti_sysbios_BIOS_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_BIOS_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn8__C, ".const:ti_sysbios_BIOS_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_BIOS_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__startupDoneFxn__C, ".const:ti_sysbios_BIOS_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_BIOS_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Object__count__C, ".const:ti_sysbios_BIOS_Object__count__C");
asm("	.sect \".const:ti_sysbios_BIOS_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Object__heap__C, ".const:ti_sysbios_BIOS_Object__heap__C");
asm("	.sect \".const:ti_sysbios_BIOS_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Object__sizeof__C, ".const:ti_sysbios_BIOS_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_BIOS_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Object__table__C, ".const:ti_sysbios_BIOS_Object__table__C");
asm("	.sect \".const:ti_sysbios_BIOS_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_smpEnabled__C, ".const:ti_sysbios_BIOS_smpEnabled__C");
asm("	.sect \".const:ti_sysbios_BIOS_smpEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_smpEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_smpEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_cpuFreq__C, ".const:ti_sysbios_BIOS_cpuFreq__C");
asm("	.sect \".const:ti_sysbios_BIOS_cpuFreq__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_cpuFreq__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_cpuFreq__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_taskEnabled__C, ".const:ti_sysbios_BIOS_taskEnabled__C");
asm("	.sect \".const:ti_sysbios_BIOS_taskEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_taskEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_taskEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_swiEnabled__C, ".const:ti_sysbios_BIOS_swiEnabled__C");
asm("	.sect \".const:ti_sysbios_BIOS_swiEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_swiEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_swiEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_clockEnabled__C, ".const:ti_sysbios_BIOS_clockEnabled__C");
asm("	.sect \".const:ti_sysbios_BIOS_clockEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_clockEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_clockEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_heapSize__C, ".const:ti_sysbios_BIOS_heapSize__C");
asm("	.sect \".const:ti_sysbios_BIOS_heapSize__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_heapSize__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_heapSize__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_heapSection__C, ".const:ti_sysbios_BIOS_heapSection__C");
asm("	.sect \".const:ti_sysbios_BIOS_heapSection__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_heapSection__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_heapSection__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_heapTrackEnabled__C, ".const:ti_sysbios_BIOS_heapTrackEnabled__C");
asm("	.sect \".const:ti_sysbios_BIOS_heapTrackEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_heapTrackEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_heapTrackEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_installedErrorHook__C, ".const:ti_sysbios_BIOS_installedErrorHook__C");
asm("	.sect \".const:ti_sysbios_BIOS_installedErrorHook__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_installedErrorHook__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_installedErrorHook__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsMask__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__gateObj__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_IntrinsicsSupport_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_IntrinsicsSupport_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__gatePrms__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_IntrinsicsSupport_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_IntrinsicsSupport_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__id__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__id__C");
asm("	.sect \".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_IntrinsicsSupport_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_IntrinsicsSupport_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerObj__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_IntrinsicsSupport_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_IntrinsicsSupport_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Object__count__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Object__count__C");
asm("	.sect \".const:ti_sysbios_family_c62_IntrinsicsSupport_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_IntrinsicsSupport_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_IntrinsicsSupport_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Object__heap__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Object__heap__C");
asm("	.sect \".const:ti_sysbios_family_c62_IntrinsicsSupport_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_IntrinsicsSupport_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_IntrinsicsSupport_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Object__sizeof__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_family_c62_IntrinsicsSupport_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_IntrinsicsSupport_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_IntrinsicsSupport_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Object__table__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Object__table__C");
asm("	.sect \".const:ti_sysbios_family_c62_IntrinsicsSupport_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_IntrinsicsSupport_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_IntrinsicsSupport_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_family_c62_TaskSupport_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_TaskSupport_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_TaskSupport_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_family_c62_TaskSupport_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_TaskSupport_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_TaskSupport_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__diagsMask__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_family_c62_TaskSupport_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_TaskSupport_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_TaskSupport_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__gateObj__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_family_c62_TaskSupport_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_TaskSupport_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_TaskSupport_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__gatePrms__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_family_c62_TaskSupport_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_TaskSupport_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_TaskSupport_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__id__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__id__C");
asm("	.sect \".const:ti_sysbios_family_c62_TaskSupport_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_TaskSupport_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_TaskSupport_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_family_c62_TaskSupport_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_TaskSupport_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_TaskSupport_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerObj__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_family_c62_TaskSupport_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_TaskSupport_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_TaskSupport_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_family_c62_TaskSupport_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_TaskSupport_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_TaskSupport_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Object__count__C, ".const:ti_sysbios_family_c62_TaskSupport_Object__count__C");
asm("	.sect \".const:ti_sysbios_family_c62_TaskSupport_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_TaskSupport_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_TaskSupport_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Object__heap__C, ".const:ti_sysbios_family_c62_TaskSupport_Object__heap__C");
asm("	.sect \".const:ti_sysbios_family_c62_TaskSupport_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_TaskSupport_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_TaskSupport_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Object__sizeof__C, ".const:ti_sysbios_family_c62_TaskSupport_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_family_c62_TaskSupport_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_TaskSupport_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_TaskSupport_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Object__table__C, ".const:ti_sysbios_family_c62_TaskSupport_Object__table__C");
asm("	.sect \".const:ti_sysbios_family_c62_TaskSupport_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_TaskSupport_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_TaskSupport_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_defaultStackSize__C, ".const:ti_sysbios_family_c62_TaskSupport_defaultStackSize__C");
asm("	.sect \".const:ti_sysbios_family_c62_TaskSupport_defaultStackSize__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_TaskSupport_defaultStackSize__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_TaskSupport_defaultStackSize__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_stackAlignment__C, ".const:ti_sysbios_family_c62_TaskSupport_stackAlignment__C");
asm("	.sect \".const:ti_sysbios_family_c62_TaskSupport_stackAlignment__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c62_TaskSupport_stackAlignment__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c62_TaskSupport_stackAlignment__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__diagsEnabled__C, ".const:ti_sysbios_family_c64p_Cache_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__diagsIncluded__C, ".const:ti_sysbios_family_c64p_Cache_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__diagsMask__C, ".const:ti_sysbios_family_c64p_Cache_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__gateObj__C, ".const:ti_sysbios_family_c64p_Cache_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__gatePrms__C, ".const:ti_sysbios_family_c64p_Cache_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__id__C, ".const:ti_sysbios_family_c64p_Cache_Module__id__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__loggerDefined__C, ".const:ti_sysbios_family_c64p_Cache_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__loggerObj__C, ".const:ti_sysbios_family_c64p_Cache_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__loggerFxn0__C, ".const:ti_sysbios_family_c64p_Cache_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__loggerFxn1__C, ".const:ti_sysbios_family_c64p_Cache_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__loggerFxn2__C, ".const:ti_sysbios_family_c64p_Cache_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__loggerFxn4__C, ".const:ti_sysbios_family_c64p_Cache_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__loggerFxn8__C, ".const:ti_sysbios_family_c64p_Cache_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__startupDoneFxn__C, ".const:ti_sysbios_family_c64p_Cache_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Object__count__C, ".const:ti_sysbios_family_c64p_Cache_Object__count__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Object__heap__C, ".const:ti_sysbios_family_c64p_Cache_Object__heap__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Object__sizeof__C, ".const:ti_sysbios_family_c64p_Cache_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Object__table__C, ".const:ti_sysbios_family_c64p_Cache_Object__table__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_initSize__C, ".const:ti_sysbios_family_c64p_Cache_initSize__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_initSize__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_initSize__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_initSize__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_EMIFA_CFG__C, ".const:ti_sysbios_family_c64p_Cache_EMIFA_CFG__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_EMIFA_CFG__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_EMIFA_CFG__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_EMIFA_CFG__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_EMIFA_BASE__C, ".const:ti_sysbios_family_c64p_Cache_EMIFA_BASE__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_EMIFA_BASE__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_EMIFA_BASE__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_EMIFA_BASE__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_EMIFA_LENGTH__C, ".const:ti_sysbios_family_c64p_Cache_EMIFA_LENGTH__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_EMIFA_LENGTH__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_EMIFA_LENGTH__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_EMIFA_LENGTH__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_EMIFB_CFG__C, ".const:ti_sysbios_family_c64p_Cache_EMIFB_CFG__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_EMIFB_CFG__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_EMIFB_CFG__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_EMIFB_CFG__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_EMIFB_BASE__C, ".const:ti_sysbios_family_c64p_Cache_EMIFB_BASE__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_EMIFB_BASE__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_EMIFB_BASE__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_EMIFB_BASE__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_EMIFB_LENGTH__C, ".const:ti_sysbios_family_c64p_Cache_EMIFB_LENGTH__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_EMIFB_LENGTH__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_EMIFB_LENGTH__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_EMIFB_LENGTH__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_EMIFC_CFG__C, ".const:ti_sysbios_family_c64p_Cache_EMIFC_CFG__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_EMIFC_CFG__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_EMIFC_CFG__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_EMIFC_CFG__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_EMIFC_BASE__C, ".const:ti_sysbios_family_c64p_Cache_EMIFC_BASE__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_EMIFC_BASE__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_EMIFC_BASE__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_EMIFC_BASE__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_EMIFC_LENGTH__C, ".const:ti_sysbios_family_c64p_Cache_EMIFC_LENGTH__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_EMIFC_LENGTH__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_EMIFC_LENGTH__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_EMIFC_LENGTH__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_MAR0_31__C, ".const:ti_sysbios_family_c64p_Cache_MAR0_31__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_MAR0_31__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_MAR0_31__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_MAR0_31__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_MAR32_63__C, ".const:ti_sysbios_family_c64p_Cache_MAR32_63__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_MAR32_63__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_MAR32_63__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_MAR32_63__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_MAR64_95__C, ".const:ti_sysbios_family_c64p_Cache_MAR64_95__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_MAR64_95__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_MAR64_95__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_MAR64_95__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_MAR96_127__C, ".const:ti_sysbios_family_c64p_Cache_MAR96_127__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_MAR96_127__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_MAR96_127__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_MAR96_127__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_MAR128_159__C, ".const:ti_sysbios_family_c64p_Cache_MAR128_159__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_MAR128_159__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_MAR128_159__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_MAR128_159__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_MAR160_191__C, ".const:ti_sysbios_family_c64p_Cache_MAR160_191__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_MAR160_191__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_MAR160_191__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_MAR160_191__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_MAR192_223__C, ".const:ti_sysbios_family_c64p_Cache_MAR192_223__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_MAR192_223__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_MAR192_223__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_MAR192_223__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_MAR224_255__C, ".const:ti_sysbios_family_c64p_Cache_MAR224_255__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Cache_MAR224_255__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Cache_MAR224_255__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Cache_MAR224_255__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__diagsEnabled__C, ".const:ti_sysbios_family_c64p_Exception_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Exception_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Exception_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Exception_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__diagsIncluded__C, ".const:ti_sysbios_family_c64p_Exception_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Exception_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Exception_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Exception_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__diagsMask__C, ".const:ti_sysbios_family_c64p_Exception_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Exception_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Exception_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Exception_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__gateObj__C, ".const:ti_sysbios_family_c64p_Exception_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Exception_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Exception_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Exception_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__gatePrms__C, ".const:ti_sysbios_family_c64p_Exception_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Exception_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Exception_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Exception_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__id__C, ".const:ti_sysbios_family_c64p_Exception_Module__id__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Exception_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Exception_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Exception_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerDefined__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Exception_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Exception_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Exception_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerObj__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Exception_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Exception_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Exception_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerFxn0__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Exception_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Exception_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Exception_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerFxn1__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Exception_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Exception_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Exception_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerFxn2__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Exception_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Exception_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Exception_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerFxn4__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Exception_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Exception_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Exception_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerFxn8__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Exception_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Exception_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Exception_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__startupDoneFxn__C, ".const:ti_sysbios_family_c64p_Exception_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Exception_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Exception_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Exception_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Object__count__C, ".const:ti_sysbios_family_c64p_Exception_Object__count__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Exception_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Exception_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Exception_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Object__heap__C, ".const:ti_sysbios_family_c64p_Exception_Object__heap__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Exception_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Exception_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Exception_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Object__sizeof__C, ".const:ti_sysbios_family_c64p_Exception_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Exception_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Exception_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Exception_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Object__table__C, ".const:ti_sysbios_family_c64p_Exception_Object__table__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Exception_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Exception_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Exception_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_E_exceptionMin__C, ".const:ti_sysbios_family_c64p_Exception_E_exceptionMin__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Exception_E_exceptionMin__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Exception_E_exceptionMin__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Exception_E_exceptionMin__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_E_exceptionMax__C, ".const:ti_sysbios_family_c64p_Exception_E_exceptionMax__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Exception_E_exceptionMax__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Exception_E_exceptionMax__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Exception_E_exceptionMax__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_enableExternalMPC__C, ".const:ti_sysbios_family_c64p_Exception_enableExternalMPC__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Exception_enableExternalMPC__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Exception_enableExternalMPC__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Exception_enableExternalMPC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_enablePrint__C, ".const:ti_sysbios_family_c64p_Exception_enablePrint__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Exception_enablePrint__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Exception_enablePrint__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Exception_enablePrint__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_exceptionHook__C, ".const:ti_sysbios_family_c64p_Exception_exceptionHook__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Exception_exceptionHook__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Exception_exceptionHook__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Exception_exceptionHook__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_internalHook__C, ".const:ti_sysbios_family_c64p_Exception_internalHook__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Exception_internalHook__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Exception_internalHook__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Exception_internalHook__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_externalHook__C, ".const:ti_sysbios_family_c64p_Exception_externalHook__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Exception_externalHook__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Exception_externalHook__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Exception_externalHook__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_nmiHook__C, ".const:ti_sysbios_family_c64p_Exception_nmiHook__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Exception_nmiHook__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Exception_nmiHook__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Exception_nmiHook__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_returnHook__C, ".const:ti_sysbios_family_c64p_Exception_returnHook__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Exception_returnHook__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Exception_returnHook__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Exception_returnHook__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__DESC__C, ".const:ti_sysbios_family_c64p_Hwi_Object__DESC__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_c64p_Hwi_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_family_c64p_Hwi_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_family_c64p_Hwi_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__diagsMask__C, ".const:ti_sysbios_family_c64p_Hwi_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__gateObj__C, ".const:ti_sysbios_family_c64p_Hwi_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__gatePrms__C, ".const:ti_sysbios_family_c64p_Hwi_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__id__C, ".const:ti_sysbios_family_c64p_Hwi_Module__id__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerObj__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_family_c64p_Hwi_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__count__C, ".const:ti_sysbios_family_c64p_Hwi_Object__count__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__heap__C, ".const:ti_sysbios_family_c64p_Hwi_Object__heap__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__sizeof__C, ".const:ti_sysbios_family_c64p_Hwi_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__table__C, ".const:ti_sysbios_family_c64p_Hwi_Object__table__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_family_c64p_Hwi_dispatcherAutoNestingSupport__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_dispatcherAutoNestingSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_dispatcherAutoNestingSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_dispatcherAutoNestingSupport__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_family_c64p_Hwi_dispatcherSwiSupport__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_dispatcherSwiSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_dispatcherSwiSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_dispatcherSwiSupport__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_family_c64p_Hwi_dispatcherTaskSupport__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_dispatcherTaskSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_dispatcherTaskSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_dispatcherTaskSupport__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_family_c64p_Hwi_dispatcherIrpTrackingSupport__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_dispatcherIrpTrackingSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_dispatcherIrpTrackingSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_dispatcherIrpTrackingSupport__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_E_alreadyDefined__C, ".const:ti_sysbios_family_c64p_Hwi_E_alreadyDefined__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_E_alreadyDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_E_alreadyDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_E_alreadyDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_E_handleNotFound__C, ".const:ti_sysbios_family_c64p_Hwi_E_handleNotFound__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_E_handleNotFound__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_E_handleNotFound__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_E_handleNotFound__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_LM_begin__C, ".const:ti_sysbios_family_c64p_Hwi_LM_begin__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_LM_begin__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_LM_begin__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_LM_begin__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_LD_end__C, ".const:ti_sysbios_family_c64p_Hwi_LD_end__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_LD_end__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_LD_end__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_LD_end__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_enableException__C, ".const:ti_sysbios_family_c64p_Hwi_enableException__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_enableException__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_enableException__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_enableException__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_swiDisable__C, ".const:ti_sysbios_family_c64p_Hwi_swiDisable__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_swiDisable__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_swiDisable__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_swiDisable__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_swiRestoreHwi__C, ".const:ti_sysbios_family_c64p_Hwi_swiRestoreHwi__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_swiRestoreHwi__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_swiRestoreHwi__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_swiRestoreHwi__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_taskDisable__C, ".const:ti_sysbios_family_c64p_Hwi_taskDisable__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_taskDisable__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_taskDisable__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_taskDisable__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_taskRestoreHwi__C, ".const:ti_sysbios_family_c64p_Hwi_taskRestoreHwi__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_taskRestoreHwi__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_taskRestoreHwi__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_taskRestoreHwi__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_hooks__C, ".const:ti_sysbios_family_c64p_Hwi_hooks__C");
asm("	.sect \".const:ti_sysbios_family_c64p_Hwi_hooks__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_Hwi_hooks__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_Hwi_hooks__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_dm6437_TimerSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_dm6437_TimerSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_dm6437_TimerSupport_Module__diagsMask__C, ".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_dm6437_TimerSupport_Module__gateObj__C, ".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_dm6437_TimerSupport_Module__gatePrms__C, ".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_dm6437_TimerSupport_Module__id__C, ".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__id__C");
asm("	.sect \".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerObj__C, ".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_dm6437_TimerSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_dm6437_TimerSupport_Object__count__C, ".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Object__count__C");
asm("	.sect \".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_dm6437_TimerSupport_Object__heap__C, ".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Object__heap__C");
asm("	.sect \".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_dm6437_TimerSupport_Object__sizeof__C, ".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_c64p_dm6437_TimerSupport_Object__table__C, ".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Object__table__C");
asm("	.sect \".const:ti_sysbios_family_c64p_dm6437_TimerSupport_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_c64p_dm6437_TimerSupport_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__DESC__C, ".const:ti_sysbios_gates_GateHwi_Object__DESC__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsMask__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gateObj__C, ".const:ti_sysbios_gates_GateHwi_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gatePrms__C, ".const:ti_sysbios_gates_GateHwi_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__id__C, ".const:ti_sysbios_gates_GateHwi_Module__id__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerObj__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__count__C, ".const:ti_sysbios_gates_GateHwi_Object__count__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__heap__C, ".const:ti_sysbios_gates_GateHwi_Object__heap__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__sizeof__C, ".const:ti_sysbios_gates_GateHwi_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__table__C, ".const:ti_sysbios_gates_GateHwi_Object__table__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__DESC__C, ".const:ti_sysbios_gates_GateMutex_Object__DESC__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsMask__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gateObj__C, ".const:ti_sysbios_gates_GateMutex_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gatePrms__C, ".const:ti_sysbios_gates_GateMutex_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__id__C, ".const:ti_sysbios_gates_GateMutex_Module__id__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerObj__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__count__C, ".const:ti_sysbios_gates_GateMutex_Object__count__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__heap__C, ".const:ti_sysbios_gates_GateMutex_Object__heap__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__sizeof__C, ".const:ti_sysbios_gates_GateMutex_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__table__C, ".const:ti_sysbios_gates_GateMutex_Object__table__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_A_badContext__C, ".const:ti_sysbios_gates_GateMutex_A_badContext__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_A_badContext__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_A_badContext__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_A_badContext__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__DESC__C, ".const:ti_sysbios_hal_Hwi_Object__DESC__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsMask__C, ".const:ti_sysbios_hal_Hwi_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gateObj__C, ".const:ti_sysbios_hal_Hwi_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gatePrms__C, ".const:ti_sysbios_hal_Hwi_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__id__C, ".const:ti_sysbios_hal_Hwi_Module__id__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_hal_Hwi_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerObj__C, ".const:ti_sysbios_hal_Hwi_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Hwi_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__count__C, ".const:ti_sysbios_hal_Hwi_Object__count__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__heap__C, ".const:ti_sysbios_hal_Hwi_Object__heap__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__sizeof__C, ".const:ti_sysbios_hal_Hwi_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__table__C, ".const:ti_sysbios_hal_Hwi_Object__table__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_E_stackOverflow__C, ".const:ti_sysbios_hal_Hwi_E_stackOverflow__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_E_stackOverflow__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_E_stackOverflow__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_E_stackOverflow__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__DESC__C, ".const:ti_sysbios_hal_Timer_Object__DESC__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__PARAMS__C, ".const:ti_sysbios_hal_Timer_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Timer_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Timer_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsMask__C, ".const:ti_sysbios_hal_Timer_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gateObj__C, ".const:ti_sysbios_hal_Timer_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gatePrms__C, ".const:ti_sysbios_hal_Timer_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__id__C, ".const:ti_sysbios_hal_Timer_Module__id__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerDefined__C, ".const:ti_sysbios_hal_Timer_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerObj__C, ".const:ti_sysbios_hal_Timer_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Timer_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__count__C, ".const:ti_sysbios_hal_Timer_Object__count__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__heap__C, ".const:ti_sysbios_hal_Timer_Object__heap__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__sizeof__C, ".const:ti_sysbios_hal_Timer_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__table__C, ".const:ti_sysbios_hal_Timer_Object__table__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__DESC__C, ".const:ti_sysbios_heaps_HeapMem_Object__DESC__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsMask__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gateObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gatePrms__C, ".const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__id__C, ".const:ti_sysbios_heaps_HeapMem_Module__id__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerDefined__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C, ".const:ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__count__C, ".const:ti_sysbios_heaps_HeapMem_Object__count__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__heap__C, ".const:ti_sysbios_heaps_HeapMem_Object__heap__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__sizeof__C, ".const:ti_sysbios_heaps_HeapMem_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__table__C, ".const:ti_sysbios_heaps_HeapMem_Object__table__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_zeroBlock__C, ".const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_heapSize__C, ".const:ti_sysbios_heaps_HeapMem_A_heapSize__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_A_heapSize__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_A_heapSize__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_A_heapSize__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_align__C, ".const:ti_sysbios_heaps_HeapMem_A_align__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_A_align__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_A_align__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_A_align__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_E_memory__C, ".const:ti_sysbios_heaps_HeapMem_E_memory__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_E_memory__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_E_memory__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_E_memory__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_invalidFree__C, ".const:ti_sysbios_heaps_HeapMem_A_invalidFree__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_A_invalidFree__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_A_invalidFree__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_A_invalidFree__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlign__C, ".const:ti_sysbios_heaps_HeapMem_reqAlign__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_reqAlign__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_reqAlign__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_reqAlign__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__DESC__C, ".const:ti_sysbios_knl_Clock_Object__DESC__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Clock_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Clock_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsMask__C, ".const:ti_sysbios_knl_Clock_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gateObj__C, ".const:ti_sysbios_knl_Clock_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gatePrms__C, ".const:ti_sysbios_knl_Clock_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__id__C, ".const:ti_sysbios_knl_Clock_Module__id__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerDefined__C, ".const:ti_sysbios_knl_Clock_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerObj__C, ".const:ti_sysbios_knl_Clock_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Clock_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__count__C, ".const:ti_sysbios_knl_Clock_Object__count__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__heap__C, ".const:ti_sysbios_knl_Clock_Object__heap__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__sizeof__C, ".const:ti_sysbios_knl_Clock_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__table__C, ".const:ti_sysbios_knl_Clock_Object__table__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_LW_delayed__C, ".const:ti_sysbios_knl_Clock_LW_delayed__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_LW_delayed__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_LW_delayed__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_LW_delayed__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_tick__C, ".const:ti_sysbios_knl_Clock_LM_tick__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_LM_tick__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_LM_tick__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_LM_tick__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_begin__C, ".const:ti_sysbios_knl_Clock_LM_begin__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_LM_begin__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_LM_begin__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_LM_begin__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_clockDisabled__C, ".const:ti_sysbios_knl_Clock_A_clockDisabled__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_A_clockDisabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_A_clockDisabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_A_clockDisabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_badThreadType__C, ".const:ti_sysbios_knl_Clock_A_badThreadType__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_A_badThreadType__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_A_badThreadType__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_A_badThreadType__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickSource__C, ".const:ti_sysbios_knl_Clock_tickSource__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_tickSource__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_tickSource__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_tickSource__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickMode__C, ".const:ti_sysbios_knl_Clock_tickMode__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_tickMode__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_tickMode__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_tickMode__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_timerId__C, ".const:ti_sysbios_knl_Clock_timerId__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_timerId__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_timerId__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_timerId__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickPeriod__C, ".const:ti_sysbios_knl_Clock_tickPeriod__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_tickPeriod__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_tickPeriod__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_tickPeriod__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__A, ".const:ti_sysbios_knl_Idle_funcList__A");
asm("	.sect \".const:ti_sysbios_knl_Idle_funcList__A\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_funcList__A\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_funcList__A\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__A, ".const:ti_sysbios_knl_Idle_coreList__A");
asm("	.sect \".const:ti_sysbios_knl_Idle_coreList__A\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_coreList__A\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_coreList__A\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Idle_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Idle_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsMask__C, ".const:ti_sysbios_knl_Idle_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gateObj__C, ".const:ti_sysbios_knl_Idle_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gatePrms__C, ".const:ti_sysbios_knl_Idle_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__id__C, ".const:ti_sysbios_knl_Idle_Module__id__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerDefined__C, ".const:ti_sysbios_knl_Idle_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerObj__C, ".const:ti_sysbios_knl_Idle_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Idle_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__count__C, ".const:ti_sysbios_knl_Idle_Object__count__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__heap__C, ".const:ti_sysbios_knl_Idle_Object__heap__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__sizeof__C, ".const:ti_sysbios_knl_Idle_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__table__C, ".const:ti_sysbios_knl_Idle_Object__table__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__C, ".const:ti_sysbios_knl_Idle_funcList__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_funcList__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_funcList__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_funcList__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__C, ".const:ti_sysbios_knl_Idle_coreList__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_coreList__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_coreList__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_coreList__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsMask__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gateObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gatePrms__C, ".const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__id__C, ".const:ti_sysbios_knl_Intrinsics_Module__id__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerDefined__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__count__C, ".const:ti_sysbios_knl_Intrinsics_Object__count__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__heap__C, ".const:ti_sysbios_knl_Intrinsics_Object__heap__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__sizeof__C, ".const:ti_sysbios_knl_Intrinsics_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__table__C, ".const:ti_sysbios_knl_Intrinsics_Object__table__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__DESC__C, ".const:ti_sysbios_knl_Queue_Object__DESC__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Queue_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Queue_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsMask__C, ".const:ti_sysbios_knl_Queue_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gateObj__C, ".const:ti_sysbios_knl_Queue_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gatePrms__C, ".const:ti_sysbios_knl_Queue_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__id__C, ".const:ti_sysbios_knl_Queue_Module__id__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerDefined__C, ".const:ti_sysbios_knl_Queue_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerObj__C, ".const:ti_sysbios_knl_Queue_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Queue_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__count__C, ".const:ti_sysbios_knl_Queue_Object__count__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__heap__C, ".const:ti_sysbios_knl_Queue_Object__heap__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__sizeof__C, ".const:ti_sysbios_knl_Queue_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__table__C, ".const:ti_sysbios_knl_Queue_Object__table__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__DESC__C, ".const:ti_sysbios_knl_Semaphore_Object__DESC__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsMask__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gateObj__C, ".const:ti_sysbios_knl_Semaphore_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gatePrms__C, ".const:ti_sysbios_knl_Semaphore_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__id__C, ".const:ti_sysbios_knl_Semaphore_Module__id__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerDefined__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerObj__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__count__C, ".const:ti_sysbios_knl_Semaphore_Object__count__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__heap__C, ".const:ti_sysbios_knl_Semaphore_Object__heap__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__sizeof__C, ".const:ti_sysbios_knl_Semaphore_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__table__C, ".const:ti_sysbios_knl_Semaphore_Object__table__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_post__C, ".const:ti_sysbios_knl_Semaphore_LM_post__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_LM_post__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_LM_post__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_LM_post__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_pend__C, ".const:ti_sysbios_knl_Semaphore_LM_pend__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_LM_pend__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_LM_pend__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_LM_pend__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_noEvents__C, ".const:ti_sysbios_knl_Semaphore_A_noEvents__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_A_noEvents__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_A_noEvents__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_A_noEvents__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_invTimeout__C, ".const:ti_sysbios_knl_Semaphore_A_invTimeout__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_A_invTimeout__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_A_invTimeout__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_A_invTimeout__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_badContext__C, ".const:ti_sysbios_knl_Semaphore_A_badContext__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_A_badContext__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_A_badContext__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_A_badContext__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_overflow__C, ".const:ti_sysbios_knl_Semaphore_A_overflow__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_A_overflow__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_A_overflow__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_A_overflow__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsEvents__C, ".const:ti_sysbios_knl_Semaphore_supportsEvents__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_supportsEvents__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_supportsEvents__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_supportsEvents__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventPost__C, ".const:ti_sysbios_knl_Semaphore_eventPost__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_eventPost__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_eventPost__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_eventPost__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventSync__C, ".const:ti_sysbios_knl_Semaphore_eventSync__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_eventSync__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_eventSync__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_eventSync__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__DESC__C, ".const:ti_sysbios_knl_Swi_Object__DESC__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Swi_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Swi_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsMask__C, ".const:ti_sysbios_knl_Swi_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gateObj__C, ".const:ti_sysbios_knl_Swi_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gatePrms__C, ".const:ti_sysbios_knl_Swi_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__id__C, ".const:ti_sysbios_knl_Swi_Module__id__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerDefined__C, ".const:ti_sysbios_knl_Swi_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerObj__C, ".const:ti_sysbios_knl_Swi_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Swi_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__count__C, ".const:ti_sysbios_knl_Swi_Object__count__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__heap__C, ".const:ti_sysbios_knl_Swi_Object__heap__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__sizeof__C, ".const:ti_sysbios_knl_Swi_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__table__C, ".const:ti_sysbios_knl_Swi_Object__table__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_begin__C, ".const:ti_sysbios_knl_Swi_LM_begin__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_LM_begin__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_LM_begin__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_LM_begin__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_LD_end__C, ".const:ti_sysbios_knl_Swi_LD_end__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_LD_end__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_LD_end__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_LD_end__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_post__C, ".const:ti_sysbios_knl_Swi_LM_post__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_LM_post__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_LM_post__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_LM_post__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_swiDisabled__C, ".const:ti_sysbios_knl_Swi_A_swiDisabled__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_A_swiDisabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_A_swiDisabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_A_swiDisabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_badPriority__C, ".const:ti_sysbios_knl_Swi_A_badPriority__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_A_badPriority__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_A_badPriority__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_A_badPriority__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_numPriorities__C, ".const:ti_sysbios_knl_Swi_numPriorities__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_numPriorities__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_numPriorities__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_numPriorities__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_hooks__C, ".const:ti_sysbios_knl_Swi_hooks__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_hooks__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_hooks__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_hooks__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskDisable__C, ".const:ti_sysbios_knl_Swi_taskDisable__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_taskDisable__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_taskDisable__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_taskDisable__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskRestore__C, ".const:ti_sysbios_knl_Swi_taskRestore__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_taskRestore__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_taskRestore__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_taskRestore__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_numConstructedSwis__C, ".const:ti_sysbios_knl_Swi_numConstructedSwis__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_numConstructedSwis__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_numConstructedSwis__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_numConstructedSwis__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__DESC__C, ".const:ti_sysbios_knl_Task_Object__DESC__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__A, ".const:ti_sysbios_knl_Task_hooks__A");
asm("	.sect \".const:ti_sysbios_knl_Task_hooks__A\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_hooks__A\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_hooks__A\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Task_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Task_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsMask__C, ".const:ti_sysbios_knl_Task_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gateObj__C, ".const:ti_sysbios_knl_Task_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gatePrms__C, ".const:ti_sysbios_knl_Task_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__id__C, ".const:ti_sysbios_knl_Task_Module__id__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerDefined__C, ".const:ti_sysbios_knl_Task_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerObj__C, ".const:ti_sysbios_knl_Task_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Task_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__count__C, ".const:ti_sysbios_knl_Task_Object__count__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__heap__C, ".const:ti_sysbios_knl_Task_Object__heap__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__sizeof__C, ".const:ti_sysbios_knl_Task_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__table__C, ".const:ti_sysbios_knl_Task_Object__table__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_switch__C, ".const:ti_sysbios_knl_Task_LM_switch__C");
asm("	.sect \".const:ti_sysbios_knl_Task_LM_switch__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_LM_switch__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_LM_switch__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_sleep__C, ".const:ti_sysbios_knl_Task_LM_sleep__C");
asm("	.sect \".const:ti_sysbios_knl_Task_LM_sleep__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_LM_sleep__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_LM_sleep__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_ready__C, ".const:ti_sysbios_knl_Task_LD_ready__C");
asm("	.sect \".const:ti_sysbios_knl_Task_LD_ready__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_LD_ready__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_LD_ready__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_block__C, ".const:ti_sysbios_knl_Task_LD_block__C");
asm("	.sect \".const:ti_sysbios_knl_Task_LD_block__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_LD_block__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_LD_block__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_yield__C, ".const:ti_sysbios_knl_Task_LM_yield__C");
asm("	.sect \".const:ti_sysbios_knl_Task_LM_yield__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_LM_yield__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_LM_yield__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setPri__C, ".const:ti_sysbios_knl_Task_LM_setPri__C");
asm("	.sect \".const:ti_sysbios_knl_Task_LM_setPri__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_LM_setPri__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_LM_setPri__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_exit__C, ".const:ti_sysbios_knl_Task_LD_exit__C");
asm("	.sect \".const:ti_sysbios_knl_Task_LD_exit__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_LD_exit__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_LD_exit__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setAffinity__C, ".const:ti_sysbios_knl_Task_LM_setAffinity__C");
asm("	.sect \".const:ti_sysbios_knl_Task_LM_setAffinity__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_LM_setAffinity__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_LM_setAffinity__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_schedule__C, ".const:ti_sysbios_knl_Task_LM_schedule__C");
asm("	.sect \".const:ti_sysbios_knl_Task_LM_schedule__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_LM_schedule__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_LM_schedule__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_noWork__C, ".const:ti_sysbios_knl_Task_LM_noWork__C");
asm("	.sect \".const:ti_sysbios_knl_Task_LM_noWork__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_LM_noWork__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_LM_noWork__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_E_stackOverflow__C, ".const:ti_sysbios_knl_Task_E_stackOverflow__C");
asm("	.sect \".const:ti_sysbios_knl_Task_E_stackOverflow__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_E_stackOverflow__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_E_stackOverflow__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_E_spOutOfBounds__C, ".const:ti_sysbios_knl_Task_E_spOutOfBounds__C");
asm("	.sect \".const:ti_sysbios_knl_Task_E_spOutOfBounds__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_E_spOutOfBounds__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_E_spOutOfBounds__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_E_deleteNotAllowed__C, ".const:ti_sysbios_knl_Task_E_deleteNotAllowed__C");
asm("	.sect \".const:ti_sysbios_knl_Task_E_deleteNotAllowed__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_E_deleteNotAllowed__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_E_deleteNotAllowed__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badThreadType__C, ".const:ti_sysbios_knl_Task_A_badThreadType__C");
asm("	.sect \".const:ti_sysbios_knl_Task_A_badThreadType__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_A_badThreadType__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_A_badThreadType__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTaskState__C, ".const:ti_sysbios_knl_Task_A_badTaskState__C");
asm("	.sect \".const:ti_sysbios_knl_Task_A_badTaskState__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_A_badTaskState__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_A_badTaskState__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_A_noPendElem__C, ".const:ti_sysbios_knl_Task_A_noPendElem__C");
asm("	.sect \".const:ti_sysbios_knl_Task_A_noPendElem__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_A_noPendElem__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_A_noPendElem__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_A_taskDisabled__C, ".const:ti_sysbios_knl_Task_A_taskDisabled__C");
asm("	.sect \".const:ti_sysbios_knl_Task_A_taskDisabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_A_taskDisabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_A_taskDisabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badPriority__C, ".const:ti_sysbios_knl_Task_A_badPriority__C");
asm("	.sect \".const:ti_sysbios_knl_Task_A_badPriority__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_A_badPriority__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_A_badPriority__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTimeout__C, ".const:ti_sysbios_knl_Task_A_badTimeout__C");
asm("	.sect \".const:ti_sysbios_knl_Task_A_badTimeout__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_A_badTimeout__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_A_badTimeout__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badAffinity__C, ".const:ti_sysbios_knl_Task_A_badAffinity__C");
asm("	.sect \".const:ti_sysbios_knl_Task_A_badAffinity__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_A_badAffinity__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_A_badAffinity__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_numPriorities__C, ".const:ti_sysbios_knl_Task_numPriorities__C");
asm("	.sect \".const:ti_sysbios_knl_Task_numPriorities__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_numPriorities__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_numPriorities__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackSize__C, ".const:ti_sysbios_knl_Task_defaultStackSize__C");
asm("	.sect \".const:ti_sysbios_knl_Task_defaultStackSize__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_defaultStackSize__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_defaultStackSize__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackHeap__C, ".const:ti_sysbios_knl_Task_defaultStackHeap__C");
asm("	.sect \".const:ti_sysbios_knl_Task_defaultStackHeap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_defaultStackHeap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_defaultStackHeap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_allBlockedFunc__C, ".const:ti_sysbios_knl_Task_allBlockedFunc__C");
asm("	.sect \".const:ti_sysbios_knl_Task_allBlockedFunc__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_allBlockedFunc__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_allBlockedFunc__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_initStackFlag__C, ".const:ti_sysbios_knl_Task_initStackFlag__C");
asm("	.sect \".const:ti_sysbios_knl_Task_initStackFlag__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_initStackFlag__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_initStackFlag__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_deleteTerminatedTasks__C, ".const:ti_sysbios_knl_Task_deleteTerminatedTasks__C");
asm("	.sect \".const:ti_sysbios_knl_Task_deleteTerminatedTasks__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_deleteTerminatedTasks__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_deleteTerminatedTasks__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__C, ".const:ti_sysbios_knl_Task_hooks__C");
asm("	.sect \".const:ti_sysbios_knl_Task_hooks__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_hooks__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_hooks__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_numConstructedTasks__C, ".const:ti_sysbios_knl_Task_numConstructedTasks__C");
asm("	.sect \".const:ti_sysbios_knl_Task_numConstructedTasks__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_numConstructedTasks__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_numConstructedTasks__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_startupHookFunc__C, ".const:ti_sysbios_knl_Task_startupHookFunc__C");
asm("	.sect \".const:ti_sysbios_knl_Task_startupHookFunc__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_startupHookFunc__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_startupHookFunc__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__DESC__C, ".const:ti_sysbios_timers_timer64_Timer_Object__DESC__C");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__PARAMS__C, ".const:ti_sysbios_timers_timer64_Timer_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_timerSettings__A, ".const:ti_sysbios_timers_timer64_Timer_timerSettings__A");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_timerSettings__A\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_timerSettings__A\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_timerSettings__A\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_timers_timer64_Timer_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_timers_timer64_Timer_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__diagsMask__C, ".const:ti_sysbios_timers_timer64_Timer_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__gateObj__C, ".const:ti_sysbios_timers_timer64_Timer_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__gatePrms__C, ".const:ti_sysbios_timers_timer64_Timer_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__id__C, ".const:ti_sysbios_timers_timer64_Timer_Module__id__C");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerDefined__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerObj__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_timers_timer64_Timer_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__count__C, ".const:ti_sysbios_timers_timer64_Timer_Object__count__C");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__heap__C, ".const:ti_sysbios_timers_timer64_Timer_Object__heap__C");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__sizeof__C, ".const:ti_sysbios_timers_timer64_Timer_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__table__C, ".const:ti_sysbios_timers_timer64_Timer_Object__table__C");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_A_notAvailable__C, ".const:ti_sysbios_timers_timer64_Timer_A_notAvailable__C");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_A_notAvailable__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_A_notAvailable__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_A_notAvailable__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_E_invalidTimer__C, ".const:ti_sysbios_timers_timer64_Timer_E_invalidTimer__C");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_E_invalidTimer__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_E_invalidTimer__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_E_invalidTimer__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_E_notAvailable__C, ".const:ti_sysbios_timers_timer64_Timer_E_notAvailable__C");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_E_notAvailable__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_E_notAvailable__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_E_notAvailable__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_E_cannotSupport__C, ".const:ti_sysbios_timers_timer64_Timer_E_cannotSupport__C");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_E_cannotSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_E_cannotSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_E_cannotSupport__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_anyMask__C, ".const:ti_sysbios_timers_timer64_Timer_anyMask__C");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_anyMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_anyMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_anyMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_defaultHalf__C, ".const:ti_sysbios_timers_timer64_Timer_defaultHalf__C");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_defaultHalf__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_defaultHalf__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_defaultHalf__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_timerSettings__C, ".const:ti_sysbios_timers_timer64_Timer_timerSettings__C");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_timerSettings__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_timerSettings__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_timerSettings__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_startupNeeded__C, ".const:ti_sysbios_timers_timer64_Timer_startupNeeded__C");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_startupNeeded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_startupNeeded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_startupNeeded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_freqDivisor__C, ".const:ti_sysbios_timers_timer64_Timer_freqDivisor__C");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_freqDivisor__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_freqDivisor__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_freqDivisor__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_numTimerDevices__C, ".const:ti_sysbios_timers_timer64_Timer_numTimerDevices__C");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_numTimerDevices__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_numTimerDevices__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_numTimerDevices__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_numLocalTimers__C, ".const:ti_sysbios_timers_timer64_Timer_numLocalTimers__C");
asm("	.sect \".const:ti_sysbios_timers_timer64_Timer_numLocalTimers__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_timers_timer64_Timer_numLocalTimers__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_timers_timer64_Timer_numLocalTimers__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsEnabled__C, ".const:xdc_runtime_Assert_Module__diagsEnabled__C");
asm("	.sect \".const:xdc_runtime_Assert_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsIncluded__C, ".const:xdc_runtime_Assert_Module__diagsIncluded__C");
asm("	.sect \".const:xdc_runtime_Assert_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsMask__C, ".const:xdc_runtime_Assert_Module__diagsMask__C");
asm("	.sect \".const:xdc_runtime_Assert_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__gateObj__C, ".const:xdc_runtime_Assert_Module__gateObj__C");
asm("	.sect \".const:xdc_runtime_Assert_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__gatePrms__C, ".const:xdc_runtime_Assert_Module__gatePrms__C");
asm("	.sect \".const:xdc_runtime_Assert_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__id__C, ".const:xdc_runtime_Assert_Module__id__C");
asm("	.sect \".const:xdc_runtime_Assert_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerDefined__C, ".const:xdc_runtime_Assert_Module__loggerDefined__C");
asm("	.sect \".const:xdc_runtime_Assert_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerObj__C, ".const:xdc_runtime_Assert_Module__loggerObj__C");
asm("	.sect \".const:xdc_runtime_Assert_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn0__C, ".const:xdc_runtime_Assert_Module__loggerFxn0__C");
asm("	.sect \".const:xdc_runtime_Assert_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn1__C, ".const:xdc_runtime_Assert_Module__loggerFxn1__C");
asm("	.sect \".const:xdc_runtime_Assert_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn2__C, ".const:xdc_runtime_Assert_Module__loggerFxn2__C");
asm("	.sect \".const:xdc_runtime_Assert_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn4__C, ".const:xdc_runtime_Assert_Module__loggerFxn4__C");
asm("	.sect \".const:xdc_runtime_Assert_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn8__C, ".const:xdc_runtime_Assert_Module__loggerFxn8__C");
asm("	.sect \".const:xdc_runtime_Assert_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__startupDoneFxn__C, ".const:xdc_runtime_Assert_Module__startupDoneFxn__C");
asm("	.sect \".const:xdc_runtime_Assert_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Object__count__C, ".const:xdc_runtime_Assert_Object__count__C");
asm("	.sect \".const:xdc_runtime_Assert_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Object__heap__C, ".const:xdc_runtime_Assert_Object__heap__C");
asm("	.sect \".const:xdc_runtime_Assert_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Object__sizeof__C, ".const:xdc_runtime_Assert_Object__sizeof__C");
asm("	.sect \".const:xdc_runtime_Assert_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Object__table__C, ".const:xdc_runtime_Assert_Object__table__C");
asm("	.sect \".const:xdc_runtime_Assert_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_E_assertFailed__C, ".const:xdc_runtime_Assert_E_assertFailed__C");
asm("	.sect \".const:xdc_runtime_Assert_E_assertFailed__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_E_assertFailed__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_E_assertFailed__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsEnabled__C, ".const:xdc_runtime_Core_Module__diagsEnabled__C");
asm("	.sect \".const:xdc_runtime_Core_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsIncluded__C, ".const:xdc_runtime_Core_Module__diagsIncluded__C");
asm("	.sect \".const:xdc_runtime_Core_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsMask__C, ".const:xdc_runtime_Core_Module__diagsMask__C");
asm("	.sect \".const:xdc_runtime_Core_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__gateObj__C, ".const:xdc_runtime_Core_Module__gateObj__C");
asm("	.sect \".const:xdc_runtime_Core_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__gatePrms__C, ".const:xdc_runtime_Core_Module__gatePrms__C");
asm("	.sect \".const:xdc_runtime_Core_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__id__C, ".const:xdc_runtime_Core_Module__id__C");
asm("	.sect \".const:xdc_runtime_Core_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerDefined__C, ".const:xdc_runtime_Core_Module__loggerDefined__C");
asm("	.sect \".const:xdc_runtime_Core_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerObj__C, ".const:xdc_runtime_Core_Module__loggerObj__C");
asm("	.sect \".const:xdc_runtime_Core_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn0__C, ".const:xdc_runtime_Core_Module__loggerFxn0__C");
asm("	.sect \".const:xdc_runtime_Core_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn1__C, ".const:xdc_runtime_Core_Module__loggerFxn1__C");
asm("	.sect \".const:xdc_runtime_Core_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn2__C, ".const:xdc_runtime_Core_Module__loggerFxn2__C");
asm("	.sect \".const:xdc_runtime_Core_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn4__C, ".const:xdc_runtime_Core_Module__loggerFxn4__C");
asm("	.sect \".const:xdc_runtime_Core_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn8__C, ".const:xdc_runtime_Core_Module__loggerFxn8__C");
asm("	.sect \".const:xdc_runtime_Core_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__startupDoneFxn__C, ".const:xdc_runtime_Core_Module__startupDoneFxn__C");
asm("	.sect \".const:xdc_runtime_Core_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Object__count__C, ".const:xdc_runtime_Core_Object__count__C");
asm("	.sect \".const:xdc_runtime_Core_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Object__heap__C, ".const:xdc_runtime_Core_Object__heap__C");
asm("	.sect \".const:xdc_runtime_Core_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Object__sizeof__C, ".const:xdc_runtime_Core_Object__sizeof__C");
asm("	.sect \".const:xdc_runtime_Core_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Object__table__C, ".const:xdc_runtime_Core_Object__table__C");
asm("	.sect \".const:xdc_runtime_Core_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_A_initializedParams__C, ".const:xdc_runtime_Core_A_initializedParams__C");
asm("	.sect \".const:xdc_runtime_Core_A_initializedParams__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_A_initializedParams__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_A_initializedParams__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsEnabled__C, ".const:xdc_runtime_Defaults_Module__diagsEnabled__C");
asm("	.sect \".const:xdc_runtime_Defaults_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsIncluded__C, ".const:xdc_runtime_Defaults_Module__diagsIncluded__C");
asm("	.sect \".const:xdc_runtime_Defaults_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsMask__C, ".const:xdc_runtime_Defaults_Module__diagsMask__C");
asm("	.sect \".const:xdc_runtime_Defaults_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gateObj__C, ".const:xdc_runtime_Defaults_Module__gateObj__C");
asm("	.sect \".const:xdc_runtime_Defaults_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gatePrms__C, ".const:xdc_runtime_Defaults_Module__gatePrms__C");
asm("	.sect \".const:xdc_runtime_Defaults_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__id__C, ".const:xdc_runtime_Defaults_Module__id__C");
asm("	.sect \".const:xdc_runtime_Defaults_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerDefined__C, ".const:xdc_runtime_Defaults_Module__loggerDefined__C");
asm("	.sect \".const:xdc_runtime_Defaults_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerObj__C, ".const:xdc_runtime_Defaults_Module__loggerObj__C");
asm("	.sect \".const:xdc_runtime_Defaults_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn0__C, ".const:xdc_runtime_Defaults_Module__loggerFxn0__C");
asm("	.sect \".const:xdc_runtime_Defaults_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn1__C, ".const:xdc_runtime_Defaults_Module__loggerFxn1__C");
asm("	.sect \".const:xdc_runtime_Defaults_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn2__C, ".const:xdc_runtime_Defaults_Module__loggerFxn2__C");
asm("	.sect \".const:xdc_runtime_Defaults_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn4__C, ".const:xdc_runtime_Defaults_Module__loggerFxn4__C");
asm("	.sect \".const:xdc_runtime_Defaults_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn8__C, ".const:xdc_runtime_Defaults_Module__loggerFxn8__C");
asm("	.sect \".const:xdc_runtime_Defaults_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__startupDoneFxn__C, ".const:xdc_runtime_Defaults_Module__startupDoneFxn__C");
asm("	.sect \".const:xdc_runtime_Defaults_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Object__count__C, ".const:xdc_runtime_Defaults_Object__count__C");
asm("	.sect \".const:xdc_runtime_Defaults_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Object__heap__C, ".const:xdc_runtime_Defaults_Object__heap__C");
asm("	.sect \".const:xdc_runtime_Defaults_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Object__sizeof__C, ".const:xdc_runtime_Defaults_Object__sizeof__C");
asm("	.sect \".const:xdc_runtime_Defaults_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Object__table__C, ".const:xdc_runtime_Defaults_Object__table__C");
asm("	.sect \".const:xdc_runtime_Defaults_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsEnabled__C, ".const:xdc_runtime_Diags_Module__diagsEnabled__C");
asm("	.sect \".const:xdc_runtime_Diags_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsIncluded__C, ".const:xdc_runtime_Diags_Module__diagsIncluded__C");
asm("	.sect \".const:xdc_runtime_Diags_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsMask__C, ".const:xdc_runtime_Diags_Module__diagsMask__C");
asm("	.sect \".const:xdc_runtime_Diags_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__gateObj__C, ".const:xdc_runtime_Diags_Module__gateObj__C");
asm("	.sect \".const:xdc_runtime_Diags_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__gatePrms__C, ".const:xdc_runtime_Diags_Module__gatePrms__C");
asm("	.sect \".const:xdc_runtime_Diags_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__id__C, ".const:xdc_runtime_Diags_Module__id__C");
asm("	.sect \".const:xdc_runtime_Diags_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerDefined__C, ".const:xdc_runtime_Diags_Module__loggerDefined__C");
asm("	.sect \".const:xdc_runtime_Diags_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerObj__C, ".const:xdc_runtime_Diags_Module__loggerObj__C");
asm("	.sect \".const:xdc_runtime_Diags_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn0__C, ".const:xdc_runtime_Diags_Module__loggerFxn0__C");
asm("	.sect \".const:xdc_runtime_Diags_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn1__C, ".const:xdc_runtime_Diags_Module__loggerFxn1__C");
asm("	.sect \".const:xdc_runtime_Diags_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn2__C, ".const:xdc_runtime_Diags_Module__loggerFxn2__C");
asm("	.sect \".const:xdc_runtime_Diags_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn4__C, ".const:xdc_runtime_Diags_Module__loggerFxn4__C");
asm("	.sect \".const:xdc_runtime_Diags_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn8__C, ".const:xdc_runtime_Diags_Module__loggerFxn8__C");
asm("	.sect \".const:xdc_runtime_Diags_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__startupDoneFxn__C, ".const:xdc_runtime_Diags_Module__startupDoneFxn__C");
asm("	.sect \".const:xdc_runtime_Diags_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Object__count__C, ".const:xdc_runtime_Diags_Object__count__C");
asm("	.sect \".const:xdc_runtime_Diags_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Object__heap__C, ".const:xdc_runtime_Diags_Object__heap__C");
asm("	.sect \".const:xdc_runtime_Diags_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Object__sizeof__C, ".const:xdc_runtime_Diags_Object__sizeof__C");
asm("	.sect \".const:xdc_runtime_Diags_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Object__table__C, ".const:xdc_runtime_Diags_Object__table__C");
asm("	.sect \".const:xdc_runtime_Diags_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_setMaskEnabled__C, ".const:xdc_runtime_Diags_setMaskEnabled__C");
asm("	.sect \".const:xdc_runtime_Diags_setMaskEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_setMaskEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_setMaskEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_dictBase__C, ".const:xdc_runtime_Diags_dictBase__C");
asm("	.sect \".const:xdc_runtime_Diags_dictBase__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_dictBase__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_dictBase__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsEnabled__C, ".const:xdc_runtime_Error_Module__diagsEnabled__C");
asm("	.sect \".const:xdc_runtime_Error_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsIncluded__C, ".const:xdc_runtime_Error_Module__diagsIncluded__C");
asm("	.sect \".const:xdc_runtime_Error_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsMask__C, ".const:xdc_runtime_Error_Module__diagsMask__C");
asm("	.sect \".const:xdc_runtime_Error_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__gateObj__C, ".const:xdc_runtime_Error_Module__gateObj__C");
asm("	.sect \".const:xdc_runtime_Error_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__gatePrms__C, ".const:xdc_runtime_Error_Module__gatePrms__C");
asm("	.sect \".const:xdc_runtime_Error_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__id__C, ".const:xdc_runtime_Error_Module__id__C");
asm("	.sect \".const:xdc_runtime_Error_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerDefined__C, ".const:xdc_runtime_Error_Module__loggerDefined__C");
asm("	.sect \".const:xdc_runtime_Error_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerObj__C, ".const:xdc_runtime_Error_Module__loggerObj__C");
asm("	.sect \".const:xdc_runtime_Error_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn0__C, ".const:xdc_runtime_Error_Module__loggerFxn0__C");
asm("	.sect \".const:xdc_runtime_Error_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn1__C, ".const:xdc_runtime_Error_Module__loggerFxn1__C");
asm("	.sect \".const:xdc_runtime_Error_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn2__C, ".const:xdc_runtime_Error_Module__loggerFxn2__C");
asm("	.sect \".const:xdc_runtime_Error_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn4__C, ".const:xdc_runtime_Error_Module__loggerFxn4__C");
asm("	.sect \".const:xdc_runtime_Error_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn8__C, ".const:xdc_runtime_Error_Module__loggerFxn8__C");
asm("	.sect \".const:xdc_runtime_Error_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__startupDoneFxn__C, ".const:xdc_runtime_Error_Module__startupDoneFxn__C");
asm("	.sect \".const:xdc_runtime_Error_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Object__count__C, ".const:xdc_runtime_Error_Object__count__C");
asm("	.sect \".const:xdc_runtime_Error_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Object__heap__C, ".const:xdc_runtime_Error_Object__heap__C");
asm("	.sect \".const:xdc_runtime_Error_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Object__sizeof__C, ".const:xdc_runtime_Error_Object__sizeof__C");
asm("	.sect \".const:xdc_runtime_Error_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Object__table__C, ".const:xdc_runtime_Error_Object__table__C");
asm("	.sect \".const:xdc_runtime_Error_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_E_generic__C, ".const:xdc_runtime_Error_E_generic__C");
asm("	.sect \".const:xdc_runtime_Error_E_generic__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_E_generic__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_E_generic__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_E_memory__C, ".const:xdc_runtime_Error_E_memory__C");
asm("	.sect \".const:xdc_runtime_Error_E_memory__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_E_memory__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_E_memory__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_E_msgCode__C, ".const:xdc_runtime_Error_E_msgCode__C");
asm("	.sect \".const:xdc_runtime_Error_E_msgCode__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_E_msgCode__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_E_msgCode__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_policy__C, ".const:xdc_runtime_Error_policy__C");
asm("	.sect \".const:xdc_runtime_Error_policy__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_policy__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_policy__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_raiseHook__C, ".const:xdc_runtime_Error_raiseHook__C");
asm("	.sect \".const:xdc_runtime_Error_raiseHook__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_raiseHook__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_raiseHook__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_maxDepth__C, ".const:xdc_runtime_Error_maxDepth__C");
asm("	.sect \".const:xdc_runtime_Error_maxDepth__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_maxDepth__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_maxDepth__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsEnabled__C, ".const:xdc_runtime_Gate_Module__diagsEnabled__C");
asm("	.sect \".const:xdc_runtime_Gate_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsIncluded__C, ".const:xdc_runtime_Gate_Module__diagsIncluded__C");
asm("	.sect \".const:xdc_runtime_Gate_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsMask__C, ".const:xdc_runtime_Gate_Module__diagsMask__C");
asm("	.sect \".const:xdc_runtime_Gate_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__gateObj__C, ".const:xdc_runtime_Gate_Module__gateObj__C");
asm("	.sect \".const:xdc_runtime_Gate_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__gatePrms__C, ".const:xdc_runtime_Gate_Module__gatePrms__C");
asm("	.sect \".const:xdc_runtime_Gate_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__id__C, ".const:xdc_runtime_Gate_Module__id__C");
asm("	.sect \".const:xdc_runtime_Gate_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerDefined__C, ".const:xdc_runtime_Gate_Module__loggerDefined__C");
asm("	.sect \".const:xdc_runtime_Gate_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerObj__C, ".const:xdc_runtime_Gate_Module__loggerObj__C");
asm("	.sect \".const:xdc_runtime_Gate_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn0__C, ".const:xdc_runtime_Gate_Module__loggerFxn0__C");
asm("	.sect \".const:xdc_runtime_Gate_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn1__C, ".const:xdc_runtime_Gate_Module__loggerFxn1__C");
asm("	.sect \".const:xdc_runtime_Gate_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn2__C, ".const:xdc_runtime_Gate_Module__loggerFxn2__C");
asm("	.sect \".const:xdc_runtime_Gate_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn4__C, ".const:xdc_runtime_Gate_Module__loggerFxn4__C");
asm("	.sect \".const:xdc_runtime_Gate_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn8__C, ".const:xdc_runtime_Gate_Module__loggerFxn8__C");
asm("	.sect \".const:xdc_runtime_Gate_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__startupDoneFxn__C, ".const:xdc_runtime_Gate_Module__startupDoneFxn__C");
asm("	.sect \".const:xdc_runtime_Gate_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Object__count__C, ".const:xdc_runtime_Gate_Object__count__C");
asm("	.sect \".const:xdc_runtime_Gate_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Object__heap__C, ".const:xdc_runtime_Gate_Object__heap__C");
asm("	.sect \".const:xdc_runtime_Gate_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Object__sizeof__C, ".const:xdc_runtime_Gate_Object__sizeof__C");
asm("	.sect \".const:xdc_runtime_Gate_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Object__table__C, ".const:xdc_runtime_Gate_Object__table__C");
asm("	.sect \".const:xdc_runtime_Gate_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsEnabled__C, ".const:xdc_runtime_Log_Module__diagsEnabled__C");
asm("	.sect \".const:xdc_runtime_Log_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsIncluded__C, ".const:xdc_runtime_Log_Module__diagsIncluded__C");
asm("	.sect \".const:xdc_runtime_Log_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsMask__C, ".const:xdc_runtime_Log_Module__diagsMask__C");
asm("	.sect \".const:xdc_runtime_Log_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__gateObj__C, ".const:xdc_runtime_Log_Module__gateObj__C");
asm("	.sect \".const:xdc_runtime_Log_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__gatePrms__C, ".const:xdc_runtime_Log_Module__gatePrms__C");
asm("	.sect \".const:xdc_runtime_Log_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__id__C, ".const:xdc_runtime_Log_Module__id__C");
asm("	.sect \".const:xdc_runtime_Log_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerDefined__C, ".const:xdc_runtime_Log_Module__loggerDefined__C");
asm("	.sect \".const:xdc_runtime_Log_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerObj__C, ".const:xdc_runtime_Log_Module__loggerObj__C");
asm("	.sect \".const:xdc_runtime_Log_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn0__C, ".const:xdc_runtime_Log_Module__loggerFxn0__C");
asm("	.sect \".const:xdc_runtime_Log_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn1__C, ".const:xdc_runtime_Log_Module__loggerFxn1__C");
asm("	.sect \".const:xdc_runtime_Log_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn2__C, ".const:xdc_runtime_Log_Module__loggerFxn2__C");
asm("	.sect \".const:xdc_runtime_Log_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn4__C, ".const:xdc_runtime_Log_Module__loggerFxn4__C");
asm("	.sect \".const:xdc_runtime_Log_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn8__C, ".const:xdc_runtime_Log_Module__loggerFxn8__C");
asm("	.sect \".const:xdc_runtime_Log_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__startupDoneFxn__C, ".const:xdc_runtime_Log_Module__startupDoneFxn__C");
asm("	.sect \".const:xdc_runtime_Log_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Object__count__C, ".const:xdc_runtime_Log_Object__count__C");
asm("	.sect \".const:xdc_runtime_Log_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Object__heap__C, ".const:xdc_runtime_Log_Object__heap__C");
asm("	.sect \".const:xdc_runtime_Log_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Object__sizeof__C, ".const:xdc_runtime_Log_Object__sizeof__C");
asm("	.sect \".const:xdc_runtime_Log_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Object__table__C, ".const:xdc_runtime_Log_Object__table__C");
asm("	.sect \".const:xdc_runtime_Log_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_construct__C, ".const:xdc_runtime_Log_L_construct__C");
asm("	.sect \".const:xdc_runtime_Log_L_construct__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_L_construct__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_L_construct__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_create__C, ".const:xdc_runtime_Log_L_create__C");
asm("	.sect \".const:xdc_runtime_Log_L_create__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_L_create__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_L_create__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_destruct__C, ".const:xdc_runtime_Log_L_destruct__C");
asm("	.sect \".const:xdc_runtime_Log_L_destruct__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_L_destruct__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_L_destruct__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_delete__C, ".const:xdc_runtime_Log_L_delete__C");
asm("	.sect \".const:xdc_runtime_Log_L_delete__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_L_delete__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_L_delete__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_error__C, ".const:xdc_runtime_Log_L_error__C");
asm("	.sect \".const:xdc_runtime_Log_L_error__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_L_error__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_L_error__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_warning__C, ".const:xdc_runtime_Log_L_warning__C");
asm("	.sect \".const:xdc_runtime_Log_L_warning__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_L_warning__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_L_warning__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_info__C, ".const:xdc_runtime_Log_L_info__C");
asm("	.sect \".const:xdc_runtime_Log_L_info__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_L_info__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_L_info__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_start__C, ".const:xdc_runtime_Log_L_start__C");
asm("	.sect \".const:xdc_runtime_Log_L_start__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_L_start__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_L_start__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_stop__C, ".const:xdc_runtime_Log_L_stop__C");
asm("	.sect \".const:xdc_runtime_Log_L_stop__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_L_stop__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_L_stop__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_startInstance__C, ".const:xdc_runtime_Log_L_startInstance__C");
asm("	.sect \".const:xdc_runtime_Log_L_startInstance__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_L_startInstance__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_L_startInstance__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_stopInstance__C, ".const:xdc_runtime_Log_L_stopInstance__C");
asm("	.sect \".const:xdc_runtime_Log_L_stopInstance__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_L_stopInstance__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_L_stopInstance__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsEnabled__C, ".const:xdc_runtime_Main_Module__diagsEnabled__C");
asm("	.sect \".const:xdc_runtime_Main_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsIncluded__C, ".const:xdc_runtime_Main_Module__diagsIncluded__C");
asm("	.sect \".const:xdc_runtime_Main_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsMask__C, ".const:xdc_runtime_Main_Module__diagsMask__C");
asm("	.sect \".const:xdc_runtime_Main_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__gateObj__C, ".const:xdc_runtime_Main_Module__gateObj__C");
asm("	.sect \".const:xdc_runtime_Main_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__gatePrms__C, ".const:xdc_runtime_Main_Module__gatePrms__C");
asm("	.sect \".const:xdc_runtime_Main_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__id__C, ".const:xdc_runtime_Main_Module__id__C");
asm("	.sect \".const:xdc_runtime_Main_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerDefined__C, ".const:xdc_runtime_Main_Module__loggerDefined__C");
asm("	.sect \".const:xdc_runtime_Main_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerObj__C, ".const:xdc_runtime_Main_Module__loggerObj__C");
asm("	.sect \".const:xdc_runtime_Main_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn0__C, ".const:xdc_runtime_Main_Module__loggerFxn0__C");
asm("	.sect \".const:xdc_runtime_Main_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn1__C, ".const:xdc_runtime_Main_Module__loggerFxn1__C");
asm("	.sect \".const:xdc_runtime_Main_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn2__C, ".const:xdc_runtime_Main_Module__loggerFxn2__C");
asm("	.sect \".const:xdc_runtime_Main_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn4__C, ".const:xdc_runtime_Main_Module__loggerFxn4__C");
asm("	.sect \".const:xdc_runtime_Main_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn8__C, ".const:xdc_runtime_Main_Module__loggerFxn8__C");
asm("	.sect \".const:xdc_runtime_Main_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__startupDoneFxn__C, ".const:xdc_runtime_Main_Module__startupDoneFxn__C");
asm("	.sect \".const:xdc_runtime_Main_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Object__count__C, ".const:xdc_runtime_Main_Object__count__C");
asm("	.sect \".const:xdc_runtime_Main_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Object__heap__C, ".const:xdc_runtime_Main_Object__heap__C");
asm("	.sect \".const:xdc_runtime_Main_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Object__sizeof__C, ".const:xdc_runtime_Main_Object__sizeof__C");
asm("	.sect \".const:xdc_runtime_Main_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Object__table__C, ".const:xdc_runtime_Main_Object__table__C");
asm("	.sect \".const:xdc_runtime_Main_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsEnabled__C, ".const:xdc_runtime_Memory_Module__diagsEnabled__C");
asm("	.sect \".const:xdc_runtime_Memory_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsIncluded__C, ".const:xdc_runtime_Memory_Module__diagsIncluded__C");
asm("	.sect \".const:xdc_runtime_Memory_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsMask__C, ".const:xdc_runtime_Memory_Module__diagsMask__C");
asm("	.sect \".const:xdc_runtime_Memory_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__gateObj__C, ".const:xdc_runtime_Memory_Module__gateObj__C");
asm("	.sect \".const:xdc_runtime_Memory_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__gatePrms__C, ".const:xdc_runtime_Memory_Module__gatePrms__C");
asm("	.sect \".const:xdc_runtime_Memory_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__id__C, ".const:xdc_runtime_Memory_Module__id__C");
asm("	.sect \".const:xdc_runtime_Memory_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerDefined__C, ".const:xdc_runtime_Memory_Module__loggerDefined__C");
asm("	.sect \".const:xdc_runtime_Memory_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerObj__C, ".const:xdc_runtime_Memory_Module__loggerObj__C");
asm("	.sect \".const:xdc_runtime_Memory_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn0__C, ".const:xdc_runtime_Memory_Module__loggerFxn0__C");
asm("	.sect \".const:xdc_runtime_Memory_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn1__C, ".const:xdc_runtime_Memory_Module__loggerFxn1__C");
asm("	.sect \".const:xdc_runtime_Memory_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn2__C, ".const:xdc_runtime_Memory_Module__loggerFxn2__C");
asm("	.sect \".const:xdc_runtime_Memory_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn4__C, ".const:xdc_runtime_Memory_Module__loggerFxn4__C");
asm("	.sect \".const:xdc_runtime_Memory_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn8__C, ".const:xdc_runtime_Memory_Module__loggerFxn8__C");
asm("	.sect \".const:xdc_runtime_Memory_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__startupDoneFxn__C, ".const:xdc_runtime_Memory_Module__startupDoneFxn__C");
asm("	.sect \".const:xdc_runtime_Memory_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Object__count__C, ".const:xdc_runtime_Memory_Object__count__C");
asm("	.sect \".const:xdc_runtime_Memory_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Object__heap__C, ".const:xdc_runtime_Memory_Object__heap__C");
asm("	.sect \".const:xdc_runtime_Memory_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Object__sizeof__C, ".const:xdc_runtime_Memory_Object__sizeof__C");
asm("	.sect \".const:xdc_runtime_Memory_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Object__table__C, ".const:xdc_runtime_Memory_Object__table__C");
asm("	.sect \".const:xdc_runtime_Memory_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_defaultHeapInstance__C, ".const:xdc_runtime_Memory_defaultHeapInstance__C");
asm("	.sect \".const:xdc_runtime_Memory_defaultHeapInstance__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_defaultHeapInstance__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_defaultHeapInstance__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsEnabled__C, ".const:xdc_runtime_Registry_Module__diagsEnabled__C");
asm("	.sect \".const:xdc_runtime_Registry_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsIncluded__C, ".const:xdc_runtime_Registry_Module__diagsIncluded__C");
asm("	.sect \".const:xdc_runtime_Registry_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsMask__C, ".const:xdc_runtime_Registry_Module__diagsMask__C");
asm("	.sect \".const:xdc_runtime_Registry_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__gateObj__C, ".const:xdc_runtime_Registry_Module__gateObj__C");
asm("	.sect \".const:xdc_runtime_Registry_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__gatePrms__C, ".const:xdc_runtime_Registry_Module__gatePrms__C");
asm("	.sect \".const:xdc_runtime_Registry_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__id__C, ".const:xdc_runtime_Registry_Module__id__C");
asm("	.sect \".const:xdc_runtime_Registry_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerDefined__C, ".const:xdc_runtime_Registry_Module__loggerDefined__C");
asm("	.sect \".const:xdc_runtime_Registry_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerObj__C, ".const:xdc_runtime_Registry_Module__loggerObj__C");
asm("	.sect \".const:xdc_runtime_Registry_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn0__C, ".const:xdc_runtime_Registry_Module__loggerFxn0__C");
asm("	.sect \".const:xdc_runtime_Registry_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn1__C, ".const:xdc_runtime_Registry_Module__loggerFxn1__C");
asm("	.sect \".const:xdc_runtime_Registry_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn2__C, ".const:xdc_runtime_Registry_Module__loggerFxn2__C");
asm("	.sect \".const:xdc_runtime_Registry_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn4__C, ".const:xdc_runtime_Registry_Module__loggerFxn4__C");
asm("	.sect \".const:xdc_runtime_Registry_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn8__C, ".const:xdc_runtime_Registry_Module__loggerFxn8__C");
asm("	.sect \".const:xdc_runtime_Registry_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__startupDoneFxn__C, ".const:xdc_runtime_Registry_Module__startupDoneFxn__C");
asm("	.sect \".const:xdc_runtime_Registry_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Object__count__C, ".const:xdc_runtime_Registry_Object__count__C");
asm("	.sect \".const:xdc_runtime_Registry_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Object__heap__C, ".const:xdc_runtime_Registry_Object__heap__C");
asm("	.sect \".const:xdc_runtime_Registry_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Object__sizeof__C, ".const:xdc_runtime_Registry_Object__sizeof__C");
asm("	.sect \".const:xdc_runtime_Registry_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Object__table__C, ".const:xdc_runtime_Registry_Object__table__C");
asm("	.sect \".const:xdc_runtime_Registry_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__A, ".const:xdc_runtime_Startup_firstFxns__A");
asm("	.sect \".const:xdc_runtime_Startup_firstFxns__A\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_firstFxns__A\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_firstFxns__A\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__A, ".const:xdc_runtime_Startup_lastFxns__A");
asm("	.sect \".const:xdc_runtime_Startup_lastFxns__A\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_lastFxns__A\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_lastFxns__A\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__A, ".const:xdc_runtime_Startup_sfxnTab__A");
asm("	.sect \".const:xdc_runtime_Startup_sfxnTab__A\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_sfxnTab__A\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_sfxnTab__A\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__A, ".const:xdc_runtime_Startup_sfxnRts__A");
asm("	.sect \".const:xdc_runtime_Startup_sfxnRts__A\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_sfxnRts__A\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_sfxnRts__A\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsEnabled__C, ".const:xdc_runtime_Startup_Module__diagsEnabled__C");
asm("	.sect \".const:xdc_runtime_Startup_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsIncluded__C, ".const:xdc_runtime_Startup_Module__diagsIncluded__C");
asm("	.sect \".const:xdc_runtime_Startup_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsMask__C, ".const:xdc_runtime_Startup_Module__diagsMask__C");
asm("	.sect \".const:xdc_runtime_Startup_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__gateObj__C, ".const:xdc_runtime_Startup_Module__gateObj__C");
asm("	.sect \".const:xdc_runtime_Startup_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__gatePrms__C, ".const:xdc_runtime_Startup_Module__gatePrms__C");
asm("	.sect \".const:xdc_runtime_Startup_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__id__C, ".const:xdc_runtime_Startup_Module__id__C");
asm("	.sect \".const:xdc_runtime_Startup_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerDefined__C, ".const:xdc_runtime_Startup_Module__loggerDefined__C");
asm("	.sect \".const:xdc_runtime_Startup_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerObj__C, ".const:xdc_runtime_Startup_Module__loggerObj__C");
asm("	.sect \".const:xdc_runtime_Startup_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn0__C, ".const:xdc_runtime_Startup_Module__loggerFxn0__C");
asm("	.sect \".const:xdc_runtime_Startup_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn1__C, ".const:xdc_runtime_Startup_Module__loggerFxn1__C");
asm("	.sect \".const:xdc_runtime_Startup_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn2__C, ".const:xdc_runtime_Startup_Module__loggerFxn2__C");
asm("	.sect \".const:xdc_runtime_Startup_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn4__C, ".const:xdc_runtime_Startup_Module__loggerFxn4__C");
asm("	.sect \".const:xdc_runtime_Startup_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn8__C, ".const:xdc_runtime_Startup_Module__loggerFxn8__C");
asm("	.sect \".const:xdc_runtime_Startup_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__startupDoneFxn__C, ".const:xdc_runtime_Startup_Module__startupDoneFxn__C");
asm("	.sect \".const:xdc_runtime_Startup_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Object__count__C, ".const:xdc_runtime_Startup_Object__count__C");
asm("	.sect \".const:xdc_runtime_Startup_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Object__heap__C, ".const:xdc_runtime_Startup_Object__heap__C");
asm("	.sect \".const:xdc_runtime_Startup_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Object__sizeof__C, ".const:xdc_runtime_Startup_Object__sizeof__C");
asm("	.sect \".const:xdc_runtime_Startup_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Object__table__C, ".const:xdc_runtime_Startup_Object__table__C");
asm("	.sect \".const:xdc_runtime_Startup_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_maxPasses__C, ".const:xdc_runtime_Startup_maxPasses__C");
asm("	.sect \".const:xdc_runtime_Startup_maxPasses__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_maxPasses__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_maxPasses__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__C, ".const:xdc_runtime_Startup_firstFxns__C");
asm("	.sect \".const:xdc_runtime_Startup_firstFxns__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_firstFxns__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_firstFxns__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__C, ".const:xdc_runtime_Startup_lastFxns__C");
asm("	.sect \".const:xdc_runtime_Startup_lastFxns__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_lastFxns__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_lastFxns__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_startModsFxn__C, ".const:xdc_runtime_Startup_startModsFxn__C");
asm("	.sect \".const:xdc_runtime_Startup_startModsFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_startModsFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_startModsFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_execImpl__C, ".const:xdc_runtime_Startup_execImpl__C");
asm("	.sect \".const:xdc_runtime_Startup_execImpl__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_execImpl__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_execImpl__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__C, ".const:xdc_runtime_Startup_sfxnTab__C");
asm("	.sect \".const:xdc_runtime_Startup_sfxnTab__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_sfxnTab__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_sfxnTab__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__C, ".const:xdc_runtime_Startup_sfxnRts__C");
asm("	.sect \".const:xdc_runtime_Startup_sfxnRts__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_sfxnRts__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_sfxnRts__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsEnabled__C, ".const:xdc_runtime_SysMin_Module__diagsEnabled__C");
asm("	.sect \".const:xdc_runtime_SysMin_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsIncluded__C, ".const:xdc_runtime_SysMin_Module__diagsIncluded__C");
asm("	.sect \".const:xdc_runtime_SysMin_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsMask__C, ".const:xdc_runtime_SysMin_Module__diagsMask__C");
asm("	.sect \".const:xdc_runtime_SysMin_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gateObj__C, ".const:xdc_runtime_SysMin_Module__gateObj__C");
asm("	.sect \".const:xdc_runtime_SysMin_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gatePrms__C, ".const:xdc_runtime_SysMin_Module__gatePrms__C");
asm("	.sect \".const:xdc_runtime_SysMin_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__id__C, ".const:xdc_runtime_SysMin_Module__id__C");
asm("	.sect \".const:xdc_runtime_SysMin_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerDefined__C, ".const:xdc_runtime_SysMin_Module__loggerDefined__C");
asm("	.sect \".const:xdc_runtime_SysMin_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerObj__C, ".const:xdc_runtime_SysMin_Module__loggerObj__C");
asm("	.sect \".const:xdc_runtime_SysMin_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn0__C, ".const:xdc_runtime_SysMin_Module__loggerFxn0__C");
asm("	.sect \".const:xdc_runtime_SysMin_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn1__C, ".const:xdc_runtime_SysMin_Module__loggerFxn1__C");
asm("	.sect \".const:xdc_runtime_SysMin_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn2__C, ".const:xdc_runtime_SysMin_Module__loggerFxn2__C");
asm("	.sect \".const:xdc_runtime_SysMin_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn4__C, ".const:xdc_runtime_SysMin_Module__loggerFxn4__C");
asm("	.sect \".const:xdc_runtime_SysMin_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn8__C, ".const:xdc_runtime_SysMin_Module__loggerFxn8__C");
asm("	.sect \".const:xdc_runtime_SysMin_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__startupDoneFxn__C, ".const:xdc_runtime_SysMin_Module__startupDoneFxn__C");
asm("	.sect \".const:xdc_runtime_SysMin_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Object__count__C, ".const:xdc_runtime_SysMin_Object__count__C");
asm("	.sect \".const:xdc_runtime_SysMin_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Object__heap__C, ".const:xdc_runtime_SysMin_Object__heap__C");
asm("	.sect \".const:xdc_runtime_SysMin_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Object__sizeof__C, ".const:xdc_runtime_SysMin_Object__sizeof__C");
asm("	.sect \".const:xdc_runtime_SysMin_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Object__table__C, ".const:xdc_runtime_SysMin_Object__table__C");
asm("	.sect \".const:xdc_runtime_SysMin_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_bufSize__C, ".const:xdc_runtime_SysMin_bufSize__C");
asm("	.sect \".const:xdc_runtime_SysMin_bufSize__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_bufSize__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_bufSize__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_flushAtExit__C, ".const:xdc_runtime_SysMin_flushAtExit__C");
asm("	.sect \".const:xdc_runtime_SysMin_flushAtExit__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_flushAtExit__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_flushAtExit__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_outputFxn__C, ".const:xdc_runtime_SysMin_outputFxn__C");
asm("	.sect \".const:xdc_runtime_SysMin_outputFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_outputFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_outputFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_outputFunc__C, ".const:xdc_runtime_SysMin_outputFunc__C");
asm("	.sect \".const:xdc_runtime_SysMin_outputFunc__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_outputFunc__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_outputFunc__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__diagsEnabled__C, ".const:xdc_runtime_System_Module__diagsEnabled__C");
asm("	.sect \".const:xdc_runtime_System_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__diagsIncluded__C, ".const:xdc_runtime_System_Module__diagsIncluded__C");
asm("	.sect \".const:xdc_runtime_System_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__diagsMask__C, ".const:xdc_runtime_System_Module__diagsMask__C");
asm("	.sect \".const:xdc_runtime_System_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__gateObj__C, ".const:xdc_runtime_System_Module__gateObj__C");
asm("	.sect \".const:xdc_runtime_System_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__gatePrms__C, ".const:xdc_runtime_System_Module__gatePrms__C");
asm("	.sect \".const:xdc_runtime_System_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__id__C, ".const:xdc_runtime_System_Module__id__C");
asm("	.sect \".const:xdc_runtime_System_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__loggerDefined__C, ".const:xdc_runtime_System_Module__loggerDefined__C");
asm("	.sect \".const:xdc_runtime_System_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__loggerObj__C, ".const:xdc_runtime_System_Module__loggerObj__C");
asm("	.sect \".const:xdc_runtime_System_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn0__C, ".const:xdc_runtime_System_Module__loggerFxn0__C");
asm("	.sect \".const:xdc_runtime_System_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn1__C, ".const:xdc_runtime_System_Module__loggerFxn1__C");
asm("	.sect \".const:xdc_runtime_System_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn2__C, ".const:xdc_runtime_System_Module__loggerFxn2__C");
asm("	.sect \".const:xdc_runtime_System_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn4__C, ".const:xdc_runtime_System_Module__loggerFxn4__C");
asm("	.sect \".const:xdc_runtime_System_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn8__C, ".const:xdc_runtime_System_Module__loggerFxn8__C");
asm("	.sect \".const:xdc_runtime_System_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__startupDoneFxn__C, ".const:xdc_runtime_System_Module__startupDoneFxn__C");
asm("	.sect \".const:xdc_runtime_System_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Object__count__C, ".const:xdc_runtime_System_Object__count__C");
asm("	.sect \".const:xdc_runtime_System_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Object__heap__C, ".const:xdc_runtime_System_Object__heap__C");
asm("	.sect \".const:xdc_runtime_System_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Object__sizeof__C, ".const:xdc_runtime_System_Object__sizeof__C");
asm("	.sect \".const:xdc_runtime_System_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Object__table__C, ".const:xdc_runtime_System_Object__table__C");
asm("	.sect \".const:xdc_runtime_System_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_A_cannotFitIntoArg__C, ".const:xdc_runtime_System_A_cannotFitIntoArg__C");
asm("	.sect \".const:xdc_runtime_System_A_cannotFitIntoArg__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_A_cannotFitIntoArg__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_A_cannotFitIntoArg__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_maxAtexitHandlers__C, ".const:xdc_runtime_System_maxAtexitHandlers__C");
asm("	.sect \".const:xdc_runtime_System_maxAtexitHandlers__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_maxAtexitHandlers__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_maxAtexitHandlers__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_extendFxn__C, ".const:xdc_runtime_System_extendFxn__C");
asm("	.sect \".const:xdc_runtime_System_extendFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_extendFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_extendFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_charTab__A, ".const:xdc_runtime_Text_charTab__A");
asm("	.sect \".const:xdc_runtime_Text_charTab__A\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_charTab__A\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_charTab__A\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__A, ".const:xdc_runtime_Text_nodeTab__A");
asm("	.sect \".const:xdc_runtime_Text_nodeTab__A\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_nodeTab__A\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_nodeTab__A\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsEnabled__C, ".const:xdc_runtime_Text_Module__diagsEnabled__C");
asm("	.sect \".const:xdc_runtime_Text_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsIncluded__C, ".const:xdc_runtime_Text_Module__diagsIncluded__C");
asm("	.sect \".const:xdc_runtime_Text_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsMask__C, ".const:xdc_runtime_Text_Module__diagsMask__C");
asm("	.sect \".const:xdc_runtime_Text_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__gateObj__C, ".const:xdc_runtime_Text_Module__gateObj__C");
asm("	.sect \".const:xdc_runtime_Text_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__gatePrms__C, ".const:xdc_runtime_Text_Module__gatePrms__C");
asm("	.sect \".const:xdc_runtime_Text_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__id__C, ".const:xdc_runtime_Text_Module__id__C");
asm("	.sect \".const:xdc_runtime_Text_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerDefined__C, ".const:xdc_runtime_Text_Module__loggerDefined__C");
asm("	.sect \".const:xdc_runtime_Text_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerObj__C, ".const:xdc_runtime_Text_Module__loggerObj__C");
asm("	.sect \".const:xdc_runtime_Text_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn0__C, ".const:xdc_runtime_Text_Module__loggerFxn0__C");
asm("	.sect \".const:xdc_runtime_Text_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn1__C, ".const:xdc_runtime_Text_Module__loggerFxn1__C");
asm("	.sect \".const:xdc_runtime_Text_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn2__C, ".const:xdc_runtime_Text_Module__loggerFxn2__C");
asm("	.sect \".const:xdc_runtime_Text_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn4__C, ".const:xdc_runtime_Text_Module__loggerFxn4__C");
asm("	.sect \".const:xdc_runtime_Text_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn8__C, ".const:xdc_runtime_Text_Module__loggerFxn8__C");
asm("	.sect \".const:xdc_runtime_Text_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__startupDoneFxn__C, ".const:xdc_runtime_Text_Module__startupDoneFxn__C");
asm("	.sect \".const:xdc_runtime_Text_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Object__count__C, ".const:xdc_runtime_Text_Object__count__C");
asm("	.sect \".const:xdc_runtime_Text_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Object__heap__C, ".const:xdc_runtime_Text_Object__heap__C");
asm("	.sect \".const:xdc_runtime_Text_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Object__sizeof__C, ".const:xdc_runtime_Text_Object__sizeof__C");
asm("	.sect \".const:xdc_runtime_Text_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Object__table__C, ".const:xdc_runtime_Text_Object__table__C");
asm("	.sect \".const:xdc_runtime_Text_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_nameUnknown__C, ".const:xdc_runtime_Text_nameUnknown__C");
asm("	.sect \".const:xdc_runtime_Text_nameUnknown__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_nameUnknown__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_nameUnknown__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_nameEmpty__C, ".const:xdc_runtime_Text_nameEmpty__C");
asm("	.sect \".const:xdc_runtime_Text_nameEmpty__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_nameEmpty__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_nameEmpty__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_nameStatic__C, ".const:xdc_runtime_Text_nameStatic__C");
asm("	.sect \".const:xdc_runtime_Text_nameStatic__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_nameStatic__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_nameStatic__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_isLoaded__C, ".const:xdc_runtime_Text_isLoaded__C");
asm("	.sect \".const:xdc_runtime_Text_isLoaded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_isLoaded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_isLoaded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_charTab__C, ".const:xdc_runtime_Text_charTab__C");
asm("	.sect \".const:xdc_runtime_Text_charTab__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_charTab__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_charTab__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__C, ".const:xdc_runtime_Text_nodeTab__C");
asm("	.sect \".const:xdc_runtime_Text_nodeTab__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_nodeTab__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_nodeTab__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_charCnt__C, ".const:xdc_runtime_Text_charCnt__C");
asm("	.sect \".const:xdc_runtime_Text_charCnt__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_charCnt__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_charCnt__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_nodeCnt__C, ".const:xdc_runtime_Text_nodeCnt__C");
asm("	.sect \".const:xdc_runtime_Text_nodeCnt__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_nodeCnt__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_nodeCnt__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_unnamedModsLastId__C, ".const:xdc_runtime_Text_unnamedModsLastId__C");
asm("	.sect \".const:xdc_runtime_Text_unnamedModsLastId__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_unnamedModsLastId__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_unnamedModsLastId__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_registryModsLastId__C, ".const:xdc_runtime_Text_registryModsLastId__C");
asm("	.sect \".const:xdc_runtime_Text_registryModsLastId__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_registryModsLastId__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_registryModsLastId__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn__C, ".const:xdc_runtime_Text_visitRopeFxn__C");
asm("	.sect \".const:xdc_runtime_Text_visitRopeFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_visitRopeFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_visitRopeFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn2__C, ".const:xdc_runtime_Text_visitRopeFxn2__C");
asm("	.sect \".const:xdc_runtime_Text_visitRopeFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_visitRopeFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_visitRopeFxn2__C\"");
asm("	.clink ");

