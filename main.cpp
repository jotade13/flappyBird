#include <iostream>
#include <stdlib.h>
#include "Mapa.h"


using namespace std;

void menu();
void textoOpciones();

int main(){
	system("mode con cols=128 lines=32");
	cout<<"\t      \n";
	cout<<"\t       (??\n";
	cout<<"\t    (cc.c***\n";
	cout<<"\t  (c.cccc****>\n";
	cout<<"\t   (cc.cc.cc/\n";
	cout<<"\t       ^^^";		
	cout<<"\n\n\n\n\n";
			
	//menu();
}

void menu()
{
	int opcion;
	do
	{
		textoOpciones();
		cin>>opcion;
	}while(opcion!=1&&opcion!=2);
	
	if(opcion==1)
	{
		Mapa mapa;
		mapa.dibujarTodo();
	}else
	{
		exit(0);
	}
}
void textoOpciones()
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
