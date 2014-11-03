/*
 * menuFunctions.c
 *
 *  Created on: Nov 1, 2014
 *      Author: pweremcz
 */
#include "../includes/tipos.h"
#include "../includes/menuFunctions.h"
#include "../includes/labirintFunctions.h"
#include "../includes/miscFunctions.h"
#include "../includes/StateFunctions.h"
#include "../includes/heroFunctions.h"
#include <conio.h>
#include <unistd.h>


int mostrarMenuYRegistrarOpcion()
{
	int returnValue;
	system("cls");
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

void processStateMenu(Scope *scope)
{
	scope->opcion = mostrarMenuYRegistrarOpcion();
	switch(scope->opcion)
	{
	case 1:
		passToStateSolving(scope);
		break;
	case 2:
		configurar(&scope->config);
		break;
	case 3:
		mostrarLaberinto(scope);
		flushScreen(scope);
		getch();
		break;
	}
}

void processStateSolving(Scope *pScope)
{
	pScope->heroe.x = pScope->laberinto.entradaX;
	pScope->heroe.y = pScope->laberinto.entradaY;

	char casillero = '\0';

	while(casillero != 'O' && casillero != 'I')
	{
		casillero = mirarALaDerecha(pScope);

		if(casillero == 'X')
		{
			casillero = mirarAdelante(pScope);
			if(casillero == 'X')
			{
				casillero = mirarALaIzquierda(pScope);
				if(casillero == 'X')
				{
					girarAciaAtras(&pScope->heroe);
				}else if(casillero == ' ' || casillero == 'O' || casillero == 'I')
				{
					girarALaIzquierda(&pScope->heroe);
				}
			}
		}else if(casillero == ' ' || casillero == 'O' || casillero == 'I')
		{
			girarALaDerecha(&pScope->heroe);
		}

		avanzar(&pScope->heroe);
		mostrarLaberinto(pScope);
		putCasilleroXYScreen(pScope->heroe.x, pScope->heroe.y, '@', pScope);
		flushScreen(pScope);
		delay(10000);
	}
	if(casillero == 'I')
	{
		printf("El robot volvió al punto de partida sin encontrar la salida. El laberinto no tiene solución\n");
		getchar();
		getchar();
	}
	passToStateMenu(pScope);
}

void configurar(Scope *pScope)
{
	int opcion = -1;
	do
	{
		opcion = mostrarMenuYRegistrarOpcion();
		switch(opcion)
		{
		case 0:
			configurarVelocidad(pScope->config);
			break;
		case 1:
			configurarMetodoResolucion(pScope->config);
			break;
		case 2:
			cargarLaberinto(&pScope->laberinto);
		}
	}while(opcion != 3);
}

void configurarVelocidad(Config *pConfig)
{
	mostrarMenuConfigurarVelocidadYRegistrarOpcion()
}

int mostarMenuConfiguracionYRegistrarOpcion()
{
	int returnValue;
	system("cls");
	printf("Configuracion\n");
	printf("=============\n\n");

	printf("0. Velocidad de resolucion paso a paso\n");
	printf("1. Metodo de resolucion\n");
	printf("2. Volver a cargar archivo .map\n");
	printf("3. Volver\n");

	printf("\nSeleccione una opcion: ");
	scanf("%d", &returnValue);
	return returnValue;
}
