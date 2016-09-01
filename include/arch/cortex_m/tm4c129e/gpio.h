#ifndef ARCH_CORTEX_M_TM4C129X_GPIO_H
#define ARCH_CORTEX_M_TM4C129X_GPIO_H

#define TM4C129X_GPIO_DATA(base) (base + 0x000)
#define TM4C129X_GPIO_DIR(base) (base + 0x400)
#define TM4C129X_GPIO_AFSEL(base) (base + 0x420)
#define TM4C129X_GPIO_ODR(base) (base + 0x50C)
#define TM4C129X_GPIO_DEN(base) (base + 0x51C)
#define TM4C129X_GPIO_CR(base) (base + 0x524)
#define TM4C129X_GPIO_PCTL(base) (base + 0x52C)

#endif  // ARCH_CORTEX_M_TM4C129X_GPIO_H
