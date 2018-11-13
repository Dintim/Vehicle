#pragma once
#include"vehicle.h"
class waterVehicle:public vehicle
{
	int displacement;
public:
	waterVehicle(int maxSpeed, string vehicleColor, int cntPassengers, string vehicleModel, bool hasEngine, int displacement) :vehicle(maxSpeed, vehicleColor, cntPassengers, vehicleModel, hasEngine) {
		this->displacement = displacement;
	}
	void setWVDisplacement(int displacement);
	int getWVDisplacement()const { return displacement; }

	/*void setWVMaxSpeed(int maxSpeed);
	void setWVColor(string vehicleColor);
	void setWVCntPassengers(int cntPassengers);
	void setWVModel(string vehicleModel);
	void setWVHasEngine(bool hasEngine);

	int getWVMaxSpeed()const { return this->getMaxSpeed(); }
	string getWVColor()const { return this->getVehicleColor(); }
	int getWVCntPassengers()const { return this->getCntPassengers(); }
	string getWVModel()const { return this->getVehicleModel(); }
	bool getWVHasEngine()const { return this->getHasEngine(); }*/

	void info();

};

