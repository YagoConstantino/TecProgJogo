#pragma once
#include <SFML/Graphics.hpp>
namespace Entity
{


	class Entidade
	{
	protected:
		sf::RectangleShape body;
		sf::RenderWindow* window;

	public:
		Entidade(sf::RenderWindow* win = nullptr);
		virtual ~Entidade() ;
		virtual void Executar() = 0;

		void desenhar();
		void setWindow(sf::RenderWindow* win);
		
	};
}