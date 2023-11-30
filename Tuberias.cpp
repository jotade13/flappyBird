#include "Tuberias.h"
#include<stdlib.h>
#include<time.h>

Tuberias::Tuberias()
{
	int diferencia = 10; //espacio entre las tuberias
	int numAleatorio = 3+rand()%(20-3);
	arriba = numAleatorio;
	abajo = numAleatorio + diferencia;	
}
Tuberias::getArriba()
{
	return arriba;
}
Tuberias::getAbajo()
{
	return abajo;
}
Tuberias::getCoordenadasX()
{
	return coordenadasX;
}
Tuberias::~Tuberias()
{
}
