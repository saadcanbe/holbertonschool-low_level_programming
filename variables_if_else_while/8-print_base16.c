#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Print inverse alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char j;
for (i = 0 ; i <= 9 ; i++)
{        
putchar(i + '0');
}
for (j = 'a' ; j <= 'f' ; j++)
{
putchar(j);
j++;
}
putchar('\n');
return (0);
} 
