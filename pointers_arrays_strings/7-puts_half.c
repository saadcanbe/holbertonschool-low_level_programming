#include <stdio.h>
#include "main.h"
/**
 * put_half - print the half
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
int lenght = strlen(str);
int index;
if ( lenght % 2 == 0)
{index = lenght / 2
}
else
{
index = (lenght - 1) / 2;
}
for (i = index ; i < lenght ; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
