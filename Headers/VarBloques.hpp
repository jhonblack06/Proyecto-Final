#ifndef _VARBLOQUES_HPP_
#define _VARBLOQUES_HPP_

#include "Bloque.hpp"

class Level : public sf::Drawable {
 public:
  Level();
  Level(int , const sf::Vector2f pos);	//x block
  Level(bool,int,const sf::Vector2f pos); //y block
  ~Level();
  
  std::vector<Bloque> &getContainer();
  void dibujo(sf::RenderWindow &window);

 private:
  virtual void draw(sf::RenderTarget &renderTarget, sf::RenderStates renderStates) const;

  std::vector<Bloque> Nivel;
};
//window por ventan
#endif
