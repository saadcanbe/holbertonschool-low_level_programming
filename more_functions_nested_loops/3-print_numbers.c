#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * main - Entry point
 * print 0 to 9
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
for (i = 0 ; i <= 9 ; i++)
{
_putchar(i + '0');
}
_putchar('\n);
