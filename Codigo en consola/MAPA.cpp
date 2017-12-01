#include "MAPA.h"

Mapa::Mapa() {
}
Mapa::Mapa(int ancho, int alto) {
	this->ancho = ancho;
	this->alto = alto;
	inMatriz();
}
void Mapa::inMatriz() {
	matriz = new string*[alto];
	for (int i = 0; i<alto; i++) {
		matriz[i] = new string[ancho];
	}
}
void Mapa::setAncho(int ancho) {
	this->ancho = ancho;
}
void Mapa::setAlto(int alto) {
	this->alto = alto;
}
int Mapa::getAncho() {
	return this->ancho;
}
int Mapa::getAlto() {
	return this->alto;
}
void Mapa::crearMapa() {
	for (int i = 0; i < alto; i++) {
		for (int j = 0; j < ancho; j++) {
			matriz[i][j] = "0";
			if ((i + j) % 2 == 0) {
				matriz[i][j] = "1";
			}
			if (i % 2 == 1) {
				matriz[i][j] = "0";
			}
			if (j % 2 == 1) {
				matriz[i][j] = "0";
			}
			if (i == 0 || i == alto - 1) {
				matriz[i][j] = "1";
			}
			if (j == 0 || j == ancho - 1) {
				matriz[i][j] = "1";
			}
		}
	}/*
	 cout << "el numero total de bloques generados es: " << cont << endl;
	 int x , y ;
	 for (x = 120; x < 780; x = x + 120) {
	 for (y = 120; y < 660; y = y + 120) {
	 cout << "la coordenada es" << x << ";" << y << endl;
	 }
	 }
	 for (int i = 0; i < 900; i += 60) {
	 y = 0;
	 x = i;
	 cout << "la coordenada es" << x << ";" << y << endl;
	 y = 840;
	 cout << "la coordenada es" << x << ";" << y << endl;
	 for (int i = 0; i < 780; i += 60) {
	 x = 0;
	 y = i;
	 cout << "la coordenada es" << x << ";" << y << endl;
	 x = 720;
	 cout << "la coordenada es" << x << ";" << y << endl;
	 }*/
}
void Mapa::imprimir() {

	for (int i = 0; i < alto; i++) {
		for (int j = 0; j < ancho; j++) {
			if (matriz[i][j] == "1") {
				SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				cout << " " << matriz[i][j] << " ";

			}
			if (matriz[i][j] == "0") {
				SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				cout << " " << matriz[i][j] << " ";

			}
			if (matriz[i][j] == "2") {
				SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
				cout << " " << matriz[i][j] << " ";
			}
			if (matriz[i][j] == "A") {
				SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
				cout << " " << matriz[i][j] << " ";
			}
			if (matriz[i][j] == "B") {
				SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
				cout << " " << matriz[i][j] << " ";
			}
			//cout << " " << matriz[i][j] << " ";

		}
		cout << endl;
	}
}
void Mapa::crearBloques() {
	srand(time(NULL));
	for (int i = 1; i < alto - 1; i++) {
		for (int j = 3; j < ancho - 3; j++) {
			int x = rand() % 3;
			//cout << x <<endl;
			if (x >0 && matriz[i][j] != "1") {
				matriz[i][j] = "2";
			}
		}
	}
	for (int i = 3; i < alto - 3; i++) {
		for (int j = 1; j < ancho - 1; j++) {
			int x = rand() % 3;
			//cout << x <<endl;
			if (x >0 && matriz[i][j] != "1") {
				matriz[i][j] = "2";
			}
		}
	}
}

void Mapa::terminarJuego() {
	int k, j, i;
	for (k = 1; k < ((alto % 2) ? (alto / 2) + 1 : alto / 2); k++) {
		for (i = j = k; j < (ancho - k); ++j) {
			matriz[i][j] = "1";
			system("cls");
			imprimir();
		}
		for (--j, ++i; i < (alto - k); ++i) {
			matriz[i][j] = "1";
			system("cls");
			imprimir();
		}
		for (--i, --j; j >= k; --j) {
			matriz[i][j] = "1";
			system("cls");
			imprimir();
		}
		for (++j, --i; i > k; --i) {
			matriz[i][j] = "1";
			system("cls");
			imprimir();
		}
	}
}
void Mapa::movimiento(player x1) {
	matriz[x1.posX][x1.posY] = x1.jug;

}
void Mapa::rastro(player x1) {
	matriz[x1.posX][x1.posY] = "0";
}