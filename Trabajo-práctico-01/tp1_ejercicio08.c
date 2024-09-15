#include <stdio.h>
/*
Ejercicio 8:
Dados tres n�meros naturales que representan los �ngulos internos de un tri�ngulo,
se pide determinar si el tri�ngulo es Rect�ngulo (tiene un �ngulo recto, de 90�), Obtus�ngulo (tiene un
�ngulo obtuso, m�s de 90�) o Acut�ngulo (tiene tres �ngulos agudos, menos de 90�).
Nota: Se debe chequear que la suma de los �ngulos interiores sea 180� para procesar el pedido.
*/
int main() {
	int a,b,c;
	printf("Ingrese un grado para a: ");
	scanf("%d",&a);
	printf("Ingrese un grado para b: ");
	scanf("%d",&b);
	printf("Ingrese un grado para c: ");
	scanf("%d",&c);
	if (( a + b + c ) == 180){
		printf("la suma es 180 grados, entonces es un triangulo valido\n");
		if ( a == 90 || b == 90 || c == 90 )
			printf("Es un triangulo de tipo Rectangulo (porque tiene un angulo de 90 grados)");
		else if ( a > 90 || b > 90 || c > 90)
			printf("Es un triangulo de tipo Obtusangulo (porque tiene un angulo menos de 90 grados)");
		else
			printf("Es un triangulo de tipo Acutangulo (porque tiene tres angulos agudos menos de 90 grados)");
	}
	else
		printf("La suma no da 180 grados, entonces es un triangulo invalido");
	
	return 0;
}

