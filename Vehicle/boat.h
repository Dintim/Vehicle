#pragma once
#include"waterVehicle.h"
class boat:public waterVehicle
{
public:
	boat(int maxSpeed, string vehicleColor, int cntPassengers, string vehicleModel, bool hasEngine, int displacement):waterVehicle(maxSpeed, vehicleColor, cntPassengers, vehicleModel, hasEngine, displacement){}
	
	/*void setBoatMaxSpeed(int maxSpeed);
	void setBoatColor(string vehicleColor);
	void setBoatCntPassengers(int cntPassengers);
	void setBoatModel(string vehicleModel);
	void setBoatHasEngine(bool hasEngine);
	void setBoatDisplacement(int displacement);

	int getBoatMaxSpeed()const { return this->getWVMaxSpeed(); }
	string getBoatColor()const { return this->getWVColor(); }
	int getBoatCntPassengers()const { return this->getWVCntPassengers(); }
	string getBoatModel()const { return this->getWVModel(); }
	bool getBoatHasEngine()const { return this->getWVHasEngine(); }
	int getBoatDisplacement()const { return this->getWVDisplacement(); }*/

	void info();

};

