#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include "main.h"
/**
 * puts_half - Prints the second half of a string, followed by a newline.
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
int lenght = _strlen(str);
int index;
int i;
if (lenght % 2 == 0)
{index = lenght / 2;
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
