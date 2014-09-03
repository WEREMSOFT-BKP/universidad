/*
 ============================================================================
 Name        : ej002.c
 Author      : Pablo Weremczuk
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int suma(int a, int b);

int main(void) {
	int a, b;

	a = 0;
	b = 0;

	printf("Ingrese el valor de a: ");
	scanf("%d", &a);
	getchar();
	printf("Ingrese el valor de b: ");
	scanf("%d", &b);
	getchar();
	printf("La suma de a + b es %d", suma(a, b)) ;
	return 0;
}


int suma(int a, int b)
{
	return a + b;
}
