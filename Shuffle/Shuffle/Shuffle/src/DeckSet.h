//

#include "Card.h"

#include <list>

class DeckSet {
private:
	const int SUITS = 5, VALUES = 3;
	const int MAXDECK = SUITS * VALUES;
	const int MAXHAND = 5;

	std::list <Card> deck, hand, discard;

	template <class T> void listShuffle(std::list<T> &L);

public:
	DeckSet();
	void shuffleDeck();
	void draw(int);
	void fullHand();
	void play(unsigned char);
};