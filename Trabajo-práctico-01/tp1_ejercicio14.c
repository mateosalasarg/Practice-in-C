#include <stdio.h>
/*
Ejercicio 14:
Dados N números enteros, se desea calcular el promedio de los que terminan en 0,
en 1, en 2, en 3 y así sucesivamente hasta el promedio de los que terminan en 9.
pd: lamentablemente no puedo usar listas
*/
int main(int argc, char *argv[]) {
	int N,ultDig,num;
	int sum0 = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
	int sum5 = 0, sum6 = 0, sum7 = 0, sum8 = 0, sum9 = 0;
	int cont0 = 0, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0;
	int cont5 = 0, cont6 = 0, cont7 = 0, cont8 = 0, cont9 = 0;
	printf("Ingrese la cantidad de numeros enteros a ingresar: ");
	scanf("%d",&N);
	for(int i = 1; i <= N; i++){
		printf("Ingrese el numero[%d]: ",i);
		scanf("%d",&num);
		ultDig = num % 10;
		switch(ultDig){
		case 0: sum0 += num; cont0++;break;
		case 1: sum1 += num; cont1++;break;
		case 2: sum2 += num; cont2++;break;
		case 3: sum3 += num; cont3++;break;
		case 4: sum4 += num; cont4++;break;
		case 5: sum5 += num; cont5++;break;
		case 6: sum6 += num; cont6++;break;
		case 7: sum7 += num; cont7++;break;
		case 8: sum8 += num; cont8++;break;
		case 9: sum9 += num; cont9++;break;
		}
	}
	if (cont0 != 0) printf("Promedio de los numeros que terminan en 0: %.2f\n", (float)sum0 / cont0);
	else printf("No hay numeros que terminen en 0\n");
	
	if (cont1 != 0) printf("Promedio de los numeros que terminan en 1: %.2f\n", (float)sum1 / cont1);
	else printf("No hay numeros que terminen en 1\n");
	
	if (cont2 != 0) printf("Promedio de los numeros que terminan en 2: %.2f\n", (float)sum2 / cont2);
	else printf("No hay numeros que terminen en 2\n");
	
	if (cont3 != 0) printf("Promedio de los numeros que terminan en 3: %.2f\n", (float)sum3 / cont3);
	else printf("No hay numeros que terminen en 3\n");
	
	if (cont4 != 0) printf("Promedio de los numeros que terminan en 4: %.2f\n", (float)sum4 / cont4);
	else printf("No hay numeros que terminen en 4\n");
	
	if (cont5 != 0) printf("Promedio de los numeros que terminan en 5: %.2f\n", (float)sum5 / cont5);
	else printf("No hay numeros que terminen en 5\n");
	
	if (cont6 != 0) printf("Promedio de los numeros que terminan en 6: %.2f\n", (float)sum6 / cont6);
	else printf("No hay numeros que terminen en 6\n");
	
	if (cont7 != 0) printf("Promedio de los numeros que terminan en 7: %.2f\n", (float)sum7 / cont7);
	else printf("No hay numeros que terminen en 7\n");
	
	if (cont8 != 0) printf("Promedio de los numeros que terminan en 8: %.2f\n", (float)sum8 / cont8);
	else printf("No hay numeros que terminen en 8\n");
	
	if (cont9 != 0) printf("Promedio de los numeros que terminan en 9: %.2f\n", (float)sum9 / cont9);
	else printf("No hay numeros que terminen en 9\n");
	return 0;
}

