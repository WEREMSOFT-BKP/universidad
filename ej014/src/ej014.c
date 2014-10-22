/*
 ============================================================================
 Name        : ej014.c
 Author      : Pablo Weremczuk
 Description : Función que intercambia valores.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void intercambiar(int *a, int *b);
void strCopy2(char *str1, char *str2);
int main(void) {
	int a, b;
	int *c;

	char str1[] = "cama";
	char str2[] = "casa";
	char *nombre = "Cadorna";

	char *origen = &nombre[0];
	char *fin = &nombre[strlen(nombre)];

	printf("str1 : %s. str2: %s\n", str1, str2);
	strCopy2(str1, str2);
	printf("str1 : %s. str2: %s\n", str1, str2);

	char *ptr = NULL;

	for(ptr = origen; ptr < fin; ptr++)
	{
		printf("%c", *ptr);
	}

	printf("\n");

	printf("string 1: %s\n", str1);
	printf("string 2: %s\n", str2);

	printf("resultado de la comparación %d\n", strcmp(str1, str1));

	b = 10;
	a = 5;

	c = &a;

	printf("Los valores de a y *c son %d  %d, respectivamente\n", a, *c);

	*c = 3;

	printf("Los valores de a y *c son %d  %d, respectivamente\n", a, *c);


	printf("Los valores de a y b son %d  %d, respectivamente\n", a, b);
	printf("Las direcciones de a y b son %p  %p, respectivamente\n", &a, &b);
	intercambiar(&a, &b);
	printf("Los valores de a y b son %d  %d, respectivamente\n", a, b);
	return 0;
}

void strCopy2(char *str1, char *str2)
{
	while(*str1++ = *str2++);
}

void intercambiar(int *a, int *b)
{
	int pivote;
	pivote = *a;
	*a = *b;
	*b = pivote;
}
