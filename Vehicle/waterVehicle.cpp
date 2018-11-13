#include "waterVehicle.h"



void waterVehicle::setWVDisplacement(int displacement)
{
	this->displacement = displacement;
}

//void waterVehicle::setWVMaxSpeed(int maxSpeed)
//{
//	this->setMaxSpeed(maxSpeed);
//}
//
//void waterVehicle::setWVColor(string vehicleColor)
//{
//	this->setVehicleColor(vehicleColor);
//}
//
//void waterVehicle::setWVCntPassengers(int cntPassengers)
//{
//	this->setCntPassengers(cntPassengers);
//}
//
//void waterVehicle::setWVModel(string vehicleModel)
//{
//	this->setVehicleModel(vehicleModel);
//}
//
//void waterVehicle::setWVHasEngine(bool hasEngine)
//{
//	this->setHasEngine(hasEngine);
//}

void waterVehicle::info()
{
	vehicle::info();
	cout << "displacement " << displacement << endl;
}
