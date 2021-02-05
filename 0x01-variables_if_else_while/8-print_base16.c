#include <stdio.h>

/**
* main - Entry point
*
* Return: 0 (Success)
**/
int main(void)
{
	char caras[] = "0123456789abcdef";
	short i;

	for (i = 0; i < 16; i++)
		putchar(caras[i]);
	putchar('\n');
	return (0);
}
