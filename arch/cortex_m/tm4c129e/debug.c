#include <kernel/init.h>
#include <arch/cortex_m/reg.h>
#include <arch/cortex_m/tm4c129e/sysclock.h>
#include <arch/cortex_m/tm4c129e/sysctl.h>
#include <arch/cortex_m/tm4c129e/gpio.h>
#include <arch/cortex_m/tm4c129e/uart.h>

#define UART_NO 0         // Uart 0
#define UART_GPIO_PORT 0  // GPIOA
#define UART_GPIO_RX 0    // PA0
#define UART_GPIO_TX 1    // PA1

#define BAUDRATE (115200)
#define BRDDEN (16 * BAUDRATE)
#define BRDI (SYSCLK_FREQ / BRDDEN)
#define REMAINDER (SYSCLK_FREQ - BRDDEN * BRDI)
#define DIVFRAC ((REMAINDER * 64 + (BRDDEN / 2)) / BRDDEN)

void dbg_putc(const char c)
{
    while ((getreg32(TM4C129X_UART_TFR(TM4C129X_UART0)) & (0x20)) != 0)
        ;
    putreg32(c, TM4C129X_UART_DR(TM4C129X_UART0));
}

char dbg_getc(void)
{
    while ((getreg32(TM4C129X_UART_TFR(TM4C129X_UART0)) & (0x10)) != 0)
        ;

    uint32_t c = getreg32(TM4C129X_UART_DR(TM4C129X_UART0));

    return c;
}

void init_debug_uart(void)
{
    uint32_t regval;

    // turn uart0 power on
    putreg32(1, TM4C129X_PERIPH1_BITBAND_ADDR(TM4C129X_SYSCTL_PCUART, UART_NO));
    // enable uart0 clock
    putreg32(1,
             TM4C129X_PERIPH1_BITBAND_ADDR(TM4C129X_SYSCTL_RCGCUART, UART_NO));

    // turn GPIOA power on
    putreg32(1, TM4C129X_PERIPH1_BITBAND_ADDR(TM4C129X_SYSCTL_PCGPIO,
                                              UART_GPIO_PORT));
    // enable GPIOA clock
    putreg32(1, TM4C129X_PERIPH1_BITBAND_ADDR(TM4C129X_SYSCTL_RCGCGPIO,
                                              UART_GPIO_PORT));

    // config GPIO setting
    putreg32(1, TM4C129X_PERIPH1_BITBAND_ADDR(
                    TM4C129X_GPIO_AFSEL(TM4C129X_GPIOA), UART_GPIO_RX));
    putreg32(0, TM4C129X_PERIPH1_BITBAND_ADDR(TM4C129X_GPIO_ODR(TM4C129X_GPIOA),
                                              UART_GPIO_RX));
    putreg32(1, TM4C129X_PERIPH1_BITBAND_ADDR(TM4C129X_GPIO_DEN(TM4C129X_GPIOA),
                                              UART_GPIO_RX));

    putreg32(1, TM4C129X_PERIPH1_BITBAND_ADDR(
                    TM4C129X_GPIO_AFSEL(TM4C129X_GPIOA), UART_GPIO_TX));
    putreg32(0, TM4C129X_PERIPH1_BITBAND_ADDR(TM4C129X_GPIO_ODR(TM4C129X_GPIOA),
                                              UART_GPIO_TX));
    putreg32(1, TM4C129X_PERIPH1_BITBAND_ADDR(TM4C129X_GPIO_DEN(TM4C129X_GPIOA),
                                              UART_GPIO_TX));

    regval = getreg32(TM4C129X_GPIO_PCTL(TM4C129X_GPIOA));
    regval &= 0xffffff00;
    regval |= 0x11;
    putreg32(regval, TM4C129X_GPIO_PCTL(TM4C129X_GPIOA));

    while ((getreg32(TM4C129X_SYSCTL_PRUART) & 0x1) == 0)
        ;

    // config UART
    putreg32(
        0, TM4C129X_PERIPH1_BITBAND_ADDR(TM4C129X_UART_CTL(TM4C129X_UART0), 0));

    // set baudrate to 115200
    putreg32(BRDI, TM4C129X_UART_IBRD(TM4C129X_UART0));
    putreg32(DIVFRAC, TM4C129X_UART_FBRD(TM4C129X_UART0));

    // set line control (8N1)
    putreg32(0x70, TM4C129X_UART_LCRH(TM4C129X_UART0));

    // set uart clock source
    putreg32(0x0, TM4C129X_UART_CC(TM4C129X_UART0));

    // enable uart
    putreg32(0x0301, TM4C129X_UART_CTL(TM4C129X_UART0));
}

REG_INIT(init_debug_uart, INIT_LEVEL_EARLIEST);
