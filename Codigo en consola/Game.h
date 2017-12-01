#pragma once
#define GAME
#include <iostream>
#include <cstdlib>
#include "MAPA.h"
#include "Bomba.h"
#include "Jugador.h"
using namespace std;

class game {
public:
	void crearventana();
	void implementacion(Mapa m1,player p1);
};