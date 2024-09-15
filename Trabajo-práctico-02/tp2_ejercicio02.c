#include <stdio.h>
#include <math.h>
#define PI 3.141592654
/*
Ejercicio 2:
Dados un número real A, se solicita crear un menú que permita calcular y mostrar:
a) El Seno de A.
b) El logaritmo natural de A.
c) El valor absoluto de A.
*/
int menu();
int main() {
	double num;
	int op;
	printf("Ingrese un numero real: ");
	scanf("%lf",&num);
	do{
		op = menu();
		switch(op){
		case 1:
			printf("El seno del numero es: %f\n",sin((num * PI) / 180.0));
			break;
		case 2:
			printf("El logaritmo natural es: %f\n",log(num));
			break;
		case 3:
			printf("El valor absoluto es: %f\n",fabs(num));
			break;
		case 4:
			printf("Saliste del programa.\n");
			break;
		default:
			printf("Opcion incorrecta, intente nuevamente.\n");
		}
	}while(op != 4);
	return 0;
}
int menu(){
	int op;
	printf("--M E N U--\n");
	printf("1. Obtener el seno\n");
	printf("2. Obtener el logaritmo natural\n");
	printf("3. Obtener el valor absoluto\n");
	printf("4. Salir\n-> ");
	scanf("%d",&op);
	return op;
}
