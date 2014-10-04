/*
 ============================================================================
 Name        : ej012.c
 Author      : Pablo Weremczuk
 Version     :
 Description : Recorre un array de atras para adelante y de adelante para atras.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>



int const ALTO = 1;
int const ANCHO = 10;

void populate(unsigned int  pMatriz[ANCHO][ALTO]);
void mostrar(unsigned int pMatriz[ANCHO][ALTO]);

int main(void) {
	unsigned int a = 99;
	unsigned int matriz[ANCHO][ALTO];
	unsigned int b = 100;

	populate(matriz);
	mostrar(matriz);

	printf("\nEl valor de a es %d", a);
	printf("\nEl valor de b es %d", b);
	return EXIT_SUCCESS;
}

void populate(unsigned int pMatriz[ANCHO][ALTO])
{
	int i, j;

	srand(time(NULL));
	//unsigned int r = rand();

	for(i = 0; i < ALTO; i++)
	{
		for(j = 0; j < ANCHO; j++)
		{
			//r = rand() % ANCHO;
			//pMatriz[j][i] = r;
			scanf("%d", &pMatriz[j][i]);
		}
	}
}

void mostrar(unsigned int pMatriz[ANCHO][ALTO])
{
	int i, j;
	float promedio = 0;
	for(i = 0; i < ALTO; i++)
	{
		printf("\n");
		for(j = 0; j < ANCHO; j++)
		{
			promedio += pMatriz[j][i];
			printf("%d ", pMatriz[j][i]);
		}
	}

	for(i = ALTO - 1; i >= 0; i--)
	{
		printf("\n");
		for(j = ANCHO - 1; j >= 0; j--)
		{
			printf("%d ", pMatriz[j][i]);
		}
	}

	printf("\nEl promedio es %f", promedio / ANCHO);
	printf("\nLa media es %d", pMatriz[(ANCHO - 1) / 2][ALTO - 1]);
}
