#include "Menu.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

Menu::Menu()
{
	int opcion;
	do
	{
		textoOpciones();
		cin>>opcion;
	}while(opcion!=1&&opcion!=2);
	
	if(opcion==1)
	{
		exit(0);
	}else
	{
		
	}
}

Menu::~Menu()
{
}
Menu::textoOpciones()
{
	system("cls");
		cout<<"*********************************************************\n";
		cout<<"*******************Menu Principal************************\n";
		cout<<"***\t\t\t\t\t\t      ***\n";			
		cout<<"**		1. Jugar\t\t\t       **\n";
		cout<<"**		2. Salir\t\t\t       **\n";
		cout<<"***\t\t\t\t\t\t      ***\n";
		cout<<"*********************************************************\n";
		cout<<"*********************************************************\n";
		cout<<"Seleccione la opcion y pulse enter:  ";
}

