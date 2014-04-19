//Ejercicio TRES MENORES
#include "includes/aye.h"

int main() {
	short n, menor1 = 101, menor2 = 102, mayor1, mayor2;
	int cont;

	writeLnString("Ingrese valores positivos para encontrar los 2 menores y los 2 mayores, finalice el ingreso de datos con 0");

	cont = 0;
	writeString("Ingrese un número entero: ");
	readShort(n);

	while (n != 0) {
		if (n < menor1  || cont == 1) {
			menor2 = menor1;
			menor1 = n;
		} else if (n < menor2 || cont == 2) {
			menor2 = n;
		}

		if (n > mayor1  || cont == 1) {
			mayor2 = mayor1;
			mayor1 = n;
		} else if (n > mayor2 || cont == 2) {
			mayor2 = n;
		}

		cont++;
		writeString("Ingrese un número entero: ");
		readShort(n);
	}

	if(cont < 3){
		writeLnString("No hay suficientes valores para determinar 3 menores, los resultados parciales son: ");
	}

	if(cont >= 1)
	{
		writeString("El menor es: ");
		writeLnShort(menor1);

		writeString("El mayor es: ");
		writeLnShort(mayor1);

	}

	if(cont >= 2)
	{
		writeString("El segundo menor es: ");
		writeLnShort(menor2);

		writeString("El segundo mayor es: ");
		writeLnShort(mayor2);
	}
}
