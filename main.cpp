#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include "Mapa.h"
#include "Pajaro.h"



using namespace std;

void menu();
void textoOpciones();
void configuraciones();


int main(){
	configuraciones();
			
	menu();
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
		Mapa mapa();
		mapa.dibujarTodo();
		system("pause");
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
void configuraciones()
{
	SMALL_RECT rect;
	COORD coord;
  	coord.X = 128; // Definiendo X y
  	coord.Y = 34;  // Y para el tamaño del búfer.

  	rect.Top = 0;
  	rect.Left = 0;
  	rect.Bottom = coord.Y-1; // Altura para ventana
  	rect.Right = coord.X-1;  // Ancho para ventana

  	HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
  	SetConsoleScreenBufferSize(hwnd, coord);       // Establece tamaño del búfer
  	SetConsoleWindowInfo(hwnd, TRUE, &rect); 
}
