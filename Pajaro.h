#ifndef PAJARO_H
#define PAJARO_H

class Pajaro
{
	public:
		Pajaro();
		~Pajaro();
		int getCoordenadasX();
		int getCoordenadasY();
		void setCoordenadasy(int);
		int getAlto();
		int getAncho();
		
		
	private:
		int coordenadasX;
		int coordenadasY;
		int alto;
		int ancho;
		
};

#endif
