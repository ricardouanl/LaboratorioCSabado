#include<stdio.h>

int main(int argc, char *argv[]) {
	
	//**************ACTIVIDAD1*****************
	
	// Lectura de variables
	int num, sum;
	
	// Inicializamos valores
	char more = 's';
	sum = 0;

	// Ciclo para seguir pidiendo numeros
	while(more != 'n'){
		printf("Introduzca un numero entero: ");
		scanf("%d", &num);
		
		// Acumulador de valores para suma
		sum = sum + num;
		
		// Preuntamos si desea seguir capturando numeros
		printf("Desea introducir otro(s/n)?: ");
		scanf(" %c", &more);
	}

	printf("La suma de los numeros introducidos es: %d \n\n", sum);
	
	//**************ACTIVIDAD2*****************
	
	int x;

	// Ciclo para seguir pidiendo numeros hasta que el numero sea mayor a 100
	while(x<= 100) {
		printf("Ingrese un numero: ");
		scanf(" %d", &x);
		printf("%d \n", x);
	}
	
	return 0;
}

