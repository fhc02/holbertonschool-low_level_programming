#include "holberton.h"
void print_alphabet(void)
{
	char lowerCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	putchar(lowerCase);
	putchar('\n');
	return (0);
}
