#include "Jogador.h"

Entity::Jogador::Jogador(sf::RenderWindow* win, const char* name) :
	Personagem(win), _nomeJogador(name)
{
	body.setFillColor(sf::Color::Blue);
	_pontos = 0;
}

Entity::Jogador::~Jogador()
{

}

void Entity::Jogador::Executar()
{
	float velocidade = 0.05f;
	float x = body.getPosition().x;
	float y = body.getPosition().y;

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && x >= 0)
	{
		x -= velocidade;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && (x + body.getSize().x) <= window->getSize().x)
	{
		x += velocidade;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && y >= 0)
	{
		y -= velocidade;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && (y + body.getSize().y) <= window->getSize().y)
	{
		y += velocidade;
	}
	body.setPosition(sf::Vector2f(x, y));
}