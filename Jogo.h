#pragma once
#include <SFML/Graphics.hpp>
#include "Entidade.h"
#include "Jogador.h"

class Jogo
{
private:
	sf::RenderWindow window;
	Entity::Jogador jogador;

public:
	Jogo();
	~Jogo();
	int Executar();
};