#include <stdio.h>
/*Ejercicio 19: 
Dados N caracteres que representan un p�rrafo, conformados por letras, d�gitos y
espacios en blanco. Se pide informar la cantidad de n�meros naturales que se encuentran en el p�rrafo.
Nota: Considerar que el ingreso se realiza de a un car�cter por vez.
*/
int esNumNat(char);
int main(int argc, char *argv[]) {
	int cantNumNat = 0, N;
	char carac;
	
	printf("Ingrese la cantidad de caracteres que tiene su parrafo: ");
	scanf("%d", &N);
	// Limpiar el buffer de entrada inicial
	getchar();
	
	for (int i = 1; i <= N; i++) {
		printf("Ingrese el parrafo (caracter por caracter): ");
		carac = getchar();
		// Limpiar el buffer de entrada despu�s de cada car�cter
		while(getchar()!='\n');
		
		if (carac != ' ' && carac != '\n') {
			if (esNumNat(carac)) 
				cantNumNat++;
		}
	}
	
	printf("Cantidad de numero naturales: %d\n", cantNumNat);
	
	
	return 0;
}

int esNumNat(char c){
	switch (c) {
	case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
		return 1;
	default:
		return 0;
	}
}
