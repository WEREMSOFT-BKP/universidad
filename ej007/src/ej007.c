/*
 ============================================================================
 Name        : ej007.c
 Author      : Pablo Weremczuk
 Description : Dibuja un cuadrado con asteriscos, y un triangulo con asteriscos.
 La función dibujar triangulo se modificó para que dibuje un pino.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


void dibujarTriangulo(int lado);
void dibujarCuadrado(int lado);
int mostrarMenuYObtenerSeleccion(void);
int pedirLado(void);

int main(void) {
	int opcion = 0;

	do
	{
		opcion = mostrarMenuYObtenerSeleccion();


		switch(opcion)
		{
		case 1:
			dibujarCuadrado(pedirLado());
			break;
		case 2:
			dibujarTriangulo(pedirLado());
			break;
		}
	}while(opcion != 0);
	return 0;
}

int pedirLado(void)
{
	int returnValue;
	printf("Ingrese el tamaño: ");
	scanf("%d", &returnValue);
	return returnValue;
}

int mostrarMenuYObtenerSeleccion(void)
{
	int returnValue;
	printf("\nIngrese:");
	printf("\n\t1. para dibujar un cuadrado.");
	printf("\n\t2. para dibujar un triangulo.");
	printf("\n\t0. para dibujar salir.");

	printf("\n\n\tOpción:");
	scanf("%d", &returnValue);

	return returnValue;

}



void dibujarTriangulo(int lado)
{
	int i, j;
	int centro = 0;
	int distancia = 0;
	int radio = 0;
	int radioTronco = 0;

	if(lado % 2 == 0)
	{
		lado++;
	}

	centro = lado/2;

	for(i = 1; i <= (centro + 1); i++)
	{
		radio = abs(i/2 - centro);
		for(j = 0; j < lado; j++)
		{
			distancia = abs(j - centro);
			if( j == centro || distancia < i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

	radioTronco = (lado / 4);

	for(i = 1; i <= radioTronco; i++)
	{
		radio = abs(radioTronco - centro);
		for(j = 0; j < lado; j++)
		{
			distancia = abs(j - centro);
			if( j == centro || distancia < radioTronco)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}


}

void dibujarCuadrado(int lado)
{
	int i, j;
	for(i = 1; i < lado; i++)
	{
		for(j = 0; j < lado; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
