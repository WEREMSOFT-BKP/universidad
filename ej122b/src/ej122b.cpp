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


	switch(nota)
	{
		case 1:
		case 2:
		case 3:
			writeLnString("INSUFICIENTE");
			break;
		case 4:
		case 5:
		case 6:
			writeLnString("BUENO");
			break;
		case 7:
		case 8:
			writeLnString("MUY BUENO");
	}






	return 0;
}
