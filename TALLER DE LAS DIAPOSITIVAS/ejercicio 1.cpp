/*
programa:realizar programa que pida 5 calificaciones por teclado, los muestre y calcule el promedio de ellos
fecha: 27/08/2018
usuario: sebastian ariza
*/
#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) 
{
	int i;
	float cali[5];
	float prom = 0;
	
	//iniciar arreglo para introducir datos por el usuario
	for(int i = 0; i < 5; i++)
	{
		
		printf("ingrese las 5 notas %d\n", i + 1);
		scanf("%f", &cali[i]);
		prom += cali[i];
		printf("\n");
		
	}
		printf("las notas ingresadas son %.2f\n");
	     for (i = 0; i < 5; i++)
		 {
			 
			 printf("%.2f, ", cali[i]);
		 }
	printf("el promedio es %.2f: ", prom / 5);
	return 0;
}

