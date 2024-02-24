#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * main - Entry point
 * Print _putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
char tmp = "_putchar";
int i = 0;
while (tmp[i] != '\0')
{ putchar(tmp[i]);
i++;
}
putchar('\n');
return (0);
}
