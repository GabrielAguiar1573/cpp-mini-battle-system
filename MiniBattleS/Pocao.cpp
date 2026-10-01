#include "Pocao.h"
#include "Player.h"

Pocao::Pocao(int curaPocao) {
	cura = curaPocao;
}

int Pocao::CuraPocao() {
	return cura;
}

bool Pocao::UsadaPocao() {
	return usada;
}

bool Pocao::Usar(Player* alvo) {
	if (usada) {
		return false;
	}
	alvo->Curar(cura);
	usada = true;
	return true;
}