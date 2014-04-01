//============================================================================
// Name        : ej122.cpp
// Author      : Pablo Weremczuk
// Version     :
// Copyright   : Use at your own risk
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "includes\aye.h"

int main()
{
	string nombre;
	int nota;

	writeLnString("Ingrese un nombre: ");
	readString(nombre);

	writeLnString("Ingrese una nota: ");
	readInteger(nota);

	writeString("La condicion del alumno " + nombre + " es ");

	if(1 <= nota && nota <= 3)
	{
		writeLnString("INSUFICIENTE");
	}
	if(4 <= nota && nota <= 6)
	{
		writeLnString("BUENO");
	}
	if(7 <= nota && nota <= 8)
	{
		writeLnString("MUY BUENO");
	}






	return 0;
}
