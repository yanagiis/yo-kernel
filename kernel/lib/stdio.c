#include <stdint.h>
#include <arch/port.h>
#include <lib/stdarg.h>
#include <lib/stdio.h>

#define hex(x) (((x) < 10) ? ('0' + (x)) : ('a' + ((x)-10)))

static void yo_putc(const char c);
static void yo_puts(const char *s, int width, const char flag);
static void yo_put_int32(const uint32_t n, const int width, const char flag);
static void yo_put_hex32(const uint32_t n, const int width, const char flag);

void yo_printf(const char *fmt, ...)
{
	va_list va;
	va_start(va, fmt);
	yo_vprintf(fmt, va);
	va_end(va);
}

void yo_vprintf(const char *fmt, va_list va)
{
    int mode = 0;  // 1 for specifier mode
    int width = 0;
    int length = 0;
    char flag = ' ';

    while (*fmt) {
        if (*fmt == '%') {
            mode = 1;
            width = 0;
            length = 32;
            flag = ' ';
            ++fmt;
        }

        if (mode == 0) {
            yo_putc(*fmt);
        } else {
            switch (*fmt) {
                case 'c':
                    yo_putc(va_arg(va, uint32_t));
                    mode = 0;
                    break;
                case 's':
                    yo_puts(va_arg(va, char *), width, flag);
                    mode = 0;
                    break;
                case 'd':
                case 'i':
                    if (length == 32) {
                        yo_put_int32(va_arg(va, uint32_t), width, flag);
                    } else {
                        // yo_put_int64(va_arg(va, uint64_t), width, flag);
                    }
                    mode = 0;
                    break;
                case 'x':
                    if (length == 32) {
                        yo_put_hex32(va_arg(va, uint32_t), width, flag);
                    } else {
                        // yo_put_int64(va_arg(va, uint64_t), width, flag);
                    }
                    mode = 0;
                    break;
                case 'p':
                    // FIXME this should be platform specific
                    yo_putc('0');
                    yo_putc('x');
                    yo_put_hex32(va_arg(va, uint32_t), 8, '0');
                    mode = 0;
                    break;
                case 'l':
                case 'L':
                    length = 64;
                    break;
                case '%':
                    yo_putc('%');
                    mode = 0;
                    break;
            }
        }

        ++fmt;
    }
}

static void yo_putc(const char c)
{
    if (c == '\n')
        dbg_putc('\r');
    dbg_putc(c);
}

static void yo_puts(const char *s, int width, const char flag)
{
    while (*s) {
        yo_putc(*s);
        ++s;
        --width;
    }

    while (width > 0) {
        yo_putc(flag);
        --width;
    }
}

static void yo_put_int32(uint32_t n, const int width, const char flag)
{
    // UINT32 is 4294967296, 10 digits
    int digits = 0;
    int i;
    uint32_t t;
    char buf[10];

    while ((t = (n / 10)) > 10) {
        buf[digits++] = n % 10;
        n = t;
    }
    buf[digits] = t;

    for (i = digits; i < width; ++i) {
        yo_putc(flag);
    }

    for (i = digits; i >= 0; --i) {
        yo_putc(buf[i]);
    }
}


static void yo_put_hex32(const uint32_t n, const int width, const char flag)
{
    int digits = 8;
    int i;
    uint32_t mask = 0xf0000000;

    while ((n & mask) == 0) {
        --digits;
        mask >>= 4;
    }

    for (i = digits; i < width; ++i) {
        yo_putc(flag);
    }

    for (i = (digits - 1); i >= 0; --i) {
        yo_putc(hex((n & mask) >> (i << 2)));
        mask >>= 4;
    }
}
