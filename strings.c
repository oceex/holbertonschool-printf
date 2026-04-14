#include "main.h"

int _char(va_list k)
{
int m = va_arg(k, int);
_putchar(m);
return(1);
}

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
