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
short int tipoEnteroCorto;
long int tipoEnteroLargo;
float tipoFlotante;
printf("Size of a char: %d bytes(s)\n", sizeof(caracter));
printf("Size of an int: %d bytes(s)\n", sizeof(tipoEnteroMedio));
printf("Size of a long int: %d bytes(s)\n", sizeof(tipoEnteroCorto));
printf("Size of a long long int: %d byte(s)\n", sizeof(tipoEnteroLargo));
printf("Size of a float: %d byte(s)\n", sizeof(tipoFlotante));
return (0);
}
