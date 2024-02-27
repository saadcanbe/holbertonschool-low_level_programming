#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * main - Entry point
 * print 0 to 14 ten times
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
int i, j;
for (i = 0 ; i < 10 ; i++)
{
for (j = 0 ; j <= 14 ; j++)
{
_putchar(j +'0');
}
_putchar('\n');
}
}
