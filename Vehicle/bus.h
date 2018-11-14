#pragma once
#include"car.h"
class bus:public car
{
public:
	bus(int maxSpeed, string vehicleColor, int cntPassengers, string vehicleModel, bool hasEngine, int cntWheels, string bodyType) :car(maxSpeed, vehicleColor, cntPassengers, vehicleModel, hasEngine = 1, cntWheels, bodyType) {
		
	}

	

	void info();
	
};

