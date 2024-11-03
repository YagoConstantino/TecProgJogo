#include "Personagem.h"

Entity::Personagem::Personagem() :
	Entidade()
{
	_nVidas = 5;
}

Entity::Personagem::Personagem(sf::RenderWindow* win)
{
	window = win;
}

Entity::Personagem::~Personagem()
{
}
