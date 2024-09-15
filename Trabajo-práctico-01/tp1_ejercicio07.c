#include <stdio.h>
/*
Ejercicio 7:
Dadas las estaturas de tres personas, 
calcular la estatura promedio. (No utilizar ciclos)
*/
int main() {
	float estatura,prom;prom = 0;
	printf("Estatura de la primera persona: ");
	scanf("%f",&estatura);
	prom+= estatura;
	printf("Estatura de la segunda persona: ");
	scanf("%f",&estatura);
	prom+= estatura;
	printf("Estatura de la tercera persona: ");
	scanf("%f",&estatura);
	prom+=estatura;
	printf("El promedio de las estatura es: %.2f",prom / 3);
	return 0;
}

