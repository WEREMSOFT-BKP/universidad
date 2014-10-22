/*
 * miscFunctions.h
 *
 *  Created on: Oct 21, 2014
 *      Author: pweremcz
 */

#ifndef MISCFUNCTIONS_H_
#define MISCFUNCTIONS_H_

void delay(int seconds);
char getCasilleroXY(int x, int y, Laberinto *pLaberinto);
int putCasilleroXY(int x, int y, char pCaracter, Laberinto *pLaberinto);

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
	int offset = y * pLaberinto->maxAncho + x;
	if(offset < 1000)
	{
		returnValue = pLaberinto->arrDatos[offset];
	}else
	{
		printf("Error, las coordenadas superan las dimensiones máximas del laberinto");
		returnValue = -1;
	}
	return returnValue;
}

int putCasilleroXY(int x, int y, char pCaracter, Laberinto *pLaberinto)
{
	int returnValue = 0;
	int offset = y * pLaberinto->maxAncho + x;
	if(offset < 1000)
	{
		pLaberinto->arrDatos[offset] = pCaracter;
	}else
	{
		printf("Error, las coordenadas superan las dimensiones máximas del laberinto");
		returnValue = -1;
	}
	return returnValue;
}
#endif /* MISCFUNCTIONS_H_ */
