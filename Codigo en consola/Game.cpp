#include "Game.h"

void game::crearventana() {
	Mapa juego(13, 15);
	player p1(1,1,"A"), p2(13,11,"B");
	juego.crearMapa();
	juego.crearBloques();
	//juego.imprimir();
	while (p1.vida==true && p2.vida==true) {
		system("cls");
		juego.movimiento(p1);
		juego.movimiento(p2);
		juego.imprimir();
		juego.rastro(p1);
		implementacion(juego,p1);
		//if (implementacion(juego, p1) == 1)
			//p1.vida = false;
		p1.crearBomba = false;
		p1.movimiento();
	}
	cout << "FIN DEL JUEGO" << endl;
}

void game::implementacion(Mapa m1,player p1) {
	if (p1.crearBomba==true) {
		Bomb b1(p1.posX, p1.posY);
		b1.colocar(m1);
		p1.crearBomba=false;
		//if (b1.colision == true) {
		//	return 1;
		}
	}
	//return 0;

