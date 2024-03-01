#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * _strlen - compute a lenght of a string
 * @s:pointer to the string
 * Return the lenght of the string
 */
int _strlen(char *s)
{int lenght = 0;
while (*s != '\0')
{
lenght++;
s++;
}
return (lenght);
}
