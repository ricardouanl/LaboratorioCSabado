/*
* Autor: Jose Ricardo De Anda Caballero
* Fecha: 31/08/2019
* Grupo: 008
* Horario: Sabado 9am-11am
* Matricula: 1447001
*/

#include<stdio.h>

int main() {
	//*** Actividad 1

	// Declaracion de variables
	int x=0, y=0;
	
	// Lectura de valores
	printf("Ingrese el valor de x: ");
	scanf("%d", &x);

	printf("Ingrese el valor de y: ");
	scanf("%d", &y);

	// Condicional para comparacion
	if ( x > y ) {
		printf("%d es el numero mas grande. \n", x);
	} else {
		printf("%d es el numero mas grande. \n", y);
	}


	//*** Actividad 2

	// Declaracion de variables
	int a=5, b=3, c=-12;

	// Evaluacion del inciso a)
	if ( a > 3 ) {
		printf("a) Verdadero \n");
	} else {
		printf("a) Falso \n");
	}

	// Evaluacion del inciso b)
	if ( a > c ) {
		printf("b) Verdadero \n");
	} else {
		printf("b) Falso \n");
	}

	// Evaluacion del inciso c)
	if ( b != c ) {
		printf("c) Verdadero \n");
	} else {
		printf("c) Falso \n");
	}

	// Evaluacion del inciso d)
	if ( a == 3 ) {
		printf("d) Verdadero \n");
	} else {
		printf("d) Falso \n");
	}

	// Evaluacion del inciso e)
	if ( a * b == 15 ) {
		printf("e) Verdadero \n");
	} else {
		printf("e) Falso \n");
	}

	// Evaluacion del inciso f)
	if ( c / b < a ) {
		printf("f) Verdadero \n");
	} else {
		printf("f) Falso \n");
	}

	// Evaluacion del inciso g)
	if ( c / b == -10 ) {
		printf("g) Verdadero \n");
	} else {
		printf("g) Falso \n");
	}

	// Evaluacion del inciso h)
	if ( a + b + c == 5 ) {
		printf("h) Verdadero \n");
	} else {
		printf("h) Falso \n");
	}

	// Evaluacion del inciso i)
	if ( (a + b == 8) && (a - b == 2) ) {
		printf("i) Verdadero \n");
	} else {
		printf("i) Falso \n");
	}
	
	// Evaluacion del inciso j)
	if ( (a + b == 8) || (a - b == 6) ) {
		printf("j) Verdadero \n");
	} else {
		printf("j) Falso \n");
	}

	// Evaluacion del inciso o)
	if ( a > 3 && b > 3 && c < 3 ) {
		printf("o) Verdadero \n");
	} else {
		printf("o) Falso \n\n\n");
	}


	//*** Actividad 3
	
	// Limpiamos variables
	a=0;
	b=0;
	c=0;
	
	// Lectura de valores
	printf("Ingrese el valor de a: ");
	scanf("%d", &a);
	
	printf("Ingrese el valor de b: ");
	scanf("%d", &b);
	
	printf("Ingrese el valor de c: ");
	scanf("%d", &c);

	// Evaluacion del inciso a)
	if ( a > 3 ) {
		printf("a) Verdadero \n");
	} else {
		printf("a) Falso \n");
	}

	// Evaluacion del inciso b)
	if ( a > c ) {
		printf("b) Verdadero \n");
	} else {
		printf("b) Falso \n");
	}

	// Evaluacion del inciso c)
	if ( b != c ) {
		printf("c) Verdadero \n");
	} else {
		printf("c) Falso \n");
	}

	// Evaluacion del inciso d)
	if ( a == 3 ) {
		printf("d) Verdadero \n");
	} else {
		printf("d) Falso \n");
	}

	// Evaluacion del inciso e)
	if ( a * b == 15 ) {
		printf("e) Verdadero \n");
	} else {
		printf("e) Falso \n");
	}

	// Evaluacion del inciso f)
	if ( c / b < a ) {
		printf("f) Verdadero \n");
	} else {
		printf("f) Falso \n");
	}

	// Evaluacion del inciso g)
	if ( c / b == -10 ) {
		printf("g) Verdadero \n");
	} else {
		printf("g) Falso \n");
	}

	// Evaluacion del inciso h)
	if ( a + b + c == 5 ) {
		printf("h) Verdadero \n");
	} else {
		printf("h) Falso \n");
	}

	// Evaluacion del inciso i)
	if ( (a + b == 8) && (a - b == 2) ) {
		printf("i) Verdadero \n");
	} else {
		printf("i) Falso \n");
	}
	
	// Evaluacion del inciso j)
	if ( (a + b == 8) || (a - b == 6) ) {
		printf("j) Verdadero \n");
	} else {
		printf("j) Falso \n");
	}

	// Evaluacion del inciso o)
	if ( a > 3 && b > 3 && c < 3 ) {
		printf("o) Verdadero \n");
	} else {
		printf("o) Falso \n\n\n");
	}


	return 0;
}

