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

#define NORTE 1
#define SUR 2
#define ESTE 3
#define OESTE 4

#define POR_DERECHA 1;
#define POR_IZQUIERDA 2;

#define LENTO 100000;
#define MEDIO 10000;
#define RAPIDO 50;


typedef struct  {
	char arrDatos[10000];
	int maxAncho;
	int maxAlto;
	int ancho;
	int alto;
	int entradaX;
	int entradaY;
} Laberinto;

typedef struct  {
	int velocidadX;
	int velocidadY;
	int avatar;
	int orientacion;
	int x;
	int y;
} Heroe;

typedef struct
{
	int delay;
	int metodo;
} Config;

typedef struct
{
	char screenBuffer[80*25];
	int opcion;
	int state;
	Heroe heroe;
	Config config;
	Laberinto laberinto;
} Scope;


#endif /* TIPOS_H_ */
