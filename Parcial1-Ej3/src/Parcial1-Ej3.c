/*
 ============================================================================
 Name        : Parcial1-Ej3.c
 Author      : Pablo Weremczuk
 Version     :
 Description   : Ejercicio 3 del parcial: Imprime numeros primos
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int pedirTope(void);
void imprimirNumerosPrimos(int pTope);

int main(void) {
	int tope;
	tope = pedirTope();
	imprimirNumerosPrimos(tope);
	return 0;
}

int pedirTope(void)
{
	int returnValue;
	printf("\nIngrese el tope hasta el cual calcular numeros primos: ");
	scanf("%d", &returnValue);
	return returnValue;
}

void imprimirNumerosPrimos(int pTope)
{
	int i;
	int j;
	int esDivisible;
	for(i = 1; i <= pTope; i++)
	{
		esDivisible = 0;
		for(j = 2; j < i && !esDivisible; j++)
		{
			if(i % j == 0)
				esDivisible++;
		}
		if(!esDivisible)
			printf("%d ", i);

	}
}
