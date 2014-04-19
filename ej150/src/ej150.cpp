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
	unsigned int i;
	float t, tMax;
	long fecha, fechaMax;

	for(i = 1; i <= 8640; i++){
		writeLnString("Ingrese Temperatura");
		readFloat(t);

		writeLnString("Ingrese Hora, Dia, Mes en formato HHDDMM");
		readLong(fecha);

		if(t > tMax || i == 1){
			tMax = t;
			fechaMax = fecha;
		}
	}

	writeString("Temperatura Maxima: ");
	writeLnFloat(tMax);

	writeLnString("Registrada: ");
	writeString("Mes: ");
	writeLnLong(fechaMax % 100);

	writeString("Dia: ");
	writeLnLong((fechaMax %10000) / 100);

	writeString("Hora: ");
	writeLnLong(fechaMax / 10000);
}
