#include "Tuberias.h"
#include<stdlib.h>
#include<time.h>

Tuberias::Tuberias()
{
	int diferencia = 10; //espacio entre las tuberias
	int numAleatorio = 3+rand()%(20-3);
	arriba = numAleatorio;
	abajo = numAleatorio + diferencia;
	coordenadasX = 127;
	activa= false;
}
int Tuberias::getArriba()
{
	return arriba;
}
int Tuberias::getAbajo()
{
	return abajo;
}
int Tuberias::getCoordenadasX()
{
	return coordenadasX;
}
int Tuberias::getAncho()
{
	return ancho;
}
void Tuberias::avanzar()
{
	if(activa)
	{
		coordenadasX --;
	}
}
bool Tuberias::getActiva()
{
	return activa;
}
void Tuberias::setActiva(bool act)
{
	activa=act;
}
Tuberias::~Tuberias()
{
}
