#include "card.h"

// --------------------------------------------------------------------------
//! Constructor
// --------------------------------------------------------------------------

CARD::CARD( SUIT _suit, CARD_VALUE _value ) : m_suit( _suit ), m_value( _value )
{



}

std::string DECK::get_card_value()
{
	switch ( value )
	{
	case CARD_VALUE::ACE:
		return "ACE";
	case CARD_VALUE::TWO:
		return "TWO";
	case CARD_VALUE::THREE:
		return "THREE";
	case CARD_VALUE::FOUR:
		return "FOUR";
	case CARD_VALUE::FIVE:
		return "FIVE";
	case CARD_VALUE::SIX:
		return "SIX";
	case CARD_VALUE::SEVEN:
		return "SEVEN";
	case CARD_VALUE::EIGHT:
		return "EIGHT";
	case CARD_VALUE::NINE:
		return "NINE";
	case CARD_VALUE::TEN:
		return "TEN";
	case CARD_VALUE::JACK:
		return "JACK";
	case CARD_VALUE::QUEEN:
		return "QUEEN";
	case CARD_VALUE::KING:
		return "KING";
	}
	return;
}

std:: CARD::get_card_suit()
{
	switch ( suit_type )
	{
	case SUIT::HEART:
		return "HEART";
	case SUIT::DIAMOND:
		return "DIAMOND";
	case SUIT::SPADE:
		return "SPADE";
	case SUIT::CLUB:
		return "CLUB";
	}
	return;
}
