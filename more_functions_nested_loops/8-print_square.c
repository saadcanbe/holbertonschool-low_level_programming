#include <stdio.h>
#include "main.h"
/**
 * print square
 * @n: The number of underscores to print.
 */
void print_square(int size)
{
int i, j;
for (i = 0 ; i <= size ; i++)
{
for (j = 0 ; j <= size ; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
