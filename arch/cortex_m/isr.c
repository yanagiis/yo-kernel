#include <stdint.h>
#include <error.h>
#include <kernel/init.h>
#include <arch/cortex_m/link.h>
#include <arch/cortex_m/mpu.h>

void busfault(void);
void nointerrupt(void);
void hard_fault_handler(void);
void nmi_handler(void);

__KERNEL_STACK uint32_t *kernel_stack = &kernel_stack_end;

__ISR_VECTOR
void (*const isr_vectors[])(void) = {
    start_yo,            // Reset
    nmi_handler,         // Non-maskable interrupt
    hard_fault_handler,  // Hard fault
    // mem_manage_handler,  // Memory fault
    0,
    busfault,            // Bus fault
    nointerrupt,         // Usage fault
    0,                   // Reserved
    0,                   // Reserved
    0,                   // Reserved
    0,                   // Reserved
#if 0
    svc_handler,            // SVCall
    debug_monitor_handler,  // Debug Monitor
    pendsv_handler,         // PendSV
    systick_handler         // SysTick
#endif
    // TODO: Complete it
};

void busfault(void)
{
    while (1)
        ;
}

void nointerrupt(void)
{
    while (1)
        ;
}

void hard_fault_handler(void)
{
    /*
     * If we are here, it may mean currently executing priority is higher
     * than or equal to the priority of fault exception, inhibiting normal
     * preemption, then processor escalates the exception priority to
     * HardFault.
     */
    // panic("Kernel panic: Hard fault. Restarting\n");
}

void nmi_handler(void)
{
    // panic("Kernel panic: NMI. Restarting\n");
}

int isr_is_setup(int irq)
{
	return !(isr_vectors[irq + 16] == 0);
}
