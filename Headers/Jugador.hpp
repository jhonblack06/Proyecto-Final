#ifndef _JUGADOR_HPP_
#define _JUGADOR_HPP_

#include "Textura.hpp"
//#include "..\Game.hpp"


class Jugador : public Textura
{
	/*
	bool vida;
	// void posicion
	int numero; // numero de jugador, esto determina la pos_inicial
	char * personaje;
	
	void animacion();
	*/
	
	public:
	int movementSpeed = 5;
	bool powerup = false;
	int counterWalking = 0;
	int direction = 0; // 1 - up, 2 - down, 3 - left, 4 - right
	bool canMoveUp = true;
	bool canMoveDown = true;
	bool canMoveLeft = true;
	bool canMoveRight = true;
	
	int numero;
	
	
	
	Jugador();
	//Jugador(int numero);
	virtual void update();
	virtual void updateMovement();
};

/*
class Collide_box : Jugador
{
	bool collided;
	bool is_bomb;	//if (collided && is_bomb) then vida = false
	
	bool check_collider(); //parametros ¿? ¿obj1, obj 2?
	
	
};
*/

#endif
