#include <iostream>
#include "Game.h"
#include "Player.h"








void blackJackSetup(Player& dealer, Player& p1, Deck& deck)
{
	deck.shuffle();
	

	dealer.drawCard(deck);

	std::cout << "The Dealer has: ";

	
	dealer.drawCard(deck);
	std::cout << " ? = ?" << '\n';
	
	


	p1.drawCard(deck);
	p1.drawCard(deck);



}
void Game::blackJack()
{

	do
	{

		Deck deck{};
		Player dealer{};
		Player p1{};

		blackJackSetup(dealer, p1, deck);
		p1.playerTurn(deck);
		if (!p1.isBust())
		{
			dealer.dealerTurn(deck, p1);
			p1.playerWin(dealer,deck);

		}

	

	} while (continueGame());






}







bool Game::continueGame() const
{
	char reset{};

	std::cout << "Would you like to play again? (y)/(n)\n";
	std::cin >> reset;

	
	switch (reset)
	{
	case 'y':
		return true;

	default:
		return false;



	}


}








