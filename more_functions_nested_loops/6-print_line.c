#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * main - Entry point
 * print 0 to 14 ten times
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
int i;
for (i = 0 ; i <= n ; i++)
{
if (n == 0)
{
_putchar('\n');
}
else 
{
_putchar('_');
}
_putchar('\n')
}
}
