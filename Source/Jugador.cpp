#include "Jugador.hpp"

//CLASS JUGADOR 



//CLASS COLLIDE BOX (BOUNDING BOX)

Jugador::Jugador()
{
	//this -> numero =  numero;
	rect.setSize(sf::Vector2f(32, 32));
	rect.setPosition(400, 200);
	rect.setFillColor(sf::Color::Blue);
	sprite.setScale(sf::Vector2f(2.f, 2.5f));
	sprite.setTextureRect(sf::IntRect(0, 29.4 * 4, 29.4, 29.7));
}

void Jugador::update()
{
	sprite.setPosition(rect.getPosition());
}

void Jugador::updateMovement()
{
	if (numero == 1) 
	{
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			if (canMoveUp == true)
			{
				rect.move(0, -movementSpeed);
				sprite.setTextureRect(sf::IntRect(counterWalking * 29.4, 29.7 * 5, 29.4, 29.7));
				direction = 1;
				canMoveUp = true;
				canMoveDown = true;
				canMoveLeft = true;
				canMoveRight = true;
			}
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			if (canMoveDown == true)
			{
				rect.move(0, movementSpeed);
				sprite.setTextureRect(sf::IntRect(counterWalking * 29, 29 * 4, 29.4, 29.7));
				direction = 2;
				canMoveUp = true;
				canMoveDown = true;
				canMoveLeft = true;
				canMoveRight = true;
			}
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		{
			if (canMoveLeft == true)
			{
				rect.move(-movementSpeed, 0);
				sprite.setTextureRect(sf::IntRect(29.4 * 6 + counterWalking * 29.4, 29 * 4, 29.4, 29.7));
				direction = 3;
				canMoveUp = true;
				canMoveDown = true;
				canMoveLeft = true;
				canMoveRight = true;
			}
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			if (canMoveRight == true)
			{
				rect.move(movementSpeed, 0);
				sprite.setTextureRect(sf::IntRect(29.4 * 6 + counterWalking * 29.4, 29.4 * 5, 29, 29.7));
				direction = 4;
				canMoveUp = true;
				canMoveDown = true;
				canMoveLeft = true;
				canMoveRight = true;
			}
		}
		else
		{
			// Player not Moving
		}

	}
	
	if (numero == 2)
	{
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		{
			if (canMoveUp == true)
			{
				rect.move(0, -movementSpeed);
				sprite.setTextureRect(sf::IntRect(counterWalking * 29.4, 29.3 * 5, 29.4, 29.7));
				direction = 1;
				canMoveUp = true;
				canMoveDown = true;
				canMoveLeft = true;
				canMoveRight = true;
			}
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		{
			if (canMoveDown == true)
			{
				rect.move(0, movementSpeed);
				sprite.setTextureRect(sf::IntRect(counterWalking * 29, 29 * 4, 29.4, 29.7));
				direction = 2;
				canMoveUp = true;
				canMoveDown = true;
				canMoveLeft = true;
				canMoveRight = true;
			}
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			if (canMoveLeft == true)
			{
				rect.move(-movementSpeed, 0);
				sprite.setTextureRect(sf::IntRect(29.4 * 6 + counterWalking * 29.4, 29 * 4, 29.4, 29.7));
				direction = 3;
				canMoveUp = true;
				canMoveDown = true;
				canMoveLeft = true;
				canMoveRight = true;
			}
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		{
			if (canMoveRight == true)
			{
				rect.move(movementSpeed, 0);
				sprite.setTextureRect(sf::IntRect(29.3 * 6 + counterWalking * 29.3, 29.3 * 5, 29, 29.7));
				direction = 4;
				canMoveUp = true;
				canMoveDown = true;
				canMoveLeft = true;
				canMoveRight = true;
			}
		}
		else
		{
			// Player not Moving
		}
		
	}
	
	if (numero == 3)
	{
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::I))
	{
		if (canMoveUp == true)
		{
			rect.move(0, -movementSpeed);
			sprite.setTextureRect(sf::IntRect(25 * 2, counterWalking * 39, 25, 39));
			direction = 1;
			canMoveUp = true;
			canMoveDown = true;
			canMoveLeft = true;
			canMoveRight = true;
		}
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::K))
	{
		if (canMoveDown == true)
		{
			rect.move(0, movementSpeed);
			sprite.setTextureRect(sf::IntRect(0, counterWalking * 39, 25, 39));
			direction = 2;
			canMoveUp = true;
			canMoveDown = true;
			canMoveLeft = true;
			canMoveRight = true;
		}
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::J))
	{
		if (canMoveLeft == true)
		{
			rect.move(-movementSpeed, 0);
			sprite.setTextureRect(sf::IntRect(25, counterWalking * 39, 25, 39));
			direction = 3;
			canMoveUp = true;
			canMoveDown = true;
			canMoveLeft = true;
			canMoveRight = true;
		}
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::L))
	{
		if (canMoveRight == true)
		{
			rect.move(movementSpeed, 0);
			sprite.setTextureRect(sf::IntRect(25 * 3, counterWalking * 39, 25, 39));
			direction = 4;
			canMoveUp = true;
			canMoveDown = true;
			canMoveLeft = true;
			canMoveRight = true;
		}
	}
	else
	{
		// Player not Moving
	}

		
		
	}
	
	if (numero == 4)
	{
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad8))
	{
		if (canMoveUp == true)
		{
			rect.move(0, -movementSpeed);
			sprite.setTextureRect(sf::IntRect(counterWalking * 86, 86 * 3, 85, 85));
			direction = 1;
			canMoveUp = true;
			canMoveDown = true;
			canMoveLeft = true;
			canMoveRight = true;
		}
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad5))
	{
		if (canMoveDown == true)
		{
			rect.move(0, movementSpeed);
			sprite.setTextureRect(sf::IntRect(counterWalking * 86, 0, 85, 85));
			direction = 2;
			canMoveUp = true;
			canMoveDown = true;
			canMoveLeft = true;
			canMoveRight = true;
		}
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad4))
	{
		if (canMoveLeft == true)
		{
			rect.move(-movementSpeed, 0);
			sprite.setTextureRect(sf::IntRect(counterWalking * 86, 86, 85, 85));
			direction = 3;
			canMoveUp = true;
			canMoveDown = true;
			canMoveLeft = true;
			canMoveRight = true;
		}
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad6))
	{
		if (canMoveRight == true)
		{
			rect.move(movementSpeed, 0);
			sprite.setTextureRect(sf::IntRect(counterWalking * 86, 86 * 2, 85, 85));
			direction = 4;
			canMoveUp = true;
			canMoveDown = true;
			canMoveLeft = true;
			canMoveRight = true;
		}
	}
	else
	{
		// Player not Moving
	}
	
		
		
	}
	
	counterWalking++;

	if (counterWalking == 3)
	{
		counterWalking = 0;
	}

}





