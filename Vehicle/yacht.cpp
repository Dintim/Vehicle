#include "yacht.h"



void yacht::setYachCntDecks(int cntDecks)
{
	this->cntDecks = cntDecks;
}

//void yacht::setYachMaxSpeed(int maxSpeed)
//{
//	this->setBoatMaxSpeed(maxSpeed);
//}
//
//void yacht::setYachColor(string vehicleColor)
//{
//	this->setBoatColor(vehicleColor);
//}
//
//void yacht::setYachCntPassengers(int cntPassengers)
//{
//	this->setBoatCntPassengers(cntPassengers);
//}
//
//void yacht::setYachModel(string vehicleModel)
//{
//	this->setBoatModel(vehicleModel);
//}
//
//void yacht::setYachHasEngine(bool hasEngine)
//{
//	this->setBoatHasEngine(hasEngine);
//}
//
//void yacht::setYachDisplacement(int displacement)
//{
//	this->setBoatDisplacement(displacement);
//}

void yacht::info()
{
	boat::info();
	cout << "count of decks " << cntDecks << endl;
}
