#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Ejercicio 14:
Dadas N fechas ingresadas por el usuario, para cada una de ellas generar al azar una
fecha mayor a ésta y luego mostrar la cantidad de días transcurridos entre la fecha ingresada y la fecha
generada al azar. También mostrar la cantidad promedio de días transcurridos entre el total de los pares
de fecha.
*/
int numAleatorioEntero(int, int);
int verificarFecha(int, int, int);
void fechaAleatoriaPosterior(int,int,int,int*, int*, int*);
int main() {
	int N,i,cantDia,d,m,a,dAz,mAz,aAz;
	i = 1;
	cantDia = 0;
	srand(time(NULL));
	printf("Ingrese el numero N: ");
	scanf("%d",&N);
	while(i <= N){
		printf("Ingrese la fecha [%d] (DD MM YYYY): ",i);
		scanf("%d %d %d",&d,&m,&a);
		if(verificarFecha(d,m,a)){
			fechaAleatoriaPosterior(d, m, a, &dAz, &mAz, &aAz);
			printf("fecha aleatoria creada: %d / %d / %d\n",dAz,mAz,aAz);
			printf("dias trascurrido: %d\n",(dAz - d) + ((mAz - m)*30) + ((aAz - a)*365));
			cantDia += (dAz - d) + ((mAz - m)*30) + ((aAz - a)*365);
			i++;
		}
		else
			printf("fecha invalida.\n");
	}
	printf("El promedio de los dias es: %.2f",(float)cantDia/N);
	return 0;
}
int numAleatorioEntero(int a,int b){
	return rand() % (b - a + 1) + a;
}
int verificarFecha(int d,int m,int a){
	int b = 1;
	if(m < 1 || m > 12) b = 0;
	else if(a < 1900 || a > 2024) b = 0;
	else if(d < 1 || d > 31) b = 0;
	return b;
}
void fechaAleatoriaPosterior(int d,int m,int a,int *dAzar,int *mAzar,int *aAzar){
	*mAzar = numAleatorioEntero(m,12);
	*aAzar = numAleatorioEntero(a,2024);
	if(*mAzar == m && *aAzar == a){
		*dAzar = numAleatorioEntero(d,31);
		printf("ingresa por aca\n");
	}
	else
	   *dAzar = numAleatorioEntero(1,31);
	
}
