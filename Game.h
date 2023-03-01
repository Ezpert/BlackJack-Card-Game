#ifndef GAME_H
#define GAME_H
#include "Player.h"


class Game
{
public:

	void blackJack();
	bool continueGame() const;
	



};

void blackJackSetup(Player& dealer, Player& p1, Deck& deck);




#endif