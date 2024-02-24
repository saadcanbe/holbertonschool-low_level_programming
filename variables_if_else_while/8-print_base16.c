#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Print numbers in base 16
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;
    char j; // Move the declaration of j outside the loop

    for (i = 0; i <= 9; i++)
    {
        putchar(i + '0');
    }

    for (j = 'a'; j <= 'f'; j++)
    {
        putchar(j);
    }

    putchar('\n');

    return (0);
}
