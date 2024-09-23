#include <stdio.h>
#include <math.h>
/*
Ejercicio 6:
Dados N números reales, con 4 dígitos decimales de precisión, cree un programa que, para
cada número real, cambie cada uno de sus dígitos impares por el dígito par anterior. Ejemplo A= 741,3478
entonces modificado A= 640,2468
*/
void parteEntera(double,int *);
void parteDecimal(double,int *);
void ingresarNumReal(double *);
void modifDigImparAPar(int *);
void unirPentPdec(double *,int,int);
void mostrarNumReal(double);
void mostrarPentPdec(int,int);
int main() {
	double X;
	int PentX,PdecX;
	ingresarNumReal(&X);
	parteEntera(X,&PentX);
	modifDigImparAPar(&PentX);
	parteDecimal(X,&PdecX);
	modifDigImparAPar(&PdecX);
	unirPentPdec(&X,PentX,PdecX);
	mostrarPentPdec(PentX,PdecX);
	mostrarNumReal(X);
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
void modifDigImparAPar(int *num){
	int acu,i,dig;
	acu = i = 0;
	while(*num > 0){
		dig = *num % 10;
		if((dig % 2) == 1)
			dig = dig - 1;
		acu = acu + dig * ((int)pow(10,i));
		i++;
		*num = *num / 10;
	}
	*num = acu;
}
void cantDig(int n,int *c){
	while(n > 0){
		(*c)++;
		n/=10;
	}
}
void unirPentPdec(double *r,int ent,int dec){
	double aux;
	int cant = 0;
	cantDig(dec,&cant);
	aux = (float)dec / ((int)pow(10,cant));;
	*r = ent + aux;
}
void mostrarNumReal(double real){
	printf("Numero real: %.4lf\n",real);
}
void mostrarPentPdec(int ent,int dec){
	printf("Parte entera: %d - Parte decimal: %d\n",ent,dec);
}
