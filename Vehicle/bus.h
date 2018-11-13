#pragma once
#include"car.h"
class bus:public car
{
public:
	bus(int maxSpeed, string vehicleColor, int cntPassengers, string vehicleModel, bool hasEngine, int cntWheels, string bodyType) :car(maxSpeed, vehicleColor, cntPassengers, vehicleModel, hasEngine = 1, cntWheels, bodyType) {
		
	}

	/*void setBusMaxSpeed(int maxSpeed);
	void setBusColor(string vehicleColor);
	void setBusCntPassengers(int cntPassengers);
	void setBusModel(string vehicleModel);
	void setBusHasEngine(bool hasEngine);
	void setBusCntWheels(int cntWheels);
	void setBusBodyType(string bodyType);

	int getBusMaxSpeed()const { return this->getCarMaxSpeed(); }
	string getBusColor()const { return this->getCarColor(); }
	int getBusCntPassengers()const { return this->getCarCntPassengers(); }
	string getBusModel()const { return this->getCarModel(); }
	bool getBusHasEngine()const { return this->getCarHasEngine(); }
	int getBusCntWheels()const { return this->getCarCntWheels(); }
	string getBusBodyType()const { return this->getCarBodyType(); }*/

	void info();
	
};

