/*
 * heroFunctions.h
 *
 *  Created on: Oct 21, 2014
 *      Author: pweremcz
 */

#ifndef HEROFUNCTIONS_H_
#define HEROFUNCTIONS_H_

void resolverLaberinto(Laberinto *pLaberinto);
void avanzar(Heroe *pHeroe);
char mirarALaDerecha(Scope *pScope);
char mirarALaIzquierda(Scope *pScope);
char mirarAdelante(Scope *pScope);
void girarALaDerecha(Heroe *pHeroe);
void girarALaIzquierda(Heroe *pHeroe);
void girarAciaAtras(Heroe *pHeroe);

#endif /* HEROFUNCTIONS_H_ */
