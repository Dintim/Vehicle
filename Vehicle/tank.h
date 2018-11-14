#pragma once
#include"car.h"
class tank:public car
{
	int tankPower;
public:
	tank(int maxSpeed, string vehicleColor, int cntPassengers, string vehicleModel, bool hasEngine, int cntWheels, string bodyType, int tankPower) :car(maxSpeed, vehicleColor="green", cntPassengers, vehicleModel, hasEngine = 1, cntWheels, bodyType) {
		this->tankPower = tankPower;
	}
	void setTankPower(int tankPower);
	int getTankPower()const { return tankPower; }

	

	void info();

};

