#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Ejercicio 12:
Dado un número natural N, generar al azar N números naturales X, de a lo sumo 6 cifras y
determinar, para cada número X, si es capicúa, en caso de no serlo, generar un nuevo valor Y, que será
igual al producto de todos los dígitos de X.

*/
int numAleatorioEntero(int,int);
int esCapicua(int);
int productoDigito(int);
int main() {
	int N,X,i,Y;float temp;
	printf("Ingrese un numero natural: ");
	scanf("%f",&temp);
	N = (int)temp;
	srand(time(NULL));
	if(N > 0 && N == temp){
		for(i = 1; i<=N; i++){
			//X = numAleatorioEntero(100000,999999);
			X = numAleatorioEntero(100,999);
			if(esCapicua(X)){
				printf("El numero %d es capicua.\n",X);
			}
			else {
				Y = productoDigito(X);
				printf("El numero %d no es capicua por lo que el producto de sus digitos es: %d\n",X,Y);
			}
		}
	}
	else
	   printf("El numero no es natural.");
	return 0;
}
int numAleatorioEntero(int a,int b) {
	return rand() % (b - a + 1) + a;
}
int esCapicua(int num){
	int acu,dig,aux,b;
	acu = b = 0;
	aux = num;
	while(num != 0){
		dig = num % 10;
		acu = dig + acu * 10;
		num/=10;
	}
	if(aux == acu)
		  b = 1;
	return b;
}
int productoDigito(int num){
	int prod,dig;
	prod = 1;
	while(num != 0){
		dig = num % 10;
		prod*=dig;
		num/=10;
	}
	return prod;
}
