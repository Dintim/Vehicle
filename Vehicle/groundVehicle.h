#pragma once
#include"vehicle.h"
class groundVehicle:public vehicle
{
	int cntWheels;
public:
	groundVehicle(int maxSpeed, string vehicleColor, int cntPassengers, string vehicleModel, bool hasEngine, int cntWheels) :vehicle(maxSpeed, vehicleColor, cntPassengers, vehicleModel, hasEngine) {
		this->cntWheels = cntWheels;
	}
	void setGVCntWheels(int cntWheels);
	int getGVCntWheels()const { return cntWheels; }
	
	/*void setGVMaxSpeed(int maxSpeed);
	void setGVColor(string vehicleColor);
	void setGVCntPassengers(int cntPassengers);
	void setGVModel(string vehicleModel);
	void setGVHasEngine(bool hasEngine);

	int getGVMaxSpeed()const { return this->getMaxSpeed(); }
	string getGVColor()const { return this->getVehicleColor(); }
	int getGVCntPassengers()const { return this->getCntPassengers(); }
	string getGVModel()const { return this->getVehicleModel(); }
	bool getGVHasEngine()const { return this->getHasEngine(); }*/

	void info();
	
};

