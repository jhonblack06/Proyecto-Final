#include "Bloque.hpp"

Bloque::Bloque() :
  posicion(sf::Vector2f()),
  ancho(50.0f),
  alto(50.0f),
  color(sf::Color())
{
}

Bloque::Bloque(float X, float Y) :
  ancho(60.0f),
  alto(60.0f)
{
  posicion.x = X;
  posicion.y = Y;

  color = sf::Color::White; //color
  //
  //block.loadFromFile("bomb.png");
  //blocks.setTexture(block);
  //blocks.setScale(sf::Vector2f(0.2f, 0.2f));
  //
  bloque.setSize(sf::Vector2f(ancho, alto));
  bloque.setFillColor(color);
  bloque.setPosition(posicion);
}

Bloque::~Bloque() {
}

void Bloque::draw(sf::RenderTarget &renderTarget, sf::RenderStates renderStates) const {
  renderTarget.draw(bloque);
}


