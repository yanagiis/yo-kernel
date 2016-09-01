#ifndef ARCH_PORT_H
#define ARCH_PORT_H

#include <kernel/memory.h>

#include INC_ARCH(irq.h)
#include INC_ARCH(link.h)

extern mempool_t mempool[];

void init_sys_clock(void);
void init_irq(void);
void init_memory(void);
void dbg_putc(const char c);
char dbg_getc(void);

#endif // ARCH_PORT_H
