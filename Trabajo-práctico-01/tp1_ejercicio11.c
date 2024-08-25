#include <stdio.h>
/*
Ejecicio 11:
Dado un dígito, mostrar su nombre, ej 0 mostrar "cero", 
1 mostrar "uno", 2 mostrar "dos", etc.
*/
int main() {
	int dig;
	printf("Ingrese un digito: ");
	scanf("%d",&dig);
	switch(dig){
	case 0:
		printf("%d -> CERO",dig);
		break;
	case 1:
		printf("%d -> UNO",dig);
		break;
	case 2:
		printf("%d -> DOS",dig);
		break;
	case 3:
		printf("%d -> TRES",dig);
		break;
	case 4:
		printf("%d -> CUATRO",dig);
		break;
	case 5:
		printf("%d -> CINCO",dig);
		break;
	case 6:
		printf("%d -> SEIS",dig);
		break;
	case 7:
		printf("%d -> SIETE",dig);
		break;
	case 8:
		printf("%d -> OCHO",dig);
		break;
	case 9:
		printf("%d -> NUEVE",dig);
		break;
	default:
		printf("No es un digito, intente nuevamente.");
	}
	return 0;
}

