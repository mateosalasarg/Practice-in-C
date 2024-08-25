#include <stdio.h>

/*
Ejercicio 18:
Dados N caracteres que representan un párrafo, conformados solamente por letras y
espacios en blanco. Se pide informar la cantidad de vocales y la cantidad de consonantes que tiene el
párrafo, también la cantidad de palabras que se encontraron.
Nota: Entre las letras del párrafo no hay vocales acentuadas y las palabras se separan por un solo
espacio en blanco. Considerar que el ingreso se realiza de a un carácter por vez.
*/

int esVocal(char);

int main() {
	int cantVocal = 0, cantCons = 0, cantPal = 0, N;
	char carac, prevCarac = ' ';
	
	printf("Ingrese la cantidad de caracteres que tiene su parrafo: ");
	scanf("%d", &N);
	// Limpiar el buffer de entrada inicial
	getchar();
	
	for (int i = 1; i <= N; i++) {
		printf("Ingrese el parrafo (caracter por caracter): ");
		carac = getchar();
		// Limpiar el buffer de entrada después de cada carácter
		while(getchar()!='\n');
		if (carac != ' ' && carac != '\n') {
			if (esVocal(carac)) {
				cantVocal++;
			} else {
				cantCons++;
			}
			if (prevCarac == ' ' || prevCarac == '\n') {
				cantPal++;
			}
		}
		prevCarac = carac;
	}
	
	printf("Cantidad de vocales: %d\n", cantVocal);
	printf("Cantidad de consonantes: %d\n", cantCons);
	printf("Palabras encontradas: %d\n", cantPal);
	
	return 0;
}

int esVocal(char c) {
	switch (c) {
	case 'a': case 'A': case 'e': case 'E': case 'i': case 'I': case 'o': case 'O': case 'u': case 'U':
		return 1;
	default:
		return 0;
	}
}
