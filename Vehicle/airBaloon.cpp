#include "airBaloon.h"

void airBaloon::setBaloonVolume(int baloonVolume)
{
	this->baloonVolume = baloonVolume;
}

//void airBaloon::setBaloonMaxSpeed(int maxSpeed)
//{
//	this->setAVMaxSpeed(maxSpeed);
//}
//
//void airBaloon::setBaloonColor(string vehicleColor)
//{
//	this->setAVColor(vehicleColor);
//}
//
//void airBaloon::setBaloonCntPassengers(int cntPassengers)
//{
//	this->setAVCntPassengers(cntPassengers);
//}
//
//void airBaloon::setBaloonModel(string vehicleModel)
//{
//	this->setAVModel(vehicleModel);
//}
//
//void airBaloon::setBaloonHasEngine(bool hasEngine)
//{
//	this->setAVHasEngine(hasEngine);
//}
//
//void airBaloon::setBaloonAltitude(int altitude)
//{
//	this->setAVAltitude(altitude);
//}

void airBaloon::info()
{
	airVehicle::info();
	cout << "baloon volume " << baloonVolume << endl;
}
