#include <stdio.h>
#include <stdlib.h>
/*
Ejercicio 7:
Escribir la cabecera e implementar módulos que realicen las siguientes operaciones:
a)Calcular la cantidad de divisores naturales de un número natural X.
b)Determinar si un número natural X es primo.
c)Comparar dos números reales A y B, devolviendo 1 si A>B; 0 si A=B o -1 si A<B.
d)Invertir un número entero X.
Probar los módulos mediante un programa que presente un menú con las cuatro operaciones
implementadas.
*/
int esNatural(int);
int cantDivisores(int);//a)
int esPrimo(int);//b)
int compararNumReales(double, double); // c)
int invertirNumero(int);//d)
int menu();
int main() {
	int op,X;
	double A,B;
	do{
		op = menu();
		switch(op){
		case 1:
			printf("Ingrese un numero natural: ");
			scanf("%d",&X);
			if(esNatural(X))
				printf("La cantidad de divisores es: %d\n",cantDivisores(X));
			break;
		case 2:
			printf("Ingrese un numero natural: ");
			scanf("%d",&X);
			if(esNatural(X)){
				(esPrimo(X))?printf("El numero es primo\n") : printf("El numero no es primo\n");
			}
			break;
		case 3:
			printf("Ingrese un numero real A: ");
			scanf("%lf",&A);
			printf("Ingrese un numero real B: ");
			scanf("%lf",&B);
			printf("ha devuelto: %d\n",compararNumReales(A,B));
			break;
		case 4:
			printf("Ingrese un numero entero: ");
			scanf("%d",&X);
			printf("Numero invertido: %d\n",invertirNumero(X));
			break;
		case 5:
			printf("Saliste del programa.\n");
			break;
		default:
			printf("Opcion incorrecta.\n");
		}
	}while(op != 5);
	return 0;
}
int menu(){
	int op;
	printf("--M E N U--\n");
	printf("1. Calcular la cantidad de divisores naturales de un numero natural.\n");
	printf("2. Determinar si un numero natural es primo.\n");
	printf("3. Comparar dos numeros reales A y B, devolviendo: \n [(1 si A>B), (0 si A=B ), (-1 si A<B)].\n");
	printf("4. Invertir un numero entero.\n");
	printf("5. Salir.\n-> ");
	scanf("%d",&op);
	return op;
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
int compararNumReales(double a, double b){
	int v;
	v = 0;
	if(a>b)
		v++;
	else if(a<b)
		v--;
	return v;
}
int invertirNumero(int x){
	int dig,acu;
	acu = 0;
	x = abs(x);
	while(x != 0){
		dig = x % 10;
		acu = dig + acu * 10;
		x /= 10;
	}
	return acu;
}
