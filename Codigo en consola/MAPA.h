#pragma once

#define MAPA
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <Windows.h>
#include <string>
#include "Jugador.h"

using namespace std;


class Mapa {
public:
	string **matriz;
	int ancho, alto;
public:
	HANDLE 	h = GetStdHandle(STD_OUTPUT_HANDLE);
	friend ostream& operator << (ostream& out, Mapa& mapa);
	friend class Bomb;
	Mapa();
	Mapa(int ancho, int alto);
	void inMatriz();
	void setAncho(int ancho);
	void setAlto(int alto);
	int getAncho();
	int getAlto();
	void imprimir();
	void crearBloques();
	void crearMapa();
	void movimiento(player x1);
	void terminarJuego();
	void rastro(player x1);
};

//ostream& operator << (ostream& out,Mapa& mapa){
/*for (int i = 0; i < mapa.getAlto(); i++) {
for (int j = 0; j < mapa.getAncho(); j++) {
out << mapa.matriz[i][j] << " ";
}
out << endl;
}*/
//	return out;
//}
