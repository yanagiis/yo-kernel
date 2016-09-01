#ifndef ARCH_CORTEX_M_PERIPH_H
#define ARCH_CORTEX_M_PERIPH_H

#include <stdint.h>

#define SCS_BASE ((uint32_t) 0xE000E000)
#define SCS_END ((uint32_t) 0xE000F000)
#define SYSTICK_BASE (SCS_BASE + 0x0010)
#define NVIC_BASE (SCS_BASE + 0x0100)
#define SCB_BASE (SCS_BASE + 0x0D00)
#define MPU_BASE (SCS_BASE + 0x0D90)
#define FPU_BASE (SCS_BASE + 0x0F34)

// Systick
#define SYSTICK_STCTRL (SYSTICK_BASE)
#define SYSTICK_STRELOAD (SYSTICK_BASE + 0x4)
#define SYSTICK_STCURRENT (SYSTICK_BASE + 0x8)

// NVIC
#define NVIC_EN (NVIC_BASE)
#define NVIC_DIS (NVIC_BASE + 0x80)
#define NVIC_PEND (NVIC_BASE + 0x100)
#define NVIC_UNPEND (NVIC_BASE + 0x180)
#define NVIC_ACTIVE (NVIC_BASE + 0x200)
#define NVIC_PRI (NVIC_BASE + 0x300)
// Software Trigger Interrupt
#define NVIC_SWTRIG (NVIC_BASE + 0xE00)

// System Control Block
#define SCB_ACTLR (SCS_BASE + 0x8)

#define SCB_CPUID (SCB_BASE + 0x0)
#define SCB_INTCTRL (SCB_BASE + 0x4)
#define SCB_VTABLE (SCB_BASE + 0x8)
#define SCB_APINT (SCB_BASE + 0xC)
#define SCB_SYSCTRL (SCB_BASE + 0x10)
#define SCB_CFGCTRL (SCB_BASE + 0x14)
#define SCB_SYSPRI1 (SCB_BASE + 0x18)
#define SCB_SYSPRI2 (SCB_BASE + 0x1C)
#define SCB_SYSPRI3 (SCB_BASE + 0x20)
#define SCB_SYSHNDCTRL (SCB_BASE + 0x24)
#define SCB_FAULTSTAT (SCB_BASE + 0x28)
#define SCB_HFAULTSTAT (SCB_BASE + 0x2C)
#define SCB_MMADDR (SCB_BASE + 0x34)
#define SCB_FAULTADDR (SCB_BASE + 0x38)

// MPU
#define MPU_TYPE (MPU_BASE + 0x0)
#define MPU_CTRL (MPU_BASE + 0x4)
#define MPU_NUMBER (MPU_BASE + 0x8)
#define MPU_REGION_BASE (MPU_BASE + 0xC)
#define MPU_REGION_ATTR (MPU_BASE + 0x10)

// FPU
#define CPAC (SCS_BASE + 0xD88) // Coprocessor Access Control
#define FPU_FPCC (FPU_BASE + 0x0)
#define FPU_FPCA (FPU_BASE + 0x4)
#define FPU_FPDSC (FPU_BASE + 0x8)

#endif // ARCH_CORTEX_M_PERIPH_H
