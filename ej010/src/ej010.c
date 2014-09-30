/*
 ============================================================================
 Name        : ej010.c
 Author      : Pablo Weremczuk
 Description : Ejercicio que imprime factorial sin recursion.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int factorial(int pNumero);

int main(void) {
	int numero = 0;

	do
	{
		printf("Ingrese un numero entero para obtener el factorial :");
		scanf("%d", &numero);
		if(numero)
			printf("El factorial de %d es %d\n", numero, factorial(numero));
	}while(numero != 0);

	return EXIT_SUCCESS;
}

int factorial(int pNumero)
{
	int returnValue = 1;
	for(;pNumero;pNumero--)
	{
		returnValue *= pNumero;
	}
	return returnValue;
}
