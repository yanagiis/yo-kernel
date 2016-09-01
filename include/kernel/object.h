#ifndef KERNEL_OBJECT_H
#define KERNEL_OBJECT_H

#include <stdint.h>
#include <lib/bitmap.h>

typedef struct {
    const char *name;
    bitmap_t *bitmap;
    void *objects;
    uint32_t size;
} object;

#define DECLARE_OBJECTS(_name, type, num)        \
    DECLARE_BITMAP(kobj_##_name##_bitmap, num);  \
    static type *kobj_##_name##_array[num];      \
    static object kobj_##_name##_mm = {          \
        .name = #_name,                          \
        .bitmap = kobj_##_name##_bitmap,         \
        .objects = (void *)kobj_##_name##_array, \
        .size = num}

#endif  // KERNEL_OBJECT_H
