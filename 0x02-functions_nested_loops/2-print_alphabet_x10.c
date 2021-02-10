#include "holberton.h"

/**
* print_alphabet_x10 - Entry Point Holberton
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
	char lowerCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	_putchar(lowerCase);
	_putchar('\n');
}
