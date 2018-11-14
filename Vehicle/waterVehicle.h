#pragma once
#include"vehicle.h"
class waterVehicle:public vehicle
{
	int displacement;
public:
	waterVehicle(int maxSpeed, string vehicleColor, int cntPassengers, string vehicleModel, bool hasEngine, int displacement) :vehicle(maxSpeed, vehicleColor, cntPassengers, vehicleModel, hasEngine) {
		this->displacement = displacement;
	}
	void setWVDisplacement(int displacement);
	int getWVDisplacement()const { return displacement; }

	

	void info();

};

