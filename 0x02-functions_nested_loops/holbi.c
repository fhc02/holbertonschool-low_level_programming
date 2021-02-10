#include "holberton.h"
/**
* main - Write a program that prints Holberton, followed by a new line.
* 
* Return: Always 0
*/

int main(void)
{
	char nombre[9] = {"Holberton"};
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(nombre[i] + '0');
	}
	_putchar('\n');
	return (0);
}
