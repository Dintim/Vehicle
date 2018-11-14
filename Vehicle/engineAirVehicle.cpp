#include "engineAirVehicle.h"

void engineAirVehicle::setEngineAVPower(int enginePower)
{
	this->enginePower = enginePower;
}



void engineAirVehicle::info()
{
	airVehicle::info();
	cout << "engine power " << enginePower << endl;
}
