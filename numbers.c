#include "main.h"

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
