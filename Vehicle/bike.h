#pragma once
#include"groundVehicle.h"
class bike:public groundVehicle
{
	string bikeType;
public:
	bike(int maxSpeed, string vehicleColor, int cntPassengers, string vehicleModel, bool hasEngine, int cntWheels, string bikeType) :groundVehicle(maxSpeed, vehicleColor, cntPassengers, vehicleModel, hasEngine = 1, cntWheels) {
		this->bikeType = bikeType;
	}
	void setBikeType(string bikeType);
	string getBikeType()const { return bikeType; }

	/*void setBikeMaxSpeed(int maxSpeed);
	void setBikeColor(string vehicleColor);
	void setBikeCntPassengers(int cntPassengers);
	void setBikeModel(string vehicleModel);
	void setBikeHasEngine(bool hasEngine);
	void setBikeCntWheels(int cntWheels);

	int getBikeMaxSpeed()const { return this->getGVMaxSpeed(); }
	string getBikeColor()const { return this->getGVColor(); }
	int getBikeCntPassengers()const { return this->getGVCntPassengers(); }
	string getBikeModel()const { return this->getGVModel(); }
	bool getBikeHasEngine()const { return this->getGVHasEngine(); }
	int getBikeCntWheels()const { return this->getGVCntWheels(); }*/

	void info();
	
};

