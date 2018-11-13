#pragma once
#include"engineAirVehicle.h"
class helicopter:public engineAirVehicle
{
	int bladeSize;
public:
	helicopter(int maxSpeed, string vehicleColor, int cntPassengers, string vehicleModel, bool hasEngine, int altitude, int enginePower, int bladeSize) :engineAirVehicle(maxSpeed, vehicleColor, cntPassengers, vehicleModel, hasEngine, altitude, enginePower) {
		this->bladeSize = bladeSize;
	}
	void setHelicopterBladeSize(int bladeSize);
	int getHelicopterBladeSize()const { return bladeSize; }

	/*void setHelicopterMaxSpeed(int maxSpeed);
	void setHelicopterColor(string vehicleColor);
	void setHelicopterCntPassengers(int cntPassengers);
	void setHelicopterModel(string vehicleModel);
	void setHelicopterHasEngine(bool hasEngine);
	void setHelicopterAltitude(int altitude);
	void setHelicopterPower(int enginePower);

	int getHelicopterMaxSpeed()const { return this->getEngineAVMaxSpeed(); }
	string getHelicopterColor()const { return this->getEngineAVColor(); }
	int getHelicopterCntPassengers()const { return this->getEngineAVCntPassengers(); }
	string getHelicopterModel()const { return this->getEngineAVModel(); }
	bool getHelicopterHasEngine()const { return this->getEngineAVHasEngine(); }
	int getHelicopterAltitude()const { return this->getEngineAVAltitude(); }
	int getHelicopterPower()const { return this->getEngineAVPower(); }*/

	void info();
	
};

