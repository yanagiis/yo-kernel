#ifndef ARCH_CORTEX_M_LINK_H
#define ARCH_CORTEX_M_LINK_H

#include <stdint.h>

#define __ISR_VECTOR __attribute__((section(".isr_vector")))
#define __KERNEL_STACK __attribute__((section(".kernel_stack")))
#define __MEMPOOL __attribute__((section(".mempool")))

extern uint32_t kernel_text_start;
extern uint32_t kernel_text_end;
extern uint32_t kernel_data_start;
extern uint32_t kernel_data_end;
extern uint32_t kernel_stack_start;
extern uint32_t kernel_stack_end;
extern uint32_t kernel_bss_start;
extern uint32_t kernel_bss_end;

extern uint32_t mem_start;
extern uint32_t mem_end;

#endif  // ARCH_CORTEX_M_LINK_H
