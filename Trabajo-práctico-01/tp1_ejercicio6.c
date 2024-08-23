#include <stdio.h>
/*
Ejecicio 6:
Dados tres números naturales correspondientes a día, mes y año de una fecha, indicar
si dicha fecha es válida.
pd:se puede mejorar?no
*/
int main() {
	int d,m,a;
	printf("Ingrese una fecha:\n");
	printf("Dia: ");
	scanf("%d",&d);
	printf("Mes: ");
	scanf("%d",&m);
	printf("Anio: ");
	scanf("%d",&a);
	if ( m < 1 || m > 12)
		printf("La fecha es invalida(Mes)");
	else if( a < 1900 || a > 2024 )
		printf("La fecha es invalida(Anio)");
	else if ( d < 1 || d > 31 )
		printf("La fecha es invalida(Dia)");
	else
		printf("La fecha es valida");
	return 0;
}

