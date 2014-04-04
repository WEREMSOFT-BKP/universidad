//============================================================================
// Name        : ej132.cpp
// Author      : Pablo Weremczuk
// Version     :
// Copyright   : Use at your own risk
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "includes\aye.h"

int main()
{
	int edad,
		contador1,
		contador2,
		contador3,
		contador4,
		contador5,
		contador6,
		contador7,
		contador8;

	contador1 = contador2
			  = contador3
			  = contador4
			  = contador5
			  = contador6
			  = contador7
			  = contador8 = 0;

	writeLnString("Ingrese una edad: ");
	readInteger(edad);

	while(edad != 0)
	{
		switch(edad)
		{
		case 18:
			contador1++;
			break;
		case 19:
			contador2++;
			break;
		case 20:
			contador3++;
			break;
		case 21:
			contador4++;
			break;
		case 22:
			contador5++;
			break;
		case 23:
			contador6++;
			break;
		case 24:
			contador7++;
			break;
		case 25:
			contador8++;
			break;
		}

		writeLnString("Ingrese una edad: ");
		readInteger(edad);
	}

	writeString("Cantidad de edades iguales a 18: ");
	writeLnInteger(contador1);

	writeString("Cantidad de edades iguales a 19: ");
	writeLnInteger(contador2);

	writeString("Cantidad de edades iguales a 20: ");
	writeLnInteger(contador3);

	writeString("Cantidad de edades iguales a 21: ");
	writeLnInteger(contador4);

	writeString("Cantidad de edades iguales a 22: ");
	writeLnInteger(contador5);

	writeString("Cantidad de edades iguales a 23: ");
	writeLnInteger(contador6);

	writeString("Cantidad de edades iguales a 24: ");
	writeLnInteger(contador7);

	writeString("Cantidad de edades iguales a 25: ");
	writeLnInteger(contador8);

	return 0;
}
