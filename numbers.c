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
