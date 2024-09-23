#include <stdio.h>
#include <math.h>
/*
Ejercicio 5:
Cree un programa que ingrese un número real X, que trabaje con 4 dígitos decimales de
precisión, a partir de este número real obtener la parte entera de X y su parte decimal convertida a un
número entero.
Nota: Generar un procedimiento que reciba X y devuelva PentX, PdecX. Ejemplo, si X= 123,5432,
entonces PentX=123 y PdecX= 5432

*/
void parteEntera(double,int *);
void parteDecimal(double,int *);
void ingresarNumReal(double *);
void mostrarPentPdec(int,int);
int main(int argc, char *argv[]) {
	double X;
	int PentX,PdecX;
	ingresarNumReal(&X);
	//printf("numero ingresado: %lf\n",X);
	parteEntera(X,&PentX);
	parteDecimal(X,&PdecX);
	mostrarPentPdec(PentX,PdecX);
	return 0;
}
void ingresarNumReal(double *num){
	printf("Ingrese un numero real: ");
	scanf("%lf",num);
}
void parteEntera(double num,int *ent){
	*ent = (int)floor(num);
}
void parteDecimal(double num,int *dec){
	num = num - floor(num); //0.330000
	while ((float)num != floor((float)num)) {
		//printf("decimal: %lf\n",num);
		//printf("floor(): %lf\n",floor(num));
		num *= 10;
	}
	//printf("a: %f - %f\n",(float)num,(float)floor(num));
	if((float)num != (float) floor(num)){
		*dec = (int)num;
		(*dec)++;
	}
	else
		*dec = (int)num;
}
void mostrarPentPdec(int ent,int dec){
	printf("Parte entera: %d - Parte decimal: %d",ent,dec);
}
