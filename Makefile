# Arquivo Executavel
EXEC = Jogo

#Arquivos fontes
SRCS = Entidade.cpp GAME.cpp Jogador.cpp Jogo.cpp Personagem.cpp

#SFML
LIBS = -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

#Regra Padrão
all: $(EXEC)

#Compilacao
$(EXEC):$(SRCS)
	g++ $(SRCS) -o $(EXEC) $(LIBS)

#Clean
clean:
	rm -f $(EXEC)
 
