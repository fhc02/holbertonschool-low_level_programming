#include <stdio.h>
/**
* main - Entry point
*
* Return: 0
**/
int main(void)
{
char caracter;
int tipoEnteroMedio;
short tipoEnteroCorto;
long tipoEnteroLargo;
float tipoFlotante;
	printf("Size of a char: %s bytes\n", sizeof(caracter));
	printf("Size of an int: %s bytes\n", sizeof(tipoEnteroMedio));
	printf("Size of a long int: %s bytes\n", sizeof(tipoEnteroCorto));
	printf("Size of a long long int: %s byte\n", sizeof(tipoEnteroLargo));
	printf("Size of a float: %s byte\n", sizeof(tipoFlotante));
	return (0);
}
