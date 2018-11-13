#include "car.h"



void car::setCarBodyType(string bodyType)
{
	this->bodyType = bodyType;
}

//void car::setCarMaxSpeed(int maxSpeed)
//{
//	this->setGVMaxSpeed(maxSpeed);
//}
//
//void car::setCarColor(string vehicleColor)
//{
//	this->setGVColor(vehicleColor);
//}
//
//void car::setCarCntPassengers(int cntPassengers)
//{
//	this->setGVCntPassengers(cntPassengers);
//}
//
//void car::setCarModel(string vehicleModel)
//{
//	this->setGVModel(vehicleModel);
//}
//
//void car::setCarHasEngine(bool hasEngine)
//{
//	this->setGVHasEngine(hasEngine);
//}
//
//void car::setCarCntWheels(int cntWheels)
//{
//	this->setGVCntWheels(cntWheels);
//}

void car::info()
{
	groundVehicle::info();
	cout << "body type " << bodyType << endl;
}
