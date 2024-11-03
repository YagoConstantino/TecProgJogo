#pragma once
#include <SFML/Graphics.hpp>
#include "Inimigo.h"

namespace Entity
{
	class InimigoFacil :public Inimigo
	{
	private:
	public:
		void Executar();
		void danificar(Jogador* pJog);

	};
}