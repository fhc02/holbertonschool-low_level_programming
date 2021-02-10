#include <ctype.h>
#include "holberton.h"

/**
* int _islower - Write a function that checks for lowercase character.
*
* Return: 0
*
*/
int _islower(int c)
{
	if (islower(c))
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	return (0);
}
