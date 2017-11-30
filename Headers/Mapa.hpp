#ifndef _MAPA_HPP_
#define _MAPA_HPP_

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

//#include "..\Game.hpp"

#include "Bloque.hpp"

#include <SFML/Graphics.hpp>
using namespace std;

class Mapa{
	private:
		int **matriz;
		int ancho, alto;
	
	
		//
	public:
		sf::RectangleShape rectangle_3;
		sf::RectangleShape rectangle_2;
		sf::RectangleShape rectangle;
		std::vector<sf::RectangleShape> rectangles;
		
		
		
		/*
		vector<Bloque>::const_iterator iter15;
	    vector<Bloque> Array_bloques;
	    
	    Bloque wall;
	    
	    sf::Texture textureWall;
    	*/
	    //wall.rect.setPosition(100, 100);
	    //wall1.sprite.setScale(0.2,0.2);
	    
		//
	public:
		friend ostream& operator << (ostream& out,Mapa& mapa);
		friend class Bomb;
		Mapa(); //
		Mapa(int ancho,int alto);
		void inMatriz();
		void setAncho(int ancho);
		void setAlto(int alto);
		int getAncho();
		int getAlto();
		void imprimir(); //  parame bloqu
		void crearBloques(); // param bloqu
		void crearMapa();
		void terminarJuego();
		void matAcceso(int a,int b,int newValor);
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


#endif

