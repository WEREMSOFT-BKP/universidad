#include "../includes/tipos.h"
#include "../includes/miscFunctions.h"
#include <conio.h>

void resolverLaberinto(Laberinto *pLaberinto)
{
	printf("Se seleccionó resolver laberinto. Presione una tecla.\n\n");
	getch();
}

void avanzar(Heroe *pHeroe)
{
	switch(pHeroe->orientacion)
	{
	case SUR:
		pHeroe->velocidadY = 1;
		pHeroe->velocidadX = 0;
		break;
	case NORTE:
		pHeroe->velocidadY = -1;
		pHeroe->velocidadX = 0;
		break;
	case ESTE:
		pHeroe->velocidadY = 0;
		pHeroe->velocidadX = 1;
		break;
	case OESTE:
		pHeroe->velocidadY = 0;
		pHeroe->velocidadX = -1;
		break;
	}
	pHeroe->x += pHeroe->velocidadX;
	pHeroe->y += pHeroe->velocidadY;
}

char mirarALaDerecha(Scope *pScope)
{
	char casillero;
	switch(pScope->heroe.orientacion)
	{
	case SUR:
		casillero = getCasilleroXY(pScope->heroe.x - 1, pScope->heroe.y, &pScope->laberinto);
		break;
	case NORTE:
		casillero = getCasilleroXY(pScope->heroe.x + 1, pScope->heroe.y, &pScope->laberinto);
		break;
	case ESTE:
		casillero = getCasilleroXY(pScope->heroe.x, pScope->heroe.y + 1, &pScope->laberinto);
		break;
	case OESTE:
		casillero = getCasilleroXY(pScope->heroe.x, pScope->heroe.y - 1, &pScope->laberinto);
		break;
	}
	return casillero;
}

char mirarALaIzquierda(Scope *pScope)
{
	char casillero;
	switch(pScope->heroe.orientacion)
	{
	case SUR:
		casillero = getCasilleroXY(pScope->heroe.x + 1, pScope->heroe.y, &pScope->laberinto);
		break;
	case NORTE:
		casillero = getCasilleroXY(pScope->heroe.x - 1, pScope->heroe.y, &pScope->laberinto);
		break;
	case ESTE:
		casillero = getCasilleroXY(pScope->heroe.x, pScope->heroe.y - 1, &pScope->laberinto);
		break;
	case OESTE:
		casillero = getCasilleroXY(pScope->heroe.x, pScope->heroe.y + 1, &pScope->laberinto);
		break;
	}
	return casillero;
}

char mirarAdelante(Scope *pScope)
{
	char casillero;
	switch(pScope->heroe.orientacion)
	{
	case SUR:
		casillero = getCasilleroXY(pScope->heroe.x, pScope->heroe.y + 1, &pScope->laberinto);
		break;
	case NORTE:
		casillero = getCasilleroXY(pScope->heroe.x, pScope->heroe.y - 1, &pScope->laberinto);
		break;
	case ESTE:
		casillero = getCasilleroXY(pScope->heroe.x + 1, pScope->heroe.y, &pScope->laberinto);
		break;
	case OESTE:
		casillero = getCasilleroXY(pScope->heroe.x - 1, pScope->heroe.y, &pScope->laberinto);
		break;
	}
	return casillero;
}

void girarALaDerecha(Heroe *pHeroe)
{
	switch(pHeroe->orientacion)
		{
		case SUR:
			pHeroe->orientacion = OESTE;
			break;
		case NORTE:
			pHeroe->orientacion = ESTE;
			break;
		case ESTE:
			pHeroe->orientacion = SUR;
			break;
		case OESTE:
			pHeroe->orientacion = NORTE;
			break;
		}
}

void girarALaIzquierda(Heroe *pHeroe)
{
	switch(pHeroe->orientacion)
		{
		case SUR:
			pHeroe->orientacion = ESTE;
			break;
		case NORTE:
			pHeroe->orientacion = OESTE;
			break;
		case ESTE:
			pHeroe->orientacion = NORTE;
			break;
		case OESTE:
			pHeroe->orientacion = SUR;
			break;
		}
}

void girarAciaAtras(Heroe *pHeroe)
{
	switch(pHeroe->orientacion)
		{
		case SUR:
			pHeroe->orientacion = NORTE;
			break;
		case NORTE:
			pHeroe->orientacion = SUR;
			break;
		case ESTE:
			pHeroe->orientacion = OESTE;
			break;
		case OESTE:
			pHeroe->orientacion = ESTE;
			break;
		}
}
