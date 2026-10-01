#pragma once

class Player;

class Pocao {
private:
	int cura;
	bool usada = false;
public:
	Pocao(int cura);
	bool Usar(Player* alvo);
	int CuraPocao();
	bool UsadaPocao();
};