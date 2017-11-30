#ifndef _BOMB_HPP_
#define _BOMB_HPP_

#include <ctime>
#include <SFML/Graphics.hpp>
#include "Mapa.hpp"
#include "Textura.hpp"


class Bomb: public Textura
{
	/*
	int time; //tiempo para detonar
	bool in_screen;
	//posicion
	int range; // se abre en x e y
	*/	
	private:
	int x1, y1;
	double timer;
	int cont;
	int tamano;// = 3;
	bool estado = false;

public:
	Bomb();
	Bomb(int x1,int y1,double time);
	void setx1(int x1);
	void sety1(int y1);
	void setTime(double time);
	int getx1();
	int gety1();
	double getTime();
	void colocar(Mapa m1);
	void tiempo(Mapa m1);
	void explotar(Mapa m1);
	void animacion(Mapa m1);
	void desaparecer(Mapa m1);
	void colision();


	
};




#endif
