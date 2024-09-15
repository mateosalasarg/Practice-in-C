#include <stdio.h>
#include <math.h>
/*
Ejercicio 9:
Dado un número natural X, determinar la cantidad de divisores naturales que posee. Si la
cantidad de divisores es un número primo, mostrar el número equivalente de X en base 2, caso
contrario, mostrar su equivalente a base 9.
*/
int esNatural(int);
int cantDivisores(int);
int esPrimo(int);
int base(int, int);
int main() {
	int X,cant;
	printf("Ingrese un numero natural: ");
	scanf("%d",&X);
	if(esNatural(X)){
		cant = cantDivisores(X);
		printf("La cantidad de divisores que posee: %d\n",cant);
		if(esPrimo(cant))
			printf("%d es primo por lo que el numero %d en base 2 es: %d",cant,X,base(X,2));
		else
			printf("%d no es primo por lo que el numero %d en base 9 es: %d",cant,X,base(X,9));
	}
	return 0;
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
int cantDivisores(int x){
	int i,cant;
	cant = 0;
	for(i = 1; i <= x; i++){
		if(x % i == 0)
			cant++;
	}
	return cant;
}
int esPrimo(int x){
	int i,b;
	b = i = 2;
	if(x < i)
		b = 0;
	while((i < x) && (b != 0)){
		if(x % i == 0)
			b = 0;
		i++;
	}
	return b;
}
int base(int x,int b){
	int acu,i,dig;
	acu = i = dig = 0;
	while (x != 0){
		dig = x%b;
		acu = acu + dig * pow(10,i);
		x = x/b;
		i ++;
	}
	return acu; 
}
