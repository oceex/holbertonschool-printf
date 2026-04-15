#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
int _putchar(char c);
int _printf(const char *format, ...);

int _backslash(int index, const char *format);

int _char(va_list k);
int _string(va_list k);
int _int(va_list k);
int _unsignedint(va_list k);
int _octal(va_list k);
int _hex(va_list k);
int _HEX(va_list k);
int _binary(va_list k);
int _reversed(va_list k);
int _rot13(va_list k);

typedef int (*handler_func)(va_list);

typedef struct map {
    char m;
    handler_func func;
} map;

#endif
