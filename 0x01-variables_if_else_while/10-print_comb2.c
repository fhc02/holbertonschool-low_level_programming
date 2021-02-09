#include <stdio.h>

/**
* main - Entry point
*
* Return: 0 (Success)
**/
int main(void)
{
	short num;
	short right;

	for (num = 0; num <= 9; num++)
	{
		for (right = 0; right <= 9; right++)
		{
			putchar(num + '0');
			putchar(right + '0');
			if (!(num == 9 && right == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
