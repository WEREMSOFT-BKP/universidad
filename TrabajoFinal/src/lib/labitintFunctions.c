/*
 * labitintFunctions.c
 *
 *  Created on: Nov 1, 2014
 *      Author: pweremcz
 */

#include "../includes/tipos.h"
#include "../includes/tipos.h"
#include "../includes/menuFunctions.h"
#include "../includes/labirintFunctions.h"
#include "../includes/miscFunctions.h"
#include "../includes/StateFunctions.h"
#include <conio.h>
#include <string.h>

#define MAXBUFLEN 1000000

int cargarLaberinto(Laberinto *pLaberinto)
{
	int i;

	long int fileSize = 0;
	char source[MAXBUFLEN + 1];
	FILE *fp = fopen("c:\\map.txt", "r");
	if (fp != NULL) {
		size_t newLen = fread(source, sizeof(char), MAXBUFLEN, fp);
		if (newLen == 0) {
			fputs("Error reading file", stderr);
		} else {
			fileSize = newLen;
			source[++newLen] = '\0'; /* para tratarlo como string al mapa */
		}

		fclose(fp);
	}

	strcpy(pLaberinto->arrDatos, source);



	for(i = 0; i<fileSize; i++)
	{
		if(pLaberinto->arrDatos[i] == '\n')
		{
			pLaberinto->ancho = i + 1;
			break;
		}
	}
	pLaberinto->alto = fileSize / i;

	for(i = 0; i<pLaberinto->arrDatos[i]; i++)
	{
		if(pLaberinto->arrDatos[i] == 'I')
		{
			break;
		}
	}


	pLaberinto->entradaX = i % pLaberinto->ancho;
	pLaberinto->entradaY = i / pLaberinto->ancho;


	return 0;
}

void mostrarLaberinto(Scope *pScope)
{
	strcpy(pScope->screenBuffer, pScope->laberinto.arrDatos);
}


