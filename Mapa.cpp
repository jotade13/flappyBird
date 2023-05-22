#include "Mapa.h"
#include <iostream>
#include <stdlib.h>
using namespace std;


Mapa::Mapa()
{	
}

void Mapa::dibujarLimites()
{	
	for(int i=0;i<2;i++)
	{
		for (int j=0;j<128;j++)
		{		
				cout<<"_";
		}	
	}
}

void Mapa::dibujarTodo()
{
	system("cls");
	dibujarLimites();
	for (int i=0;i<26;i++)
	{
		cout<<"\n";
	}
	dibujarLimites();	
}

Mapa::~Mapa()
{
}

