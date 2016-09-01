#ifndef ARCH_CORTEX_M_NVIC_H
#define ARCH_CORTEX_M_NVIC_H

#include <stdint.h>

#define NVIC_PRIORITY_GROUP_8_1 (0x400)
#define NVIC_PRIORITY_GROUP_4_2 (0x500)
#define NVIC_PRIORITY_GROUP_2_4 (0x600)
#define NVIC_PRIORITY_GROUP_1_8 (0x700)

void init_nvic(uint32_t priority_group);
void set_irq_priority(int irq, uint8_t group_priority, uint8_t sub_priority);

#endif  // ARCH_CORTEX_M_NVIC_H
