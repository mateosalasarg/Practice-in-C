#include <stdio.h>
/*
Ejercicio 7:
Diseñe un programa que permita el ingreso de N fracciones de la forma (A/B) y muestre la
mayor y la menor de ellas, indicando además su expresión irreductible.
*/
void ingresarNum(int*);
void ingresarFraccion(int*,int*);
void fracMayMen(int,int,int*,int*,int*,int*,int*);
void mostrarFraccion(int,int);
void simplificarFraccion(int,int,int*,int*);
int mcd(int,int);
int main() {
	int N,i,b,num,den,menN,menD,mayN,mayD;
	b = 0;
	printf("Ingrese la cantidad N ");
	ingresarNum(&N);
	for(i = 1; i <= N; i++){
		printf("fraccion[%d]: \n",i);
		ingresarFraccion(&num,&den);
		mostrarFraccion(num,den);
		fracMayMen(num,den,&b,&menN,&menD,&mayN,&mayD);
	}
	if(b == 1){
		printf("\nFraccion mayor:\n");mostrarFraccion(mayN,mayD);
		simplificarFraccion(mayN,mayD,&mayN,&mayD);
		printf("Fraccion reducida:\n");mostrarFraccion(mayN,mayD);
		printf("Fraccion menor:\n");mostrarFraccion(menN,menD);
		simplificarFraccion(menN,menD,&menN,&menD);
		printf("Fraccion reducida:\n");mostrarFraccion(menN,menD);
	}
	else
		printf("No se ingresaron fracciones.\n");
	return 0;
}
void ingresarNum(int *num){
	float temp;
	printf("\nIngrese un numero: ");
	scanf("%f",&temp);
	*num = (int)temp;
}
void ingresarFraccion(int *numerador,int *denominador){
	printf("Ingrese numerador: ");
	scanf("%d",numerador);
	printf("Ingrese denominador: ");
	scanf("%d",denominador);
}
void fracMayMen(int num,int den,int *b,int *Nmen,int *Dmen,int *Nmay,int *Dmay){
	if(*b == 0){
		*Nmen = num;
		*Dmen = den;
		*Nmay = num;
		*Dmay = den;
		(*b)++;
	}
	if((num / den) > (*Nmay / *Dmay)){ 
		*Nmay = num;
		*Dmay = den;
	}
	else if((num / den) < (*Nmen / *Dmen)){ 
		*Nmen = num;
		*Dmen = den;
	}
}
void mostrarFraccion(int n,int d){
	printf("%d / %d\n",n,d);
}
void simplificarFraccion(int num,int den,int *Ared,int * Bred){
	int divisor;
	divisor = mcd(num,den);
	//printf("Divisor: %d",divisor);
	*Ared = num / divisor;
	*Bred = den / divisor;
}
int mcd(int a, int b) {
	int temp;
	while (b != 0) {
		temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
