//============================================================================
// Name        : ej128.cpp
// Author      : Pablo Weremczuk
// Version     :
// Copyright   : Use at your own risk
// Description : Hello World in C++, Ansi-style
//============================================================================


#include "includes\aye.h"

int main()
{
	int cont, num;
	float prom;

	cont = 0;
	prom = 0;

	writeLnString("Ingrese un numero no negativo, negativo para terminar : ");
	readInteger(num);

	while(num >= 0)
	{
		cont ++;
		prom += num;

		writeLnString("Ingrese un numero no negativo, negativo para terminar : ");
		readInteger(num);
	}

	writeString("El promedio es : ");
	writeLnFloat(prom / cont);

	return 0;
}
