#include <stdio.h>
/*
Ejercicio 10:
Dada una lista de N fechas ingresadas por el usuario, representadas como números enteros
con el formato (AAAADDMM), se pide indicar cuántas fechas son válidas y cuántas no lo son. Se debe
tener en cuenta los años bisiestos.
*/
void ingresarNum(int*);
void obtenerFecha(int,int*,int*,int*);
int verificarFecha(int,int,int);
int esBisiesto(int);
int main() {
	int N,i,fecha,a,m,d,valFecha,invFecha;
	valFecha = invFecha = i = 0;
	ingresarNum(&N);
	while(i<N){
		printf("Fecha[%d](AAAADDMM): \n",i);
		ingresarNum(&fecha);
		if(fecha>9999999 && fecha<100000000){
			obtenerFecha(fecha,&a,&m,&d);
			if(verificarFecha(a,m,d) == 0)
				valFecha ++;
			else
				invFecha ++;
			i++;
		}
		else
		   printf("Ingrese una fecha de 8 digitos.\n");
	}
	printf("Fechas validas: %d\n", valFecha);
	printf("Fechas invalidas: %d\n", invFecha);
	return 0;
}
void ingresarNum(int *num){
	float temp;
	printf("\nIngrese un numero: ");
	scanf("%f",&temp);
	*num = (int)temp;
}
void obtenerFecha(int f,int *ano,int *mes,int *dia){
	*ano = (int)(f / 10000);
	*mes = (int)(f / 100) % 100;
	*dia = f % 100;
}
int esBisiesto(int a) {
	int b;
	b = 0;
	if(a % 4 == 0 && (a % 100 != 0 || a % 400 == 0))
		b++;
	return b;
}
int verificarFecha(int ano,int mes,int dia){
	int b,cantDiaMes;
	b = cantDiaMes = 0;
	if(mes < 1 || mes > 12)
		b++;
	else if(dia < 1 || dia > 31)
		b++;
	else if(ano < 1900 || ano > 2024)
		b++;
	else{
		switch(mes){
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			cantDiaMes = 31;
			break;
		case 4: case 6: case 9: case 11:
			cantDiaMes = 30;
			break;
		case 2:
			if(esBisiesto(ano))
				cantDiaMes = 29;
			else
				cantDiaMes =28;
			break;
		default:
			b++;
		}
	}
	return b;
}
