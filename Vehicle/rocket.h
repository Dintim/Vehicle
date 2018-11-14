#pragma once
#include"spaceVehicle.h"
class rocket:public spaceVehicle
{
public:
	rocket(int maxSpeed, string vehicleColor, int cntPassengers, string vehicleModel, bool hasEngine, string fuelType):spaceVehicle(maxSpeed, vehicleColor, cntPassengers, vehicleModel, hasEngine, fuelType){}
	
	

	void info();

};

