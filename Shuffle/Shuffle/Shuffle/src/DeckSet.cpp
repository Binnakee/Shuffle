//

#include "DeckSet.h"

#include <random>
#include <algorithm>
#include <vector>

DeckSet::DeckSet(){

	for (int st = 0; st<SUITS; st++) {
		for (int val = 0; val<VALUES; val++) {
			deck.push_back(Card(val, st));
		}
	}

}

template <class T> void DeckSet::listShuffle(std::list<T> &L) {

	std::random_device rd;
	std::vector<T> V(L.begin(), L.end());
	std::shuffle(V.begin(), V.end(), rd);
	L.assign(V.begin(), V.end());
	return;

}

void DeckSet::shuffleDeck() {

	std::random_device rd;
	listShuffle(deck);
	return;

}

void DeckSet::draw(int num) {

	if (num < 1 || num > MAXHAND) {
		throw("Out of range");
	}

	else if (num + (int)hand.size() > MAXHAND) {
		throw("Can't overfill hand");
	}


	else {

		for (int i = 0; i < num; i++) {

			if (deck.empty()) {
				deck.assign(discard.begin(), discard.end());
				shuffleDeck();
			}

			hand.push_back(deck.front());
			deck.pop_front();
		}

	}

	return;
}

void DeckSet::fullHand() {
	draw(MAXHAND - hand.size());
}

void DeckSet::play(unsigned char key) {

}