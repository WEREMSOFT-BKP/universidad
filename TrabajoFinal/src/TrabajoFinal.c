/*
 ============================================================================
 Name        : TrabajoFinal.c
 Author      : Pablo Weremczuk
 Version     :
 Description : Trabajo Final: Simulación de robots de rescate.
 Estrategia de resolución:
 El heroe siempre solo puede avanzar o girar. En cada ciclo, realiza las
 siguientes acciones:


 1. Mira hacia su izquierda.
 2. si a su izquierda no hay una pared, gira hacia si izquierda y avanza un casillero.
 3. si a su izquierda si hay una pared, mira hacia adelante.
 4. si hadelante no hay una pared, avanza un casillero
 5. si adelante hay una pared, mira ha su derecha.
 6. si a su derecha no hay pared, gira 90 grados a su derecha y avanza un casillero.
 7. si a su derecha hay una pared, mira hacia atras.
 8. si hacia atras no hay una pared, gira 180 grados y avanza un casillero.
 9. si al mirar cualqueira de los casilleros encuentra la salida, termina la ejecución.
 ============================================================================
 */


#include "includes\tipos.h"
#include "includes\heroFunctions.h"
#include "includes\miscFunctions.h"
#include "includes\labirintFunctions.h"
#include "includes\menuFunctions.h"
#include "includes\stateFunctions.h"

int main(void) {
	Scope scope;

	scope.laberinto.maxAncho = 100;
	scope.laberinto.maxAlto = 100;


	Laberinto *laberinto; //necesito que esta variable este por temas de debug.

	laberinto = &scope.laberinto;

	scope.heroe.orientacion = SUR;
	scope.config.delay = RAPIDO;

	inicializar(&scope);

	do
	{
		switch(scope.state)
		{
		case STATE_MENU:
			processStateMenu(&scope);
			break;
		case STATE_SOLVING:
			processStateSolving(&scope);
			break;
		}

	}while(scope.opcion != 0);
	return 0;
}












