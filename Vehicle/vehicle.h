#pragma once
#include <string>
#include <iostream>
using namespace std;

class vehicle
{
	int maxSpeed;
	string vehicleColor;
	int cntPassengers;
	string vehicleModel;
	bool hasEngine;
public:
	vehicle(int maxSpeed, string vehicleColor, int cntPassengers, string vehicleModel, bool hasEngine);
	void setMaxSpeed(int maxSpeed);
	void setVehicleColor(string vehicleColor);
	void setCntPassengers(int cntPassengers);
	void setVehicleModel(string vehicleModel);
	void setHasEngine(bool hasEngine);

	int getMaxSpeed()const { return maxSpeed; }
	string getVehicleColor()const { return vehicleColor; }
	int getCntPassengers()const { return cntPassengers; }
	string getVehicleModel()const { return vehicleModel; }
	bool getHasEngine()const { return hasEngine; }

	void info();
};

