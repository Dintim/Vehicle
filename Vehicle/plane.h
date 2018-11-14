#pragma once
#include"engineAirVehicle.h"
class plane:public engineAirVehicle
{
	int cntWings;
public:
	plane(int maxSpeed, string vehicleColor, int cntPassengers, string vehicleModel, bool hasEngine, int altitude, int enginePower, int cntWings=1) :engineAirVehicle(maxSpeed, vehicleColor, cntPassengers, vehicleModel, hasEngine, altitude, enginePower) {
		this->cntWings = cntWings;
	}
	void setPlaneCntWings(int cntWings);
	int getPlaneCntWings()const { return cntWings; }

	

	void info();
};

