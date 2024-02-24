#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * main - Entry point
 * check lower case c
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{	
		return (0);
	}
}
