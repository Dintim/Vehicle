#pragma once
#include"engineAirVehicle.h"
class helicopter:public engineAirVehicle
{
	int bladeSize;
public:
	helicopter(int maxSpeed, string vehicleColor, int cntPassengers, string vehicleModel, bool hasEngine, int altitude, int enginePower, int bladeSize) :engineAirVehicle(maxSpeed, vehicleColor, cntPassengers, vehicleModel, hasEngine, altitude, enginePower) {
		this->bladeSize = bladeSize;
	}
	void setHelicopterBladeSize(int bladeSize);
	int getHelicopterBladeSize()const { return bladeSize; }

	

	void info();
	
};

