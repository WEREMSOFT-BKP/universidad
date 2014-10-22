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

int mostrarMenuYRegistrarOpcion()
{
	int returnValue;
	printf("Proyecto Simulación de Robots de Rescate\n");
	printf("========================================\n\n");

	printf("0. Salir\n");
	printf("1. Resolver\n");
	printf("2. Configurar\n");
	printf("3. Mostrar Laberinto\n");

	printf("\nSeleccione una opcion: ");
	scanf("%d", &returnValue);
	return returnValue;
}

void processStateMenu(Scope *scope)
{
	scope->opcion = mostrarMenuYRegistrarOpcion();
	switch(scope->opcion)
	{
	case 1:
		resolverLaberinto(scope->laberinto);
		break;
	case 2:
		configurar(scope->laberinto);
		break;
	case 3:
		mostrarLaberinto(scope->laberinto);
		break;
	}
}

void processStateSolving(Scope *scope)
{

}
#endif /* MENUFUNCTIONS_H_ */
