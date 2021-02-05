#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: 0 (Success)
**/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int x = n % 10;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 6\n", n, x);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, x);
	}
	else if (n > 0 && n < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}
	return (0);
}
