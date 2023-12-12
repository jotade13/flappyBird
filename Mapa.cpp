#include "Mapa.h"
#include <iostream>
#include <stdlib.h>
#include <Unistd.h>
#include "Pajaro.h"
#include "Tuberias.h"
#include "conio.h"

using namespace std;


Mapa::Mapa()
{
	nroTub = 0;
	filTotal = 32;
	colTotal = 128;
	for(int i=0;i<filTotal;i++)
	{
		for(int j=0;j<colTotal;j++)
		{
			if(i==31)
			{
				matriz[i][j]='*';
			}else
			{
				matriz[i][j]='0';
			}	
		}	
	}
	terminado = false;
}
void Mapa::dibujarPajaro(int coordenadasX,int coordenadasY)
{
	for(int i=coordenadasY;i<coordenadasY+pajaro.getAlto();i++)
	{
		for(int j=coordenadasX;j<coordenadasX+pajaro.getAncho();j++)
		{
			if(i>=0)
			{
				if(matriz[i][j]=='0')
				{
					
						matriz[i][j]=matPajaro[i-coordenadasY][j-coordenadasX];	
				}else
				{
					terminado = true;
					return;
				}
			}
		}
	}	
}
void Mapa::borrarPajaro(int coordenadasX,int coordenadasY)
{
	for(int i=coordenadasY;i<coordenadasY+pajaro.getAlto();i++)
	{
		for(int j=coordenadasX;j<coordenadasX+pajaro.getAncho();j++)
		{
			matriz[i][j]='0';
		}
	}	
}

void Mapa::dibujarTodo(int n)
{
	system("cls");
	borrarPajaro(pajaro.getCoordenadasX(),pajaro.getCoordenadasY());
	if(n==1)
	{
		pajaro.volar();
	}else
	{
		pajaro.caer();
	}
	dibujarPajaro(pajaro.getCoordenadasX(),pajaro.getCoordenadasY());
	for(int i=0;i<filTotal;i++)
	{
		for(int j=0;j<colTotal;j++)
		{
		
			if(matriz[i][j]=='0')
			{
				cout<<" ";
			}else
			{
				cout<<matriz[i][j];
			}
		}
		cout<<endl;
	}
}
bool Mapa::getTerminado()
{
	return terminado;
}
void Mapa::dibujarTuberias(int arriba,int abajo)
{
	for(int i=0;i<arriba;i++)
	{
		matriz[i][128]=='*';
	}
	for(int i=abajo;i<filTotal;i++)
	{
		matriz[i][128]=='*';
	}
}
void Mapa::activarTuberia()
{
	tuberias[nroTub].setActiva(true);
}
Mapa::~Mapa()
{
}

