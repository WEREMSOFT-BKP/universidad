/*
 ============================================================================
 Name        : ej008.c
 Author      : Pablo Weremczuk
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float mostrarMenu(void);
float sumar(float, float);
float restar(float, float);
float multiplicar(float, float);
float divicionEntera(float, float);
void pedirValores(float *, float *);
void informarResultado(float);

int main(void) {
	int opcion = 0;
	float a = 0;
	float b = 0;
	float resultado = 0;
	float valoresValidos = 1;
	do
	{
		valoresValidos = 1;
		opcion = mostrarMenu();
		if(opcion > 0 && opcion < 5)
		{

			pedirValores(&a, &b);
			switch(opcion)
			{
			case 1:
				resultado = sumar(a, b);
				break;
			case 2:
				resultado = restar(a, b);
				break;
			case 3:
				resultado = multiplicar(a, b);
				break;
			case 4:
				if(b != 0)
				{
					resultado = divicionEntera(a, b);
				}else
				{
					printf("No se puede dividir por cero\n");
					valoresValidos = 0;
				}
				break;
			}
			if(valoresValidos)
			{
				informarResultado(resultado);
			}
		}else
		{
			printf("Opcion no valida\n");
		}


	}while(opcion != 5);

	return EXIT_SUCCESS;
}

void informarResultado(float resultado)
{
	printf("El resultado es %3.2f\n", resultado);
}

void pedirValores(float *a, float *b)
{
	printf("Ingrese el primer operador: ");
	scanf("%2f", a);
	printf("Ingrese el segundo operador: ");
	scanf("%2f", b);
}

float mostrarMenu(void)
{
	float returnValue = 0;
	printf("\t\tSeleccione una opcion:\n");
	printf("\t\t======================\n");
	printf("\n");
	printf("\t\t\t1. Sumar.\n");
	printf("\t\t\t2. Restar.\n");
	printf("\t\t\t3. Multiplicar.\n");
	printf("\t\t\t4. Division.\n");
	printf("\t\t\t5. Salir.\n\n");

	printf("Opcion: ");
	scanf("%f", &returnValue);
	return returnValue;
}

float sumar(float a, float b)
{
	return a + b;
}

float restar(float a, float b)
{
	return a - b;
}

float multiplicar(float a, float b)
{
	return a * b;
}

float divicionEntera(float a, float b)
{
	if(b == 0)
	{
		return 0;
	}else
	{
		return a / b;
	}
}
