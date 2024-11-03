#pragma once
#include <SFML/Graphics.hpp>
#include "Entidade.h"
#include "Jogador.h"
namespace Entity
{
	class Obstaculo :public Entidade
	{
	protected:
		bool _danoso;

	public:
		virtual void Executar() = 0;
		virtual void obstacular(Jogador* jog)=0;

	};
}