/*
 * labirintFunctions.h
 *
 *  Created on: Oct 21, 2014
 *      Author: pweremcz
 */

#ifndef LABIRINTFUNCTIONS_H_
#define LABIRINTFUNCTIONS_H_

int cargarLaberinto(Laberinto *pLaberinto);
void mostrarLaberinto(Laberinto *pLaberinto);
void configurar(Laberinto *pLaberinto);

int cargarLaberinto(Laberinto *pLaberinto)
{
	int i, j;
	char data[6][10] =  {{'X', 'X', 'X', 'X', 'X', 'I', 'X', 'X', 'X', 'X'},
			{'X', ' ', ' ', ' ', 'X', ' ', ' ', ' ', ' ', 'X'},
			{'X', ' ', ' ', ' ', ' ', ' ', 'X', 'X', 'X', 'X'},
			{'X', 'X', ' ', ' ', ' ', ' ', 'X', ' ', ' ', 'X'},
			{'X', 'X', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'X'},
			{'X', 'X', 'X', 'X', 'X', 'O', 'X', 'X', 'X', 'X'}};

	for(i = 0; i < 6; i++)
	{
		for(j = 0; j < 10; j++)
		{
			putCasilleroXY(j, i, data[i][j], pLaberinto);
			//pLaberinto->arrDatos[j][i] = data[j][i];
		}
	}

	pLaberinto->ancho = j;
	pLaberinto->alto = i;

	return 0;
}

void mostrarLaberinto(Laberinto *pLaberinto)
{
	int j, i;
	char valueToPrint;
	for(i = 0; i < pLaberinto->alto; i++)
	{
		for(j = 0; j < pLaberinto->ancho; j++)
		{
			valueToPrint = getCasilleroXY(j, i, pLaberinto);
			printf("%c", valueToPrint);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	printf("\n");
}

void configurar(Laberinto *pLaberinto)
{

	printf("Se seleccionó configurar. Presione una tecla.\n\n");
	getch();
}


#endif /* LABIRINTFUNCTIONS_H_ */
