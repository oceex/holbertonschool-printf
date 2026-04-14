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
int _printf(const char *format, ...)
{
int i = 0;
int count = 0;
va_list k;

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
va_end(k);
return (0);
}
