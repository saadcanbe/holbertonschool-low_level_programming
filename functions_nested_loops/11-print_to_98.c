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
_putchar(i + '0');
if (i != 98)
{
_putchar(', ');
}
}
}
else
{
for (i = n ; i >= 98 ; i--)
{
_putchar(i + '0');
if (i != 0)
{
_putchar(', ');
}
}
}
_putchar('\n');
}
