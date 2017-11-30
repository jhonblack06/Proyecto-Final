#include "VarBloques.hpp"

#include "VarBloques.hpp"

Level::Level() {
}

Level::Level(int cant, const sf::Vector2f pos) // x
{
  if (cant > 0) {
    float x = pos.x;
    float y = pos.y;
    //size_t is the unsigned integer type of the result of the sizeof operator
    for (std::size_t i = 0; i < static_cast<std::size_t>(cant); ++i) 
	{
      Nivel.push_back(Bloque(x, y));	//agrega
      x += 60.0f; //50.0f
      //y += 50.0f;
    }
  }
}

Level::Level(bool y,int cant, const sf::Vector2f pos) //y
{
	y=true; //porque si;
  if (cant > 0) {
    float x = pos.x;
    float y = pos.y;
    //size_t is the unsigned integer type of the result of the sizeof operator
    for (std::size_t i = 0; i < static_cast<std::size_t>(cant); ++i) 
	{
      Nivel.push_back(Bloque(x, y));	//agrega
      y += 60.0f; //50.0f
      //y += 50.0f;
    }
  }
}



Level::~Level() {
}

std::vector<Bloque> &Level::getContainer() {
  return Nivel;
}

void Level::dibujo(sf::RenderWindow &ventana) {
  for (std::size_t i = 0; i < Nivel.size(); ++i) {
    ventana.draw(Nivel[i]);
  }
}

void Level::draw(sf::RenderTarget &renderTarget, sf::RenderStates renderStates) const {
  for (std::size_t i = 0; i < Nivel.size(); ++i) {
    renderTarget.draw(Nivel[i]);
  }
}




