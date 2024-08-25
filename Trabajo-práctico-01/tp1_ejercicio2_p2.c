#include <stdio.h>
/*
Ejercicio 2:
b)Sea a, b y c tres variables
*/
int main() {
	int a = -14;
	int b = 5;
	int c = -3;
	printf("El resultado: %d",a%b/c); // -14%5 = -4, -4/-3
	return 0;
}
/*
a+b*c, a = 5,b = 2, c = 12 res = 29
a+b+c, a = 3,b = 5, c = 2.0 res = 10.0
(a+b)/2 a = 12,b = 5, c = 2 res = 8
(b-a)%c a = 3, b = 8.0, c = 2 res = 1 // int en b
a%b/c a = -14, b = 5, c = -3 res = 1
*/
