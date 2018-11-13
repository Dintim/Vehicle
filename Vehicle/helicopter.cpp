#include "helicopter.h"



void helicopter::setHelicopterBladeSize(int bladeSize)
{
	this->bladeSize = bladeSize;
}

//void helicopter::setHelicopterMaxSpeed(int maxSpeed)
//{
//	this->setEngineAVMaxSpeed(maxSpeed);
//}
//
//void helicopter::setHelicopterColor(string vehicleColor)
//{
//	this->setEngineAVColor(vehicleColor);
//}
//
//void helicopter::setHelicopterCntPassengers(int cntPassengers)
//{
//	this->setEngineAVCntPassengers(cntPassengers);
//}
//
//void helicopter::setHelicopterModel(string vehicleModel)
//{
//	this->setEngineAVModel(vehicleModel);
//}
//
//void helicopter::setHelicopterHasEngine(bool hasEngine)
//{
//	this->setEngineAVHasEngine(hasEngine);
//}
//
//void helicopter::setHelicopterAltitude(int altitude)
//{
//	this->setEngineAVAltitude(altitude);
//}
//
//void helicopter::setHelicopterPower(int enginePower)
//{
//	this->setEngineAVPower(enginePower);
//}

void helicopter::info()
{
	engineAirVehicle::info();
	cout << "blade size " << bladeSize << endl;
}
