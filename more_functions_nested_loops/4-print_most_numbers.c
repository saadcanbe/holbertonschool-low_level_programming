#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * main - Entry point
 * check c upper case
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
int i;
for (i = 0 ; i <= 9 ; i++)
{
if (i != 2 && i != 4)
{
_putchar(i + '0');
}
_putchar('\n');
}
}
