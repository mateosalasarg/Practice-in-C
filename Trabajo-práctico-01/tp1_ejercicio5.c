#include <stdio.h>
#define SESENTA 60
/*
Ejercicio 5:
Calcular la cantidad de horas, minutos y segundos que existen en una cantidad de
segundos ingresada por el usuario.
*/
int main() {
	int hs , min, seg;
	hs = min = 0;
	printf("Ingrese una cantidad de segundos: ");
	scanf("%d",&seg);
	if(seg > SESENTA){
		min = seg / SESENTA;
		seg = seg % SESENTA; // -----> segundos
		if(min > SESENTA){
			hs = min / SESENTA; // -----> horas
			min = min % SESENTA; // -----> minutos		
		}
	}
	printf("%d horas %d minutos %d segundos",hs,min,seg);
	return 0;
}

