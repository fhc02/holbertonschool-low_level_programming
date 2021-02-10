#include "holberton.h"
/**
* print_to_98 - Prints all natural numbers from n to 98, followed by a new line.
*
* Return: Always 0.
*/

void print_to_98(int n)
{
	for (n = 0; n <= 98; n++ || n >= 98; n--)
	{
		_putchar(n + '0');
		_putchar(right + '0');
		if (!(n == 9 && right == 9))
		{
			_putchar(',');
			_putchar(' ');
			_putchar('\n')
		}
	}
}

