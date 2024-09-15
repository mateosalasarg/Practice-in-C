#include <stdio.h>
#include <ctype.h>
/*
Ejercicio 16:
Dada una lista de N caracteres, los cuales pueden ser dígitos y letras en minúsculas, y
sin caracteres de puntación, se solicita mostrar la cantidad de dígitos, de consonantes y de vocales se
encontraron en la lista.
Nota: Crear una función que devuelva 1 si el carácter es un digito, 0 si el carácter es una consonante o
-1 si el carácter es vocal, es similar a la función del ejercicio 7.c). Activar la librería ctype.h para usar la
función isdigt(char).
*/
int esVocal(char);
int verificarCaracter(char);
int main() {
	int N,i,cantVocal,cantDig,cantCons;
	char c;
	cantVocal = cantDig = cantCons = 0;
	printf("Ingrese la cantidad N: ");
	scanf("%d",&N);
	for(i = 1; i <= N; i++){
		printf("Ingrese un caracter[%d]: ",i);
		//fflush(stdin);
		getchar();
		scanf("%c",&c);
		if(c != ' '){
			if(verificarCaracter(c) == 1)
				cantDig++;
			else if(verificarCaracter(c) == -1)
				cantVocal++;
			else
				cantCons++;
		}
	}
	printf("Cantidad de digitos: %d\n", cantDig);
	printf("Cantidad de vocales: %d\n", cantVocal);
	printf("Cantidad de consonantes: %d\n", cantCons);
	return 0;
}
int esVocal(char c) {
	int b;
	switch (c) {
	case 'a': case 'A': case 'e': case 'E': case 'i': case 'I': case 'o': case 'O': case 'u': case 'U':
		b = 1;
		break;
	default:
		b = 0;
	}
	return b;
}
int verificarCaracter(char c){
	int ban = 0;
	if(isdigit(c))
		ban = 1;
	else if(esVocal(c))
		ban = -1;
	else
		ban = 0;
	return ban;
}
