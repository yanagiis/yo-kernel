#ifndef HELPER_H
#define HELPER_H

#define ARRAY_SIZE(arrayName) (sizeof(arrayName) / sizeof((arrayName)[0]))
#define ALIGN_SIZE(sizeToAlign, PowerOfTwo) \
    (((sizeToAlign) + (PowerOfTwo)-1) & ~((PowerOfTwo)-1))
#define IS_SIZE_ALIGNED(sizeToTest, PowerOfTwo) \
    (((sizeToTest) & ((PowerOfTwo)-1)) == 0)

#endif  // HELPER_H
