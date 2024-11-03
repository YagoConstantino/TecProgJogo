#pragma once
#include "Entidade.h"
#include <SFML/Graphics.hpp>
namespace Entity
{
	class Projetil :public Entidade
	{
	private:
	public:
		Projetil();
		~Projetil();
		void Executar();
	};

}