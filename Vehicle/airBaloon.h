#pragma once
#include "airVehicle.h"
class airBaloon:public airVehicle
{
	int baloonVolume;
public:
	airBaloon(int maxSpeed, string vehicleColor, int cntPassengers, string vehicleModel, bool hasEngine, int altitude, int baloonVolume) :airVehicle(maxSpeed, vehicleColor, cntPassengers, vehicleModel, hasEngine, altitude) {
		this->baloonVolume = baloonVolume;
	}
	void setBaloonVolume(int baloonVolume);
	int getBaloonVolume()const { return baloonVolume; }

	/*void setBaloonMaxSpeed(int maxSpeed);
	void setBaloonColor(string vehicleColor);
	void setBaloonCntPassengers(int cntPassengers);
	void setBaloonModel(string vehicleModel);
	void setBaloonHasEngine(bool hasEngine);
	void setBaloonAltitude(int altitude);

	int getBaloonMaxSpeed()const { return this->getAVMaxSpeed(); }
	string getBaloonColor()const { return this->getAVColor(); }
	int getBaloonCntPassengers()const { return this->getAVCntPassengers(); }
	string getBaloonModel()const { return this->getAVModel(); }
	bool getBaloonHasEngine()const { return this->getAVHasEngine(); }
	int getBaloonAltitude()const { return this->getAVAltitude(); }*/

	void info();
	
};

