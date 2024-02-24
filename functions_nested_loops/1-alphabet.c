#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * main - Entry point
 * Print alph lower case
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char i = 'a';
while(i <= 'z')i
{
_putchar(i);
i++;
}
_putchar('\n');
}
