/*
* Autor: Jose Ricardo De Anda Caballero
* Fecha: 21/09/2019
* Grupo: 008
* Horario: Sabado 9am-11am
* Matricula: 1447001
*/

#include <stdio.h>

int main() {

	//**************ACTIVIDAD1*****************

	// Declaracion de variables
	int i, cal;
	float prom = 0;

	// Ciclo para pedir y sumar las calificaciones de los examenes
	for(i=0; i<10; i++){
		printf("Capture la calificacion del examen %d (0-10):", i+1);
		scanf("%d", &cal);
		prom = prom + cal;
	}

	// Calculo del promedio
	prom = prom / 10;
	printf("El promedio es: %.2f \n", prom);

	// Condicion Aprobado - Reprobado
	if ( prom > 7 )
		printf("APROBADO");
	else
		printf("REPROBADO");

	//**************ACTIVIDAD2*****************
	
	// Declaracion de variables
	int base, exponente, resultado;

	// Lectura de variables
	printf("\nActividad 2 \n");
	printf("Introduzca la base: ");
	scanf("%d", &base);
	printf("Introduzca el exponente: ");
	scanf("%d", &exponente);

	// Condicion para exponente 0
	if (exponente == 0) {
		resultado = 1;
	} else {
		// Calculo de la potencia
		resultado = base;
		for(i=1; i<exponente; i++){
			resultado = resultado * base;
		}
	}
	printf("El resultado es: %d", resultado);

	return 0;
}
