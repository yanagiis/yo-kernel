#include <config.h>
#include <helper.h>
#include <arch/port.h>
#include <lib/stdio.h>
#include <kernel/init.h>
#include <kernel/memory.h>
#include <kernel/object.h>

typedef struct {
    int test;
} as_t;

DECLARE_OBJECTS(as, as_t, CONFIG_AS_NUM);

void init_memory(void)
{
    for (int i = 0; mempool[i].start != MEM_MAGIC_ADDR; i++) {
        yo_printf("MEM: %s  %p - %p\n", mempool[i].name, mempool[i].start,
                  mempool[i].end);
    }
}

REG_INIT(init_memory, INIT_LEVEL_KERNEL);
