#ifndef Bomba
#define Bomba
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <ctime>
#include "MAPA.h"

using namespace std;

class Bomb {
private:
	int x1, y1;
	double timer;
	int cont;
	int tamano = 1;
	bool estado = false;

public:
	Bomb();
	Bomb(int x1, int y1);
	void setx1(int x1);
	void sety1(int y1);
	int getx1();
	int gety1();
	void colocar(Mapa m1);
	void tiempo(Mapa m1);
	void explotar(Mapa m1);
	void animacion(Mapa m1);
	void desaparecer(Mapa m1);
	bool colision=false;

};








#endif
