#include "Inimigo.h"
#include "Player.h"
#include "Pocao.h"
#include <iostream>

int main() {
	Player gabriel("Gabriel", 100, 30);
	Inimigo goblin("Goblin", 80, 20);
	Pocao pocao(20);

	gabriel.Atacar(&goblin);
	std::cout << goblin.VidaInimigo() << std::endl;

	goblin.Atacar(&gabriel);
	std::cout << gabriel.VidaPlayer() << std::endl;

	gabriel.Atacar(&goblin);
	std::cout << goblin.VidaInimigo() << std::endl;

	goblin.Atacar(&gabriel);
	std::cout << gabriel.VidaPlayer() << std::endl;

	pocao.Usar(&gabriel);
	std::cout << gabriel.VidaPlayer() << std::endl;

	pocao.Usar(&gabriel);
	std::cout << gabriel.VidaPlayer() << std::endl;
}