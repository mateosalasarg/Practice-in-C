#include <stdio.h>
/*
Ejercicio 2:
Diseñe módulos (prototipo más implementación) para cada uno de los casos que se enuncian
a continuación, con el propósito de utilizarlos en problemas posteriores:
a) Calcule y retorne la cantidad de horas, minutos y segundos que existen en una cantidad de segundos
ingresada por el usuario.
b) Manipule dos números enteros quitando la última cifra del primero y añadiéndola al final del segundo.
c) Reciba dos variables enteras e intercambie sus valores.
*/
void obtenerHsMinSeg(int*,int*,int*);
void mostrarHsMinSeg(int,int,int);
void manipularNum(int*,int*);
void intercambiarVal(int*,int*);
void mostrarNums(int,int);
void ingresarNum(int*);
void menu(int*);
int main() {
	int hs,min,seg,num1,num2,op;
	do{
		menu(&op);
		switch(op){
		case 1:
			printf("Ingrese los segundos: ");
			scanf("%d",&seg);
			obtenerHsMinSeg(&hs,&min,&seg);
			mostrarHsMinSeg(hs,min,seg);
			break;
		case 2:
			ingresarNum(&num1);
			ingresarNum(&num2);
			mostrarNums(num1,num2);
			manipularNum(&num1,&num2);
			mostrarNums(num1,num2);
			break;
		case 3:
			ingresarNum(&num1);
			ingresarNum(&num2);
			mostrarNums(num1,num2);
			intercambiarVal(&num1,&num2);
			mostrarNums(num1,num2);
			break;
		case 4:
			printf("Fin del programa.\n");
			break;
		default:
			printf("Opcion incorrecta.\n");
		}
	}while(op != 4);
	return 0;
}
void menu(int *opc){
	printf("\n> > > M E N U < < <\n");
	printf("1. Obtener hora,minuto y segundo.\n");
	printf("2. Manipular dos numeros.\n");
	printf("3. Intercambiar dos valores.\n");
	printf("4. Salir.\n-> ");
	scanf("%d",opc);
}
void obtenerHsMinSeg(int *h,int *m,int *s){
	*h = 0;
	*m = 0;
	if(*s > 60){
		*m = *s / 60;
		*s = *s % 60;
		if(*m > 60){
			*h = *m / 60;
			*m = *m % 60;
		}
	}
}
void mostrarHsMinSeg(int h,int m,int s){
	printf("Obtenido: \n%d horas - %d minutos - %d segundos\n",h,m,s);
}
void ingresarNum(int *num){
	float temp;
	printf("\nIngrese un numero: ");
	scanf("%f",&temp);
	*num = (int)temp;
}
void mostrarNums(int a,int b){
	printf("numero A: %d - numero B: %d\n",a,b);
}
void manipularNum(int *n1,int *n2){
	int dig;
	dig = *n1 % 10;
	*n1 = *n1 / 10;
	*n2 = dig + (*n2 * 10);
}
void intercambiarVal(int *n1,int *n2){
	int aux;
	aux = *n1;
	*n1 = *n2;
	*n2 = aux;
	
}
