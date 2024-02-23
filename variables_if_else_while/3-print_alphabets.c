#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Print the last digit of the number stored in the variable n
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
	 putchar(j);
         i++;
	 j++;
        }
        putchar('\n');
        return (0);
}
