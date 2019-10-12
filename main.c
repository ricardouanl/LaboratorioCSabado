/*
* Autor: Jose Ricardo De Anda Caballero
* Fecha: 12/10/2019
* Grupo: 008
* Horario: Sabado 9am-11am
* Matricula: 1447001
*/

#include <stdio.h>
#include <string.h>

int main() {

	//**************ACTIVIDAD1*****************

	char str[100];

	char str2[100];
	int str2Len = 0;

	int i = 0;
	int palindromo = 1;

	printf("Ingrese la cadena \n");
	gets(str);

	for (i=0; i<strlen(str); i++) {
		if ( str[i] != ' ' ) {
			str2[str2Len] = str[i];
			str2Len++;
		}
	}


	for (i = 0; i < strlen(str2); i++) {

		if( str2[i] != str2[strlen(str2)-i-1] )
			palindromo = 0;
	}
	
	if (palindromo == 1)
		printf("La cadena es palindromo");
	else
		printf("La cadena no es palindromo");


	// Declaracion del arreglo
	
	

	// Asignacion del valor


	//**************ACTIVIDAD2*****************



	return 0;
}

