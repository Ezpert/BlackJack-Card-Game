#include <iostream>
#include <array>
#include <random>
#include <algorithm>
#include "Deck.h"
#include "Card.h"



Deck::Deck()
{
    createDeck();

}

void Deck::createDeck()
{

    int index{ 0 };

    for (int suit{ 0 }; suit < Card::max_suits; ++suit)
    {
        for (int rank{ 0 }; rank < Card::max_ranks; ++rank)
        {
            m_deck[index].m_suit = static_cast<Card::Suit>(suit);
            m_deck[index].m_rank = static_cast<Card::Rank>(rank);
            ++index;
        }
    }
}

void Deck::printCard()
{
    
    m_deck[m_cardIndex - 1].cPrint();






}


void Deck::dPrint() const
{

    for (const auto& card : m_deck)
    {
        card.cPrint();
        std::cout << ' ';
    }

    std::cout << '\n';




}
void Deck::shuffle()
{
    static std::mt19937 mt{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };
    std::shuffle(m_deck.begin(), m_deck.end(), mt);
    m_cardIndex = 0;
}

const Card& Deck::dealCard()
{

    return  m_deck[m_cardIndex++];

}





