/*
 ============================================================================
 Name        : ej004.c
 Author      : Pablo Weremczuk
 Description : Calculadora que opera con números enteros.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int mostrarMenu(void);
int sumar(int, int);
int restar(int, int);
int multiplicar(int, int);
int divicionEntera(int, int);
void pedirValores(int *, int *);
void informarResultado(int);

int main(void) {
	int opcion = 0;
	int a = 0;
	int b = 0;
	int resultado = 0;
	int valoresValidos = 1;
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

void informarResultado(int resultado)
{
	printf("El resultado es %d\n", resultado);
}

void pedirValores(int *a, int *b)
{
	printf("Ingrese el primer operador: ");
	scanf("%d", a);
	printf("Ingrese el segundo operador: ");
	scanf("%d", b);
}

int mostrarMenu(void)
{
	int returnValue = 0;
	printf("\t\tSeleccione una opcion:\n");
	printf("\t\t======================\n");
	printf("\n");
	printf("\t\t\t1. Sumar.\n");
	printf("\t\t\t2. Restar.\n");
	printf("\t\t\t3. Multiplicar.\n");
	printf("\t\t\t4. Divicion entera.\n");
	printf("\t\t\t5. Salid.\n\n");

	printf("Opcion: ");
	scanf("%d", &returnValue);
	return returnValue;
}

int sumar(int a, int b)
{
	return a + b;
}

int restar(int a, int b)
{
	return a - b;
}

int multiplicar(int a, int b)
{
	return a * b;
}

int divicionEntera(int a, int b)
{
	if(b == 0)
	{
		return 0;
	}else
	{
		return a / b;
	}
}
