/*
 * tipos.h
 *
 *  Created on: Oct 21, 2014
 *      Author: pweremcz
 */

#ifndef TIPOS_H_
#define TIPOS_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DELAY 100000

#define STATE_MENU  0
#define STATE_SOLVING 1



typedef struct  {
	char arrDatos[10000];
	int maxAncho;
	int maxAlto;
	int ancho;
	int alto;
} Laberinto;

typedef struct  {
	char orientacion;
	int avatar;
	int x;
	int y;
} Heroe;

typedef struct
{
	char screenBuffer[80*25];
	int opcion;
	int state;
	Heroe *heroe;
	Laberinto *laberinto;
} Scope;



#endif /* TIPOS_H_ */
