/*
* Autor: Jose Ricardo De Anda Caballero
* Fecha: 9/11/2019
* Grupo: 008
* Horario: Sabado 9am-11am
* Matricula: 1447001
*/

#include <stdio.h>

#define SIZE_NAME 50
#define PICTURES_SIZE 3

int main() {

	//**************ACTIVIDAD1*****************

	// Declaracion del arreglo de estructuras de imagenes
	struct picture_info {
		char name[SIZE_NAME];
		int date_time;
	} pictures[PICTURES_SIZE];

	// Declaracion del arreglo de punteros a estructuras de imagenes
	struct picture_info *ar_ptr_picture_info[PICTURES_SIZE];

	int i;

	// Guardamos las direcciones de memoria de las estructuras en el arreglo
	for(i=0; i<PICTURES_SIZE; i++)
		ar_ptr_picture_info[i] = &pictures[i];

	// Capturamos los datos del arreglo de punteros
	for(i=0; i<PICTURES_SIZE; i++) {
		struct picture_info *element = ar_ptr_picture_info[i];

		printf("Captura los datos de la foto %d. \n", i+1);
		printf("Nombre: ");
		scanf("%s", element->name);
		printf("Fecha de la foto: ");
		scanf("%d", &element->date_time);
	}

	printf("\n\n");

	// Mostramos los valores
	for(i=0; i<PICTURES_SIZE; i++) {
		struct picture_info *element = ar_ptr_picture_info[i];
		printf("== Foto %d == \n", i+1);
		printf("Nombre: %s, Fecha de la foto: %d \n", element->name, element->date_time);
	}

	//**************ACTIVIDAD2*****************

	// Porque se tienen que ejecutar los algoritmos de ordenamiento por cada petición

	#define SIZE 4

	struct coordinates {
		int latitude;
		int longitude;
	} places[SIZE];

	places[0].latitude = 200;
	places[0].longitude = 300;
	places[1].latitude = 400;
	places[1].longitude = 100;
	places[2].latitude = 100;
	places[2].longitude = 400;
	places[3].latitude = 300;
	places[3].longitude = 200;

	// Guardamos las direcciones de memoria ordenadas en base a la latitud
	struct coordinates *ar_ptr_coordinates_sort_latitude[SIZE] = {
		&places[2],
		&places[0],
		&places[3],
		&places[1]
	};

	// Guardamos las direcciones de memoria ordenadas en base a la longitud
	struct coordinates *ar_ptr_coordinates_sort_longitude[SIZE] = {
		&places[1],
		&places[3],
		&places[0],
		&places[2]
	};

	printf("\n");

	printf("== Forma 1 ==\n");
	for(i=0; i<SIZE; i++)
		printf("Latitude: %d, Longitude: %d \n", places[i].latitude, places[i].longitude);

	printf("== Forma 2 ==\n");
	for(i=0; i<SIZE; i++){
		struct coordinates *element = ar_ptr_coordinates_sort_latitude[i];
		printf("Latitude: %d, Longitude: %d \n", element->latitude, element->longitude);
	}

	printf("== Forma 3 ==\n");
	for(i=0; i<SIZE; i++){
		struct coordinates *element = ar_ptr_coordinates_sort_longitude[i];
		printf("Latitude: %d, Longitude: %d \n", element->latitude, element->longitude);
	}

	return 0;
}

