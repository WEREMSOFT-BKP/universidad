/*
 ============================================================================
 Name        : TrabajoFinal.c
 Author      : Pablo Weremczuk
 Version     :
 Copyright   : Trabajo Final: Simulación de robots de rescate.
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DELAY 100000

typedef struct  {
	char arrDatos[100][100];
	int ancho;
	int alto;
} Laberinto;

void delay(int seconds);
int mostrarMenuYRegistrarOpcion();
int cargarLaberinto(Laberinto *pLaberinto);
void mostrarLaberinto(Laberinto *pLaberinto);
void resolverLaberinto(Laberinto *pLaberinto);
void configurar(Laberinto *pLaberinto);

int main(void) {
	int opcion;
	Laberinto laberinto;

	laberinto.ancho = 10;
	laberinto.alto = 10;

	cargarLaberinto(&laberinto);
	do
	{
		opcion = mostrarMenuYRegistrarOpcion();
		switch(opcion)
		{
		case 1:
			resolverLaberinto(&laberinto);
			break;
		case 2:
			configurar(&laberinto);
			break;
		case 3:
			mostrarLaberinto(&laberinto);
			break;
		}
	}while(opcion != 0);



	return 0;
}

void configurar(Laberinto *pLaberinto)
{
	printf("Se seleccionó configurar. Presione una tecla.\n\n");
	getch();
}

void resolverLaberinto(Laberinto *pLaberinto)
{
	printf("Se seleccionó resolver laberinto. Presione una tecla.\n\n");
	getch();
}

void mostrarLaberinto(Laberinto *pLaberinto)
{
	int j, i;
	for(i = 0; i < pLaberinto->alto; i++)
	{
		for(j = 0; j < pLaberinto->ancho; j++)
		{
			printf("%c", pLaberinto->arrDatos[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	printf("\n");
}

int cargarLaberinto(Laberinto *pLaberinto)
{
	int i, j;
	char data[6][10] =  {{'X', 'X', 'X', 'X', 'X', 'I', 'X', 'X', 'X', 'X'},
			{'X', ' ', ' ', ' ', 'X', ' ', ' ', ' ', ' ', 'X'},
			{'X', ' ', ' ', ' ', ' ', ' ', 'X', 'X', 'X', 'X'},
			{'X', 'X', ' ', ' ', ' ', ' ', 'X', ' ', ' ', 'X'},
			{'X', 'X', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'X'},
			{'X', 'X', 'X', 'X', 'X', 'O', 'X', 'X', 'X', 'X'}};

	for(i = 0; i < sizeof(data[0]); i++)
	{
		for(j = 0; j < sizeof(data) / sizeof(data[0]); j++)
		{
			pLaberinto->arrDatos[j][i] = data[j][i];
		}
	}

	pLaberinto->ancho = sizeof(data[0]);
	pLaberinto->alto = sizeof(data) / sizeof(data[0]);

	return 0;
}

int mostrarMenuYRegistrarOpcion()
{
	int returnValue;
	printf("Proyecto Simulación de Robots de Rescate\n");
	printf("========================================\n\n");

	printf("0. Salir\n");
	printf("1. Resolver\n");
	printf("2. Configurar\n");
	printf("3. Mostrar Laberinto\n");

	printf("\nSeleccione una opcion: ");
	scanf("%d", &returnValue);
	return returnValue;
}


void delay(int seconds)
{
	int i = seconds * 1000;
	while(i--)
	{

	}
}
