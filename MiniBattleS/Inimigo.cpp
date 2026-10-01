#include "Inimigo.h"
#include "Player.h"

Inimigo::Inimigo(std::string nomeInimigo, int vidaInimigo, int danoInimigo) {
	nome = nomeInimigo;
	vida = vidaInimigo;
	dano = danoInimigo;
}

std::string Inimigo::NomeInimigo() {
	return nome;
}

int Inimigo::VidaInimigo(){
	return vida;
}

void Inimigo::Atacar(Player* alvo) {
	alvo->ReceberDano(dano);
}

void Inimigo::ReceberDano(int dano) {
	if (dano <= 0) {
		return;
	}

	vida -= dano;

	if (vida < 0) {
		vida = 0;
	}
}

bool Inimigo::EstaVivo() {
	return vida > 0;
}