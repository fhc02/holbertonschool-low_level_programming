#include <stdio.h>

/**
* main - Entry point
*
* Return: 0 (Success)
**/
int main(void)
{
	short num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
