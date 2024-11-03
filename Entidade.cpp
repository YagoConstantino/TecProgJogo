#include "Entidade.h"

Entity::Entidade::Entidade(sf::RenderWindow* win):
	body(sf::Vector2f(50.f,50.f)),window(win)
{
}

void Entity::Entidade::desenhar()
{
	if (window)
	{
		window->draw(body);
	}
}

void Entity::Entidade::setWindow(sf::RenderWindow* win)
{
	window = win;
}

Entity::Entidade::~Entidade()
{

}
