#include <stdio.h>
/*
Ejercicio 1:
Dado el siguiente programa modular, realice el seguimiento de los valores de las direcciones
de memoria y de los datos almacenados en las variables a y b, declaradas en el main.
*/
void muestra_parametros(int, int*);
void incrementa_parametros(int, int*);
int main() {
	int a,b;
	printf("a = "); scanf("%d",&a);// 3
	printf("b = "); scanf("%d",&b);//2
	printf("\nDATOS DEL MAIN\n");
	printf("valor de a: %d\n",a); // 3
	printf("direccion de memoria de a: %p\n",&a);//13EO
	printf("valor de b: %d\n",b);//2
	printf("direccion de memoria de b: %p\n",&b);//23FF
	muestra_parametros(a,&b);
	incrementa_parametros(a,&b);
	muestra_parametros(a,&b);
	return 0;
}
void muestra_parametros(int x, int *y) {
	printf("\nDATOS DEL MODULO\n");
	printf("valor de x: %d\n",x);//3//3
	printf("direccion de memoria de x: %p\n",&x);//98OP
	printf("valor de y: %d\n",*y);//2//3
	printf("direccion de memoria de y: %p\n",y);//0092
	printf("----------------------\n");
}
void incrementa_parametros(int x, int *y) {
	x=x+1;
	*y=*y+1;
}
