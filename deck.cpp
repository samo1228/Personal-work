#include "deck.h"
#include "card.h"

// --------------------------------------------------------------------------
//! Constructor
// --------------------------------------------------------------------------

DECK::DECK()
{

	create_card_list();

}

// --------------------------------------------------------------------------
//! Create the deck of cards
// --------------------------------------------------------------------------

void DECK::create_card_list()
{
	int index = 0;
	for ( int i = 0; i < 13; i++ )
	{
		CARD_VALUE value = static_cast<CARD_VALUE>;
		CARD* heart_card = new CARD( SUIT::HEART, value );
		CARD* club_card = new CARD( SUIT::CLUB, value );
		CARD* spade_card = new CARD( SUIT::SPADE, value);
		CARD* diamond_card = new CARD( SUIT::DIAMOND, value );
		m_cards[index++] = heart_card;
		m_cards[index++] = club_card;
		m_cards[index++] = spade_card;
		m_cards[index++] = diamond_card;
	}
}


void DECK::print_card()
{
	for ( int i = 0; i < 52; i++ )
	{
		std::cout << m_cards[i]->get_card_suit() << "," << m_cards[i]->get_value() << std::endl;
	}
}