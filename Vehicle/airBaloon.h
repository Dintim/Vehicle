#pragma once
#include "airVehicle.h"
class airBaloon:public airVehicle
{
	int baloonVolume;
public:
	airBaloon(int maxSpeed, string vehicleColor, int cntPassengers, string vehicleModel, bool hasEngine, int altitude, int baloonVolume) :airVehicle(maxSpeed, vehicleColor, cntPassengers, vehicleModel, hasEngine, altitude) {
		this->baloonVolume = baloonVolume;
	}
	void setBaloonVolume(int baloonVolume);
	int getBaloonVolume()const { return baloonVolume; }

	

	void info();
	
};

