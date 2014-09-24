/*
 ============================================================================
 Name        : Parcial1-Ej2.c
 Author      : Pablo Weremczuk
 Version     :
 Description   : Ejercicio 2 del parcial: calcula áreas
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void mostrarMenu(void);
int mostrarMenuYRegistrarOpcion(void);
float calcularAreaRectangulo(float pBase, float pAltura);
float calcularAreaTriangulo(float pBase, float pAltura);
void informarResultado(float pArea);
float calcularArea(int pOpcion);

int main(void) {
	int opcion = 0;
	float area = 0;
	do
	{
		opcion = mostrarMenuYRegistrarOpcion();
		if(opcion != 0)
		{
			area = calcularArea(opcion);
			informarResultado(area);
		}
	}while(opcion != 0);

	return 0;
}

void mostrarMenu()
{
	printf("\nSeleccione una opción: ");
	printf("\n=======================");
	printf("\n");
	printf("\n");
	printf("\n\t1. Calcular área de un triangulo.");
	printf("\n\t2. Calcular área de un rectangulo.");
	printf("\n\t0. Salir.");
}


int mostrarMenuYRegistrarOpcion(void)
{
	int returnValue = 0;
	mostrarMenu();
	scanf("%d", &returnValue);
	return returnValue;
}

float calcularArea(int pOpcion)
{
	float base;
	float altura;
	float returnValue;

	printf("\nIngrese la base:");
	scanf("%f", &base);

	printf("\nIngrese la altura:");
	scanf("%f", &altura);


	switch(pOpcion)
	{
	case 1:
		returnValue = calcularAreaTriangulo(base, altura);
		break;
	case 2:
		returnValue = calcularAreaRectangulo(base, altura);
		break;
	}

	return returnValue;
}

float calcularAreaRectangulo(float pBase, float pAltura)
{
	float returnValue;

	returnValue = pBase * pAltura;

	return returnValue;
}

float calcularAreaTriangulo(float pBase, float pAltura)
{
	float returnValue;

	returnValue = calcularAreaRectangulo(pBase, pAltura) / 2;

	return returnValue;
}


void informarResultado(float pArea)
{
	printf("\nEl área es %f", pArea);
}
