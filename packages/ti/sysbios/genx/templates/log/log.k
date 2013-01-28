#0000000001 [t=0x%x] ti.sysbios.knl.Task: LM_switch: oldtsk: 0x%x, oldfunc: 0x%x, newtsk: 0x%x, newfunc: 0x%x
#0000000002 [t=0x%x] xdc.runtime.Main: "log.c", line %d: tsk0 Entering. arg0,1 = 1 2
#0000000003 [t=0x%x] xdc.runtime.Main: WARNING: "log.c", line %d: tsk0 demonstrating warning event. arg0,1 = 1 2
#0000000004 [t=0x%x] xdc.runtime.Main: "log.c", line %d: tsk0 Calling Task_yield
#0000000005 [t=0x%x] ti.sysbios.knl.Task: LM_yield: tsk: 0x%x, func: 0x%x, currThread: 2
#0000000006 [t=0x%x] ti.sysbios.knl.Task: LM_switch: oldtsk: 0x%x, oldfunc: 0x%x, newtsk: 0x%x, newfunc: 0x%x
#0000000007 [t=0x%x] xdc.runtime.Main: "log.c", line %d: tsk1 Entering. arg0,1 = 11 12
#0000000008 [t=0x%x] xdc.runtime.Main: ERROR: "log.c", line %d: tsk1 demonstrating error event. arg0,1 = 11 12
#0000000009 [t=0x%x] xdc.runtime.Main: "log.c", line %d: tsk1 Calling Semaphore_pend
#0000000010 [t=0x%x] ti.sysbios.knl.Task: LM_switch: oldtsk: 0x%x, oldfunc: 0x%x, newtsk: 0x%x, newfunc: 0x%x
#0000000011 [t=0x%x] xdc.runtime.Main: "log.c", line %d: tsk2 Entering. arg0,1 = 21 22
#0000000012 [t=0x%x] xdc.runtime.Main: "log.c", line %d: tsk2 Calling Task_yield
#0000000013 [t=0x%x] ti.sysbios.knl.Task: LM_yield: tsk: 0x%x, func: 0x%x, currThread: 2
#0000000014 [t=0x%x] ti.sysbios.knl.Task: LM_switch: oldtsk: 0x%x, oldfunc: 0x%x, newtsk: 0x%x, newfunc: 0x%x
#0000000015 [t=0x%x] xdc.runtime.Main: "log.c", line %d: tsk0 Exiting
#0000000016 [t=0x%x] ti.sysbios.knl.Task: LM_switch: oldtsk: 0x%x, oldfunc: 0x%x, newtsk: 0x%x, newfunc: 0x%x
#0000000017 [t=0x%x] xdc.runtime.Main: "log.c", line %d: tsk2 Exiting
#0000000018 [t=0x%x] ti.sysbios.knl.Task: LM_switch: oldtsk: 0x%x, oldfunc: 0x%x, newtsk: 0x%x, newfunc: 0x%x
#0000000019 [t=0x%x] xdc.runtime.Main: "log.c", line %d: Entering idl0Fxn.
#0000000020 [t=0x%x] ti.sysbios.knl.Task: LM_switch: oldtsk: 0x%x, oldfunc: 0x%x, newtsk: 0x%x, newfunc: 0x%x
#0000000021 [t=0x%x] xdc.runtime.Main: "log.c", line %d: tsk1 Exiting
#0000000022 [t=0x%x] ti.sysbios.knl.Task: LM_switch: oldtsk: 0x%x, oldfunc: 0x%x, newtsk: 0x%x, newfunc: 0x%x
#0000000023 [t=0x%x] xdc.runtime.Main: "log.c", line %d: Calling BIOS_exit
