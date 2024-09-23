#include <stdio.h>
#include <math.h>
/*
Ejercicio 9:
Dada una cantidad no determinada de números naturales, para cada número natural primo,
calcular su número invertido y para cada número natural no primo (compuesto) modificarlo eliminando
todos sus dígitos primos.
*/
void ingresarNum(int*);
int esPrimo(int);
void invertirNum(int *);
void eliminarNum(int *);
int main() {
	int num;
	do{
		ingresarNum(&num);
		if(num > 0){
			if(esPrimo(num)){
				printf("Numero: %d --> ",num);
				invertirNum(&num);
				printf("Invertido: %d\n",num);
			}
			else{
				printf("Numero: %d --> ",num);
				eliminarNum(&num);
				printf("Con digitos primos eliminados: %d\n",num);
			}
		}
	}while(num > 0);
	return 0;
}
void ingresarNum(int *num){
	float temp;
	printf("\nIngrese un numero: ");
	scanf("%f",&temp);
	*num = (int)temp;
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
void invertirNum(int *num){
	int acu,dig;
	acu = 0;
	while(*num > 0){
		dig = *num %10;
		acu = dig + acu * 10;
		*num = *num / 10;
	}
	*num = acu;
}
void eliminarNum(int *num){
	int acu,dig,i;
	acu = i = 0;
	while(*num > 0){
		dig = *num % 10;
		if(esPrimo(dig) == 0){
			acu = acu + dig * ((int)pow(10,i));
			i++;
		}
		*num /= 10;
	}
	*num = acu;
}
