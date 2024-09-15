#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
/*
Ejercicio 4:
Dados dos naturales, X e Y, donde X<Y, se necesita generar aleatoriamente dos
números reales A y B, pertenecientes a rango [X, Y] y a continuación mostrar un menú que permita
calcular y mostrar:
a) La raíz cuadrada de A.
b) La potencia de A^B.
c) El logaritmo decimal de B.
*/
double numAleatorioReal(int,int);
int sonNaturales(int,int);
void opciones(double,double); // meh
int main() {
	double A,B;
	int X,Y;
	printf("Ingrese un numero natural X: ");
	scanf("%d",&X);
	printf("Ingrese un numero natural Y: ");
	scanf("%d",&Y);
	if(sonNaturales(X,Y)){
		if(X < Y){
			srand(time(NULL));
			A = numAleatorioReal(X,Y);
			B = numAleatorioReal(X,Y);
			printf("Nuemero aleatorios A = %lf - B = %lf\n",A,B);
			opciones(A,B);
		}
		else
		   printf("Tiene que ser X < Y .\n");
	}
	printf("Fin del programa.\n");
	return 0;
}
//
int sonNaturales(int a,int b){
	int v;
	v = 1;
	if(a < 0){
		printf("el %d no es natural.\n",a);
		v = 0;
	}
	if(b < 0){
		printf("el %d no es natural.\n",b);
		v = 0;
	}
	return v;
}
//
double numAleatorioReal(int a,int b){
	return fmod(rand(),((double)b - (double)a + 1) + (double)a );
}
//
int menu(){
	int op;
	printf("--M E N U--\n");
	printf("1. La raiz cuadrada de A.\n");
	printf("2. La potencia de A^B.\n");
	printf("3. El logaritmo decimal B.\n");
	printf("4. Salir.\n-> ");
	scanf("%d",&op);
	return op;
}
//
void opciones(double A,double B){
	int op;
	do{
		op = menu();
		switch(op){
		case 1:
			printf("La raiz cuadrada de %f es: %f\n",A,sqrt(A));
			break;
		case 2:
			printf("La potencia de %f ^ %f es: %f\n",A,B,pow(A,B));
			break;
		case 3:
			printf("El logaritmo decimal de %f es: %f\n",B,log10(B));
			break;
		case 4:
			printf("Saliste del menu.\n");
			break;
		default:
			printf("Opcion incorrecta.\n");
		}
	}while(op != 4);
}
