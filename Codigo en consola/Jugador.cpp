#include "Jugador.h"
#include <iostream>

player::player() {
}
player::player(int posX, int posY,string jug) {
	this->posX = posX;
	this->posY = posY;
	this->jug = jug;
}



void player::movimiento() {
	int cTecla;
	char var;
		var = _getch();
		cTecla = int(var);
		if (cTecla == 119) {
			posX--;
		}
		else if (cTecla == 115) {
			posX++;
		}
		else if (cTecla == 97) {
			posY--;
		}
		else if (cTecla == 100) {
			posY++;
		}
		else if (cTecla == 32) {
			crearBomba=true;
		}
}
