#ifndef ARCH_CORTEX_M_TM4C129X_SYSCTL_H
#define ARCH_CORTEX_M_TM4C129X_SYSCTL_H

#include "memory_map.h"

#define TM4C129X_SYSCTL_DID0             (TM4C129X_SYSCTL + 0x000)  // Device Identification 0
#define TM4C129X_SYSCTL_DID1             (TM4C129X_SYSCTL + 0x004)  // Device Identification 1
#define TM4C129X_SYSCTL_DC0              (TM4C129X_SYSCTL + 0x008)  // Device Capabilities 0
#define TM4C129X_SYSCTL_DC1              (TM4C129X_SYSCTL + 0x010)  // Device Capabilities 1
#define TM4C129X_SYSCTL_DC2              (TM4C129X_SYSCTL + 0x014)  // Device Capabilities 2
#define TM4C129X_SYSCTL_DC3              (TM4C129X_SYSCTL + 0x018)  // Device Capabilities 3
#define TM4C129X_SYSCTL_DC4              (TM4C129X_SYSCTL + 0x01C)  // Device Capabilities 4
#define TM4C129X_SYSCTL_DC5              (TM4C129X_SYSCTL + 0x020)  // Device Capabilities 5
#define TM4C129X_SYSCTL_DC6              (TM4C129X_SYSCTL + 0x024)  // Device Capabilities 6
#define TM4C129X_SYSCTL_DC7              (TM4C129X_SYSCTL + 0x028)  // Device Capabilities 7
#define TM4C129X_SYSCTL_DC8              (TM4C129X_SYSCTL + 0x02C)  // Device Capabilities 8
#define TM4C129X_SYSCTL_PBORCTL          (TM4C129X_SYSCTL + 0x030)  // Brown-Out Reset Control
#define TM4C129X_SYSCTL_PTBOCTL          (TM4C129X_SYSCTL + 0x038)  // Power-Temp Brown Out Control
#define TM4C129X_SYSCTL_SRCR0            (TM4C129X_SYSCTL + 0x040)  // Software Reset Control 0
#define TM4C129X_SYSCTL_SRCR1            (TM4C129X_SYSCTL + 0x044)  // Software Reset Control 1
#define TM4C129X_SYSCTL_SRCR2            (TM4C129X_SYSCTL + 0x048)  // Software Reset Control 2
#define TM4C129X_SYSCTL_RIS              (TM4C129X_SYSCTL + 0x050)  // Raw Interrupt Status
#define TM4C129X_SYSCTL_IMC              (TM4C129X_SYSCTL + 0x054)  // Interrupt Mask Control
#define TM4C129X_SYSCTL_MISC             (TM4C129X_SYSCTL + 0x058)  // Masked Interrupt Status and Clear
#define TM4C129X_SYSCTL_RESC             (TM4C129X_SYSCTL + 0x05C)  // Reset Cause
#define TM4C129X_SYSCTL_PWRTC            (TM4C129X_SYSCTL + 0x060)  // Power-Temperature Cause
#define TM4C129X_SYSCTL_RCC              (TM4C129X_SYSCTL + 0x060)  // Run-Mode Clock Configuration
#define TM4C129X_SYSCTL_NMIC             (TM4C129X_SYSCTL + 0x064)  // NMI Cause Register
#define TM4C129X_SYSCTL_GPIOHBCTL        (TM4C129X_SYSCTL + 0x06C)  // GPIO High-Performance Bus Control
#define TM4C129X_SYSCTL_RCC2             (TM4C129X_SYSCTL + 0x070)  // Run-Mode Clock Configuration 2
#define TM4C129X_SYSCTL_MOSCCTL          (TM4C129X_SYSCTL + 0x07C)  // Main Oscillator Control
#define TM4C129X_SYSCTL_RSCLKCFG         (TM4C129X_SYSCTL + 0x0B0)  // Run and Sleep Mode Configuration Register
#define TM4C129X_SYSCTL_MEMTIM0          (TM4C129X_SYSCTL + 0x0C0)  // Memory Timing Parameter Register 0 for Main Flash and EEPROM
#define TM4C129X_SYSCTL_RCGC0            (TM4C129X_SYSCTL + 0x100)  // Run Mode Clock Gating Control Register 0
#define TM4C129X_SYSCTL_RCGC1            (TM4C129X_SYSCTL + 0x104)  // Run Mode Clock Gating Control Register 1
#define TM4C129X_SYSCTL_RCGC2            (TM4C129X_SYSCTL + 0x108)  // Run Mode Clock Gating Control Register 2
#define TM4C129X_SYSCTL_SCGC0            (TM4C129X_SYSCTL + 0x110)  // Sleep Mode Clock Gating Control Register 0
#define TM4C129X_SYSCTL_SCGC1            (TM4C129X_SYSCTL + 0x114)  // Sleep Mode Clock Gating Control Register 1
#define TM4C129X_SYSCTL_SCGC2            (TM4C129X_SYSCTL + 0x118)  // Sleep Mode Clock Gating Control Register 2
#define TM4C129X_SYSCTL_DCGC0            (TM4C129X_SYSCTL + 0x120)  // Deep Sleep Mode Clock Gating Control Register 0
#define TM4C129X_SYSCTL_DCGC1            (TM4C129X_SYSCTL + 0x124)  // Deep-Sleep Mode Clock Gating Control Register 1
#define TM4C129X_SYSCTL_DCGC2            (TM4C129X_SYSCTL + 0x128)  // Deep Sleep Mode Clock Gating Control Register 2
#define TM4C129X_SYSCTL_ALTCLKCFG        (TM4C129X_SYSCTL + 0x138)  // Alternate Clock Configuration
#define TM4C129X_SYSCTL_DSLPCLKCFG       (TM4C129X_SYSCTL + 0x144)  // Deep Sleep Clock Configuration
#define TM4C129X_SYSCTL_DSCLKCFG         (TM4C129X_SYSCTL + 0x144)  // Deep Sleep Clock Configuration Register
#define TM4C129X_SYSCTL_DIVSCLK          (TM4C129X_SYSCTL + 0x148)  // Divisor and Source Clock Configuration
#define TM4C129X_SYSCTL_SYSPROP          (TM4C129X_SYSCTL + 0x14C)  // System Properties
#define TM4C129X_SYSCTL_PIOSCCAL         (TM4C129X_SYSCTL + 0x150)  // Precision Internal Oscillator Calibration
#define TM4C129X_SYSCTL_PIOSCSTAT        (TM4C129X_SYSCTL + 0x154)  // Precision Internal Oscillator Statistics
#define TM4C129X_SYSCTL_PLLFREQ0         (TM4C129X_SYSCTL + 0x160)  // PLL Frequency 0
#define TM4C129X_SYSCTL_PLLFREQ1         (TM4C129X_SYSCTL + 0x164)  // PLL Frequency 1
#define TM4C129X_SYSCTL_PLLSTAT          (TM4C129X_SYSCTL + 0x168)  // PLL Status
#define TM4C129X_SYSCTL_SLPPWRCFG        (TM4C129X_SYSCTL + 0x188)  // Sleep Power Configuration
#define TM4C129X_SYSCTL_DSLPPWRCFG       (TM4C129X_SYSCTL + 0x18C)  // Deep-Sleep Power Configuration
#define TM4C129X_SYSCTL_DC9              (TM4C129X_SYSCTL + 0x190)  // Device Capabilities 9
#define TM4C129X_SYSCTL_NVMSTAT          (TM4C129X_SYSCTL + 0x1A0)  // Non-Volatile Memory Information
#define TM4C129X_SYSCTL_LDOSPCTL         (TM4C129X_SYSCTL + 0x1B4)  // LDO Sleep Power Control
#define TM4C129X_SYSCTL_LDODPCTL         (TM4C129X_SYSCTL + 0x1BC)  // LDO Deep-Sleep Power Control
#define TM4C129X_SYSCTL_RESBEHAVCTL      (TM4C129X_SYSCTL + 0x1D8)  // Reset Behavior Control Register
#define TM4C129X_SYSCTL_HSSR             (TM4C129X_SYSCTL + 0x1F4)  // Hardware System Service Request
#define TM4C129X_SYSCTL_USBPDS           (TM4C129X_SYSCTL + 0x280)  // USB Power Domain Status
#define TM4C129X_SYSCTL_USBMPC           (TM4C129X_SYSCTL + 0x284)  // USB Memory Power Control
#define TM4C129X_SYSCTL_EMACPDS          (TM4C129X_SYSCTL + 0x288)  // Ethernet MAC Power Domain Status
#define TM4C129X_SYSCTL_EMACMPC          (TM4C129X_SYSCTL + 0x28C)  // Ethernet MAC Memory Power Control
#define TM4C129X_SYSCTL_LCDMPC           (TM4C129X_SYSCTL + 0x294)  // LCD Memory Power Control
#define TM4C129X_SYSCTL_PPWD             (TM4C129X_SYSCTL + 0x300)  // Watchdog Timer Peripheral Present
#define TM4C129X_SYSCTL_PPTIMER          (TM4C129X_SYSCTL + 0x304)  // 16/32-Bit General-Purpose Timer Peripheral Present
#define TM4C129X_SYSCTL_PPGPIO           (TM4C129X_SYSCTL + 0x308)  // General-Purpose Input/Output Peripheral Present
#define TM4C129X_SYSCTL_PPDMA            (TM4C129X_SYSCTL + 0x30C)  // Micro Direct Memory Access Peripheral Present
#define TM4C129X_SYSCTL_PPEPI            (TM4C129X_SYSCTL + 0x310)  // EPI Peripheral Present
#define TM4C129X_SYSCTL_PPHIB            (TM4C129X_SYSCTL + 0x314)  // Hibernation Peripheral Present
#define TM4C129X_SYSCTL_PPUART           (TM4C129X_SYSCTL + 0x318)  // Universal Asynchronous Receiver/Transmitter Peripheral Present
#define TM4C129X_SYSCTL_PPSSI            (TM4C129X_SYSCTL + 0x31C)  // Synchronous Serial Interface Peripheral Present
#define TM4C129X_SYSCTL_PPI2C            (TM4C129X_SYSCTL + 0x320)  // Inter-Integrated Circuit Peripheral Present
#define TM4C129X_SYSCTL_PPUSB            (TM4C129X_SYSCTL + 0x328)  // Universal Serial Bus Peripheral Present
#define TM4C129X_SYSCTL_PPEPHY           (TM4C129X_SYSCTL + 0x330)  // Ethernet PHY Peripheral Present
#define TM4C129X_SYSCTL_PPCAN            (TM4C129X_SYSCTL + 0x334)  // Controller Area Network Peripheral Present
#define TM4C129X_SYSCTL_PPADC            (TM4C129X_SYSCTL + 0x338)  // Analog-to-Digital Converter Peripheral Present
#define TM4C129X_SYSCTL_PPACMP           (TM4C129X_SYSCTL + 0x33C)  // Analog Comparator Peripheral Present
#define TM4C129X_SYSCTL_PPPWM            (TM4C129X_SYSCTL + 0x340)  // Pulse Width Modulator Peripheral Present
#define TM4C129X_SYSCTL_PPQEI            (TM4C129X_SYSCTL + 0x344)  // Quadrature Encoder Interface Peripheral Present
#define TM4C129X_SYSCTL_PPLPC            (TM4C129X_SYSCTL + 0x348)  // Low Pin Count Interface Peripheral Present
#define TM4C129X_SYSCTL_PPPECI           (TM4C129X_SYSCTL + 0x350)  // Platform Environment Control Interface Peripheral Present
#define TM4C129X_SYSCTL_PPFAN            (TM4C129X_SYSCTL + 0x354)  // Fan Control Peripheral Present
#define TM4C129X_SYSCTL_PPEEPROM         (TM4C129X_SYSCTL + 0x358)  // EEPROM Peripheral Present
#define TM4C129X_SYSCTL_PPWTIMER         (TM4C129X_SYSCTL + 0x35C)  // 32/64-Bit Wide General-Purpose Timer Peripheral Present
#define TM4C129X_SYSCTL_PPRTS            (TM4C129X_SYSCTL + 0x370)  // Remote Temperature Sensor Peripheral Present
#define TM4C129X_SYSCTL_PPCCM            (TM4C129X_SYSCTL + 0x374)  // CRC and Cryptographic Modules Peripheral Present
#define TM4C129X_SYSCTL_PPLCD            (TM4C129X_SYSCTL + 0x390)  // LCD Peripheral Present
#define TM4C129X_SYSCTL_PPOWIRE          (TM4C129X_SYSCTL + 0x398)  // 1-Wire Peripheral Present
#define TM4C129X_SYSCTL_PPEMAC           (TM4C129X_SYSCTL + 0x39C)  // Ethernet MAC Peripheral Present
#define TM4C129X_SYSCTL_PPHIM            (TM4C129X_SYSCTL + 0x3A4)  // Human Interface Master Peripheral Present
#define TM4C129X_SYSCTL_SRWD             (TM4C129X_SYSCTL + 0x500)  // Watchdog Timer Software Reset
#define TM4C129X_SYSCTL_SRTIMER          (TM4C129X_SYSCTL + 0x504)  // 16/32-Bit General-Purpose Timer Software Reset
#define TM4C129X_SYSCTL_SRGPIO           (TM4C129X_SYSCTL + 0x508)  // General-Purpose Input/Output Software Reset
#define TM4C129X_SYSCTL_SRDMA            (TM4C129X_SYSCTL + 0x50C)  // Micro Direct Memory Access Software Reset
#define TM4C129X_SYSCTL_SREPI            (TM4C129X_SYSCTL + 0x510)  // EPI Software Reset
#define TM4C129X_SYSCTL_SRHIB            (TM4C129X_SYSCTL + 0x514)  // Hibernation Software Reset
#define TM4C129X_SYSCTL_SRUART           (TM4C129X_SYSCTL + 0x518)  // Universal Asynchronous Receiver/Transmitter Software Reset
#define TM4C129X_SYSCTL_SRSSI            (TM4C129X_SYSCTL + 0x51C)  // Synchronous Serial Interface Software Reset
#define TM4C129X_SYSCTL_SRI2C            (TM4C129X_SYSCTL + 0x520)  // Inter-Integrated Circuit Software Reset
#define TM4C129X_SYSCTL_SRUSB            (TM4C129X_SYSCTL + 0x528)  // Universal Serial Bus Software Reset
#define TM4C129X_SYSCTL_SREPHY           (TM4C129X_SYSCTL + 0x530)  // Ethernet PHY Software Reset
#define TM4C129X_SYSCTL_SRCAN            (TM4C129X_SYSCTL + 0x534)  // Controller Area Network Software Reset
#define TM4C129X_SYSCTL_SRADC            (TM4C129X_SYSCTL + 0x538)  // Analog-to-Digital Converter Software Reset
#define TM4C129X_SYSCTL_SRACMP           (TM4C129X_SYSCTL + 0x53C)  // Analog Comparator Software Reset
#define TM4C129X_SYSCTL_SRPWM            (TM4C129X_SYSCTL + 0x540)  // Pulse Width Modulator Software Reset
#define TM4C129X_SYSCTL_SRQEI            (TM4C129X_SYSCTL + 0x544)  // Quadrature Encoder Interface Software Reset
#define TM4C129X_SYSCTL_SREEPROM         (TM4C129X_SYSCTL + 0x558)  // EEPROM Software Reset
#define TM4C129X_SYSCTL_SRWTIMER         (TM4C129X_SYSCTL + 0x55C)  // 32/64-Bit Wide General-Purpose Timer Software Reset
#define TM4C129X_SYSCTL_SRCCM            (TM4C129X_SYSCTL + 0x574)  // CRC and Cryptographic Modules Software Reset
#define TM4C129X_SYSCTL_SRLCD            (TM4C129X_SYSCTL + 0x590)  // LCD Controller Software Reset
#define TM4C129X_SYSCTL_SROWIRE          (TM4C129X_SYSCTL + 0x598)  // 1-Wire Software Reset
#define TM4C129X_SYSCTL_SREMAC           (TM4C129X_SYSCTL + 0x59C)  // Ethernet MAC Software Reset
#define TM4C129X_SYSCTL_RCGCWD           (TM4C129X_SYSCTL + 0x600)  // Watchdog Timer Run Mode Clock Gating Control
#define TM4C129X_SYSCTL_RCGCTIMER        (TM4C129X_SYSCTL + 0x604)  // 16/32-Bit General-Purpose Timer Run Mode Clock Gating Control
#define TM4C129X_SYSCTL_RCGCGPIO         (TM4C129X_SYSCTL + 0x608)  // General-Purpose Input/Output Run Mode Clock Gating Control
#define TM4C129X_SYSCTL_RCGCDMA          (TM4C129X_SYSCTL + 0x60C)  // Micro Direct Memory Access Run Mode Clock Gating Control
#define TM4C129X_SYSCTL_RCGCEPI          (TM4C129X_SYSCTL + 0x610)  // EPI Run Mode Clock Gating Control
#define TM4C129X_SYSCTL_RCGCHIB          (TM4C129X_SYSCTL + 0x614)  // Hibernation Run Mode Clock Gating Control
#define TM4C129X_SYSCTL_RCGCUART         (TM4C129X_SYSCTL + 0x618)  // Universal Asynchronous Receiver/Transmitter Run Mode Clock Gating Control
#define TM4C129X_SYSCTL_RCGCSSI          (TM4C129X_SYSCTL + 0x61C)  // Synchronous Serial Interface Run Mode Clock Gating Control
#define TM4C129X_SYSCTL_RCGCI2C          (TM4C129X_SYSCTL + 0x620)  // Inter-Integrated Circuit Run Mode Clock Gating Control
#define TM4C129X_SYSCTL_RCGCUSB          (TM4C129X_SYSCTL + 0x628)  // Universal Serial Bus Run Mode Clock Gating Control
#define TM4C129X_SYSCTL_RCGCEPHY         (TM4C129X_SYSCTL + 0x630)  // Ethernet PHY Run Mode Clock Gating Control
#define TM4C129X_SYSCTL_RCGCCAN          (TM4C129X_SYSCTL + 0x634)  // Controller Area Network Run Mode Clock Gating Control
#define TM4C129X_SYSCTL_RCGCADC          (TM4C129X_SYSCTL + 0x638)  // Analog-to-Digital Converter Run Mode Clock Gating Control
#define TM4C129X_SYSCTL_RCGCACMP         (TM4C129X_SYSCTL + 0x63C)  // Analog Comparator Run Mode Clock Gating Control
#define TM4C129X_SYSCTL_RCGCPWM          (TM4C129X_SYSCTL + 0x640)  // Pulse Width Modulator Run Mode Clock Gating Control
#define TM4C129X_SYSCTL_RCGCQEI          (TM4C129X_SYSCTL + 0x644)  // Quadrature Encoder Interface Run Mode Clock Gating Control
#define TM4C129X_SYSCTL_RCGCEEPROM       (TM4C129X_SYSCTL + 0x658)  // EEPROM Run Mode Clock Gating Control
#define TM4C129X_SYSCTL_RCGCWTIMER       (TM4C129X_SYSCTL + 0x65C)  // 32/64-Bit Wide General-Purpose Timer Run Mode Clock Gating Control
#define TM4C129X_SYSCTL_RCGCCCM          (TM4C129X_SYSCTL + 0x674)  // CRC and Cryptographic Modules Run Mode Clock Gating Control
#define TM4C129X_SYSCTL_RCGCLCD          (TM4C129X_SYSCTL + 0x690)  // LCD Controller Run Mode Clock Gating Control
#define TM4C129X_SYSCTL_RCGCOWIRE        (TM4C129X_SYSCTL + 0x698)  // 1-Wire Run Mode Clock Gating Control
#define TM4C129X_SYSCTL_RCGCEMAC         (TM4C129X_SYSCTL + 0x69C)  // Ethernet MAC Run Mode Clock Gating Control
#define TM4C129X_SYSCTL_SCGCWD           (TM4C129X_SYSCTL + 0x700)  // Watchdog Timer Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_SCGCTIMER        (TM4C129X_SYSCTL + 0x704)  // 16/32-Bit General-Purpose Timer Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_SCGCGPIO         (TM4C129X_SYSCTL + 0x708)  // General-Purpose Input/Output Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_SCGCDMA          (TM4C129X_SYSCTL + 0x70C)  // Micro Direct Memory Access Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_SCGCEPI          (TM4C129X_SYSCTL + 0x710)  // EPI Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_SCGCHIB          (TM4C129X_SYSCTL + 0x714)  // Hibernation Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_SCGCUART         (TM4C129X_SYSCTL + 0x718)  // Universal Asynchronous Receiver/Transmitter Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_SCGCSSI          (TM4C129X_SYSCTL + 0x71C)  // Synchronous Serial Interface Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_SCGCI2C          (TM4C129X_SYSCTL + 0x720)  // Inter-Integrated Circuit Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_SCGCUSB          (TM4C129X_SYSCTL + 0x728)  // Universal Serial Bus Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_SCGCEPHY         (TM4C129X_SYSCTL + 0x730)  // Ethernet PHY Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_SCGCCAN          (TM4C129X_SYSCTL + 0x734)  // Controller Area Network Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_SCGCADC          (TM4C129X_SYSCTL + 0x738)  // Analog-to-Digital Converter Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_SCGCACMP         (TM4C129X_SYSCTL + 0x73C)  // Analog Comparator Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_SCGCPWM          (TM4C129X_SYSCTL + 0x740)  // Pulse Width Modulator Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_SCGCQEI          (TM4C129X_SYSCTL + 0x744)  // Quadrature Encoder Interface Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_SCGCEEPROM       (TM4C129X_SYSCTL + 0x758)  // EEPROM Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_SCGCWTIMER       (TM4C129X_SYSCTL + 0x75C)  // 32/64-Bit Wide General-Purpose Timer Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_SCGCCCM          (TM4C129X_SYSCTL + 0x774)  // CRC and Cryptographic Modules Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_SCGCLCD          (TM4C129X_SYSCTL + 0x790)  // LCD Controller Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_SCGCOWIRE        (TM4C129X_SYSCTL + 0x798)  // 1-Wire Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_SCGCEMAC         (TM4C129X_SYSCTL + 0x79C)  // Ethernet MAC Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_DCGCWD           (TM4C129X_SYSCTL + 0x800)  // Watchdog Timer Deep-Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_DCGCTIMER        (TM4C129X_SYSCTL + 0x804)  // 16/32-Bit General-Purpose Timer Deep-Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_DCGCGPIO         (TM4C129X_SYSCTL + 0x808)  // General-Purpose Input/Output Deep-Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_DCGCDMA          (TM4C129X_SYSCTL + 0x80C)  // Micro Direct Memory Access Deep-Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_DCGCEPI          (TM4C129X_SYSCTL + 0x810)  // EPI Deep-Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_DCGCHIB          (TM4C129X_SYSCTL + 0x814)  // Hibernation Deep-Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_DCGCUART         (TM4C129X_SYSCTL + 0x818)  // Universal Asynchronous Receiver/Transmitter Deep-Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_DCGCSSI          (TM4C129X_SYSCTL + 0x81C)  // Synchronous Serial Interface Deep-Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_DCGCI2C          (TM4C129X_SYSCTL + 0x820)  // Inter-Integrated Circuit Deep-Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_DCGCUSB          (TM4C129X_SYSCTL + 0x828)  // Universal Serial Bus Deep-Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_DCGCEPHY         (TM4C129X_SYSCTL + 0x830)  // Ethernet PHY Deep-Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_DCGCCAN          (TM4C129X_SYSCTL + 0x834)  // Controller Area Network Deep-Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_DCGCADC          (TM4C129X_SYSCTL + 0x838)  // Analog-to-Digital Converter Deep-Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_DCGCACMP         (TM4C129X_SYSCTL + 0x83C)  // Analog Comparator Deep-Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_DCGCPWM          (TM4C129X_SYSCTL + 0x840)  // Pulse Width Modulator Deep-Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_DCGCQEI          (TM4C129X_SYSCTL + 0x844)  // Quadrature Encoder Interface Deep-Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_DCGCEEPROM       (TM4C129X_SYSCTL + 0x858)  // EEPROM Deep-Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_DCGCWTIMER       (TM4C129X_SYSCTL + 0x85C)  // 32/64-Bit Wide General-Purpose Timer Deep-Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_DCGCCCM          (TM4C129X_SYSCTL + 0x874)  // CRC and Cryptographic Modules Deep-Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_DCGCLCD          (TM4C129X_SYSCTL + 0x890)  // LCD Controller Deep-Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_DCGCOWIRE        (TM4C129X_SYSCTL + 0x898)  // 1-Wire Deep-Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_DCGCEMAC         (TM4C129X_SYSCTL + 0x89C)  // Ethernet MAC Deep-Sleep Mode Clock Gating Control
#define TM4C129X_SYSCTL_PCWD             (TM4C129X_SYSCTL + 0x900)  // Watchdog Timer Power Control
#define TM4C129X_SYSCTL_PCTIMER          (TM4C129X_SYSCTL + 0x904)  // 16/32-Bit General-Purpose Timer Power Control
#define TM4C129X_SYSCTL_PCGPIO           (TM4C129X_SYSCTL + 0x908)  // General-Purpose Input/Output Power Control
#define TM4C129X_SYSCTL_PCDMA            (TM4C129X_SYSCTL + 0x90C)  // Micro Direct Memory Access Power Control
#define TM4C129X_SYSCTL_PCEPI            (TM4C129X_SYSCTL + 0x910)  // External Peripheral Interface Power Control
#define TM4C129X_SYSCTL_PCHIB            (TM4C129X_SYSCTL + 0x914)  // Hibernation Power Control
#define TM4C129X_SYSCTL_PCUART           (TM4C129X_SYSCTL + 0x918)  // Universal Asynchronous Receiver/Transmitter Power Control
#define TM4C129X_SYSCTL_PCSSI            (TM4C129X_SYSCTL + 0x91C)  // Synchronous Serial Interface Power Control
#define TM4C129X_SYSCTL_PCI2C            (TM4C129X_SYSCTL + 0x920)  // Inter-Integrated Circuit Power Control
#define TM4C129X_SYSCTL_PCUSB            (TM4C129X_SYSCTL + 0x928)  // Universal Serial Bus Power Control
#define TM4C129X_SYSCTL_PCEPHY           (TM4C129X_SYSCTL + 0x930)  // Ethernet PHY Power Control
#define TM4C129X_SYSCTL_PCCAN            (TM4C129X_SYSCTL + 0x934)  // Controller Area Network Power Control
#define TM4C129X_SYSCTL_PCADC            (TM4C129X_SYSCTL + 0x938)  // Analog-to-Digital Converter Power Control
#define TM4C129X_SYSCTL_PCACMP           (TM4C129X_SYSCTL + 0x93C)  // Analog Comparator Power Control
#define TM4C129X_SYSCTL_PCPWM            (TM4C129X_SYSCTL + 0x940)  // Pulse Width Modulator Power Control
#define TM4C129X_SYSCTL_PCQEI            (TM4C129X_SYSCTL + 0x944)  // Quadrature Encoder Interface Power Control
#define TM4C129X_SYSCTL_PCEEPROM         (TM4C129X_SYSCTL + 0x958)  // EEPROM Power Control
#define TM4C129X_SYSCTL_PCCCM            (TM4C129X_SYSCTL + 0x974)  // CRC and Cryptographic Modules Power Control
#define TM4C129X_SYSCTL_PCLCD            (TM4C129X_SYSCTL + 0x990)  // LCD Controller Power Control
#define TM4C129X_SYSCTL_PCOWIRE          (TM4C129X_SYSCTL + 0x998)  // 1-Wire Power Control
#define TM4C129X_SYSCTL_PCEMAC           (TM4C129X_SYSCTL + 0x99C)  // Ethernet MAC Power Control
#define TM4C129X_SYSCTL_PRWD             (TM4C129X_SYSCTL + 0xA00)  // Watchdog Timer Peripheral Ready
#define TM4C129X_SYSCTL_PRTIMER          (TM4C129X_SYSCTL + 0xA04)  // 16/32-Bit General-Purpose Timer Peripheral Ready
#define TM4C129X_SYSCTL_PRGPIO           (TM4C129X_SYSCTL + 0xA08)  // General-Purpose Input/Output Peripheral Ready
#define TM4C129X_SYSCTL_PRDMA            (TM4C129X_SYSCTL + 0xA0C)  // Micro Direct Memory Access Peripheral Ready
#define TM4C129X_SYSCTL_PREPI            (TM4C129X_SYSCTL + 0xA10)  // EPI Peripheral Ready
#define TM4C129X_SYSCTL_PRHIB            (TM4C129X_SYSCTL + 0xA14)  // Hibernation Peripheral Ready
#define TM4C129X_SYSCTL_PRUART           (TM4C129X_SYSCTL + 0xA18)  // Universal Asynchronous Receiver/Transmitter Peripheral Ready
#define TM4C129X_SYSCTL_PRSSI            (TM4C129X_SYSCTL + 0xA1C)  // Synchronous Serial Interface Peripheral Ready
#define TM4C129X_SYSCTL_PRI2C            (TM4C129X_SYSCTL + 0xA20)  // Inter-Integrated Circuit Peripheral Ready
#define TM4C129X_SYSCTL_PRUSB            (TM4C129X_SYSCTL + 0xA28)  // Universal Serial Bus Peripheral Ready
#define TM4C129X_SYSCTL_PREPHY           (TM4C129X_SYSCTL + 0xA30)  // Ethernet PHY Peripheral Ready
#define TM4C129X_SYSCTL_PRCAN            (TM4C129X_SYSCTL + 0xA34)  // Controller Area Network Peripheral Ready
#define TM4C129X_SYSCTL_PRADC            (TM4C129X_SYSCTL + 0xA38)  // Analog-to-Digital Converter Peripheral Ready
#define TM4C129X_SYSCTL_PRACMP           (TM4C129X_SYSCTL + 0xA3C)  // Analog Comparator Peripheral Ready
#define TM4C129X_SYSCTL_PRPWM            (TM4C129X_SYSCTL + 0xA40)  // Pulse Width Modulator Peripheral Ready
#define TM4C129X_SYSCTL_PRQEI            (TM4C129X_SYSCTL + 0xA44)  // Quadrature Encoder Interface Peripheral Ready
#define TM4C129X_SYSCTL_PREEPROM         (TM4C129X_SYSCTL + 0xA58)  // EEPROM Peripheral Ready
#define TM4C129X_SYSCTL_PRWTIMER         (TM4C129X_SYSCTL + 0xA5C)  // 32/64-Bit Wide General-Purpose Timer Peripheral Ready
#define TM4C129X_SYSCTL_PRCCM            (TM4C129X_SYSCTL + 0xA74)  // CRC and Cryptographic Modules Peripheral Ready
#define TM4C129X_SYSCTL_PRLCD            (TM4C129X_SYSCTL + 0xA90)  // LCD Controller Peripheral Ready
#define TM4C129X_SYSCTL_PROWIRE          (TM4C129X_SYSCTL + 0xA98)  // 1-Wire Peripheral Ready
#define TM4C129X_SYSCTL_PREMAC           (TM4C129X_SYSCTL + 0xA9C)  // Ethernet MAC Peripheral Ready

