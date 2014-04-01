//============================================================================
// Name        : ej106.cpp
// Author      : Pablo Weremczuk
// Version     :
// Copyright   : Use at your own risk
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "includes\aye.h"

int main()
{
	int valor;
	float a, b, c;

	writeLnString("Ingrese un valor: ");
	readInteger(valor);

	writeString("La 5ta parte del valor es: ");
	writeLnInteger(valor/5);

	writeString("El resto del valor dividido 5: ");
	writeLnInteger(valor%5);

	writeString("La septima parte de la 5ta parte: ");
	writeLnInteger(valor/5/7);

	a = valor / 5;
	b = valor % 5;
	c = a / 7;

	writeString("El promedio (REAL) de los valores obtenidos en a, b, y c es:");
	writeLnDouble( ( a + b + c ) / 3);



	return 0;
}
