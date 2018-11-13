#include "bike.h"



void bike::setBikeType(string bikeType)
{
	this->bikeType = bikeType;
}

//void bike::setBikeMaxSpeed(int maxSpeed)
//{
//	this->setGVMaxSpeed(maxSpeed);
//}
//
//void bike::setBikeColor(string vehicleColor)
//{
//	this->setGVColor(vehicleColor);
//}
//
//void bike::setBikeCntPassengers(int cntPassengers)
//{
//	this->setGVCntPassengers(cntPassengers);
//}
//
//void bike::setBikeModel(string vehicleModel)
//{
//	this->setGVModel(vehicleModel);
//}
//
//void bike::setBikeHasEngine(bool hasEngine)
//{
//	this->setGVHasEngine(hasEngine);
//}
//
//void bike::setBikeCntWheels(int cntWheels)
//{
//	this->setGVCntWheels(cntWheels);
//}

void bike::info()
{
	groundVehicle::info();
	cout << "bike type " << bikeType << endl;
}
