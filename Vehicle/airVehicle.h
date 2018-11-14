#pragma once
#include "vehicle.h"
class airVehicle :public vehicle
{
	int altitude;
public:
	airVehicle(int maxSpeed, string vehicleColor, int cntPassengers, string vehicleModel, bool hasEngine, int altitude) :vehicle(maxSpeed, vehicleColor, cntPassengers, vehicleModel, hasEngine) {
		this->altitude = altitude;
	}
	void setAVAltitude(int altitude);
	int getAVAltitude()const { return altitude; }

	
	
	void info();
};