// MOSCCTL

#define TM4C129X_SYSCTL_MOSCCTL_OSCRNG (1 << 4)
#define TM4C129X_SYSCTL_MOSCCTL_PWRDN (1 << 3)
#define TM4C129X_SYSCTL_MOSCCTL_NOXTAL (1 << 2)
#define TM4C129X_SYSCTL_MOSCCTL_MOSCIM (1 << 1)
#define TM4C129X_SYSCTL_MOSCCTL_CVAL (1 << 0)

// Memory timing
#define TM4C129X_SYSCTL_MEMTIM0_EBCHT(v) ((v) << 22)
#define TM4C129X_SYSCTL_MEMTIM0_EBCE (1 << 21)
#define TM4C129X_SYSCTL_MEMTIM0_EWS(v) ((v) << 16)
#define TM4C129X_SYSCTL_MEMTIM0_FBCHT(v) ((v) << 6)
#define TM4C129X_SYSCTL_MEMTIM0_FBCE (1 << 5)
#define TM4C129X_SYSCTL_MEMTIM0_FWS(v) (v)
#define TM4C129X_SYSCTL_MUST_BE_1 ((1 << 20) | (1 << 4))

// Run and Sleep Mode Configuration
#define TM4C129X_SYSCTL_RSCLKCFG_MEMTIMU (1 << 31)
#define TM4C129X_SYSCTL_RSCLKCFG_NEWFREQ (1 << 30)
#define TM4C129X_SYSCTL_RSCLKCFG_ACG (1 << 29)
#define TM4C129X_SYSCTL_RSCLKCFG_USEPLL (1 << 28)
#define TM4C129X_SYSCTL_RSCLKCFG_PLLSRC(v) ((v) << 24)
#define TM4C129X_SYSCTL_RSCLKCFG_PLLSRC_PIOSC (0)
#define TM4C129X_SYSCTL_RSCLKCFG_PLLSRC_MOSC (3)
#define TM4C129X_SYSCTL_RSCLKCFG_OSCSRC(v) ((v) << 20)
#define TM4C129X_SYSCTL_RSCLKCFG_OSCSRC_PIOSC (0)
#define TM4C129X_SYSCTL_RSCLKCFG_OSCSRC_LFIOSC (1)
#define TM4C129X_SYSCTL_RSCLKCFG_OSCSRC_MOSC (3)
#define TM4C129X_SYSCTL_RSCLKCFG_OSCSRC_HIBERNTION (4)
#define TM4C129X_SYSCTL_RSCLKCFG_OSYSDIV(v) ((v) << 10)
#define TM4C129X_SYSCTL_RSCLKCFG_PSYSDIV(v) ((v) << 0)

#define TM4C129X_SYSCTL_RSCLKCFG_PLLSRC_M \
    TM4C129X_SYSCTL_RSCLKCFG_PLLSRC(0x3)
#define TM4C129X_SYSCTL_RSCLKCFG_OSCSRC_M \
    TM4C129X_SYSCTL_RSCLKCFG_OSCSRC(0x3)
#define TM4C129X_SYSCTL_RSCLKCFG_OSYSDIV_M \
    TM4C129X_SYSCTL_RSCLKCFG_OSYSDIV(0x3ff)
#define TM4C129X_SYSCTL_RSCLKCFG_PSYSDIV_M \
    TM4C129X_SYSCTL_RSCLKCFG_PSYSDIV(0x3ff)

// PLL Freq0
#define TM4C129X_SYSCTL_PLLFREQ0_PLLPWR (1 << 23)

// PLL Stat
#define TM4C129X_SYSCTL_PLLSTAT_LOCK (1 << 0)

#endif  // ARCH_CORTEX_M_TM4C129X_SYSCTL_H
