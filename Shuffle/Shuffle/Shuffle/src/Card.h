//

class Card{
private:
	bool side;
	int suit;
	int value;

public:
	Card();
	Card(int, int);
	Card(int, int, bool);

	bool getSide(){return side;};
	int getSuit(){return suit;};
	int getValue(){return value;};

	void operator=(Card *);
};
