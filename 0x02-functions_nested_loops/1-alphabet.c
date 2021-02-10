#include "holberton.h"

/**
* print_alphabet - Entry Point Holberton
*
* Return: Always 0.
*/
void print_alphabet(void)
{
	char lowerCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	_putchar(lowerCase);
	_putchar('\n');
}
