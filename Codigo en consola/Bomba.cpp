#include "Bomba.h"

Bomb::Bomb() {
}
Bomb::Bomb(int x1, int y1) {
	this->x1 = x1;
	this->y1 = y1;
}
void Bomb::setx1(int x1) {
	this->x1 = x1;
}
void Bomb::sety1(int y1) {
	this->y1 = y1;
}

int Bomb::getx1() {
	return this->x1;
}
int Bomb::gety1() {
	return this->y1;
}

void Bomb::colocar(Mapa m1) {
	m1.matriz[x1][y1] = "4";
	tiempo(m1);
}
void Bomb::tiempo(Mapa m1) {
	time_t cont1, cont2;
	time(&cont1);
	cont2 = cont1 + 3;
	while (estado == false)
	{
		time(&cont1);
		if (difftime(cont2, cont1) == 0) {
			estado = true;
			explotar(m1);
		}
	}

}
void Bomb::explotar(Mapa m1) {
	cout << "BOOMMMM!!" << endl;
	animacion(m1);

}
void Bomb::animacion(Mapa m1) {
	m1.matriz[x1][y1] = "5";
	for (int i = 0; i <= tamano; i++) {
		if (m1.matriz[x1][y1 + i] == "1") {
			break;
		}
		if (m1.matriz[x1][y1+i] == "B"|| m1.matriz[x1][y1+i] == "A") {
			colision = true;
			cout << "Murio un jugador" << endl;
		}
		if (m1.matriz[x1][y1 + i] == "2") {
			m1.matriz[x1][y1 + i] = "5";
			break;
		}
		m1.matriz[x1][y1 + i] = "5";
	}
	for (int i = 0; i <= tamano; i++) {
		if (m1.matriz[x1][y1 - i] == "1") {
			break;
		}
		if (m1.matriz[x1][y1-i] == "B"|| m1.matriz[x1][y1 - i] == "A") {
			colision = true;
			cout << "Murio un jugador" << endl;
		}
		if (m1.matriz[x1][y1 - i] == "2") {
			m1.matriz[x1][y1 - i] = "5";
			break;
		}
		m1.matriz[x1][y1 - i] = "5";
	}
	for (int i = 0; i <= tamano; i++) {
		if (m1.matriz[x1 + i][y1] == "1") {
			break;
		}
		if (m1.matriz[x1 + i][y1] == "B"|| m1.matriz[x1 + i][y1] == "A") {
			colision = true;
			cout << "Murio un jugador" << endl;
		}
		if (m1.matriz[x1 + i][y1] == "2") {
			m1.matriz[x1 + i][y1] = "5";
			break;
		}
		m1.matriz[x1 + i][y1] = "5";
	}
	for (int i = 0; i <= tamano; i++) {
		if (m1.matriz[x1 - i][y1] == "1") {
			break;
		}
		if (m1.matriz[x1 - i][y1] == "B"|| m1.matriz[x1 - i][y1] == "A") {
			colision = true;
			cout << "Murio un jugador" << endl;
		}
		if (m1.matriz[x1 - i][y1] == "2") {
			m1.matriz[x1 - i][y1] = "5";
			break;
		}

		m1.matriz[x1 - i][y1] = "5";
	}
	cout << endl << endl;
	desaparecer(m1);
}
void Bomb::desaparecer(Mapa m1) {
	m1.matriz[x1][y1] = "0";
	for (int i = 0; i <= tamano; i++) {
		if (m1.matriz[x1][y1 + i] == "5") {
			m1.matriz[x1][y1 + i] = "0";
		}
	}
	for (int i = 0; i <= tamano; i++) {
		if (m1.matriz[x1][y1 - i] == "5") {
			m1.matriz[x1][y1 - i] = "0";
		}
	}
	for (int i = 0; i <= tamano; i++) {
		if (m1.matriz[x1 + i][y1] == "5") {
			m1.matriz[x1 + i][y1] = "0";
		}
	}
	for (int i = 0; i <= tamano; i++) {
		if (m1.matriz[x1 - i][y1] == "5") {
			m1.matriz[x1 - i][y1] = "0";
		}
	}
}



