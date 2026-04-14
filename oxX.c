#include "main.h"
/**
 * _octal - prints an unsigned integer in octal format
 * @k: the variable argument list
 *
 * Return: number of characters printed
 */
int _octal(va_list k)
{
unsigned int v = va_arg(k, unsigned int);
char str[32];
int i = 0;
int count = 0;
if (v == 0)
{
_putchar('0');
return (1);
}
for (; v > 0; v/= 8)
{
str[i] = (v % 8) + '0';
i++;
}
while (i--)
{
_putchar(str[i]);
count++;
}
return (count);
}

/**
 * _hex - prints an unsigned integer in lowercase hexadecimal format
 * @k: the variable argument list
 *
 * Return: number of characters printed
 */
int _hex(va_list k)
{
unsigned int v = va_arg(k, unsigned int);
char str[32];
char m;
int count = 0;
int i = 0;
if (v == 0)
{
_putchar('0');
return (++count);
}
for (; v > 0; v/= 16)
{
m = (v % 16) + '0';
switch (m - '0')
{
case 10:
m = 'a';
break;
case 11:
m = 'b';
break;
case 12:
m = 'c';
break;
case 13:
m = 'd';
break;
case 14:
m = 'e';
break;
case 15:
m = 'f';
break;
}
str[i] = m;
i++;
}
while (i--)
{
_putchar(str[i]);
count++;
}
return (count);
}

/**
 * _HEX - prints an unsigned integer in uppercase hexadecimal format
 * @k: the variable argument list
 *
 * Return: number of characters printed
 */
int _HEX(va_list k)
{
unsigned int v = va_arg(k, unsigned int);
char str[32];
int count = 0;
char m;
int i = 0;
if (v == 0)
{
_putchar('0');
return (++count);
}
for (; v > 0; v/= 16)
{
m = (v % 16) + '0';
switch (m - '0')
{
case 10:
m = 'A';
break;
case 11:
m = 'B';
break;
case 12:
m = 'C';
break;
case 13:
m = 'D';
break;
case 14:
m = 'E';
break;
case 15:
m = 'F';
break;
}
str[i] = m;
i++;
}
while (i--)
{
_putchar(str[i]);
count++;
}
return (count);
}
