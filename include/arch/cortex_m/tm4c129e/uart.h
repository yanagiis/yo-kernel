#ifndef ARCH_CORTEX_M_TM4C129X_UART_H
#define ARCH_CORTEX_M_TM4C129X_UART_H

#define TM4C129X_UART_DR(base) (base + 0x000)
#define TM4C129X_UART_RSRECR(base) (base + 0x004)
#define TM4C129X_UART_TFR(base) (base + 0x018)
#define TM4C129X_UART_ILPR(base) (base + 0x020)
#define TM4C129X_UART_IBRD(base) (base + 0x024)
#define TM4C129X_UART_FBRD(base) (base + 0x028)
#define TM4C129X_UART_LCRH(base) (base + 0x02C)
#define TM4C129X_UART_CTL(base) (base + 0x030)
#define TM4C129X_UART_CC(base) (base + 0xFC8)

#endif  // ARCH_CORTEX_M_TM4C129X_UART_H
