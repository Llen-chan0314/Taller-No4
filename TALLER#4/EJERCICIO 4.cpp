/*
programa = generar un arreglo numerico entero en el cual contenga 20 elementos ingresados por el usuario y mostrar en pantalla cual de ellos son numeros impares
fecha : 27/08/2018
usuario: sebastian ariza
*/
#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	int numero[20];
	int i = 0;
	
	for(i = 1; i <= 20; i++)
	{
		printf("ingrese cualquier numero\n");
		scanf ("%d", &numero[i]);
		
		if(numero[i] % 2 == 0)
			{
			
		}else{
			
			printf("este numero es impar\n",&numero[i]);
			
		}
	}
	return 0;
}

