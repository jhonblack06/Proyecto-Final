#ifndef _GAME_HPP_
#define _GAME_HPP_

//Unico constructor que llama al model, view y al controller
//Y se ejecuta agrupando estos.
//HEcho para solo llamar al constructor en el main().


#include <SFML\Audio.hpp>
#include <SFML/Graphics.hpp>

#include <iostream>
#include <vector>
#include "Others\Jugador.hpp"
#include "Others\Mapa.hpp"
#include "Others\Bomb.hpp"
#include "Others\VarBloques.hpp"
#include "Others\Colision.hpp"



class Game {
private:
	int A_1 = 13;
	int B_1 = 15;
	
	sf::RenderWindow ventana;
	sf::Event miEvento;


	sf::Texture bomber1;
	sf::Sprite  mibomber1;

	sf::Texture bomber2;
	sf::Sprite mibomber2;

	sf::Texture goku;
	sf::Sprite migoku;

	sf::Texture bowser;
	sf::Sprite mibowser;
		
	sf::Texture piso;
	sf::Sprite mipiso;
	
	sf::Texture bomba;
	sf::Sprite mibomb;
	
	/*
	Bomb mibomba;
	vector<Bomb>::const_iterator iterBomb;
	vector<Bomb> arrayBomb;
	*/
	
	sf::Texture bloque1;
	sf::Sprite mibloque1;

	sf::CircleShape cuadrado;
	
	//
	
	
	//
	
	sf::Clock reloj;
	sf::Time tiempo;
	
	sf::VertexArray vertices;
	//sf::Texture texture;
	
	//
	
	//class Jugador Player1;
	Jugador Player1;
	//Player1.numero = 1;  // Player1 does not name a type
	
	sf::Texture texturePlayer;
	Jugador Player2;
	sf::Texture texturePlayer2;
	Jugador Player3;
	sf::Texture texturePlayer3;
	Jugador Player4;
	sf::Texture texturePlayer4;
	
	//
	bool SPACE{ false };
	bool UP{ false }, DOWN{ false }, LEFT{ false }, RIGHT{ false };
	bool UP_2{ false }, DOWN_2{ false }, LEFT_2{ false }, RIGHT_2{ false };
	bool UP_3{ false }, DOWN_3{ false }, LEFT_3{ false }, RIGHT_3{ false };
	bool UP_4{ false }, DOWN_4{ false }, LEFT_4{ false }, RIGHT_4{ false };
	bool isPlay{ true };
//private:
	int inicializar();
	void eventos();
	void implementacion();
	void render();
	void limpiar();
	int bloques_1();	
public:

/*
	Jugador Player1();
	Jugador Player2();
	Jugador Player3();
	Jugador Player4();

*/	
	
	Game();



	void run();

};

#endif
