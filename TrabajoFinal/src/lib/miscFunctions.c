/*
 * miscFunctions.c
 *
 *  Created on: Nov 1, 2014
 *      Author: pweremcz
 */
#include "../includes/tipos.h"
#include "../includes/labirintFunctions.h"

void clearKeyboardBuffer()
{
	while ( getchar() != '\n' );
}

void delay(int seconds)
{
	int i = seconds * 1000;
	while(i--)
	{

	}
}

char getCasilleroXY(int x, int y, Laberinto *pLaberinto)
{
	char returnValue = '\0';
	int offset = y * pLaberinto->ancho + x;
	if(offset < pLaberinto->ancho * pLaberinto->alto)
	{
		returnValue = pLaberinto->arrDatos[offset];
	}else
	{
		returnValue = 'X';
	}
	return returnValue;
}

int putCasilleroXYScreen(int x, int y, char pCaracter, Scope *pScope)
{
	int returnValue = 0;
	int offset = y * pScope->laberinto.ancho + x;//tengo que restar para compensar el \r\n
	if(offset < 10000)
	{
		pScope->screenBuffer[offset] = pCaracter;
	}else
	{
		printf("Error, las coordenadas superan las dimensiones máximas del laberinto");
		returnValue = -1;
	}
	return returnValue;
}

void flushScreen(Scope *pScope)
{
	system("cls");
	printf("%s",pScope->screenBuffer);
}

void inicializar(Scope *pScope)
{
	int i;
	cargarLaberinto(&pScope->laberinto);
	for(i = 0; i < 2000; i++)
	{
		pScope->screenBuffer[i] = ' ';
	}
}
