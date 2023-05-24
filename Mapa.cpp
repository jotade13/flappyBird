#include "Mapa.h"
#include <iostream>
#include <stdlib.h>
#include "Pajaro.h"
using namespace std;

Mapa::Mapa()
{
	
}
Mapa::Mapa(Pajaro pajaro)
{
	filTotal = 32;
	colTotal = 128;
	for(int i=0;i<filTotal;i++)
	{
		for(int j=0;j<colTotal;j++)
		{
			if(i==0||i==1||i==31||i==30)
			{
				matriz[i][j]='_';
			}else
			{
				matriz[i][j]='0';
			}	
		}	
	}
	matPajaro="00000(??0000","00(cc.c***00","(c.cccc****>","0(cc.cc.cc/0","00000^^^0000";
}
void Mapa::dibujarPajaro(int coordenadasX,int coordenadasY)
{
	for(int i=0;i<pajaro.getAlto();i++)
	{
		for(int j=0;j<pajaro.getAncho();j++)
		{
			
		}
	}
		
}

void Mapa::dibujarTodo()
{
	system("cls");
	system("pause");
	system("cls");
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

