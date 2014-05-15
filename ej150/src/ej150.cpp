//============================================================================
// Name        : ej150.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "includes\aye.h"
using namespace std;

int main() {
	int dia, i;
	float t;
	float tMax;

	for(i = 0; i <= 8640; i++)
	{
		writeLnString("Ingrese la temperatura");
		readFloat(t);

		if( t > tMax || i == 0)
		{
			tMax = t;
			dia = i;
		}
	}

	writeString("Temperatura mas alta: ");
	writeLnFloat(tMax);

	writeString("Mes ");
	writeLnInteger(dia / (24*30) + 1);


	writeString("Dia ");
	writeLnInteger((dia % (24*30)) / 24 + 1);

	writeString("Hora ");
	writeLnInteger((dia % (24*30)) % 24);
}
