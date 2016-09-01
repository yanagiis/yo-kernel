#ifndef ARCH_CORTEX_M_IRQ_H
#define ARCH_CORTEX_M_IRQ_H

static inline void disable_irq(void)
{
    __asm__ __volatile__("cpsid i");
}

static inline void enable_irq(void)
{
    __asm__ __volatile__("cpsie i");
}

#endif  // ARCH_CORTEX_M_IRQ_H
