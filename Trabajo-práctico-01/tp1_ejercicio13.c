#include <stdio.h>
/*
Ejercicio 13:
Dada una lista de N n�meros enteros y dos valores enteros, A y B. Se pide informar
cu�ntos n�meros naturales de la lista son s�lo m�ltiplo de A y cu�ntos son m�ltiplos s�lo de B.
*/
int main() {
	int N,A,B,num,cantA = 0,cantB = 0;
	printf("Ingrese la cantidad de numeros enteros a ingresar: ");
	scanf("%d",&N);
	printf("Ingrese un valor para A: ");
	scanf("%d",&A);
	printf("Ingrese un valor para B: ");
	scanf("%d",&B);
	for(int i = 1; i <= N; i++){
		printf("Ingrese el numero[%d]: ",i);
		scanf("%d",&num);
		if(num > 0 && num % A == 0)
			cantA++;
		if(num > 0 && num % B == 0)
			cantB++;
	}
	printf("La cantidad de numeros multiplos solo de %d: %d\n",A,cantA);
	printf("La cantidad de numeros multiplos solo de %d: %d\n",B,cantB);
	return 0;
}

