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
		return (1);
	}
	else
	{
		return (0);
	}
}
