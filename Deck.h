#ifndef DECK_H
#define DECK_H
#include <array>
#include "Card.h"
#include <iostream>
#include <random>
#include <algorithm>

using deck_type = std::array<Card, 52>;
using index_type = deck_type::size_type;

class Deck
{

private:
	deck_type m_deck{};
    index_type m_cardIndex{0};

    
public:

   

    Deck();
    void createDeck();
    void dPrint() const;
    void shuffle();
    const Card& dealCard();
    void printCard();

};



#endif

