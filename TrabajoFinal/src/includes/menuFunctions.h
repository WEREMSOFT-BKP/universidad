/*
 * menuFunctions.h
 *
 *  Created on: Oct 21, 2014
 *      Author: pweremcz
 */

#ifndef MENUFUNCTIONS_H_
#define MENUFUNCTIONS_H_

void processStateMenu(Scope *scope);
void processStateSolving(Scope *scope);
int mostrarMenuYRegistrarOpcion();
void configurar(Config *pConfig);
int mostrarMenuConfigurarVelocidadYRegistrarOpcion();
void configurarVelocidad(Config *pConfig);
#endif /* MENUFUNCTIONS_H_ */
