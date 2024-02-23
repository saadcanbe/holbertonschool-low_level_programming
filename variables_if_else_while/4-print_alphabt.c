#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Print upper and lowr case
 * Return: Always 0 (Success)
 */
int main(void)
{
char i = 'a';
char j = 'A';
while (i <= 'z' && j <= 'Z')
{
if (i != 'q' && i != 'e')
putchar(i);
i++;
}
putchar('\n');
return (0);
}
