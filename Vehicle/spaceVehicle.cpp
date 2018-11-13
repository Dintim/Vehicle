#include "spaceVehicle.h"



void spaceVehicle::setSVFuelType(string fuelType)
{
	this->fuelType = fuelType;
}

//void spaceVehicle::setSVMaxSpeed(int maxSpeed)
//{
//	this->setMaxSpeed(maxSpeed);
//}
//
//void spaceVehicle::setSVColor(string vehicleColor)
//{
//	this->setVehicleColor(vehicleColor);
//}
//
//void spaceVehicle::setSVCntPassengers(int cntPassengers)
//{
//	this->setCntPassengers(cntPassengers);
//}
//
//void spaceVehicle::setSVModel(string vehicleModel)
//{
//	this->setVehicleModel(vehicleModel);
//}
//
//void spaceVehicle::setSVHasEngine(bool hasEngine)
//{
//	this->setHasEngine(hasEngine);
//}

void spaceVehicle::info()
{
	vehicle::info();
	cout << "fuel type " << fuelType << endl;
}
