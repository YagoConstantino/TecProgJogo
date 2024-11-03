#pragma once
#include <SFML/Graphics.hpp>
#include "Personagem.h"
#include "Jogador.h"
namespace Entity
{
	class Inimigo :public Personagem
	{
	protected:
		int _nivel_Maldade;
		Jogador* _Jog;

	public:
		Inimigo();
		~Inimigo();
		virtual void Executar();
		virtual void danificar(Jogador* p) = 0;
	};
}