#pragma once
#include"groundVehicle.h"
class car:public groundVehicle
{
	string bodyType;
public:
	car(int maxSpeed, string vehicleColor, int cntPassengers, string vehicleModel, bool hasEngine, int cntWheels, string bodyType) :groundVehicle(maxSpeed, vehicleColor, cntPassengers, vehicleModel, hasEngine = 1, cntWheels) {
		this->bodyType = bodyType;
	}
	void setCarBodyType(string bodyType);
	string getCarBodyType()const { return bodyType; }

	

	void info();

};

