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
	short cosa;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	cosa = (n % 10);

	if (cosa > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, cosa);
	else if (cosa == 0)
		printf("Last digit of %d is %d and is 0\n", n, cosa);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		n,
		cosa
	);
	return (0);
}
