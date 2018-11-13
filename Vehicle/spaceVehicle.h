#pragma once
#include"vehicle.h"
class spaceVehicle:public vehicle
{
	string fuelType;
public:
	spaceVehicle(int maxSpeed, string vehicleColor, int cntPassengers, string vehicleModel, bool hasEngine, string fuelType) :vehicle(maxSpeed, vehicleColor, cntPassengers, vehicleModel, hasEngine=1) {
		this->fuelType = fuelType;
	}
	void setSVFuelType(string fuelType);
	string getSVFuelType()const { return fuelType; }

	/*void setSVMaxSpeed(int maxSpeed);
	void setSVColor(string vehicleColor);
	void setSVCntPassengers(int cntPassengers);
	void setSVModel(string vehicleModel);
	void setSVHasEngine(bool hasEngine);

	int getSVMaxSpeed()const { return this->getMaxSpeed(); }
	string getSVColor()const { return this->getVehicleColor(); }
	int getSVCntPassengers()const { return this->getCntPassengers(); }
	string getSVModel()const { return this->getVehicleModel(); }
	bool getSVHasEngine()const { return this->getHasEngine(); }*/

	void info();
	
};

