#include <stdio.h>
/*Ejercicio 15
Dada una lista de números naturales se solicita mostrar los números que están formados
solo por dígitos pares. Además, mostrar el menor y el mayor de estos números (de los que cumplen la
condición).
*/
int digPares(int);
void numMayMen(int, int *, int *, int *);
int main() {
	int num,men,may,b;
	float temp;
	b = 0;
	do{
		printf("Ingrese un numero natural(ingrese el numero cero para finalizar): ");
		scanf("%f",&temp);
		num = (int)temp;
		if(num > 0 && num == temp){
			if(digPares(num)){
				printf("El numero %d tiene digitos pares.\n",num);
				numMayMen(num,&b,&men,&may);
			}
		}
		else if(num != 0)
		   printf("No es un numero natural.\n");
	}while(num != 0);
	if(b == 1)
		printf("Numero menor %d - numero mayor %d",men,may);
	else
		printf("No se ingresaron numeros con solo digitos pares.\n");
	return 0;
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
int digPares(int num){
	int b = 1;
	while(num!=0 && b == 1){
		if(num % 2 == 1)
			b--;
		num/=10;
	}
	return b;
}
