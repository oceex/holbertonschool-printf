#include "main.h"
/**
 * _int - Prints a signed integer
 * @k: The va_list containing the integer to print
 *
 * Description: Retrieves an int from the argument list and prints it
 * digit by digit, handling negative numbers as well.
 *
 * Return: The number of characters printed.
 */
int _int(va_list k)
{
int n = va_arg(k, int);
int count = 0;
unsigned int m = 0, x = 1;
if (n < 0)
{
m = -n;
_putchar('-');
count++;
}
else
m = n;
while (m / x >= 10)
x *= 10;
while (x > 0)
{
_putchar(m / x + '0');
count++;
m %= x;
x /= 10;
}
return (count);
}

/**
 * _unsignedint - Prints an unsigned integer
 * @k: The va_list containing the unsigned int to print
 *
 * Description: Retrieves an unsigned integer from the argument list
 * and prints it digit by digit.
 *
 * Return: The number of characters printed.
 */
int _unsignedint(va_list k)
{
unsigned int n = va_arg(k, int);
int count = 0;
unsigned int m = 0, x = 1;
m = n;
while (m / x >= 10)
x *= 10;
while (x > 0)
{
_putchar(m / x + '0');
count++;
m %= x;
x /= 10;
}
return (count);
}

/**
 * _binary - prints an unsigned integer in binary format
 * @k: the variable argument list
 *
 * Return: number of characters printed
 */
int _binary(va_list k)
{
unsigned int b =va_arg(k, unsigned int);
char str[128];
int count = 0;
int i = 0;
if (b == 0)
{
_putchar('0');
return (++count);
}
for (; b > 0; b /= 2)
{
str[i] += (b % 2) + '0';
i++;
}
while (--i)
{
_putchar(str[i]);
count++;
}
return (count);
}
