#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Ejercicio 10:
Dado un monto de dinero correspondiente a una deuda en pesos, la fecha de vencimiento
de dicha deuda, y una tasa de interés diario, generar al azar una fecha posterior de pago y mostrar el
monto a pagar en concepto de intereses.
*/
int verifFecha(int, int, int);
int numAleatorioEntero(int, int);

int main() {
	int d,m,a,dAz,mAz,aAz;
	float monto,tasaInteres;
	srand(time(NULL));
	printf("Ingrese un monto: $");
	scanf("%f",&monto);
	printf("Ingrese la fecha de vencimiento (DD MM YYYY): ");
	scanf("%d %d %d",&d,&m,&a);
	if(verifFecha(d,m,a)){
		printf("Ingrese la tasa de interes: ");
		scanf("%f",&tasaInteres);
		dAz = numAleatorioEntero(1,31);
		mAz = numAleatorioEntero(m,12);
		aAz = numAleatorioEntero(a,2024);
		tasaInteres = monto*(tasaInteres/100)*((dAz - d) + ((mAz - m)*30)+((aAz - a)*365));
		printf("La fecha de pago: %d/%d/%d\n",dAz,mAz,aAz);
		printf("Monto a pagar en concepto de intereses: $%.2f\n",tasaInteres);
		
	}
	return 0;
}
int verifFecha(int d,int m,int a){
	int b = 1;
	if(m < 1 || m > 12){
		printf("Mes invalido.\n");
		b--;
	}
	else if(a < 1900 || a > 2024){
		printf("Anio invalido.\n");
		b--;
	}
	else if(d < 1 || d > 31){
		printf("Dia invalido.\n");
		b--;
	}
	return b;
}
int numAleatorioEntero(int a,int b){
	return rand() % (b - a + 1) + a;
}
