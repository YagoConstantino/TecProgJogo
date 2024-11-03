#pragma once
#include <SFML/Graphics.hpp>
#include "Entidade.h"

namespace Entity
{
	class Personagem :public Entidade
	{
	protected:
		int _nVidas;
	public:
		Personagem();
		Personagem(sf::RenderWindow* win);
		~Personagem();
		virtual void Executar() = 0;
	};
}