#ifndef KERNEL_INIT_H
#define KERNEL_INIT_H

enum INIT_LEVEL {
    INIT_LEVEL_EARLIEST = 0x1,
    INIT_LEVEL_PLATFORM_EARLY = 0x2,
    INIT_LEVEL_PLATFORM = 0x3,
    INIT_LEVEL_KERNEL_EARLY = 0x4,
    INIT_LEVEL_KERNEL = 0x5,
    INIT_LEVEL_LAST = 0x7FFFFFFF,
};

typedef void (*init_fn_t)(void);

typedef struct {
    unsigned int level;
    init_fn_t init;
} init_struct;

#define REG_INIT(_fn, _level)            \
    const init_struct _init_struct_##_fn \
        __attribute__((section(".yo_init"))) = {.level = _level, .init = _fn}

void start_yo(void);

#endif  // KERNEL_INIT_H
