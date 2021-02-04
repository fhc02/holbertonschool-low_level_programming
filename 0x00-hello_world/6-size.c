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
printf("Size of a char: %zu byte(s)\n", sizeof(caracter));
printf("Size of an int: %zu byte(s)\n", sizeof(tipoEnteroMedio));
printf("Size of a long int: %zu byte(s)\n", sizeof(tipoEnteroCorto));
printf("Size of a long long int: %zu byte(s)\n", sizeof(tipoEnteroLargo));
printf("Size of a float: %zu byte(s)\n", sizeof(tipoFlotante));
return (0);
}
