#ifndef TUBERIAS_H
#define TUBERIAS_H

class Tuberias
{
	public:
		Tuberias();
		~Tuberias();
		int getArriba();
		int getAbajo();
		int getCoordenadasX();
		int getAncho();
		int getAlto();
		void avanzar();
		bool getActiva();
		void setActiva(bool);
	
	private:
		int arriba;
		int abajo;
		int coordenadasX;	
		int ancho;
		int alto;
		bool activa;
};

#endif
