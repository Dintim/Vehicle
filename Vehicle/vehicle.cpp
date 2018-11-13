#include "vehicle.h"

vehicle::vehicle(int maxSpeed, string vehicleColor, int cntPassengers, string vehicleModel, bool hasEngine)
{
	this->maxSpeed = maxSpeed;
	this->vehicleColor = vehicleColor;
	this->cntPassengers = cntPassengers;
	this->vehicleModel = vehicleModel;
	this->hasEngine = hasEngine;
}

void vehicle::setMaxSpeed(int maxSpeed)
{
	this->maxSpeed = maxSpeed;
}

void vehicle::setVehicleColor(string vehicleColor)
{
	this->vehicleColor = vehicleColor;
}

void vehicle::setCntPassengers(int cntPassengers)
{
	this->cntPassengers = cntPassengers;
}

void vehicle::setVehicleModel(string vehicleModel)
{
	this->vehicleModel = vehicleModel;
}

void vehicle::setHasEngine(bool hasEngine)
{
	this->hasEngine = hasEngine;
}

void vehicle::info()
{
	cout << "max speed " << maxSpeed << "\nvehicle color " << vehicleColor << "\ncount of passengers " << cntPassengers << "\nvehicle model " << vehicleModel << "\nhas engine " << hasEngine << endl;
}
