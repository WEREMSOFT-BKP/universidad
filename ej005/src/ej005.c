/*
 ============================================================================
 Name        : ej005.c
 Author      : Pablo Weremczuk
 Description : Imprime la tabla de caracteres ASCII, descarta caracteres no
 imprimibles
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned char caracter = 0;
	printf("Imprimiendo tabla de caracteres ASCII \n");
	for(caracter = 0; caracter < 255; caracter++)
	{
		if(isprint(caracter))
		{
			printf("Caracter # %d : %c\n", caracter, caracter);
		}else
		{
			printf("Caracter # %d : N/A\n", caracter);
		}
	}

	return EXIT_SUCCESS;
}
