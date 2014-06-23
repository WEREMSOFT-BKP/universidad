/*
 * aye.h
 *
 *  Created on: 24/03/2014
 *      Author: Juan
 */

#ifndef AYE_H_
#define AYE_H_

#include <string>
#include <stdio.h>

#define VAR &
#define ARCHIVO FILE*

#define writeFile(registro, archivo) fwrite(&registro, sizeof(registro), 1, archivo)
#define readFile(registro, archivo) fread(&registro, sizeof(registro), 1, archivo)


#define writeShort(x) printf("%i", x)
#define writeLnShort(x) printf("%i\n", x)

#define writeUnsignedShort(x) printf("%u", x)
#define writeLnUnsignedShort(x) printf("%u\n", x)

#define writeInteger(x) printf("%i", x)
#define writeLnInteger(x) printf("%i\n", x)

#define writeUnsignedInteger(x) printf("%u", x)
#define writeLnUnsignedInteger(x) printf("%u\n", x)

#define writeLong(x) printf("%i", x)
#define writeLnLong(x) printf("%i\n", x)

#define writeUnsignedLong(x) printf("%u", x)
#define writeLnUnsignedLong(x) printf("%u\n", x)

#define writeFloat(x) printf("%5.2f", x)
#define writeLnFloat(x) printf("%5.2f\n", x)

#define writeDouble(x) printf("%5.2f", x)
#define writeLnDouble(x) printf("%5.2f\n", x)

#define writeChar(x) printf("%c", x)
#define writeLnChar(x) printf("%c\n", x)

#define readLn() fgetc(stdin)


using namespace std;

void readShort(short VAR enteroCorto);
void readUnsignedShort(unsigned short VAR enteroCortoSinSigno);
void readInteger(int VAR entero);
void readUnsignedInteger(unsigned int VAR enteroSinSigno);
void readLong(long VAR enteroLargo);
void readUnsignedLong(unsigned long VAR enteroLargoSinSigno);
void readFloat(float VAR real);
void readDouble(double VAR real);

void readString(string VAR cadena);
void readChar(char VAR caracter);
void readCharString(char cadena[]);

void writeString(string cadena);
void writeLnString(string cadena);

void writeCharString(char cadena[]);
void writeLnCharString(char cadena[]);

#define feof feofAyE

int feofAyE(ARCHIVO archivo);

#define seekFile(archivo, registro, posicion) fseek(archivo, posicion*sizeof(registro), SEEK_SET)

#define posFile(archivo, registro) ftell(archivo)/sizeof(registro)

#define sizeFile(archivo, registro) sizeFileFunction(archivo)/sizeof(registro)

int sizeFileFunction(ARCHIVO archivo);


/*
 * Function: getInteger
 * Usage: int n = getInteger();
 * ----------------------------------
 * Reads a complete line from cin and scans it as an integer. If the scan
 * succeeds, the integer value is returned. If the argument is not a legal
 * integer or if extraneous characters (other than whitespace) appear in
 * the string, the user is given a chance to reenter the value. If
 * supplied, the optional prompt string is printed before reading the
 * value.
 */

int getInteger(string prompt = "");
/*
 * Function: getReal
 * Usage: double x = getReal(prompt);
 * ----------------------------------
 * Reads a complete line from cin and scans it as a floating-point number.
 * If the scan succeeds, the floating-point value is returned.  If the
 * input is not a legal number or if extraneous characters (other than
 * whitespace) appear in the string, the user is given a chance to reenter
 * the value. If supplied, the optional prompt string is printed before
 * reading the value.
 */

double getReal(string prompt = "");

/*
 * Function: getLine
 * Usage: string line = getLine(prompt);
 * -------------------------------------
 * Reads a line of text from cin and returns that line as a string.  The
 * newline character that terminates the input is not stored as part of the
 * return value.  If supplied, the optional prompt string is printed before
 * reading the value.
 */

string getLine(string prompt = "");

#endif /* AYE_H_ */
