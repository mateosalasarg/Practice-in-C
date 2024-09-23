#include <stdio.h>
/*
Ejercicio 4:
Cree un programa que ingrese una fracción de la forma A/B y que a continuación devuelva
la fracción irreductible equivalente. ejemplo se A= 6 y B= 8; ( 6 / 8 )entonces Ar= 3 y Br= 4 ( 3 / 4 )
Nota: Generar un procedimiento que reciba A y B, que devuelva Ar y Br
*/
void ingresarFraccion(int*,int*);
void mostrarFraccion(int,int);
void simplificarFraccion(int,int,int*,int*);
int mcd(int,int);
int main() {
	int numA,denomB,Ar,Br;
	ingresarFraccion(&numA,&denomB);
	mostrarFraccion(numA,denomB);
	simplificarFraccion(numA,denomB,&Ar,&Br);
	printf("\nFraccion reducida:\n");
	mostrarFraccion(Ar,Br);
	return 0;
}
void ingresarFraccion(int *numerador,int *denominador){
	printf("Ingrese numerador: ");
	scanf("%d",numerador);
	printf("Ingrese denominador: ");
	scanf("%d",denominador);
}
void mostrarFraccion(int num,int den){
	printf("\n  %d\n  --\n  %d\n",num,den);
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



//12/6 = 2
//18/6 = 3
// 12 / 18 == 2 / 3

//27/54  == 1 / 2
