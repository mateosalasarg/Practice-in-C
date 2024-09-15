#include <stdio.h>
/*
Ejercicio 6:
Dados dos números naturales A y B, se desea calcular el producto de A * B utilizando la
definición del producto.
nota: Crear una función que reciba A y B y que devuelva el resultado de A*B.
*/
int productoNatural(int, int);
int sonNaturales(int, int);//reuso el modulo
int main() {
	int A,B;
	printf("Ingrese un numero natural 'A': ");
	scanf("%d",&A);
	printf("Ingrese un numero natural 'B': ");
	scanf("%d",&B);
	if(sonNaturales(A,B))
		printf("El producto de A*B es: %d",productoNatural(A,B));
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
int productoNatural(int a,int b){
	return a * b;
}
