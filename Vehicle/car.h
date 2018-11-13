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

	/*void setCarMaxSpeed(int maxSpeed);
	void setCarColor(string vehicleColor);
	void setCarCntPassengers(int cntPassengers);
	void setCarModel(string vehicleModel);
	void setCarHasEngine(bool hasEngine);
	void setCarCntWheels(int cntWheels);

	int getCarMaxSpeed()const { return this->getGVMaxSpeed(); }
	string getCarColor()const { return this->getGVColor(); }
	int getCarCntPassengers()const { return this->getGVCntPassengers(); }
	string getCarModel()const { return this->getGVModel(); }
	bool getCarHasEngine()const { return this->getGVHasEngine(); }
	int getCarCntWheels()const { return this->getGVCntWheels(); }*/

	void info();

};

