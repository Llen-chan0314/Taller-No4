/*
programa = generar un arreglo numerico entero en el cual contenga 10 elementos ingresados por el usuario y mostrar en pantalla cual de ellos son numeros pares
fecha : 27/08/2018
usuario: sebastian ariza
*/
#include <stdio.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int num[10];
	int i=0;
	for(i=1;i<=10;i++)
	{
		printf("ingrese cualquier numero\n");
		scanf ("%d",&num[i]);
		if(num[i]%2==0)
		{
			
			printf("este numero es par\n",&num[i]);
		}
	}
	return 0;
}
