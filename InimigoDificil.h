#pragma once
#include <SFML/Graphics.hpp>
#include "Inimigo.h"
#include "Projetil.h"
namespace Entity
{
	class InimigoDificil :public Inimigo
	{
	private:
		Projetil* _pj;
	public:
		void Executar();
	};
}