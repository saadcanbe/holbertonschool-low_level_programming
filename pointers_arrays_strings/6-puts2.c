#include <stdio.h>
/**
 * puts2 - prints every other character of a string
 * @str: Pointer to the string to be reversed.
 */
void puts2(char *str)
{
int i;
for (i = 0 ; str[i] != '\0' ; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
