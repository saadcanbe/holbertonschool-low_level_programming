#include <stdlib.h>
#include <stdio.h>
#include <time.h>Â
#include "main.h"
/**
 * print_square - Print a square of a specified size using the '#' character.
 * @size: The size of the square.
 */
int main ()
{
int i;
for (i = 1; i <= 100; i++) {
        if ((i % 3 == 0) && (i % 5 == 0)) {
           _putchar('F');
           _putchar('i');
           _putchar('z');
           _putchar('z');
           _putchar('B');
           _putchar('u');
           _putchar('z');
           _putchar('z');
           _putchar(' ');
        } else if (i % 3 == 0) {
           _putchar('F');
           _putchar('i');
           _putchar('z');
           _putchar('z');
           _putchar(' ');
        } else if (i % 5 == 0) {
           _putchar('B');
           _putchar('u');
           _putchar('z');
           _putchar('z');
           _putchar(' ');
	}
	 else
        {
	_putchar(i + '0');
	_putchar(' ');
	}
	}
	_putchar('\n');
	return (0);
}
