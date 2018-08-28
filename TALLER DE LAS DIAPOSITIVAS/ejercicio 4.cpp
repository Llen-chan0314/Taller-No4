/*
programa: inicializar un programa que lea 5 numeros por teclado, los copie a otro arreglo multiplicado por 2 y los muestre todos ordenados usando un tercer arreglo
fecha: 27/08/2018
usuario: sebastian ariza
*/
#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	int i, numero1[5];
	
	int numero2[5];
	
	int numero3[10];
	
	for (i = 0; i < 5; i++){
		
		printf("Ingrese cualquier dato\n");
		scanf("%d",&numero1[i]);
		printf("\n");
	}
	
	for(i = 0; i < 5; i++)
	{
		numero2[i] = numero1[i] * 2;
	}
	
	for(i = 0; i < 5; i++)
	{
		numero3[i] = numero1[i];
	}
	
	for(i = 0; i < 5; i++)
	{
		numero3[5+i] = numero2[i];
	}
	
	for (i = 0; i < 10; i++){
		
		printf("%d\n",numero3[i]);
	}
	return 0;
}
