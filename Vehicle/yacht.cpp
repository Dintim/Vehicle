#include "yacht.h"



void yacht::setYachCntDecks(int cntDecks)
{
	this->cntDecks = cntDecks;
}



void yacht::info()
{
	boat::info();
	cout << "count of decks " << cntDecks << endl;
}
