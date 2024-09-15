#include <stdio.h>
/*Ejercicio 11 y 15 combinado:
Dada una lista de números naturales se solicita mostrar a cada uno de ellos
si se trata de un número Deficiente, Abundante o Perfecto y mostrar los números que están formados
solo por dígitos pares. Además, mostrar el menor y el mayor de estos números.
*/
int sumDiv(int);
void verificarNumero(int,int);
int digPares(int);
void numMayMen(int, int *, int *, int *);
int main() {
	int num,men,may,sum,b;
	float temp;
	b = 0;
	do{
		printf("Ingrese un numero natural(ingrese el numero cero para finalizar): ");
		scanf("%f",&temp);
		num = (int)temp;
		if(num > 0  && num == temp){
			sum = sumDiv(num);
			verificarNumero(sum,num);
			if(digPares(num)){
				printf("El numero %d tiene digitos pares.\n",num);
				numMayMen(num,&b,&men,&may);
			}
		}
		else if(num != 0)
			printf("No es un numero natural.\n");
	}while(num != 0);
	if(b == 1)
		printf("Numero menor %d - numero mayor %d\n",men,may);
	printf("Fin del programa.\n");
	return 0;
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
int digPares(int num){
	int b = 1;
	while(num!=0 && b == 1){
		if(num % 2 == 1)
			b--;
		num/=10;
	}
	return b;
}
void numMayMen(int num,int *b,int *men,int *may){
	if(*b == 0){
		*men = num;
		*may = num;
		(*b)++;
	}
	if(num > *may) 
	   *may = num;
	else if(num < *men) 
		*men = num;
}
