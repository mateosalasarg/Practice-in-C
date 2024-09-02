#include <stdio.h>
#include<stdlib.h>
/*
Ejercicio 1:
Ejecutar el programa paso a paso con los siguientes valores NUM= -9781 y con NUM= 9713; revisar la
salida de la ejecución. ¿Se podría realizar alguna mejora? Luego eliminar la línea 2) y volver a compilar,
¿nota algún cambio?
rts:se podria mostrar lo que devuelve NUM y sacaria la linea 17 y 18,ademas no es necesario
obtener el valor absoluto para sacar los digitos pares
obviamente al sacar la libreria stdlib.h deja de funcionar la funcion abs()
*/
int Cuenta_dig_pares(int);
int main() {
	int NUM, CDIG;
	printf("\nIngrese un numero entero: ");
	scanf("%d",&NUM);
	NUM= abs(NUM);
	printf("El numero entrante: %d",NUM);
	printf("\nMostrando rdo. de la función directamente: %d", Cuenta_dig_pares(NUM));
	printf("\n===> El mismo valor de otra forma <====");
	CDIG= Cuenta_dig_pares(NUM);
	printf("\nCantidad de digitos pares: %d", CDIG);
	printf("\nFIN DEL PROGRAMA");
	return 0;
}
int Cuenta_dig_pares(int XNUM){
	int CD;
	CD=0;
	while(XNUM!=0){
		if((XNUM%2)==0) CD= CD+1;
		XNUM= XNUM/10;
	}
	return CD;
}
