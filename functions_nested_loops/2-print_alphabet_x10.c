#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * main - Entry point
 * print 10 times
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
char c;
int i;
for (i = 0 ; i < 10; i++)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
}
