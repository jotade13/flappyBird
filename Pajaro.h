#ifndef PAJARO_H
#define PAJARO_H

class Pajaro
{
	public:
		Pajaro();
		~Pajaro();
		int getCoordenadasX();
		int getCoordenadasY();
		void setCoordenadasY(int);
		int getAlto();
		int getAncho();
		void volar();
		void caer();
		
		
	private:
		int coordenadasX;
		int coordenadasY;
		int alto;
		int ancho;
		
};

#endif
