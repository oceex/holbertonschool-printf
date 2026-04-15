#include "main.h"
/**
 * _char - Prints a single character
 * @k: The va_list containing the character to print
 *
 * Description: Retrieves an int from the argument list and prints it
 * as a character using _putchar.
 *
 * Return: Always returns 1 (number of characters printed).
 */

int _char(va_list k)
{
int m = va_arg(k, int);
_putchar(m);
return(1);
}
/**
 * _string - Prints a string
 * @k: The va_list containing the string to print
 *
 * Description: Retrieves a char pointer from the argument list and
 * prints it character by character. If the string is NULL, the
 * function prints "(null)" instead.
 *
 * Return: The number of characters printed.
 */

int _string(va_list k)
{
char *m = va_arg(k, char*);
char *x = "(null)";
int i = 0;
int count = 0;
if (m == NULL)
for (; i <= 5; i++)
{
_putchar(x[i]);
count++;
}
else
while (m[i] != '\0')
{
_putchar(m[i]);
count++;
i++;
}
return (count);
}
/**
 * _reversed - Prints a string in reverse
 * @k: va_list containing the argument to print
 *
 * Return: Number of characters printed
 */
int _reversed(va_list k)
{
char *m = va_arg(k, char*);
char *x = "(null)";
int i = 0, count = 0;
if (m == NULL)
{
for (; i <= 5; i++)
{
_putchar(x[i]);
count++;
}
return (count);
}
while (m[i] != '\0')
i++;
while (i--)
{
_putchar(m[i]);
count++;
}
return (count);
}
/**
 * _rot13 - Encodes a string using ROT13 and prints it
 * @k: va_list containing the string to encode
 *
 * Return: Number of characters printed
 */
int _rot13(va_list k)
{
char *m = va_arg(k, char*);
char *x = "(null)";
int i = 0, count = 0;
if (m == NULL)
{
for (; i <= 5; i++)
{
_putchar(x[i]);
count++;
}
return (count);
}
while (m[i] != '\0')
{
if (m[i] >= 65 && m[i] <= 90)
{
if (m[i] >= 65 && m[i] <= 77)
_putchar(m[i] + 13);
else
_putchar(m[i] - 13);
}
else if (m[i] >= 97 && m[i] <= 122)
{
if (m[i] >= 97 && m[i] <= 109)
_putchar(m[i] + 13);
else
_putchar(m[i] - 13);
}
else
_putchar(m[i]);
count++;
i++;
}
return (count);
}
