#include "..\Game.hpp"
#include "Mapa.hpp"



Mapa::Mapa(){
	//if (!textureWall.loadFromFile("Back_002.png")) {return;}
    crearMapa();
}

Mapa::Mapa(int ancho,int alto){
	this-> ancho = ancho;
	this-> alto = alto;
	inMatriz();
}

void Mapa::inMatriz(){
	matriz = new int*[alto];
	for(int i=0;i<alto;i++){
		matriz[i]=new int[ancho];
	}
}

void Mapa::setAncho(int ancho){
	this->ancho = ancho;
}

void Mapa::setAlto(int alto){
	this->alto = alto;
}

int Mapa::getAncho(){
	return this->ancho;
}

int Mapa::getAlto(){
	return this->alto;
}

void Mapa::crearMapa(){	//
	for (int i = 0; i < alto; i++) {
		for (int j = 0; j < ancho; j++) {
			matriz[i][j] = 0;
			if ((i + j) % 2 == 0) {
				matriz[i][j] = 1;
			}
			if (i % 2 == 1) {
				matriz[i][j] = 0;
			}
			if (j % 2 == 1) {
				matriz[i][j] = 0;
			}
			if (i == 0 || i == alto-1) {
				matriz[i][j] = 1;
			}
			if (j == 0 || j == ancho-1) {
				matriz[i][j] = 1;
			}
		}
	//
	//m.rect.setPosition(100, 100);
	//m.sp.setScale(0.2,0.2);
    //m.destructable = false; // Can be destroyed
    //
	}
	//
	
	//
}

void Mapa::imprimir(){	//
	
	int counter = 0; //
	for (int i = 0; i < alto; i++) {
		for (int j = 0; j < ancho; j++) {
			//cout << matriz[i][j] << " ";
		
		
			
		/*	
			if (matriz[i][j] == 1)
			{
				rectangle.setFillColor(sf::Color::Black);
				rectangle.setPosition( (i+1)*1 , (j+1)*1  );
				rectangle.setSize(sf::Vector2f(60.f,60.f));
			}
			if (matriz[i][j] == 2)
			{
				rectangle.setPosition( (i+1)*j , (j+1)*j  );
				rectangle_2.setSize(sf::Vector2f(60.f,60.f));
				rectangle_2.setFillColor(sf::Color::White);
			}
			if (matriz[i][j] == 0)
			{
				rectangle_3.setPosition( (i+1)*60 , (j+1)*60  );
				rectangle_3.setSize(sf::Vector2f(60.f,60.f));
				rectangle_3.setFillColor(sf::Color::Blue); //Transparent
			}
		*/
		}
		cout << endl;
	}
}
void Mapa::crearBloques(){
	srand(time(NULL));
	for (int i = 1; i < alto-1; i++) {
		for (int j = 3; j < ancho-3; j++) {
			int x = rand()%3;
			//cout << x <<endl;
			if(x >0 && matriz[i][j]!=1){
				matriz[i][j]=2;
			}
		}
	}
	for (int i = 3; i < alto-3; i++) {
		for (int j = 1; j < ancho-1; j++) {
		int x = rand()%3;
			//cout << x <<endl;
			if(x >0 && matriz[i][j]!=1){
				matriz[i][j]=2;
			}
		}
	}
}

void Mapa::terminarJuego(){
	int k, j, i;
	for (k = 1; k < ((alto % 2) ? (alto / 2) +1 : alto / 2); k++) {
		for (i = j = k; j < (ancho - k); ++j) {
			matriz[i][j] = 1;
			system("cls");
			//imprimir();
		}
		for (--j, ++i; i < (alto - k); ++i) {
			matriz[i][j] = 1;
			system("cls");
			//imprimir();
		}
		for (--i, --j; j >= k; --j) {
			matriz[i][j] = 1;
			system("cls");
			//imprimir();
		}
		for (++j, --i; i > k; --i) {
			matriz[i][j] = 1;
			system("cls");
			//imprimir();
		}
	}
}


