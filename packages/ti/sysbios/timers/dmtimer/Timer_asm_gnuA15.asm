@
@ ======== Timer_asm_gnuA15.asm ========
@
@! Revision History
@! ================
@! 14-Jul-2012 ashish      copied from Timer_asm.sv7M
@


        .arm

        .global ti_sysbios_timers_dmtimer_Timer_spinLoop__I

        .align  4

        .text
	    .func ti_sysbios_timers_dmtimer_Timer_spinLoop__I
        
ti_sysbios_timers_dmtimer_Timer_spinLoop__I:

loop:
        subs    r0, r0, #2  @ subtract 2
	    bgt     loop        @ branch loop if > 0
        mov     pc, lr      @ return if subtraction is zero

        .endfunc

        .end
