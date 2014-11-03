/*
 ============================================================================
 Name        : ej015.c
 Author      : Pablo Weremczuk
 Version     :
 Copyright   : Función que intercambia valores.
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char nombre[30];
	char apellido[03];
	int legajo;
	int edad;
} Alumno;

int main(void) {
	Alumno alumno;
	strcpy(alumno.nombre, "Pablo");
	strcpy(alumno.apellido, "Weremczuk");
	alumno.edad = 35;
	alumno.legajo = 3503;


	printf("Ingrese el nombre :");
	scanf("%s", alumno.nombre);

	printf("Ingrese el apellido :");
	scanf("%s", alumno.apellido);

	printf("Ingrese el legajo :");
	scanf("%d", &alumno.legajo);

	printf("Ingrese la edad :");
	scanf("%d", &alumno.edad);

	printf("Nombre %s\n", alumno.nombre);
	printf("Apellido %s\n", alumno.apellido);
	printf("Edad %d\n", alumno.edad);
	printf("Legajo %d\n", alumno.legajo);

	return EXIT_SUCCESS;
}
