#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * main - Entry point
 * Print the last digit
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
int r = n % 10;
_putchar(r + '0');
return (0);
}
