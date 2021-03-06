//============================================================================
// Name        : ej218.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include "includes\aye.h"

string ingresarNombre();
void ingresarDatos(short VAR destino, float VAR kgDeEquipaje);
void hayExeso(float);
float porcentaje(float A, float B);

int main() {
	string nombre;
	short destino;
	float kgDeEquipaje, totalKG;
	int cont, rosario, cordoba, sLuis;

	cont = 0;
	rosario = 0;
	cordoba = 0;
	sLuis = 0;
	totalKG = 0;

	nombre = ingresarNombre();

	while(nombre != ""){
		ingresarDatos(destino, kgDeEquipaje);
		switch(destino){
		case 1:
			rosario++;
			break;
		case 2:
			cordoba++;
			break;
		case 3:
			sLuis++;
			break;
		}

		totalKG += kgDeEquipaje;
		cont++;
		nombre = ingresarNombre();
	}

	writeString("Porcentaje de pasajeros a Rosario: ");
	writeLnFloat(porcentaje(rosario, cont));

	writeString("Porcentaje de pasajeros a Cordoba: ");
	writeLnFloat(porcentaje(cordoba, cont));

	writeString("Porcentaje de pasajeros a San Luis: ");
	writeLnFloat(porcentaje(sLuis, cont));

	writeString("kg promedio de equipaje por pasajero: ");
	writeLnFloat(totalKG/cont);
}

string ingresarNombre(){
	string nombre;
	writeLnString("ingrese el nombre (ENTER para terminar)");
	readString(nombre);
	return nombre;
}

void ingresarDatos(short VAR destino, float VAR kgDeEquipaje)
{

		writeLnString("Ingrese destino(1 para Rosario, 2 Cordoba, 3 San Luis)");
		readShort(destino);

		writeLnString("Ingrese los Kg de equipaje:");
		readFloat(kgDeEquipaje);

		hayExeso(kgDeEquipaje);
}

float porcentaje(float A, float B){
	return (A/B) * 100;
}

void hayExeso(float kgEquipaje){
	if(kgEquipaje > 20){
		writeString("Exeso de equipaje por ");
		writeLnFloat(kgEquipaje - 20);
	}
}
