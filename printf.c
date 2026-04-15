#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * _printf - Produces output according to a format
 * @format: A character string containing zero or more directives
 *
 * Description: This function works like the standard printf. It parses
 * the format string and handles conversion specifiers, escape sequences,
 * and custom formatting logic. It prints characters to the standard
 * output using helper functions.
 *
 * Return: The number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
int i = 0;
int count = 0;
va_list k;
map array[] = {
{'c', _char},
{'s', _string},
{'d', _int},
{'u', _unsignedint},
{'o', _octal},
{'x', _hex},
{'X', _HEX},
{'i', _int},
{'b', _binary},
{'r', _reversed},
{'R', _rot13},
{0, NULL}
};
int b = 0;
int boolean = 0;
va_start(k, format);
while (format[i] != '\0')
{
if (format[i] == '\\')
{
i++;
count += _backslash(i, format);
i++;
}
else if (format[i] == '%')
{
i++;
for (b = 0; b < 12; b++)
{
if (format[i] == array[b].m)
{
count += array[b].func(k);
boolean = 1;
break;
}
}
if (format[i] == '%')
{
_putchar('%');
boolean = 1;
count++;
}
if (!boolean)
{
_putchar('%');
_putchar(format[i]);
count += 2;
}
}
else
{
_putchar(format[i]);
count++;
}
i++;
}
va_end(k);
return (count);
}
