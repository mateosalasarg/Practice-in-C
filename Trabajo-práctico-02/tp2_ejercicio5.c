#include <stdio.h>
#include <stdlib.h>
/*
Ejercicio 5:
Dados dos números naturales a y b y dado un número natural N, mostrar N números naturales
X generados aleatoriamente en el intervalo [a, b] y que sean múltiplo de K.
*/
int sonNaturales(int, int);//reuso el modulo
int esNatural(int);
int numAleatorioEntero(int, int);
int main() {
	int a,b,num,i,N,K;
	printf("Ingrese un numero natural 'a': ");
	scanf("%d",&a);
	printf("Ingrese un numero natural 'b': ");
	scanf("%d",&b);
	if(sonNaturales(a,b)){
		printf("Ingrese un numero natural 'N': ");
		scanf("%d",&N);
		if(a < b){
		if(esNatural(N)){
			printf("Ingrese un multiplo 'K': ");
			scanf("%d",&K);
			for(i = 1;i <= N; i++){
				num = numAleatorioEntero(a,b);
				if((num % K) == 0)
					printf("El numero[%d]: %d es multiplo de %d\n",i,num,K);
			}
		}
		}
		else
		   printf("Tiene que ser a < b.");
	}
	return 0;
}
int sonNaturales(int a,int b){
	int v;
	v = 1;
	if(a < 0){
		printf("El %d no es natural.\n",a);
		v = 0;
	}
	if(b < 0){
		printf("El %d no es natural.\n",b);
		v = 0;
	}
	return v;
}
int esNatural(int a){
	int v;
	v = 1;
	if(a < 0){
		printf("El %d no es natural.\n",a);
		v--;
	}
	return v;
}
int numAleatorioEntero(int a,int b){
	return rand() % (b - a + 1) + a;
}
