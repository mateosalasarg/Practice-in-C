#include <stdio.h>
/*
Ejercicio 9:
Se desea calcular el importe que debe pagar un automovilista al estacionar su vehículo
en la playa, si es motocicleta, paga el importe correspondiente a la tarifa básica según cantidad de
horas que estacionó en la playa; si es automóvil paga el doble de la tarifa básica y si es camioneta
paga el triple Dada la hora de entrada y de salida de un vehículo indicar el importe a pagar. La fracción
de hora se paga como hora entera. Considerar que las horas de entrada y salida son del mismo día.

*/
int vehiculo();
int main() {
	float precio;int horaEntrada,horaSalida,tipoVehiculo;
	tipoVehiculo = vehiculo();
	printf("Ingrese la hora de entrada (0-23): ");
	scanf("%d",&horaEntrada);
	printf("Ingrese La hora de salida (0-23): ");
	scanf("%d",&horaSalida);
    if(horaEntrada > 0 && horaEntrada < 23 && horaSalida > 0 && horaSalida < 23){
		printf("Ingrese el monto a pagar por hora: $");
		scanf("%f",&precio);
		if (horaSalida < horaEntrada)
			horaSalida += 24;
		switch(tipoVehiculo){
		case 1:
			printf("El monto a pagar es: $%.2f",(horaSalida - horaEntrada) * precio * 2);
			break;
		case 2:
			printf("El monto a pagar es : $%.2f",(horaSalida - horaEntrada) * precio);
			break;
		case 3:
			printf("El monto a pagar es: $%f",(horaSalida - horaEntrada) * precio * 3);
			break;
		}
	}
	else
	   printf("Horas invalidas.Fin del programa");
	return 0;

}
int vehiculo() {
	int op;
	do{
		printf("-- TIPO DE VEHICULO --\n");
		printf("1.Automovil\n");
		printf("2.Motocicleta\n");
		printf("3.Camion\n");
		printf("-> ");
		scanf("%d",&op);
		if(op < 1 || op > 3)
			printf("Opcion incorrecta, por favor intente nuevamente.\n");
		
	}while (op < 1 || op > 3);
	return op;
}
