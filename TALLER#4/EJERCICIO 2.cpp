/*
programa = inicializar un arreglo numerico decimal de 4 elementos, mostrarlos en pantalla y realizar la suma de los elementos
fecha : 27/08/2018
usuario: sebastian ariza
*/
#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	float n[] = {1,7.5,5,12.5};
	float sumatoria = 0;
	printf("lista de elementos decimales\n");
	for(int i=0;i<4;i++)
	{
		printf ("%.2f\n",n[i]);
		sumatoria = sumatoria + n[i];
	}
	printf("el resultado es: %.2f", sumatoria);
	
	return 0;
}
