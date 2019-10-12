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

	char str3[20] = {'a', 'x', 'a', 'f', 'h', 'w', 'w', 'w', 'q', 'a', 'q', 'u', 'n', 'o', 'p', 'h', 'h', 'p', 's', 's' }
	int alpha[26] = {0};

	for (i=0;i<20;i++){
		switch( str3[i] ){
			case 'a':
				alpha[0] = alpha[0] + 1;
				break;
			case 'b':
				alpha[1] = alpha[1] + 1;
				break;
			case 'c':
				alpha[2] = alpha[2] + 1;
				break;
			case 'd':
				alpha[3] = alpha[3] + 1;
				break;
			case 'e':
				alpha[4] = alpha[4] + 1;
				break;
			case 'f':
				alpha[5] = alpha[5] + 1;
				break;
			case 'g':
				alpha[6] = alpha[6] + 1;
				break;
			case 'h':
				alpha[7] = alpha[7] + 1;
				break;
			case 'i':
				alpha[8] = alpha[8] + 1;
				break;
			case 'j':
				alpha[9] = alpha[9] + 1;
				break;
			case 'k':
				alpha[10] = alpha[10] + 1;
				break;
			case 'l':
				alpha[11] = alpha[11] + 1;
				break;
			case 'm':
				alpha[12] = alpha[12] + 1;
				break;
			case 'n':
				alpha[13] = alpha[13] + 1;
				break;
			case 'o':
				alpha[14] = alpha[14] + 1;
				break;
			case 'p':
				alpha[15] = alpha[15] + 1;
				break;
			case 'q':
				alpha[16] = alpha[16] + 1;
				break;
			case 'r':
				alpha[17] = alpha[17] + 1;
				break;
			case 's':
				alpha[18] = alpha[18] + 1;
				break;
			case 't':
				alpha[19] = alpha[19] + 1;
				break;
			case 'u':
				alpha[20] = alpha[20] + 1;
				break;
			case 'v':
				alpha[21] = alpha[21] + 1;
				break;
			case 'w':
				alpha[22] = alpha[22] + 1;
				break;
			case 'x':
				alpha[23] = alpha[23] + 1;
				break;
			case 'y':
				alpha[24] = alpha[24] + 1;
				break;
			case 'z':
				alpha[25] = alpha[25] + 1;
				break;
		}
	}

	for(i=0; i<26; i++){
	}


	return 0;
}

