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
				matriz[i][j]='0';	
		}	
	}
	terminado = false;
}
void Mapa::dibujarOBorrarPajaro(bool accion) //accion true dibuja de lo contrario borra
{
	for(int i=pajaro.getCoordenadasY();i<pajaro.getCoordenadasY()+pajaro.getAlto();i++)
	{
		for(int j=pajaro.getCoordenadasX();j<pajaro.getCoordenadasX()+pajaro.getAncho();j++)
		{
			if(accion)
			{
				if(i>=0)
				{
					if(matriz[i][j]=='0')
					{
						
							matriz[i][j]=matPajaro[i-pajaro.getCoordenadasY()][j-pajaro.getCoordenadasX()];	
					}else
					{
						terminado = true;
						return;
					}
				}
			}else
			{
				matriz[i][j]='0';
			}	
		}
	}	
}
void Mapa::dibujarTodo(int n)
{
	system("cls");
	dibujarOBorrarPajaro(false);
	dibujarOBorrarTuberias(false);
	if(n==1)
	{
		pajaro.volar();
	}else
	{
		pajaro.caer();
	}
	for(int i=0;i<nroTubCiclo;i++)
	{
		tuberias[i].avanzar();
	}
	dibujarOBorrarPajaro(true);
	dibujarOBorrarTuberias(true);
	dibujarMapa();
	dibujarSuelo();
}
bool Mapa::getTerminado()
{
	return terminado;
}
void Mapa::dibujarOBorrarTuberias(bool accion) //metodo que dibuja o borra las tuberias depende de la accion en el parametro
{
	for(int k=0;k<nroTubCiclo;k++)
	{
		if(tuberias[k].getActiva())
		{
			for(int i=0;i<tuberias[k].getArriba();i++) //tuberias superiores
			{
				if(accion)
				{
					matriz[i][tuberias[k].getCoordenadasX()]='*'; //pinta tuberias
				}else
				{
					matriz[i][tuberias[k].getCoordenadasX()]='0'; //borra tuberias 
				}
					
			}
			for(int i=tuberias[k].getAbajo();i<filTotal;i++) //tuberias inferiores
			{
				if(accion)
				{
					matriz[i][tuberias[k].getCoordenadasX()]='*'; //pinta 
				}else
				{
					matriz[i][tuberias[k].getCoordenadasX()]='0'; //borra
				}
			}
		}		
	}
}
 
void Mapa::activarTuberia(int nro)
{
	tuberias[nro].setActiva(true);
}
void Mapa::dibujarSuelo()
{
	for(int j=0;j<colTotal;j++)
	{
		cout<<"*";
	}
}
void Mapa::dibujarMapa()
{
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
Mapa::~Mapa()
{
}

