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
	int returnValue = -1;
	int primeraVez = 0;
	int validation = -1;
	while(!(returnValue >= 0 && returnValue <=3) || validation != 1)
	{
		if(primeraVez != 0)
		{
			printf("Opción no válida\n");
			clearKeyboardBuffer();
		}
		system("cls");
		printf("Proyecto Simulación de Robots de Rescate\n");
		printf("========================================\n\n");

		printf("0. Salir\n");
		printf("1. Resolver\n");
		printf("2. Configurar\n");
		printf("3. Mostrar Laberinto\n");

		printf("\nSeleccione una opcion: ");
		validation = scanf("%d", &returnValue);
		clearKeyboardBuffer();
		primeraVez++;
	}
	return returnValue;
}

int mostarMenuConfiguracionYRegistrarOpcion()
{
	int returnValue = -1;
	int primeraVez = 0;
	int validation = -1;
	while(!(returnValue >= 0 && returnValue <= 1) || validation != 1)
	{
		if(primeraVez != 0)
		{
			validation = -1;
			printf("Opción no válida\n");
			clearKeyboardBuffer();
		}
		system("cls");
		printf("Configuracion\n");
		printf("=============\n\n");

		printf("0. Velocidad de resolucion paso a paso\n");
		printf("1. Volver\n");

		printf("\nSeleccione una opcion: ");
		validation = scanf("%d", &returnValue);
		clearKeyboardBuffer();
		primeraVez++;
	}
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
	pScope->heroe.orientacion = SUR;
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
		delay(pScope->config.delay);
	}
	if(casillero == 'I')
	{
		printf("El robot volvió al punto de partida sin encontrar la salida. El laberinto no tiene solución\n");
		clearKeyboardBuffer();
	}
	passToStateMenu(pScope);
}

void configurar(Config *pConfig)
{
	int opcion = -1;
	do
	{
		opcion = mostarMenuConfiguracionYRegistrarOpcion();
		switch(opcion)
		{
		case 0:
			configurarVelocidad(pConfig);
			break;
		}
	}while(opcion != 1);
}

void configurarVelocidad(Config *pConfig)
{
	int opcion = mostrarMenuConfigurarVelocidadYRegistrarOpcion();
	{
		switch(opcion)
		{
		case 0:
			pConfig->delay = LENTO;
			break;
		case 1:
			pConfig->delay = MEDIO;
			break;
		case 2:
			pConfig->delay = RAPIDO;
			break;
		}
	}
}



int mostrarMenuConfigurarVelocidadYRegistrarOpcion()
{
	int returnValue = -1;
	int primeraVez = 0;
	int validation = -1;
	while(!(returnValue >= 0 && returnValue <=2) || validation != 1)
	{
		if(primeraVez != 0)
		{
			printf("Opción no válida\n");
			clearKeyboardBuffer();
		}
		system("cls");
		printf("Seleccione velocidad de resolcion paso a paso\n");
		printf("=============================================\n\n");

		printf("0. Lento\n");
		printf("1. Medio\n");
		printf("2. Rapido\n");

		printf("\nSeleccione una opcion: ");
		validation = scanf("%d", &returnValue);
		clearKeyboardBuffer();
		primeraVez++;
	}
	return returnValue;
}
