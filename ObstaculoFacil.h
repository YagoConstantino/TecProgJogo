#pragma once
#include <SFML/Graphics.hpp>
#include "Obstaculo.h"

namespace Entity
{
	class ObstFacil :public Obstaculo
	{
	private:
		int _elasticidade;

	public:
		void Executar();
		void obstacular(Jogador* _jog);
	};
}