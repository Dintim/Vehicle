#include "plane.h"



void plane::setPlaneCntWings(int cntWings)
{
	this->cntWings = cntWings;
}

//void plane::setPlaneMaxSpeed(int maxSpeed)
//{
//	this->setEngineAVMaxSpeed(maxSpeed);
//}
//
//void plane::setPlaneColor(string vehicleColor)
//{
//	this->setEngineAVColor(vehicleColor);
//}
//
//void plane::setPlaneCntPassengers(int cntPassengers)
//{
//	this->setEngineAVCntPassengers(cntPassengers);
//}
//
//void plane::setPlaneModel(string vehicleModel)
//{
//	this->setEngineAVModel(vehicleModel);
//}
//
//void plane::setPlaneHasEngine(bool hasEngine)
//{
//	this->setEngineAVHasEngine(hasEngine);
//}
//
//void plane::setPlaneAltitude(int altitude)
//{
//	this->setEngineAVAltitude(altitude);
//}
//
//void plane::setPlanePower(int enginePower)
//{
//	this->setEngineAVPower(enginePower);
//}

void plane::info()
{
	engineAirVehicle::info();
	cout << "count of wings " << cntWings << endl;
}
