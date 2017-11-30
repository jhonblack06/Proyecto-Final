#include <iostream>
#include "Source\Headers\Game.hpp"
#include<SFML/Graphics.hpp>
#include <SFML\Audio.hpp>
#include <ctime>
#include <cstdlib>

//#include "Source\Headers\Others\Mapa.hpp"
//#include "Source\Headers\Others\Bomb.hpp"

//
//#include "Source\Headers\Others\Mapa.hpp"
#include <memory>
#include <vector>
/*permite crear punteros inteligentes,
cuando dejan de ser usados se liberan*/
using namespace std;


int main() {
	std::shared_ptr<Game> miJuego(new Game());/*definimos el tipo de puntero
											  que sera tipo Game, seguidamente del nombre del puntero y dentro reservo la
											  memoria a usar y llamo al constructor
											  PUNTERO INTELIGENTE (smart pointer)*/
	miJuego->run();//referencio a un metodo dentro de la memoria dinamica
	
	return 0;
}

//


/*
int main() {
	Mapa juego(13, 15);
	Bomb b1(1,2,3);
	juego.crearMapa();
	juego.crearBloques();
	juego.imprimir();
	b1.colocar(juego);
	cout<<endl<<endl;
	juego.imprimir();
	cout<<endl<<endl;
	//juego.imprimir();
	//juego.terminarJuego();

	cin.get();
	juego.imprimir();
	return 0;
}

//CREAR un hpp de colisiones, se usara en bomba y personaje
*/

/*
void collide_square(Class obj)
{
	int get_x;	//esquina del objecto 1 
	int get_y;	//esquina 2
	int get_w;	// 3
	int get_z;  // 4
	
	get bounding
	bool
}
*/
