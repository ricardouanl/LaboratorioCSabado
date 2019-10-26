/*
* Autor: Jose Ricardo De Anda Caballero
* Fecha: 26/10/2019
* Grupo: 008
* Horario: Sabado 9am-11am
* Matricula: 1447001
*/

#include <stdio.h>

// Declaracion de funciones
int primo(int num);
int potencia(int num2, int pot);

int main() {

	//**************ACTIVIDAD1*****************

	// Declaracion de Variables
	int num, num2, pot;

	printf("Ingrese el numero: ");
	scanf("%d", &num);

	// Llamamos a la funcion primo con el parametro entero
	if ( primo(num) )
		printf("El numero es primo \n");
	else
		printf("El numero no es primo \n");

	//**************ACTIVIDAD2*****************
	
	// Declaracion de Variables
	printf("Ingrese el numero a elevar: ");
	scanf("%d", &num2);
	printf("Ingrese el valor de la potencia: ");
	scanf("%d", &pot);

	// Llamamos a la funcion potencia con los parametros de numero y la potencia a la que se elevara
	printf("El numero %d elevado a la potencia %d es %d", num2, pot, potencia(num2, pot));

	return 0;
}

int primo(int num) {
	if (num < 1)
		return 0;

	int i, a, flag;
	flag = 1;
	a = num/2;

	for( i = 2; i <= a; i++ ){
		if ( num % i == 0 ) {
			flag = 0;
			break;
		}
	}

	return flag;
}

int potencia(int num2, int pot){
	int i, res;
	res = num2;
	for (i = 1; i < pot; i++)
		res = res * num2;
	
	return res;
}

