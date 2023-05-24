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
Pajaro::getAlto()
{
	return alto;
}
Pajaro::getAncho()
{
	return ancho;
}
Pajaro::getCoordenadasX()
{
	return coordenadasX;
}
Pajaro::getCoordenadasY()
{
	return coordenadasY;
}
Pajaro::~Pajaro()
{
}
