#include <stdio.h>
/*
Ejercicio 2:
a) Considerando que las variables a y b son enteras y que a contiene el valor 5 y b el valor 17, 
indicar los datos resultantes en las variables a y b, 
luego de la asignación, en cada uno de los casos:
*/
int main() {
	int a = 5;
	int b = 17;
	b = b > a && (a = 7);
	printf("Valores de salida: | a = %d | b = %d |",a,b);
	return 0;
}

/*
a = b  a = 17,b = 17
a += b a = 22, b = 17
b += a a = 5, b = 22
a += a a = 10, b = 17
b = a++, a = 6, b = 5
a /= b, a = 0, b = 17
a *= b/a , 15, b = 17 la division entre 17/5 da 3 por que representa int y no float
a -= b, a = -12,b = 17
++a , a = 6, b = 17
a%=b-a*3 , a = 1, b = 17
a+= b+=a , a = 27, b = 22
b = ++a, a = 6,b = 6
a = a < b a = 1, b = 17 true es 1 y false es 0
a = b < a && b > 0 || a != 5 a = 0, b = 17
b = b > a && (a = 7) a = 7, b = 1

*/

