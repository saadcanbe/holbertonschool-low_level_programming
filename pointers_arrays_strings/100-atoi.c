#include <stdio.h>
#include "main.h"
/**
 * _atoi - Converts a string to an integer.
 * @s: the string to b converted
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int i = 0;
while (s[i] == ' ')
i++;
while (s[i] == '-' || s[i] == '+')
{
if (s[i] == '-')
sign *= -1;
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
i++;
}
return (sign * result);
}
