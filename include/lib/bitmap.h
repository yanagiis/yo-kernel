#ifndef LIB_BITMAP_H
#define LIB_BITMAP_H

#include "helper.h"

#define BITMAP_ALIGN (32)
#define DECLARE_BITMAP(name, size) \
    static bitmap_t name[ALIGN_SIZE(size, BITMAP_ALIGN) / BITMAP_ALIGN]

typedef uint32_t bitmap_t;

#endif  // LIB_BITMAP_H
