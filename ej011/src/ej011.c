/*
 ============================================================================
 Name        : ej011.c
 Author      : Pablo Weremczuk
 Description : Arrays y punteros
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>



int const ALTO = 1;
int const ANCHO = 10;

void populate(char pMatriz[ANCHO][ALTO]);
void mostrar(char pMatriz[ANCHO][ALTO]);

int main(void) {
	char matriz[ANCHO][ALTO];

	populate(matriz);
	mostrar(matriz);
	return EXIT_SUCCESS;
}

void populate(char pMatriz[ANCHO][ALTO])
{
	int i, j;

	srand(time(NULL));
	int r = rand();

	for(i = 0; i < ALTO; i++)
	{
		for(j = 0; j < ANCHO; j++)
		{
			pMatriz[j][i] = (i == 0 || j == 0 || i == ALTO - 1 || j == ANCHO - 1)?'X':' ';
		}
	}
}

void mostrar(char pMatriz[ANCHO][ALTO])
{
	int i, j;
	for(i = 0; i < ALTO; i++)
	{
		printf("\n");
		for(j = 0; j < ANCHO; j++)
		{
			printf("%c%c", pMatriz[j][i], pMatriz[j][i]);
		}
	}
}
