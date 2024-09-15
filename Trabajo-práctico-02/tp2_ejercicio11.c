#include <stdio.h>
/*
Ejercicio 11:
Dados una cantidad no determinada de números naturales, mostrar para cada uno de ellos
si se trata de un número Deficiente, Abundante o Perfecto
Nota: Un número natural X se dice que es deficiente si la suma de sus divisores naturales (excepto el
mismo número) es menor a X. Si la suma de sus divisores es mayor a X, se dice que el número es
abundante y si es igual a X se dice que es perfecto.
*/
int sumDiv(int);
void verificarNumero(int,int);
int menu();
int main() {
	int X,b,sum;
	float temp;
	b = 0;
	do{
		printf("Ingrese un numero natural: ");
		scanf("%f",&temp);
		X = (int)temp;
		if(X > 0 && X == temp){
			sum = sumDiv(X);
			verificarNumero(sum,X);
			b = menu();
		}
		else
		   printf("No es un numero natural.\n");
	}while(b != 2);
	printf("Fin del programa.\n");
	return 0;
}
int menu(){
	int op;
	do{
		printf("Desea continuar?\n1. SI\n2. NO\n-> ");
		scanf("%d",&op);
		if(op != 1 && op != 2)
			printf("Opcion incorrecta.\n");
	}while(op != 1 && op != 2);
	return op;
}
int sumDiv(int num){
	int i,sum;
	sum = 0;
	if(num == 1) sum = 1;
	for(i = 1; i < num; i++){
		if(num % i == 0) sum += i;
	}
	return sum;
}
void verificarNumero(int sumDiv,int num){
	if(sumDiv < num)
		printf("La suma de sus divisores es %d por lo que el numero %d es deficiente.\n",sumDiv,num);
	else if(sumDiv > num)
		printf("La suma de sus divisores es %d por lo que el numero %d es abundante.\n",sumDiv,num);
	else
		printf("La suma de sus divisores es %d por lo que el numero %d es perfecto.\n",sumDiv,num);
}
