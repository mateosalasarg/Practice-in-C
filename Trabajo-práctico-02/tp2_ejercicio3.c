#include <stdio.h>
#include <math.h>
/*
Ejercicio 3:
Dados un número real A, se solicita mostrar la cantidad de cifras que posee su parte
entera y la cantidad que posee su parte decimal.
Nota: La fórmula CD= log 10 A puede indicar la cantidad de cifras que tiene, un número natural,
¿Cómo se podría convertir la parte decimal pura del número real A en un número natural?
.
Nota: recordar que en C la librería math.h tiene la función log() que representa al logaritmo natural.
*/
int cantCifra(int);
int parteEntera(double);
int parteDecimal(double);
int main() {
	double A;
	printf("Ingrese un numero real: ");
	scanf("%lf",&A);
	A = fabs(A);
	printf("Cantidad de cifras que posee su parte entera: %d\n",cantCifra(parteEntera(A)));
	printf("Cantidad de cifras que posee su parte decimal: %d\n",cantCifra(parteDecimal(A)));
	return 0;
}
int parteEntera(double a){
	int num;
	num = (int)floor(a);
	printf("Salida Entera: %d\n",num);
	return num;
}
int parteDecimal(double a){
	int num;
	double decimal;
	decimal = a - floor(a); //0.330000
	while ((float)decimal != floor((float)decimal)) {
/*		printf("decimal: %lf\n",decimal);*/
/*		printf("floor(): %lf\n",floor(decimal));*/
		decimal *= 10;
	}
	//printf("a: %f - %f\n",(float)decimal,(float)floor(decimal));
	if((float)decimal != (float) floor(decimal)){
		num = (int)decimal;
		num ++;
	}
	else
		num = (int)decimal;
	printf("Salida decimal: %d\n",num);
	return num;
}
int cantCifra(int num){
	int n;
	n = (int)log10(num) + 1;
	return n;
}
