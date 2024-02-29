#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * swap a b
 * @a et b: The character to be swaped
 *
 * Return:0 (success)
 */
void swap_int(int *a, int *b)
{int p;
p = *a;
*a = *b;
*b = p;
}
