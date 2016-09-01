#include <kernel/memory.h>
#include <arch/cortex_m/link.h>
#include <arch/cortex_m/periph.h>
#include <arch/cortex_m/tm4c129e/memory_map.h>

__MEMPOOL mempool_t mempool[] = {
    DECLARE_MEMPOOL2("ktext", kernel_text, MP_R | MP_X, 0),
    DECLARE_MEMPOOL2("kdata", kernel_data, MP_R | MP_W, 0),
    DECLARE_MEMPOOL2("kstack", kernel_stack, MP_R | MP_W, 0),
    DECLARE_MEMPOOL2("kbss", kernel_bss, MP_R | MP_W, 0),
    DECLARE_MEMPOOL2("sram", mem, MP_R | MP_W, MU_AVAILABLE),
    DECLARE_MEMPOOL("periph1",
                    TM4C129X_PERIPH1_BASE,
                    TM4C129X_PERIPH1_END,
                    MP_R | MP_W,
                    MU_DEVICE),
    DECLARE_MEMNULL
};
