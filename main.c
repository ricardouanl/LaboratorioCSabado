/*
* Autor: Jose Ricardo De Anda Caballero
* Fecha: 09/09/2019
* Grupo: 008
* Horario: Sabado 9am-11am
* Matricula: 1447001
*/

#include<stdio.h>

int main() {
	//**************ACTIVIDAD1*****************

	// Declaracion de variables
	float nota;
	
	// Lectura de valores
	printf("Ingrese la nota: ");
	scanf("%f", &nota);

	// Condicional de rango
	if ( nota >= 0 && nota <= 10 ) {
		// Condicional apto/no apto
		if ( nota >= 5 )
			printf("APTO \n");
		else 
			printf("NO APTO \n");
	} else {
		printf("ERROR: Nota incorrecta. \n");
	}


	//**************ACTIVIDAD2*****************


	// Declaracion de variables
	int dia;
	
	// Lectura de valores
	printf("Ingrese el numero del dia de la semana: ");
	scanf("%d", &dia);

	// Estructura switch para determinar el dia
	switch(dia) {
		case 1:
			printf("Lunes \n");
			break;
		case 2:
			printf("Martes \n");
			break;
		case 3:
			printf("Miercoles \n");
			break;
		case 4:
			printf("Jueves \n");
			break;
		case 5:
			printf("Viernes \n");
			break;
		case 6:
			printf("Sabado \n");
			break;
		case 7:
			printf("Domingo \n");
			break;
		default:
			printf("ERROR: Dia incorrecto. \n");
	}


	//**************ACTIVIDAD Extra*****************


	int opcion;

	// Mostramos el menu
	printf("Menu de opciones. \n");
	printf("================= \n");
	printf("1. Altas. \n");
	printf("2. Bajas. \n");
	printf("3. Salir. \n");

	// Lectura de valores
	printf("Digite una opcion: ");
	scanf("%d", &opcion);

	if ( opcion > 0 && opcion <= 3 ) {
		// Mostramos la opcion seleccionada
		printf("usted escogio la opcion: #%d \n", opcion);
	} else {
		printf("ERROR: Opcion incorrecta. \n");
	}

	return 0;
}

