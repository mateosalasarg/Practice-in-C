#include <stdio.h>
/*Ejercicio 17:
Dada una lista de números naturales, se pide contabilizar cuántos de ellos son
capicúas e indicar los capicúas que están formados sólo por dígitos impares.
*/
int esCapicua(int);
int digImpar(int);
int main() {
	unsigned int N,num,cant;cant = 0;
	printf("Ingrese la cantidad de numeros naturales a ingresar: ");
	scanf("%u",&N);
	for(int i = 1; i <= N; i++){
		printf("Ingrese el numero natural[%d]: ",i);
		scanf("%u",&num);
		if(esCapicua(num)){
			cant ++;
			if(digImpar(num))
				printf("El numero %d es capicua y tiene digitos impares.\n",num);
			else
				printf("El numero %d es capicua.\n",num);
		}
	}
	printf("La cantidad de numeros capicua es: %d",cant);
	return 0;
}
int esCapicua(int n){
	int acu,dig,aux,b;
    acu = b = 0;
	aux = n;
	while(n != 0){
		dig = n % 10;
		acu = dig + acu * 10;
		n /= 10 ;
	}
	if(aux == acu)
		b = 1;
	return b;
}
int digImpar(int n){
    int b = 1;
	while(n != 0 && b == 1){
		if(((n % 10) % 2) == 0){
			b = 0;
		}
		n/=10;
	}
	return b;
}
