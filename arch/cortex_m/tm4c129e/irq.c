#include <arch/cortex_m/reg.h>
#include <arch/cortex_m/nvic.h>

void init_irq(void)
{
    init_nvic((uint32_t) NVIC_PRIORITY_GROUP_8_1);
}
