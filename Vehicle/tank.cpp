#include "tank.h"



void tank::setTankPower(int tankPower)
{
	this->tankPower = tankPower;
}

//void tank::setTankMaxSpeed(int maxSpeed)
//{
//	this->setCarMaxSpeed(maxSpeed);
//}
//
//void tank::setTankColor(string vehicleColor)
//{
//	this->setCarColor(vehicleColor);
//}
//
//void tank::setTankCntPassengers(int cntPassengers)
//{
//	this->setCarCntPassengers(cntPassengers);
//}
//
//void tank::setTankModel(string vehicleModel)
//{
//	this->setCarModel(vehicleModel);
//}
//
//void tank::setTankHasEngine(bool hasEngine)
//{
//	this->setCarHasEngine(hasEngine);
//}
//
//void tank::setTankCntWheels(int cntWheels)
//{
//	this->setCarCntWheels(cntWheels);
//}
//
//void tank::setTankBodyType(string bodyType)
//{
//	this->setCarBodyType(bodyType);
//}

void tank::info()
{
	car::info();
	cout << "tank power " << tankPower << endl;
}
