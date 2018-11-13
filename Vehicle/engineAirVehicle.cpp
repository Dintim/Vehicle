#include "engineAirVehicle.h"

void engineAirVehicle::setEngineAVPower(int enginePower)
{
	this->enginePower = enginePower;
}

//void engineAirVehicle::setEngineAVMaxSpeed(int maxSpeed)
//{
//	this->setAVMaxSpeed(maxSpeed);
//}
//
//void engineAirVehicle::setEngineAVColor(string vehicleColor)
//{
//	this->setAVColor(vehicleColor);
//}
//
//void engineAirVehicle::setEngineAVCntPassengers(int cntPassengers)
//{
//	this->setAVCntPassengers(cntPassengers);
//}
//
//void engineAirVehicle::setEngineAVModel(string vehicleModel)
//{
//	this->setAVModel(vehicleModel);
//}
//
//void engineAirVehicle::setEngineAVHasEngine(bool hasEngine)
//{
//	this->setAVHasEngine(hasEngine);
//}
//
//void engineAirVehicle::setEngineAVAltitude(int altitude)
//{
//	this->setAVAltitude(altitude);
//}

void engineAirVehicle::info()
{
	airVehicle::info();
	cout << "engine power " << enginePower << endl;
}
