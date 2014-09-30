/*
 ============================================================================
 Name        : ej006.c
 Author      : Pablo Weremczuk
 Description : Demuestra la utilización de variables estáticas dentro de funciones
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int suma();

int llamadas = 90;

int main(void) {
	int cantidadLlamadas = 0;
	int i;

	printf("Ingrese la cantidad de llamadas que desea hacer:\n");
	scanf("%d", &cantidadLlamadas);

	for(i = 0; i < cantidadLlamadas; i++)
	{
		printf("Valor de llamadas: %d\n", llamadas);
		suma();
	}

	return 0;
}


int suma()
{
	static int llamadas = 0;
	llamadas++;

	{
		int  llamadas = 10;
		printf("Valor de la variable llamadas %d\n", llamadas);
	}
	printf("Me llamaron %d %s.\n", llamadas, llamadas>1?"veces":"vez");
	return llamadas;
}
