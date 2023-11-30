#include "Pajaro.h"


Pajaro::Pajaro()
{
	coordenadasX = 25;
	coordenadasY = 12;
	alto=5;
	ancho=12;
	
	
	/*
	cout<<"\t       (??\n";
	cout<<"\t    (cc.c***\n";
	cout<<"\t  (c.cccc****>\n";
	cout<<"\t   (cc.cc.cc/\n";
	cout<<"\t       ^^^";		
	cout<<"\n\n\n\n\n";
	*/
}
int Pajaro::getAlto()
{
	return alto;
}
int Pajaro::getAncho()
{
	return ancho;
}
int Pajaro::getCoordenadasX()
{
	return coordenadasX;
}
int Pajaro::getCoordenadasY()
{
	return coordenadasY;
}
void Pajaro::setCoordenadasY(int y){
	coordenadasY = y;
}

void Pajaro::volar()
{
	setCoordenadasY(getCoordenadasY()-4);
}
void Pajaro::caer()
{
	setCoordenadasY(getCoordenadasY()+ 1);
}
Pajaro::~Pajaro()
{
}
