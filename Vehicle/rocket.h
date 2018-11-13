#pragma once
#include"spaceVehicle.h"
class rocket:public spaceVehicle
{
public:
	rocket(int maxSpeed, string vehicleColor, int cntPassengers, string vehicleModel, bool hasEngine, string fuelType):spaceVehicle(maxSpeed, vehicleColor, cntPassengers, vehicleModel, hasEngine, fuelType){}
	
	/*void setRocketMaxSpeed(int maxSpeed);
	void setRocketColor(string vehicleColor);
	void setRocketCntPassengers(int cntPassengers);
	void setRocketModel(string vehicleModel);
	void setRocketHasEngine(bool hasEngine);
	void setRocketFuelType(string fuelType);

	int getRocketMaxSpeed()const { return this->getSVMaxSpeed(); }
	string getRocketColor()const { return this->getSVColor(); }
	int getRocketCntPassengers()const { return this->getSVCntPassengers(); }
	string getRocketModel()const { return this->getSVModel(); }
	bool getRocketHasEngine()const { return this->getSVHasEngine(); }
	string getRocketFuelType()const { return getSVFuelType(); }*/

	void info();

};

