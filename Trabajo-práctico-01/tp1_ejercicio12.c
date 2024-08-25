#include <stdio.h>
/*
Ejercicio 12:
Dada una lista con las edades de N deportistas, se necesita informar la edad promedio
de los deportistas de la lista; cuál es la menor y mayor edad ingresada.
*/

int main() {
	int sum = 0,N,edad,may,men;
	printf("Ingrese la cantidad de edades de los deportistas: ");
	scanf("%d",&N);
	for(int i = 1; i <= N; i ++){
		printf("Ingrese la edad del deportista [%d]: ",i);
		scanf("%d",&edad);
		sum +=edad;
		if(i == 1)
			may = men = edad;
		else {
			if (edad > may)
				may = edad;
			if (edad < men)
				men = edad;
		}
	}
	if(N > 0){
		printf("El promedio de edad es: %.2f\n",(float)sum / N);
		printf("La edad mayor es: %d\n",may);
		printf("La edad menor es: %d\n",men);
	}
	else
	   printf("La cantidad de edades debe ser mayor que 0.");
	
	return 0;
}

