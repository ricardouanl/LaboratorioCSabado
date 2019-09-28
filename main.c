/*
* Autor: Jose Ricardo De Anda Caballero
* Fecha: 28/09/2019
* Grupo: 008
* Horario: Sabado 9am-11am
* Matricula: 1447001
*/

#include <stdio.h>

int main() {

	//**************ACTIVIDAD1*****************

	// Declaracion de variables
	int numeroDeCoches[24], R = 2, i;

	// Llenamos el arreglo con valores
	for(i=0; i<24; i++) 
		numeroDeCoches[i] = i;

	// Modificamos el valor del arreglo en la posicion R
	numeroDeCoches[R] = 57;

	printf("El valor del arreglo en la posicion %d es: %d\n", R, numeroDeCoches[R]);

	R = 21;

	// Modificamos el valor del arreglo en la posicion R
	numeroDeCoches[R] = 57;

	printf("El valor del arreglo en la posicion %d es: %d\n", R, numeroDeCoches[R]);
	

	//**************ACTIVIDAD2*****************
	
	int A = 8, B = 4;
	// Calculo para el nuevo index
	R = A/B;

	printf("El valor del arreglo en la posicion A/B = %d es: %d\n", R, numeroDeCoches[R]);

	return 0;
}
