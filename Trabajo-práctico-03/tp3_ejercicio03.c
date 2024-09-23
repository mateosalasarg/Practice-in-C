#include <stdio.h>
#include <math.h>
/*
Cree un programa que ingrese dos valores enteros A y B y que, a través de un menú,
a) muestre el número invertido de A,
b) muestre el invertido de B,
c) modifique y muestre ambos números, dejando en A el mayor y en B el menor.
Utilice, convenientemente, los módulos del ejercicio 2.
*/
void ingresarNum(int*);
void mostrarNum(int);
void mostrarNums(int,int);
void manipularNum(int*,int*);
void invertirNum(int*);
void menu(int*);
int main() {
	int A,B,op;
	ingresarNum(&A);
	ingresarNum(&B);
	do{
		menu(&op);
		switch(op){
		case 1:
			mostrarNum(A);
			invertirNum(&A);
			printf("Numero invertido: %d\n",A);
			break;
		case 2:
			mostrarNum(B);
			invertirNum(&B);
			printf("Numero invertido: %d\n",B);
			break;
		case 3:
			mostrarNums(A,B);
			if(A<B){
				manipularNum(&B,&A);
				mostrarNums(A,B);
			}
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
	printf("1. Mostrar el numero invertido de A.\n");
	printf("2. Mostrar el numero invertido de B.\n");
	printf("3. Modificar para que el numero A sea mayor y el numero B menor.\n");
	printf("4. Salir.\n-> ");
	scanf("%d",opc);
}
void ingresarNum(int *num){
	float temp;
	printf("\nIngrese un numero: ");
	scanf("%f",&temp);
	*num = (int)temp;
}
void manipularNum(int *n1,int *n2){
	int dig;
	dig = *n1 % 10;
	*n1 = *n1 / 10;
	*n2 = dig + (*n2 * 10);
}
void invertirNum(int *num){
	int acu,dig;
	acu = 0;
	while(*num > 0){
		dig = *num %10;
		acu = dig + acu * 10;
		*num = *num / 10;
	}
	*num = acu;
}
void mostrarNums(int a,int b){
	printf("numero A: %d - numero B: %d\n",a,b);
}
void mostrarNum(int num){
	printf("Numero: %d\n",num);
}
