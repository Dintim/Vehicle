#pragma once
#include "airVehicle.h"
class engineAirVehicle:public airVehicle
{
	int enginePower;
public:
	engineAirVehicle(int maxSpeed, string vehicleColor, int cntPassengers, string vehicleModel, bool hasEngine, int altitude, int enginePower) :airVehicle(maxSpeed, vehicleColor, cntPassengers, vehicleModel, hasEngine=1, altitude) {
		this->enginePower = enginePower;
	}
	void setEngineAVPower(int enginePower);
	int getEngineAVPower()const { return enginePower; }

	/*void setEngineAVMaxSpeed(int maxSpeed);
	void setEngineAVColor(string vehicleColor);
	void setEngineAVCntPassengers(int cntPassengers);
	void setEngineAVModel(string vehicleModel);
	void setEngineAVHasEngine(bool hasEngine);
	void setEngineAVAltitude(int altitude);

	int getEngineAVMaxSpeed()const { return this->getAVMaxSpeed(); }
	string getEngineAVColor()const { return this->getAVColor(); }
	int getEngineAVCntPassengers()const { return this->getAVCntPassengers(); }
	string getEngineAVModel()const { return this->getAVModel(); }
	bool getEngineAVHasEngine()const { return this->getAVHasEngine(); }
	int getEngineAVAltitude()const { return this->getAVAltitude(); }*/

	void info();
	
};

