#include "Bomb.hpp"


Bomb::Bomb() {
	
}
Bomb::Bomb(int x1, int y1, double timer) {
	this->x1 = x1;
	this->y1 = y1;
	this->timer = timer;
	tamano = 3;
}
void Bomb::setx1(int x1) {
	this->x1 = x1;
}
void Bomb::sety1(int y1) {
	this->y1 = y1;
}
void Bomb::setTime(double timer) {
	this->timer = timer;
}
int Bomb::getx1() {
	return this->x1;
}
int Bomb::gety1() {
	return this->y1;
}
double Bomb::getTime() {
	return this->timer;
}
void Bomb::colocar(Mapa m1) {
	m1.matriz[x1][y1] = 4;
	tiempo(m1);
}
void Bomb::tiempo(Mapa m1) {
	time_t cont1,cont2;
	time(&cont1);
	cont2 = cont1 + 3;
	while (estado==false)
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
void Bomb::animacion(Mapa m1) {	//
	m1.matriz[x1][y1] = 5;
	for (int i = 0; i <= tamano; i++) {
		if(m1.matriz[x1][y1 + i]==1){
			break;
		}
		if(m1.matriz[x1][y1 + i]==2){
			m1.matriz[x1][y1 + i] = 5;
			break;
		}
		m1.matriz[x1][y1 + i] = 5;
	}
	for (int i = 0; i <= tamano; i++) {
		if(m1.matriz[x1][y1 - i]==1){
			break;
		}
		if(m1.matriz[x1][y1 - i]==2){
			m1.matriz[x1][y1 - i] = 5;
			break;
		}
		m1.matriz[x1][y1 - i] = 5;
	}
	for (int i = 0; i <= tamano; i++) {
		if(m1.matriz[x1 + i][y1]==1){
			break;
		}
		if(m1.matriz[x1 + i][y1]==2){
			m1.matriz[x1 + i][y1] = 5;
			break;
		}
		m1.matriz[x1 + i][y1] = 5;
	}
	for (int i = 0; i <= tamano; i++) {
		if(m1.matriz[x1 - i][y1]==1){
			break;
		}
		if(m1.matriz[x1 - i][y1]==2){
			m1.matriz[x1 - i][y1] = 5;
			break;
		}
		m1.matriz[x1 - i][y1] = 5;
	}
	cout<<endl<<endl;
	
	//
	
	//
	m1.imprimir();	//
	desaparecer(m1);
}
void Bomb::desaparecer(Mapa m1) {
	m1.matriz[x1][y1] = 0;
	for (int i = 0; i <= tamano; i++) {
		if(m1.matriz[x1][y1 + i]==5){
			m1.matriz[x1][y1 + i] = 0;
		}
	}
	for (int i = 0; i <= tamano; i++) {
		if(m1.matriz[x1][y1 - i]==5){
			m1.matriz[x1][y1 - i] = 0;
		}
	}
	for (int i = 0; i <= tamano; i++) {
		if(m1.matriz[x1 + i][y1]==5){
			m1.matriz[x1 + i][y1] = 0;
		}
	}
	for (int i = 0; i <= tamano; i++) {
		if(m1.matriz[x1 - i][y1]==5){
			m1.matriz[x1 - i][y1] = 0;
		}
	}
}
void Bomb::colision() {

}




