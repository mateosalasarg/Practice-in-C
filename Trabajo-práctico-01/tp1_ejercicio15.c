#include <stdio.h>
#include <math.h>
/*
Ejercicio 15:
Dados N n�meros enteros, se desea calcular el promedio de los que terminan en 0,
en 1, en 2, en 3 y as� sucesivamente hasta el promedio de los que terminan en 9.
Nota: recordar que el promedio es un n�mero real.
Ejercicio 15: Dada una lista de N n�meros, se desea obtener el promedio de los n�meros que est�n
formados �nicamente con d�gitos pares.
a. Considerar que la lista es de n�meros enteros.
b. Considerar que la lista es de n�meros reales positivos.
Nota: �Existe alguna diferencia en el dise�o de la soluci�n entre el inciso a y b?. �C�mo es el
comportamiento del componente para separar d�gitos en el inciso b?
respuesta:
-Existe una diferencia ya que en b) se implementa la funcion numRealAEnt()
-se pasa el numero real a la funcion numRealAEnt() donde retorna en un numero entero y luego
ese mismo numero se pasa a la funcion digPar() para saber si tiene digitos pares.
*/
//a)
/*int digPar(int);*/
/*int numRealAEnt(double);*/
/*int main(){*/
/*	int cant,sum,N,num;*/
/*	sum = cant = 0;*/
/*	printf("Ingrese la cantidad de numeros enteros a ingresar: ");*/
/*	scanf("%d",&N);*/
/*	for(int i = 1; i<= N; i++){*/
/*		printf("Ingrese el numero entero[%d]: ",i);*/
/*		scanf("%d",&num);*/
/*		if(digPar(num)){*/
/*			sum+=num;*/
/*			cant ++;*/
/*			printf("El numero %d tiene digitos pares.\n",num);*/
/*		printf("El promedio de numeros con digitos pares es: %.2f,(float)sum/cant);*/
/*		}*/
/*	}*/
/*	return 0;*/
/*}*/
//b)
/*int main() {*/
/*	int N,cant,sum;double num;*/
/*	cant = sum = 0;*/
/*	printf("Ingrese la cantidad de numeros enteros a ingresar: ");*/
/*	scanf("%d",&N);*/
/*	for(int i = 1; i <= N;i++){*/
/*		printf("Ingrese el numero real positivo[%d]: ",i);*/
/*		scanf("%lf",&num);*/
/*		if(digPar(numRealAEnt(num))){*/
/*			sum += num;*/
/*			cant ++;*/
/*			printf("El numero %lf tiene digitos pares.\n",num);*/
/*		}*/
/*	}*/
/*	printf("El promedio de numeros con digitos pares es: %.2lf",sum/(double)cant);*/
/*	return 0;*/
/*}*/
/*int digPar(int n){*/
/*	while(n != 0){*/
/*		if((n%10) % 2)*/
/*			return 0;*/
/*		n /= 10;*/
/*	}*/
/*	return 1;*/
/*}*/
/*int numRealAEnt(double real){*/
/*	while(real != floor(real)){*/
/*		real *= 10;*/
/*	}*/
/*	int numEntero = (int)real;*/
/*	return numEntero;*/
/*}*/
