#ifndef CARD_H
#define CARD_H


class Card
{
public:
	enum Suit
	{
		club,
		diamond,
		heart,
		spade,

		max_suits


	};
	
	enum Rank
	{
		rank_2,
		rank_3,
		rank_4,
		rank_5,
		rank_6,
		rank_7,
		rank_8,
		rank_9,
		rank_10,
		rank_jack,
		rank_queen,
		rank_king,
		rank_ace,

		max_ranks


	};




private:
	Suit m_suit{};
	Rank m_rank{};

public:
	Card(Suit s = spade, Rank r = rank_ace);

	void cPrint() const;
	int value() const;

	friend class Deck;

	friend class Player;


};



#endif
