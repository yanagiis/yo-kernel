#ifndef LIB_STDIO_H
#define LIB_STDIO_H

#include <lib/stdarg.h>

void yo_vprintf(const char *fmt, va_list va);
void yo_printf(const char *fmt, ...);

#endif  // LIB_STDIO_H
