/*
 ============================================================================
 Name        : ej003.c
 Author      : Pablo Weremczuk
 Version     :
 Description : Prueba de operadores lógicos, muestra el funcionamiento de los
  mismos aplicados a variables enteras.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void pruebaDeOperadoresLogicos(void);

int main(void) {
	pruebaDeOperadoresLogicos();
	return EXIT_SUCCESS;
}

void pruebaDeOperadoresLogicos(void)
{
	int a = 3;
	int b = 0;

	printf("Iniciando carga de datos.\nIngrese ambos valores falsos para salir\n");
	do
	{
		printf("Ingrese un valor para a (0 es falso) : ");
		scanf("%d", &a);

		printf("Ingrese un valor para b (0 es falso) : ");
		scanf("%d", &b);

		printf("Calculando AND...\n");
		if(a && b)
		{
			printf("a y b son verdaderos\n");
		}else
		{
			printf("a o b, o a y b, son falsos\n");
		}
		printf("Calculando OR...\n");
		if(a || b)
		{
			printf("a o b son verdaderos\n");
		}else
		{
			printf("a y b son falsos\n");
		}
	}while(a || b);
}
