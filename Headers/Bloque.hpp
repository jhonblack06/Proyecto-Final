#ifndef _BLOQUE_HPP_
#define _BLOQUE_HPP_

#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>
#include <random>

class Bloque: public sf::Drawable 
{
	public:
		Bloque();
		Bloque(float , float );
		virtual ~Bloque();
		
		float ancho;
		float alto;
		//sf::Texture block;	//
		//sf::Sprite  blocks; //
		
	private:
		virtual void draw(sf::RenderTarget &renderTarget, sf::RenderStates renderStates) const;
		
		sf::RectangleShape bloque;
		sf::Vector2f posicion;
		
		//float ancho;
		//float alto;
		sf::Color color;
};


#endif /* defined(__InstallingSFML__wall__) */

