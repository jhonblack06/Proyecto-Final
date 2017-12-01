#pragma once
#ifndef JUGADOR
#define JUGADOR
#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>


using namespace std;

class player {
public:
	string jug;
	bool vida=true;
	int posX, posY;
public:
	player();
	player(int posX, int posY,string jug);
	void movimiento();
	bool crearBomba=false;
};

#endif