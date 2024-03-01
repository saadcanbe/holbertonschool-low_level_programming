#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * print_rev - print reverse string
 * @s:pointer to the string
 * Return: void
 */
void print_rev(char *s)
{
while (*s != '\0')
{
s++;
}
s--;
while (s != NULL && *s != '\0')
{_putchar(*s);
s--;
}
_putchar('\n');
}
