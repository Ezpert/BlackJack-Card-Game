#include <iostream>
#include "Player.h"
#include "Deck.h"



int Player::drawCard(Deck& deck)
{
	
	Card card{ deck.dealCard() };
	
	//std::cout << "Card drew: ";

	//card.cPrint();

	std::cout << "\n";
	m_score += card.value();
	

	return card.value();

}

void Player::displayCardVal(Deck& deck)
{
	deck.printCard();



}

int Player::score() const
{

	return m_score;




}

bool Player::isBust() const
{
	return(m_score > g_maximumScore);



}

void Player::playerTurn(Deck& deck)
{
	std::cout << "Your card values amount to: " <<  m_score << '\n'; 
	
	char hs{};



		std::cout << "Enter (h) to hit, (s) to stand\n";

	do
	{
		std::cin >> hs;

		switch (hs)
		{
		case 'h':
		{	
			drawCard(deck);
			std::cout << "The card you drew had a value of: ";
			deck.printCard();
			if (isBust())
			{
				std::cout << "You busted!\n";
				hs = 's';
				break;


			}

			std::cout << "Your new score is: " << m_score << '\n';
			std::cout << "Do you want to (h) hit or (s) stand? \n";
			break;
		}
		case 's':
			break;

		default:
		{	
			std::cout << "Invalid input\n";
		
		
		}


		}





	} while (hs == 'h');





}

void Player::dealerTurn(Deck& deck, Player& p1)
{
	std::cout << "Dealer has: " << drawCard(deck) << '\n';

	
	while (m_score < g_minimumDealerScore && m_score <= p1.m_score) {
	//	std::cout << "The dealer drew a card with value: " << drawCard(deck) << '\n';
		
		std::cout << "The dealer's hand has a score of: " << m_score << '\n';



	}





}

void Player::playerWin(Player& dealer, Deck& deck)
{
	if (dealer.m_score > g_maximumScore)
	{
		std::cout << "The dealer Busted!\n";
		std::cout << "Congrats You win!\n";
		

	}
	else if (dealer.m_score < m_score)
	{
		std::cout << "You win!\n";
		



	}
	else if (dealer.m_score == m_score)
	{
		std::cout << "Push!\n";
		



	}
	else if (dealer.m_score > m_score)
	{
		std::cout << "The house wins...\n";


	}

	
	


	deck.shuffle();

}