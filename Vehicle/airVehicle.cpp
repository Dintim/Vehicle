#include "airVehicle.h"

void airVehicle::setAVAltitude(int altitude)
{
	this->altitude = altitude;
}

//void airVehicle::setAVMaxSpeed(int maxSpeed)
//{
//	this->setMaxSpeed(maxSpeed);
//}
//
//void airVehicle::setAVColor(string vehicleColor)
//{
//	this->setVehicleColor(vehicleColor);
//}
//
//void airVehicle::setAVCntPassengers(int cntPassengers)
//{
//	this->setCntPassengers(cntPassengers);
//}
//
//void airVehicle::setAVModel(string vehicleModel)
//{
//	this->setVehicleModel(vehicleModel);
//}
//
//void airVehicle::setAVHasEngine(bool hasEngine)
//{
//	this->setHasEngine(hasEngine);
//}

void airVehicle::info()
{
	vehicle::info();
	cout << "altitude " << altitude << endl;
}
