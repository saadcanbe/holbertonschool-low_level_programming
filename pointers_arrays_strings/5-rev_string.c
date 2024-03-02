#include <stdio.h>
/**
 * rev_string - Reverses the characters of a string in-place.
 * @s: Pointer to the string to be reversed.
 */
void rev_string(char *s)
{
char
*st = s;
*fi = s;
tmp;
while (*fi != '\0')
{
fi++;
}
fi--;
while (st < fi)
{
tmp = *st;
*st = *fi;
*fi = tmp;
st++;
fi++;
}
}
