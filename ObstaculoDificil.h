#pragma once
#include <SFML/Graphics.hpp>
#include "Obstaculo.h"

namespace Entity
{
	class ObstDificil :public Obstaculo
	{
	private:
	public:
		void Executar();
		void obstacular(Jogador* _jog);
	};
}