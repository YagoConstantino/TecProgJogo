#include "Jogo.h"

Jogo::Jogo():
	window(sf::VideoMode(800,600),"Meu Jogo"),jogador(&window)
{
	jogador.setWindow(&window);
	Executar();

}

Jogo::~Jogo()
{
}

int Jogo::Executar()
{
	while (window.isOpen())
	{
		sf::Event ev;
		while (window.pollEvent(ev))
		{
			if (ev.type == sf::Event::Closed)
			{
				window.close();
			}
		}
		jogador.Executar();
		window.clear();
		jogador.desenhar();
		window.display();
	}
	return 0;
}
