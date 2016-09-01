#include <error.h>
#include <lib/stdarg.h>
#include <arch/port.h>

void panic_impl(char *fmt, ...)
{
	va_list va;
	va_start(va, fmt);

	// dbg_start_panic();

	disable_irq();
	// dbg_vprintf(DL_EMERG, fmt, va);

	va_end(va);

	while (1)
		/* */ ;
}

void assert_impl(int cond, const char *condstr, const char *funcname)
{
	if (!cond) {
		/* Write to buffer */
		panic("Assertion %s failed @%s\n", condstr, funcname);
	}
}
