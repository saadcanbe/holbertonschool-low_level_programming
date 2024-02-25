#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * main - Entry point
 * Print sign of n
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return 1;
}
else if (n == 0)
{
putchar('0');
return 0;
}
else
{
putchar('-');
return -1;
}
}
