#include "main.h"
#include <stdio.h>
/**
 * times_table - Prints the 9 times table
 */
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n ; i <= 98 ; i++)
{
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
if (i >= 10)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
else
{
_putchar(i + '0');
}
}
else
{
for (i = n ; i >= 98 ; i--)
{
if (i != 0)
{
_putchar(',');
_putchar(' ');
}
if (i >= 100)
{
_putchar((n / 100) + '0');
_putchar((n / 10) % 10 + '0');
_putchar((i % 10) + '0');
}
else
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
}
}
_putchar('\n');
}
