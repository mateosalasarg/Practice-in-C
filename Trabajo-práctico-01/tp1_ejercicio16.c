#include <stdio.h>
/*
Ejecicio 16:
Dado un número natural K de dos cifras, se pide mostrar los números naturales primos
que le anteceden. Por ejemplo, si K= 12 la salida será {2, 3, 5, 7, 11).
*/
int esPrimo(int);
int main() {
	unsigned int K;
	printf("Ingrese un numero natural: ");
	scanf("%u",&K);
	printf("{");
	for(int j = 1; j < K; j++){ // 2
/*		printf("numero %d\n",j);*/
		if(esPrimo(j))
			printf("%d,",j);
	}
	printf("}");
	
	return 0;
}
int esPrimo(int num){
	int i = 2;
	//printf("numero: %d\n",num);
	if(num <= 1) return 0;
	while(i< num){
		if((num % i) == 0){
			return 0;
		}
		i++;
	}
	//otra forma
/*	for(int i = 2; i <num ; i++){*/
/*		if(num % i == 0)*/
/*			return 0;*/
/*	}*/
	return 1;
	
}
