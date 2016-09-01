#ifndef ERROR_H
#define ERROR_H

#define assert(cond) assert_impl(cond, #cond, __func__)
#define panic(...) panic_impl(__VA_ARGS__)

void panic_impl(char *panicfmt, ...);
void assert_impl(int cond, const char *condstr, const char *funcname);

#endif  // ERROR_H
