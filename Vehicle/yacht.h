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

	

	void info();
	
};

