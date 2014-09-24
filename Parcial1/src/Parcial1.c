/*
 ============================================================================
 Name        : Parcial1.c
 Author      : Pablo Weremczuk
 Version     :
 Description : Ejercicio 1 del parcial: pide altura y caracter
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int pedirAltura(void);
char pedirCaracter(void);
void dibujarFigura(int pAltura, char pCaracter);

int main(void) {
	int altura = pedirAltura();
	char caracter = pedirCaracter();
	dibujarFigura(altura, caracter);
	return 0;
}

int pedirAltura(void)
{
	int returnValue;
	printf("\nIngrese la altura de la figura: ");
	scanf("%d", &returnValue);
	return returnValue;
}

char pedirCaracter(void)
{
	char returnValue;
	printf("\nIngrese el caracter para consruir la figura: ");
	getchar();
	scanf("%c", &returnValue);
	return returnValue;
}

void dibujarFigura(int pAltura, char pCaracter)
{
	int i, j;
	for(i = pAltura; i > 0; i--)
	{
		for(j = pAltura; j > 0; j--)
		{
			if(j > i)
			{
				printf(" ");
			}else
			{
				printf("%c", pCaracter);
			}
		}
		printf("\n");
	}
}


