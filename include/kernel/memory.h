#ifndef KERNEL_MEMORY_H
#define KERNEL_MEMORY_H

#include <stdint.h>

#define MEM_MAGIC_ADDR 0xdeadbeef

#define MP_R 0x1
#define MP_W 0x2
#define MP_X 0x4

#define MU_AVAILABLE 0x1
#define MU_DEVICE 0x2

#define DECLARE_MEMPOOL(_name, _start, _end, _permission, _usage)          \
    {                                                                      \
        .name = _name, .start = (uintptr_t)_start, .end = (uintptr_t)_end, \
        .permission = (uint8_t)_permission, .usage = _usage                \
    }

#define DECLARE_MEMPOOL2(name, symbol, permission, usage) \
    DECLARE_MEMPOOL(name, &(symbol##_start), &(symbol##_end), permission, usage)

#define DECLARE_MEMNULL                                                        \
    {                                                                          \
        .name = (const char *)0, .start = (uintptr_t)MEM_MAGIC_ADDR,           \
        .end = (uintptr_t)MEM_MAGIC_ADDR, .permission = (uint8_t)0, .usage = 0 \
    }


typedef struct {
    uintptr_t start;
    uintptr_t end;
    const char *name;
    uint8_t permission;
    uint8_t usage;
} mempool_t;

#endif  // KERNEL_MEMORY_H
