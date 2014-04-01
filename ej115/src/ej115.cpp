//============================================================================
// Name        : ej115.cpp
// Author      : Pablo Weremczuk
// Version     :
// Copyright   : Use at your own risk
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "includes\aye.h"

int main()
{
	int valor;
	bool a, b, c;

	writeLnString("Ingrese un valor entero: ");
	readInteger(valor);

	a = valor % 3 == 0;
	b = valor % 7 == 0;
	c = valor % 13 == 0;

	if(a)
	{
		writeLnString("Es multiplo de 3");
	}

	if(b)
	{
		writeLnString("Es multiplo de 7");
	}

	if(c)
	{
		writeLnString("Es multiplo de 13");
	}

	if(a && b && c)
	{
		writeLnString("Es multiplo de 3, 7 y 13, todo al mismo tiempo");
	}

	return 0;
}
