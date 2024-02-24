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
char i = 'z';
while (i >= 'a')        
{        
putchar(i);
i--;
}
putchar('\n');
return (0);
} 
