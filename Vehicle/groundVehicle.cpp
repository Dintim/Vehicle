#include "groundVehicle.h"



void groundVehicle::setGVCntWheels(int cntWheels)
{
	this->cntWheels = cntWheels;
}

//void groundVehicle::setGVMaxSpeed(int maxSpeed)
//{
//	this->setMaxSpeed(maxSpeed);
//}
//
//void groundVehicle::setGVColor(string vehicleColor)
//{
//	this->setVehicleColor(vehicleColor);
//}
//
//void groundVehicle::setGVCntPassengers(int cntPassengers)
//{
//	this->setCntPassengers(cntPassengers);
//}
//
//void groundVehicle::setGVModel(string vehicleModel)
//{
//	this->setVehicleModel(vehicleModel);
//}
//
//void groundVehicle::setGVHasEngine(bool hasEngine)
//{
//	this->setHasEngine(hasEngine);
//}

void groundVehicle::info()
{
	vehicle::info();
	cout << "count of wheels " << cntWheels << endl;
}
