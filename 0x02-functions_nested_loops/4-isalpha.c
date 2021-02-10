#include "holberton.h"

/**
* _isalpha - Write a function that checks for lowercase character.
* Return: 0
* @c: external input
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') | (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
