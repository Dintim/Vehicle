#pragma once
#include "airVehicle.h"
class engineAirVehicle:public airVehicle
{
	int enginePower;
public:
	engineAirVehicle(int maxSpeed, string vehicleColor, int cntPassengers, string vehicleModel, bool hasEngine, int altitude, int enginePower) :airVehicle(maxSpeed, vehicleColor, cntPassengers, vehicleModel, hasEngine=1, altitude) {
		this->enginePower = enginePower;
	}
	void setEngineAVPower(int enginePower);
	int getEngineAVPower()const { return enginePower; }

	

	void info();
	
};

