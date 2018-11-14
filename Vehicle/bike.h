#pragma once
#include"groundVehicle.h"
class bike:public groundVehicle
{
	string bikeType;
public:
	bike(int maxSpeed, string vehicleColor, int cntPassengers, string vehicleModel, bool hasEngine, int cntWheels, string bikeType) :groundVehicle(maxSpeed, vehicleColor, cntPassengers, vehicleModel, hasEngine = 1, cntWheels) {
		this->bikeType = bikeType;
	}
	void setBikeType(string bikeType);
	string getBikeType()const { return bikeType; }

	

	void info();
	
};

