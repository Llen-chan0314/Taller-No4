/*
programa: generar un arreglo que imprima los primeros 100 numeros enteros en orden descendente
fecha: 27/08/2018
usuario: sebastian ariza
*/
#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	int j,numero[100];
	for(j = 1; j <= 100; j++)
	{
		numero[j] = j;
	}
	
	for(j = 100; j >= 1; j--)
	{
		printf("%d\n",numero[j]);
	}
	return 0;
}

