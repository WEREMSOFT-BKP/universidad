//Ejercicio TRES MENORES
#include "includes/aye.h"

int main() {
  	short n, menor1 = 101, menor2 = 102, menor3 = 103;
  	int cont;

  	writeLnString("Ingrese valores positivos para encontrar los 3 menores, finalice el ingreso de datos con 0");

  	cont = 1;
  	writeString("Ingrese un número entero: ");
  	readShort(n);

  	while ((cont <= 3) && (n != 0)) {
         	switch (cont) {
        	case 1:
              	menor1 = n;
              	break;
        	case 2:
              	if (n < menor1) {
                    	menor2 = menor1;
                    	menor1 = n;
              	} else {
                    	menor2 = n;
              	}
              	break;

        	case 3:
              	if (n < menor1) {
                    	menor3 = menor2;
                    	menor2 = menor1;
                    	menor1 = n;
              	} else {
                    	if (n < menor2) {
                         	menor3 = menor2;
                         	menor2 = n;
                    	} else {
                         	menor3 = n;
                    	}
              	}
              	break;
         	default:
              	break;
        	}
        	writeString("Ingrese un número entero: ");
        	readShort(n);
        	cont++;
  	}
   	while (n != 0) {
        	if (n < menor1) {
              	menor3 = menor2;
              	menor2 = menor1;
              	menor1 = n;
        	} else {
              	if (n < menor2) {
                    	menor3 = menor2;
                    	menor2 = n;
              	} else {
                    	if (n < menor3) {
                         	menor3 = n;
                    	}
              	}
        	}
        	writeString("Ingrese un número entero: ");
        	readShort(n);
  	}

  	if(cont > 1)
  	{
		writeString("El menor es: ");
		writeLnShort(menor1);
  	}

  	if(cont > 2)
  	{
		writeString("El segundo menor es: ");
		writeLnShort(menor2);
  	}

  	if(cont > 3)
  	{
		writeString("El antepenúltimo es: ");
		writeLnShort(menor3);
  	}
}
