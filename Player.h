#ifndef PLAYER_H
#define PLAYER_H
#include "Deck.h"

constexpr int g_maximumScore{ 21 };

constexpr int g_minimumDealerScore{ 17 };

class Player
{
	int m_score{};



public:
	int drawCard(Deck& deck);
	int score() const;
	bool isBust() const;
	void playerTurn(Deck& deck);
	void dealerTurn(Deck& deck, Player& p1);
	void playerWin(Player& dealer, Deck& deck);
	void displayCardVal(Deck& deck);




};











#endif