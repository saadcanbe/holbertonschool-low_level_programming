#include <stdio.h>
#include "main.h"
/**
 * print_line - Prints a line of underscores.
 * @n: The number of underscores to print.
 */
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
}
for (i = 0 ; i < n ; i++)
{
for (j = 0 ; j < i ; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
