/*
 * miscFunctions.h
 *
 *  Created on: Oct 21, 2014
 *      Author: pweremcz
 */

#ifndef MISCFUNCTIONS_H_
#define MISCFUNCTIONS_H_

void delay(int seconds);
char getCasilleroXY(int x, int y, Laberinto *pLaberinto);
int putCasilleroXY(int x, int y, char pCaracter, Laberinto *pLaberinto);
int putCasilleroXYScreen(int x, int y, char pCaracter, Scope *pScope);
void flushScreen(Scope *pScope);
void inicializar(Scope *pScope);

#endif /* MISCFUNCTIONS_H_ */
