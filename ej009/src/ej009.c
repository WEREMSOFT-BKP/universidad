/*
 ============================================================================
 Name        : ej009.c
 Author      : Pablo Weremczuk
 Version     :
 Copyright   :
 Description : Ejercicio que convierte mayuscula a minuscula
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define DISTANCIA_A_MAYUSCULA ('a' - 'A')

char cambiarCase(char pCaracter);
int esMayuscula(char pCaracter);
int esMinuscula(char pCaracter);

int main(void) {
	char a;
	printf("Ingrese un caracter en minuscula o mayuscula: ");
	scanf("%c", &a);
	if(esMayuscula(a))
	{
		printf("la letra en minuscula es %c\n", cambiarCase(a));
	}else
	{
		printf("la letra en mayuscula es %c\n", cambiarCase(a));
	}

	printf("El valor de la letra es %d\n", a);
	printf("la distancia entre letras es %d\n", tolower(a) - toupper(a));
	return EXIT_SUCCESS;
}


char cambiarCase(char pCaracter)
{
	char returnValue;
	if(esMinuscula(pCaracter))
	{
		returnValue = pCaracter - DISTANCIA_A_MAYUSCULA;
	}else
	{
		returnValue = pCaracter + DISTANCIA_A_MAYUSCULA;
	}
	return returnValue;
}

int esMayuscula(char pCaracter)
{
	int returnValue = 0;
	if(pCaracter >= 'A' && pCaracter <= 'Z')
	{
		returnValue = 1;
	}
	return returnValue;
}
int esMinuscula(char pCaracter)
{
	int returnValue = 0;
	if(pCaracter >= 'a' && pCaracter <= 'z')
	{
		returnValue = 1;
	}
	return returnValue;
}
