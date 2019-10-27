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
int potencia(int num, int pot);

int main() {

	//**************ACTIVIDAD1*****************

	// Declaracion de Variables
	int num;

	printf("Ingrese el numero: ");
	scanf("%d", &num);

	// Llamamos a la funcion primo pasando como parametro el numero capturado
	if ( primo(num) )
		printf("El numero es primo \n");
	else
		printf("El numero no es primo \n");


	//**************ACTIVIDAD2*****************

	int num2, pot;
	
	// Declaracion de Variables
	printf("Ingrese el numero a elevar: ");
	scanf("%d", &num2);
	printf("Ingrese el valor de la potencia: ");
	scanf("%d", &pot);

	// Llamamos a la funcion potencia pasando como parametros el numero y la potencia a la que se elevara
	printf("El numero %d elevado a la potencia %d es %d", num2, pot, potencia(num2, pot));

	return 0;
}

int primo(int num) {
	if (num < 1)
		return 0;

	int i, flag, half;
	flag = 1;

	half = num/2;

	for( i = 2; i <= half; i++ ){
		if ( num % i == 0 ) {
			flag = 0;
			break;
		}
	}

	return flag;
}

int potencia(int num, int pot){
	int i, res;
	res = num;

	for (i = 1; i < pot; i++)
		res = res * num;

	return res;
}


