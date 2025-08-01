#include "Game.h"

Game::Game() {
	players = new Player;
}
Game::Game(Player* players) {
	this->players = players;
}
Game::~Game() {
	delete players;
}
