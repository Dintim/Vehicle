#pragma once
#include"waterVehicle.h"
class boat:public waterVehicle
{
public:
	boat(int maxSpeed, string vehicleColor, int cntPassengers, string vehicleModel, bool hasEngine, int displacement):waterVehicle(maxSpeed, vehicleColor, cntPassengers, vehicleModel, hasEngine, displacement){}
	
	

	void info();

};

