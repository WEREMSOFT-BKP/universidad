//============================================================================
// Name        : ej330.cpp
// Author      : Pablo Weremczuk
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "includes/aye.h"

typedef struct Reg{
	char apellido[20];
	short edad;
	char fech_nac[8];
	long dni;
	float deuda;
};

void mostrar_contenidos(ARCHIVO arch);
void grabar_registros(ARCHIVO arch);

int main() {
	ARCHIVO arch;

	arch = fopen("c:\\personas.dat", "r+");
	grabar_registros(arch);
	mostrar_contenidos(arch);
	fclose(arch);
}

void mostrar_contenidos(ARCHIVO arch){
	writeLnString("mostrando contenidos");
	Reg reg_a;
	seekFile(arch, reg_a, 0);
	while(!feof(arch)){
		readFile(reg_a, arch);
		writeLnString("apelllido: ");
		writeCharString(reg_a.apellido);
		writeLnString("edad: ");
		writeShort(reg_a.edad);
		writeLnString("fecha nacimiento: ");
		writeCharString(reg_a.fech_nac);
		writeLnString("dni: ");
		writeLong(reg_a.dni);
	}
	writeLnString("contenidos mostrados");
}

Reg ingresar_registro(){
	Reg ret_val;
	writeLnString("Ingrese el apellido");
	readCharString(ret_val.apellido);
	if(strlen(ret_val.apellido) > 0){
		writeLnString("Ingrese la edad");
		readShort(ret_val.edad);

		writeLnString("Ingrese la fecha de nacimiento mmddaaaa");
		readCharString(ret_val.fech_nac);

		writeLnString("Ingrese el dni");
		readLong(ret_val.dni);

		writeLnString("Ingrese la deuda");
		readFloat(ret_val.deuda);
	}

	return ret_val;
}

void grabar_registros(ARCHIVO arch){
	Reg reg_a;

	reg_a = ingresar_registro();

	while(strlen(reg_a.apellido) > 0){
		writeLnString("grabando registro...");
		writeFile(reg_a, arch);
		reg_a = ingresar_registro();
		writeLnString("registro grabado");
	}
}

