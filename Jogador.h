#pragma once
#include <SFML/Graphics.hpp>
#include "Personagem.h"

namespace Entity
{
	class Jogador :public Personagem
	{
	private:
		int _pontos;
		const char* _nomeJogador;

	public:
		Jogador(sf::RenderWindow* win = nullptr,const char* name = "");
		~Jogador();
		void Executar();
	};
}