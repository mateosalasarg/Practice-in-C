#include <stdio.h>
/*
Ejercicio 1:
a)Transcribe el siguiente programa y b) modifica convenientemente a fin de 
mejorar la interfaz con el usuario
*/
int main() {
	int a,b,c;
	printf("Ingrese un valor para a: ");
	scanf("%d",&a);
	printf("Ingrese un valor para b: ");
	scanf("%d",&b);
	c = a + b;
	printf("El resultado es : %d\n",c);
	return 0;
}

