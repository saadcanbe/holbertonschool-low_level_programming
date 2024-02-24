#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * number base 10 with putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar(i + 'O');
}
putchar('\n');
return (0);
}
