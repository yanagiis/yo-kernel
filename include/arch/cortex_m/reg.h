#ifndef ARCH_CORTEX_M_H
#define ARCH_CORTEX_M_H

#include <stdint.h>

#define getreg32(a) (*(volatile uint32_t *)(a))
#define putreg32(v, a) (*(volatile uint32_t *)(a) = (v))

#endif // ARCH_CORTEX_M_H
