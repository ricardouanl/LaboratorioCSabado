/*
* Autor: Jose Ricardo De Anda Caballero
* Fecha: 2/11/2019
* Grupo: 008
* Horario: Sabado 9am-11am
* Matricula: 1447001
*/

#include <stdio.h>

int main() {

	//**************ACTIVIDAD1*****************

	// Declaracion del puntero de la cadena
	char *ptrCadena = "abaei";
	// Declaracion de arreglo para almacenar las ocurrencias de las vocales
	int vocales[5] = { 0 };

	printf("Las vocales de la cadena (%s) son: \n", ptrCadena);

	// Recorremos el apuntero hasta que sea nulo
	while(*ptrCadena != '\0') {
		// Asignamos el valor de la direccion de memoria a la variable
		char c = *ptrCadena;
		// Cambiamos la direccion de memoria al siguiente caracter
		ptrCadena++;

		switch(c){
			case 'a':
				vocales[0]++;
				break;
			case 'e':
				vocales[1]++;
				break;
			case 'i':
				vocales[2]++;
				break;
			case 'o':
				vocales[3]++;
				break;
			case 'u':
				vocales[4]++;
				break;
		}
	}

	printf("A: %d\n", vocales[0]);
	printf("E: %d\n", vocales[1]);
	printf("I: %d\n", vocales[2]);
	printf("O: %d\n", vocales[3]);
	printf("U: %d\n", vocales[4]);


	//**************ACTIVIDAD2*****************

	int a = 5;
	int b = 3;

	// Asignamos las direcciones de memoria a los punteros
	int *ptrA = &a;
	int *ptrB = &b;

	int sum;

	// Suma de punteros
	sum = *ptrA + *ptrB;

	printf("La suma de los enteros: %d + %d es: %d", a, b, sum);

	return 0;
}

