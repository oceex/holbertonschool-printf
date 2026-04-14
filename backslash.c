#include "main.h"
/**
 * _backslash - Handles escape sequences in a format string
 * @i: Index of the character after the backslash
 * @format: The full format string
 *
 * Description: This function checks the character following a backslash
 * and prints the corresponding escape sequence. If the character is not
 * a recognized escape code, it prints the backslash and the character
 * literally.
 *
 * Return: Number of characters printed (1 or 2)
 */
int  _backslash(int i, const char *format)
{
char c = format[i];

switch (c)
{
case '\\':
_putchar('\\');
return (1);
case '\"':
 _putchar('\"');
return (1);
case 'a':
_putchar('\a');
return (1);
case 'b':
_putchar('\b');
return (1);
case 'f':
_putchar('\f');
return (1);
case 'n':
_putchar('\n');
return (1);
case 'r':
_putchar('\r');
return (1);
case 't':
_putchar('\t');
return (1);
case 'v':
_putchar('\v');
return (1);

default:
_putchar('\\');
_putchar(c);
return (2);
}

}
