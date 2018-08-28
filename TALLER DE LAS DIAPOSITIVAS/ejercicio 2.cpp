/*
programa: inicializar un arreglo de 10 elementos, y con un ciclo for verificar cual de los elementos es el mayor
fecha: 27/08/2018
usuario: sebastian ariza
*/
#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	int num [10] = {0, 10, 5, 8, 7, 6};
	int i = 0, j = 0;
	//inicio el arreglo
	for (j = 0; j < 10; j++)
	{
		
		if (num[j] > num[i]) //define que dato es mayor al anterior
		{
			
			i = j;
			
		}
	}
		printf("\n el elemento mayor es %d", num[i]);
		return 0;
	
}

