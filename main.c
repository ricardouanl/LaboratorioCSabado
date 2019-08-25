/*
* Autor: Jose Ricardo De Anda Caballero
* Fecha: 25/08/2019
* Grupo: 008
* Horario: Sabado 9am-11am
* Matricula: 1447001
*/

#include<stdio.h>

int main() {
	// Declaracion de variables
	int x;
	float output;

	// Pedimos al usuario el valor de x
	printf("Ingrese el valor de x: ");
	scanf("%d", &x);

	// Calculo para la primera funcion algebraica
	output = (x-1)/4.0 - (x-5)/36.0;
	printf("El output de la primera funcion algebraica es: %f \n", output);

	// Calculo para la segunda funcion algebraica
	output = 6*((x+1)/8.0 - (2*x-3)/16.0);
	printf("El output de la segunda funcion algebraica es: %f \n", output);



	return 0;
}


