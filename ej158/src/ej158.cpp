//Ejercicio TRES MENORES
#include "includes/aye.h"

int main() {
	short n, menor1, menor2, menor3;
	int cont;

	writeLnString("Ingrese valores positivos para encontrar los 3 menores, finalice el ingreso de datos con 0");

	cont = 0;
	writeString("Ingrese un número entero: ");
	readShort(n);

	while (n != 0) {
		if (n < menor1  || cont == 0) {
			menor3 = menor2;
			menor2 = menor1;
			menor1 = n;
		} else if (n < menor2 || cont == 1) {
			menor3 = menor2;
			menor2 = n;
		} else if (n < menor3 || cont == 2) {
			menor3 = n;
		}
		cont++;
		writeString("Ingrese un número entero: ");
		readShort(n);
	}

	if(cont < 3){
		writeLnString("No hay suficientes valores para determinar 3 menores.");
	}

	if(cont >= 1)
	{
		writeString("El ultimo es: ");
		writeLnShort(menor1);
	}

	if(cont >= 2)
	{
		writeString("El penultimo es: ");
		writeLnShort(menor2);
	}

	if(cont >= 3)
	{
		writeString("El antepenultimo es: ");
		writeLnShort(menor3);
	}
}
