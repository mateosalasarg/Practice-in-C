#include <stdio.h>
/*
Ejercicio 8:
Dada una cantidad no determinada de fracciones, de la forma \u201cA/B\u201d, convertir cada fracción
en irreductible e indicar si la fracción originalmente ingresada sufrió transformación.
*/
void ingresarFraccion(int*,int*);
void simplificarFraccion(int,int,int*,int*);
int mcd(int,int);
void mostrarFraccion(int,int);
int main() {
	int numA,numB,Ar,Br;
	do{
		printf("Ingrese una fraccion ( 0/0 para salir) :\n");
		ingresarFraccion(&numA,&numB);
		mostrarFraccion(numA,numB);
		if(numA != 0 || numB != 0){
			simplificarFraccion(numA,numB,&Ar,&Br);
			if(numA != Ar || numB != Br){
				printf("\nLa fraccion: ");
				mostrarFraccion(numA,numB);
				printf("Sufrio transformacion: ");
				mostrarFraccion(Ar,Br);
			}
			else
			   printf("No sufrio transformacion.\n");
		}
	}while(numA != 0 || numB != 0);
	return 0;
}
void ingresarFraccion(int *numerador,int *denominador){
	printf("Ingrese numerador: ");
	scanf("%d",numerador);
	printf("Ingrese denominador: ");
	scanf("%d",denominador);
}
void simplificarFraccion(int num,int den,int *Ared,int * Bred){
	int divisor;
	divisor = mcd(num,den);
	*Ared = num / divisor;
	*Bred = den / divisor;
}
int mcd(int a, int b) {
	int temp;
	while (b != 0) {
		temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
void mostrarFraccion(int n,int d){
	printf("%d / %d\n",n,d);
}
