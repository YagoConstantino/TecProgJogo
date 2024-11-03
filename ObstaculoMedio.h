#pragma once
#include <SFML/Graphics.hpp>
#include "Obstaculo.h"

namespace Entity
{
	class ObstMedio :public Obstaculo
	{
	private:
	public:
		void Executar();
		void obstacular(Jogador* _jog);
	};
}