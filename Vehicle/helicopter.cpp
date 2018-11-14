#include "helicopter.h"



void helicopter::setHelicopterBladeSize(int bladeSize)
{
	this->bladeSize = bladeSize;
}



void helicopter::info()
{
	engineAirVehicle::info();
	cout << "blade size " << bladeSize << endl;
}
