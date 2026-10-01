#include "Inimigo.h"
#include "Player.h"

Player::Player(std::string nomePlayer, int vidaMaximaPlayer, int danoPlayer) {
	nome = nomePlayer;
	vidaMaxima = vidaMaximaPlayer;
	dano = danoPlayer;
	vida = vidaMaxima;
}

void Player::Atacar(Inimigo* alvo) {
	alvo -> ReceberDano(dano);
}

void Player::ReceberDano(int dano) {
	vida -= dano;

	if (vida < 0) {
		vida = 0;
	}
}

void Player::Curar(int valor) {
	if (valor <= 0) {
		return;
	}
	vida += valor;

	if (vida > vidaMaxima) {
		vida = vidaMaxima;
	}
}

std::string Player::NomePlayer() {
	return nome;
}

int Player::VidaPlayer() {
	return vida;
}

bool Player::EstaVivo() {
	return vida > 0;
}