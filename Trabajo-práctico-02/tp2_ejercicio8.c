#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Ejercicio 8:
Se necesita un programa en C, que simule el tiempo que esperan dos clientes, A y B, para
realizar un trámite en el banco. El programa deberá mostrar cuál es el cliente que será atendido primero,
considerando el menor tiempo de espera. (El tiempo de espera de cada cliente se asigna de forma
aleatoria, siendo un número natural en el rango [1,30])
Nota: Si el rango es ingresado por el usuario, ¿cómo se modificaría la solución original?
*/
int numAleatorioEntero(int, int);
int compararNumEntero(int, int);
void clientesAutomatico();
void clientesManual();
int menu();
int main() {
	int A,B,op;
	srand(time(NULL));
	do{
		op = menu();
		switch(op){
		case 1:
			clientesAutomatico()
			break;
		case 2:
			clientesManual();
			break;
		case 3:
			printf("Saliste del programa.\n");
			break;
		default:
			printf("Opcion incorrecta.\n");
		}
	}while(op != 3);
	return 0;
}
int menu(){
	int op;
	printf("--M E N U--\n");
	printf("1. Usar el rango predeterminado[1,30]\n");
	printf("2. Ingresar un rango\n");
	printf("3. Salir.\n-> ");
	scanf("%d",&op);
	return op;
}
int numAleatorioEntero(int a,int b){
	return rand() % (b - a + 1) + a;
}
int sonNaturales(int a,int b){
	int v;
	v = 1;
	if(a < 0){
		printf("El %d no es natural.\n",a);
		v = 0;
	}
	if(b < 0){
		printf("El %d no es natural.\n",b);
		v = 0;
	}
	return v;
}	
void clientesManual(){
	int a,b,A,B;
	printf("Ingrese un numero natural a: ");
	scanf("%d",&a);
	printf("Ingrese un numero natural b: ");
	scanf("%d",&b);
	if(sonNaturales(a,b)){
		A = numAleatorioEntero(a,b);
		B = numAleatorioEntero(a,b);
		printf("El cliente A tiene: %d - el cliente B tiene: %d\n",A,B);
		if(compararNumEntero(A,B) == 1)
			printf("El cliente B tiene %d de espera por lo que sera atendido primero.\n",B);
		else
			printf("El cliente A tiene %d de espera por lo que sera atendido primero.\n",A);
	}
}
void clientesAutomatico(){
	int A,B;
	A = numAleatorioEntero(1,30);
	B = numAleatorioEntero(1,30);
	printf("El cliente A tiene: %d - el cliente B tiene: %d\n",A,B);
	if(compararNumEntero(A,B) == 1)
		printf("El cliente B tiene %d de espera por lo que sera atendido primero.\n",B);
	else
		printf("El cliente A tiene %d de espera por lo que sera atendido primero.\n",A);
}
int compararNumEntero(int a,int b){
	int v;
	v = 0;
	if(a>b)
		v++;
	else if(a<b)
		v--;
	return v;
}
