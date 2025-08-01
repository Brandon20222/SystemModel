#ifndef GAME_H
#define GAME_H
#include "Player.h"

class Game
{
private:
	Player* players;
public:
	Game();
	Game(Player* players);
	~Game();
};

#endif
