#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_triangle - Prints a triangle of a specified size.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
return;
}
for (i = size; i > 0; i--)
{
for (j = 0; j < size ; j++)
{
if ( j < i-1 )
{
_putchar(' ');
}	
else
_putchar('#');
}
_putchar('\n');
}
}
