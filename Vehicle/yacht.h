#pragma once
#include"boat.h"
class yacht:public boat
{
	int cntDecks;
public:
	yacht(int maxSpeed, string vehicleColor, int cntPassengers, string vehicleModel, bool hasEngine, int displacement, int cntDecks) :boat(maxSpeed, vehicleColor, cntPassengers, vehicleModel, hasEngine = 1, displacement) {
		this->cntDecks = cntDecks;
	}
	void setYachCntDecks(int cntDecks);
	int getYachCntDecks()const { return cntDecks; }

	/*void setYachMaxSpeed(int maxSpeed);
	void setYachColor(string vehicleColor);
	void setYachCntPassengers(int cntPassengers);
	void setYachModel(string vehicleModel);
	void setYachHasEngine(bool hasEngine);
	void setYachDisplacement(int displacement);

	int getYachMaxSpeed()const { return this->getBoatMaxSpeed(); }
	string getYachColor()const { return this->getBoatColor(); }
	int getYachCntPassengers()const { return this->getBoatCntPassengers(); }
	string getYachModel()const { return this->getBoatModel(); }
	bool getYachHasEngine()const { return this->getBoatHasEngine(); }
	int getYachDisplacement()const { return this->getBoatDisplacement(); }*/

	void info();
	
};

