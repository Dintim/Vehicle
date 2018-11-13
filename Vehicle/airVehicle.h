#pragma once
#include "vehicle.h"
class airVehicle :public vehicle
{
	int altitude;
public:
	airVehicle(int maxSpeed, string vehicleColor, int cntPassengers, string vehicleModel, bool hasEngine, int altitude) :vehicle(maxSpeed, vehicleColor, cntPassengers, vehicleModel, hasEngine) {
		this->altitude = altitude;
	}
	void setAVAltitude(int altitude);
	int getAVAltitude()const { return altitude; }

	/*void setAVMaxSpeed(int maxSpeed);
	void setAVColor(string vehicleColor);
	void setAVCntPassengers(int cntPassengers);
	void setAVModel(string vehicleModel);
	void setAVHasEngine(bool hasEngine);

	int getAVMaxSpeed()const { return this->getMaxSpeed(); }
	string getAVColor()const { return this->getVehicleColor(); }
	int getAVCntPassengers()const { return this->getCntPassengers(); }
	string getAVModel()const { return this->getVehicleModel(); }
	bool getAVHasEngine()const { return this->getHasEngine(); }*/
	
	void info();
};

