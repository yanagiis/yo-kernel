#include <arch/cortex_m/reg.h>
#include <arch/cortex_m/nvic.h>
#include <arch/cortex_m/periph.h>

#include INC_CHIP(irq.h)

#define AIRCR_VECTKEY_MASK ((uint32_t)0x05FA0000)

void init_nvic(uint32_t priority_group)
{
    putreg32(AIRCR_VECTKEY_MASK | priority_group, SCB_APINT);
}

void set_irq_prority(enum IRQN irq,
                     uint8_t group_priority,
                     uint8_t sub_priority)
{
    uint8_t priority = 0x0, group_shifts = 0x0, sub_shifts = 0x0;

    sub_shifts = (0x700 - (getreg32(SCB_APINT) & (uint32_t)0x700)) >> 0x08;
    group_shifts = 0x4 - sub_shifts;

    priority =
        (group_priority << group_shifts) | (sub_priority & (0xf >> sub_shifts));

    if (irq < 0) {
        volatile uint8_t *syspri = ((volatile uint8_t *)SCB_SYSPRI1);
        syspri[(((uint32_t)irq) & 0xf) - 4] = priority << 0x4;
    } else {
        volatile uint8_t *nvicpri = ((volatile uint8_t *)NVIC_PRI);
        nvicpri[(uint32_t)irq] = priority << 0x4;
    }
}
