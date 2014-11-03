/*
 * stateFunctions.c
 *
 *  Created on: Nov 1, 2014
 *      Author: pweremcz
 */
#include "../includes/tipos.h"

void passToStateSolving(Scope *scope)
{
	scope->state = STATE_SOLVING;
}

void passToStateMenu(Scope *scope)
{
	scope->state = STATE_MENU;
}
