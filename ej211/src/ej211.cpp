//============================================================================
// Name        : ej200.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "includes\aye.h"

int suma(int, int);

int main() {
	int num1, num2;

	num1 = 10;
	num2 = 20;

	writeLnInteger(suma(num1, num2));

	num1 = 10;
	num2 = 20;

	writeLnInteger(suma(num2, num1));


	writeLnInteger(suma(suma(num2, num1), suma(num1, num2)));

}

int suma(int num1, int num2){
	return num1 + num2;
}
