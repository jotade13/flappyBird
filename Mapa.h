#ifndef MAPA_H
#define MAPA_H
#include "Pajaro.h"



class Mapa
{
	public:
		Mapa();
		Mapa(Pajaro);
		~Mapa();
		void dibujarTodo();
		void dibujarPajaro(int,int);
		
	private:
		int filTotal;
		int colTotal;
		char matriz[32][128];
		char* matPajaro;
	
};

#endif
