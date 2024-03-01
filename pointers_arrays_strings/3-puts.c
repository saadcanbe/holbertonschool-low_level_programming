#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * _puts - print a string
 * @str:pointer to the string
 * return: void
 */
void _puts(char *str)
{
while (*str != '\0')
{putchar(*str);
str++;
}
putchar('\n');
}
