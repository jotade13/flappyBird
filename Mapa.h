#ifndef MAPA_H
#define MAPA_H
#include "Pajaro.h"
#include "Tuberias.h"




class Mapa
{
	public:
		Mapa();
		~Mapa();
		void dibujarTodo(int);
		void dibujarPajaro(int,int);
		void borrarPajaro(int,int);
		void pajaroCaer();
		bool getTerminado();
		void dibujarTuberias(int,int);
		void activarTuberia();
		int getNroTub();
		
	private:
		int filTotal;
		int colTotal;
		Pajaro pajaro;
		char matriz[32][128];
		char matPajaro[5][13]= {{'0','0','0','0','0','(','?','?','0','0','0','0'},
								{'0','0','(','c','c','.','c','*','*','*','0','0'},
								{'(','c','.','c','c','c','c','*','*','*','*','>'},
								{'0','(','c','c','.','c','c','.','c','c','/','0'},
								{'0','0','0','0','0','^','^','^','0','0','0','0'}
								};
		bool terminado;
		Tuberias tuberias[100];
		int nroTub;		
		//matPajaro= {"00000(??0000","00(cc.c***00","(c.cccc****>","0(cc.cc.cc/0","00000^^^0000"};
};

#endif
