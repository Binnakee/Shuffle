//

#include "Card.h"

Card::Card(){
	value = -1;
	suit = -1;
	side = false;
}

Card::Card(int inVal, int inSuit){
	value = inVal;
	suit = inSuit;
	side = true;
}

Card::Card(int inVal, int inSuit, bool inSide){
	value = inVal;
	suit = inSuit;
	side = inSide;
}

void Card::operator=(Card * inCd){
	value = inCd->getValue();
	suit = inCd->getSuit();
	side = inCd->getSide();
}
