#pragma once
#include <string>

class Inimigo;

class Player {
private:
	std::string nome;
	int vida;
	int vidaMaxima;
	int dano;
public:
	Player(std::string, int, int);
	void Atacar(Inimigo* alvo);
	void ReceberDano(int dano);
	void Curar(int valor);
	std::string NomePlayer();
	int VidaPlayer();
	bool EstaVivo();
};