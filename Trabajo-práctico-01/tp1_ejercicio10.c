#include <stdio.h>

/*
Ejercicio 10:
Se desea calcular el importe a pagar por el consumo de agua de una familia, sabiendo
que dicho importe se calcula de la siguiente manera:
-un valor básico que cubre los primeros 1000 mts cúbicos o menos, siendo éste un valor único.
-los metros cúbicos que exceden de 1000 tienen una tarifa que se calcula en función del valor de
exceso por cada metro cúbico mayor a 1000, siempre que sea menor a 2000. En caso de que la
cantidad de metros cúbicos consumida exceda o sea igual a 2000 metros cúbicos, el valor por cada
metro cúbico excedido se calcula como el doble del valor de exceso por metro cúbico de 1000.
*/
int main() {
	float monto;int mts,exceso;
	printf("Ingrese la cantidad de metros cubicos consumidos: ");
	scanf("%d",&mts);
	printf("Ingrese monto: $");
	scanf("%f",&monto);
	if (mts <= 1000)
		printf("El monto basico a pagar: $%.2f",monto);
	else if (mts > 1000 && mts < 2000) {
		exceso = mts - 1000;
		printf("Por exceder los 1000 mts, el monto a pagar: $%.2f",monto + (100 * exceso)); //por cada metro cubico paga $100 mas
	}
	else {
		exceso = mts - 2000;
		printf("Por exceder los 2000 mts,el monto a pagar es: $%.2f",monto + (100 * 1000) + (200 * exceso));
		/*
		Se paga los $100 mas y $200 por cada metro cubico excedido a partir de 2001
		*/
	}
	return 0;
}

