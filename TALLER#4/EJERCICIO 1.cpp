/*
programa = generar un arreglo con los 100 primeros numeros pares y muestre su suma.
fecha : 27/08/2018
usuario: sebastian ariza
*/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
int main(void)
{
	int a, cont, suma, i;
	int tabla[100];
	
	i = 0;
	suma = 0;
	for (a = 2; a <= 100; a++)
	{
		cont = 0;
		if (a % 2 == 0)
		{
			tabla[i] = a;
			i++;
		}
	}
	
	for (a = 0; a < i; a++)
	{
		suma = suma + tabla[a];
	}
	
	printf("la suma de los primeros 100 numeros pares es de: %d\n",suma);
	
	
	return 0;
}
