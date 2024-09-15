#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Ejercicio 13:
Realizar un programa que genere al azar una lista de N números naturales aleatorios, en
el rango [A, B] (con A y B naturales) y muestre aquellos números aleatorios que cumplan con no ser
deficientes.
*/
int esNatural(float);
int asignarRangoNatural(int *,int * );
int numAleatorioEntero(int,int);
int sumDiv(int);
int verificarNumero(int,int);
int main() {
	int N,A,B,i,num,sum;
	float temp;
	srand(time(NULL));
	printf("Ingrese un N natural: ");
	scanf("%f",&temp);
	if(esNatural(temp)){
		N = (int)temp;
		if(asignarRangoNatural(&A,&B)){
			for(i = 1; i <= N; i++){
				num = numAleatorioEntero(A,B);
				printf("Numero[%d]: %d\n",i,num);
				sum = sumDiv(num);
				if(verificarNumero(sum,num) != 1)
					printf("El numero %d no es deficiente.\n",num);
			}
		}
		else
			printf("Error al cargar el rango.");
	}
	else
		printf("El numero no es natural.");
	return 0;
}
int esNatural(float temp){
	int num,b;
	b = 0;
	num = (int)temp;
	if(num > 0 && num == temp){
		b = 1;
	}
	return b;
}
int asignarRangoNatural(int *a,int *b){
	float temp;
	int ban = 1;
	printf("Para rango [A, B]\nIngrese un valor A natural: ");
	scanf("%f",&temp);
	if(esNatural(temp)){
		*a = (int)temp;
		printf("Ingrese un valor B natural: ");
		scanf("%f",&temp);
		if(esNatural(temp)){
			*b = (int)temp;
			if((*a < *b) == 0)
				ban = 0;
		}
		else
			ban = 0;
	}
	else
		ban = 0;
	return ban;
}
int numAleatorioEntero(int a,int b) {
	return rand() % (b - a + 1) + a;
}
int sumDiv(int num){
	int i,sum;
	sum = 0;
	if(num == 1) sum = 1;
	for(i = 1; i < num; i++){
		if(num % i == 0) sum += i;
	}
	return sum;
}
int verificarNumero(int sumDiv,int num){
	int b;
	if(sumDiv < num) b = 1;
	else if(sumDiv > num) b = -1;
	else b = 0;
	return b;
}
