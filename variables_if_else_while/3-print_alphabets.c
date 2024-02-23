#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Print upper and lowr case 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char i = 'a';
char j = 'A';
while (i <= 'z' && j <= 'Z')      
{
putchar(i);
i++;
if (i <= 'z')
{
putchar(j);
j++;
}
}
putchar('\n');
return (0);
}
