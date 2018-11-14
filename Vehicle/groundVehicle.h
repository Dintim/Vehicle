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
	
	

	void info();
	
};

