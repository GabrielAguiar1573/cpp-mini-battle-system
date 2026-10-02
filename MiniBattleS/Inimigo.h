#pragma once
#include <string>

class Player;

class Inimigo {
private:
	std::string nome;
	int vida;
	int dano;
public:
	Inimigo(std::string, int, int);
	bool Atacar(Player* alvo);
	void ReceberDano(int dano);
	bool EstaVivo();
	std::string NomeInimigo();
	int VidaInimigo();
};