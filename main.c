/*
* Autor: Jose Ricardo De Anda Caballero
* Fecha: 07/10/2019
* Grupo: 008
* Horario: Sabado 9am-11am
* Matricula: 1447001
*/

#include <stdio.h>

int main() {

	//**************ACTIVIDAD1*****************

	// Declaracion del arreglo
	int ventasEmpleadoOficinaEdificio[6][10][2];

	// Asignacion del valor
	ventasEmpleadoOficinaEdificio[3][7][2] = 4234;

	printf("El empleado numero 3 de la oficina numero 7 del edificio numero 2 ha vendido %d unidades \n", ventasEmpleadoOficinaEdificio[3][7][2]);

	// a) 120.
	// b) Se accede a otra direccion de memoria que nos regresa un valor incorrecto.

	//**************ACTIVIDAD2*****************

	// Agregamos 10 unidades al valor anterior
	ventasEmpleadoOficinaEdificio[3][7][2] = ventasEmpleadoOficinaEdificio[3][7][2] + 10;

	printf("El empleado numero 3 de la oficina numero 7 del edificio numero 2 ha vendido %d unidades", ventasEmpleadoOficinaEdificio[3][7][2]);

	return 0;
}
