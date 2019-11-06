#pragma once
enum class SUIT : int
{
	HEART,
	CLUB,
	SPADE,
	DIAMOND
};

enum class CARD_VALUE : int
{
	ACE,
	TWO,
	THREE,
	FOUR,
	FIVE,
	SIX,
	SEVEN,
	EIGHT,
	NINE,
	TEN,
	JACK,
	QUEEN,
	KING
};

class CARD
{
public:
	CARD( SUIT _suit, int _value );
	SUIT get_suit() const { return m_suit; }
	CARD_VALUE get_value() const { return m_value; }
	void print_card();

private:
	SUIT m_suit;
	CARD_VALUE m_value;
	std::string get_card_value();

	std::string get_card_suit();
};

};



