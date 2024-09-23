#include <stdio.h>
#include <math.h>
/*
Ejercicio 11:
Una persona que requiere registrarse en una app, debe elegir una contraseña de 6 dígitos,
todos distintos. Si el usuario ingresa un número con cifras repetidas, la app le advierte el error y le sugiere
una nueva clave, compuesta por las cifras no repetidas del número ingresado, a la que le agregan nuevos
dígitos sin repetir. Los dígitos se agregan siempre como cifra menos significativa. Diseñe e implemente
un programa modular, que reciba un número entero y lo modifique de acuerdo al criterio explicado
anteriormente.
*/
void ingreseContra(int *);
int digRepetido(int);
void menu(int *);
void sugerirContra(int *);
int main() {
	int contra,op;
	ingreseContra(&contra);
	if(digRepetido(contra)==1){
		printf("ERROR: su contrasena tiene digitos repetidos.\n");
		sugerirContra(&contra);
		printf("--------------------------------------------------\n");
		printf("Contrasena sugerida: %d\n",contra);
		do{
			menu(&op);
			switch(op){
			case 1: printf("Contrasena establecida.\n");break;
			case 2:printf("Contrasena no establecida.\n");break;
			default:
				printf("opcion incorrecta.\n");
			}
		}while(op!=2 && op != 1);
		printf("--------------------------------------------------\n");
	}
	else
	   printf("contrasena valida.\n");
	printf("Fin del programa.\n");
	return 0;
}
void ingreseContra(int *contra){
	int b = 0;
	float temp;
	do{
	printf("Ingrese una contrasena de 6 digitos: ");
	scanf("%f",&temp);
	*contra = (int)temp;
	if(*contra > 0 && *contra == temp){
		if(*contra>99999 && *contra <1000000){
			b++;
		}
		else
		   printf("ERROR:ingrese una contrasena de mas de 6 digitos.\n");
	}
	else
	   printf("Error: ingrese una contrasena valida.\n");
	}while(b == 0);
}
int digRepetido(int contra){
	int digPrin,digCont,i,j,b;
	b = 0;
	i = 5;
	while(i>0 && b == 0){
		digPrin = (contra / (int)pow(10,i))% 10;
		j= i-1;
		while(j>=0 && b == 0){
			digCont = (contra / (int)pow(10,j)) % 10;
			if(digPrin == digCont)
				b = 1;
			j--;
		}
		i--;
	}
	return b;
}
void menu(int *opc){
	printf("Desea establecerlo como contrasena?\n");
	printf("1.SI\n");
	printf("2.NO\n->");
	scanf("%d",opc);
}
void sugerirContra(int *C){
	int digPrin, digCont, digMov, i, j, k, b, num;
	num = -1;
	i = 5;
	while (i > 0) {
		digPrin = (*C / (int)pow(10, i)) % 10;
		
		j = i - 1;
		b = 0;
		while (j >= 0 && b == 0) {
			digCont = (*C / (int)pow(10, j)) % 10;
			
			if (digPrin == digCont) {
				k = j - 1;
				while (k >= 0) {
					*C = *C - (digCont * (int)pow(10, j));
					if (k != -1) {
						digMov = (*C / (int)pow(10, k)) % 10;
						*C = *C + (digMov * (int)pow(10, j));
						j--;
						k--;
						digCont = (*C / (int)pow(10, j)) % 10;
					}
				}
				num++;
				*C = *C + num;
				b = 1;
			}
			j--;
		}
		i--;
		if (b == 1) {
			i = 5;
			j = i - 1;
		}
	}
}
