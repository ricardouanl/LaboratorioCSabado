/*
* Autor: Jose Ricardo De Anda Caballero
* Fecha: 26/10/2019
* Grupo: 008
* Horario: Sabado 9am-11am
* Matricula: 1447001
*/

#include <stdio.h>

// Declaramos la estructura para pandas
struct Panda {
	char nombre[50];
	int peso;
	int anio;
	char sexo;
};

// Declaramos las funciones
void LeerPanda(struct Panda *p);
int EdadPanda(struct Panda *p);
int TenerBebes(struct Panda *p);

int main() {

	//**************ACTIVIDAD1*****************

	// Declaracion de Variables
	struct Estudiante {
		char nombre[50];
		char sexo;
		int edad;
		int notas[5];
	};

	struct Estudiante estudiantes[3];
	int i,j,index = 0;
	float prom, greaterProm = 0;

	// Capturamos los datos de los 3 estudiantes
	for(i = 0; i < 3; i++) {
		printf("Captura los datos del estudiante %d: \n", i+1);
		printf("Nombre: ");
		scanf(" %s", estudiantes[i].nombre);
		printf("Sexo(M/F): ");
		scanf(" %c", &estudiantes[i].sexo);
		printf("Edad: ");
		scanf(" %d", &estudiantes[i].edad);

		for(j = 0; j < 5; j++){
			printf("Ingrese la nota %d: ", j+1);
			scanf("%d", &estudiantes[i].notas[j]);
		}
	}

	// Calculamos el promedio y guardamos el index del alumno con mayor promedio
	for(i = 0; i < 3; i++) {
		prom = 0;

		for(j = 0; j < 5; j++)
			prom = prom + estudiantes[i].notas[j];

		prom = prom / 5.0;

		printf("El promedio del estudiante %d es: %.2f \n", i+1, prom);

		if (prom > greaterProm) {
			index = i;
			greaterProm = prom;
		}
	}

	printf("El estudiante con mayor promedio es: %s \n", estudiantes[index].nombre);

	//**************ACTIVIDAD2*****************

	printf("======================================= \n");

	struct Panda panda1;
	// Llamamos la funcion leer-panda pasando la estructura panda por referencia
	LeerPanda(&panda1);
	
	printf("La edad del panda es: %d \n", EdadPanda(&panda1));

	if ( TenerBebes(&panda1) )
		printf("Puede tener bebes \n");
	else
		printf("No puede tener bebes \n");

	return 0;
}

void LeerPanda(struct Panda *p) {
	printf("Captura los datos del panda: \n");
	printf("Nombre: ");
	scanf(" %s", p->nombre);
	printf("Peso: ");
	scanf(" %d", &p->peso);
	printf("Año de nacimiento: ");
	scanf(" %d", &p->anio);
	printf("Sexo(M/F): ");
	scanf(" %c", &p->sexo);
}


int EdadPanda(struct Panda *p) {
	return 2019 - p->anio;
}

int TenerBebes(struct Panda *p) {
	if ( EdadPanda(p) > 5 && p->sexo == 'F' )
		return 1;
	else
		return 0;
}


