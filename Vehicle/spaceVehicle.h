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

	

	void info();
	
};

