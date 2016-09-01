#include <stdint.h>
#include <lib/string.h>
#include <lib/stdio.h>
#include <arch/port.h>
#include <kernel/init.h>

static void do_init(unsigned int level);

void start_yo(void)
{
    init_sys_clock();

    do_init(INIT_LEVEL_EARLIEST);

    // Prepare bss and data section
    memset(&kernel_bss_start, 0,
           (&kernel_bss_end - &kernel_bss_start) * sizeof(uint32_t));

    init_irq();
    disable_irq();

    do_init(INIT_LEVEL_PLATFORM);
    do_init(INIT_LEVEL_KERNEL);

    enable_irq();

    yo_printf("yo\n");

    while (1)
        ;
}

static void do_init(unsigned int level)
{
    extern const init_struct init_fn_start[], init_fn_end[];

    for (const init_struct *p = init_fn_start; p != init_fn_end; ++p) {
        if (p->level == level) {
            p->init();
        }
    }
}
