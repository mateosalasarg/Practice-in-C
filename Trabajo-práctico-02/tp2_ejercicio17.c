#include <stdio.h>
#include <ctype.h>
/*
Ejercicio 17:
Dada una lista de N caracteres, los cuales pueden ser espacios en blanco, d�gitos y letras
en min�scula, se solicita calcular la suma de los n�meros contenidos en la lista. Considerar que un
n�mero est� formado por una secuencia de d�gitos
*/
int main() {
	int N,sum,acu,i,num,b;
	char c;
	sum = acu = b = 0;
	printf("Ingrese N cantidad: ");
	scanf("%d",&N);
	for(i = 1; i <= N; i++){
		printf("Ingrese un caracter[%d]: ",i);
		//fflush(stdin);
		getchar();
		scanf("%c",&c);
		//scanf(" %c",&c);
		if(isdigit(c)){
			num = c - '0';
			acu = num + acu * 10;
			printf("acu: %d\n",acu);
			b = 1;
		}
		else
		   if(b == 1){
			sum+=acu;
			acu = b = 0;
			printf("La suma por ahora: %d\n",sum);
		}
	}
	printf("La suma seria: %d",sum + acu);
	return 0;
}
