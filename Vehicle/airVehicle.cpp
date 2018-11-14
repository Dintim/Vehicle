#include "airVehicle.h"

void airVehicle::setAVAltitude(int altitude)
{
	this->altitude = altitude;
}



void airVehicle::info()
{
	vehicle::info();
	cout << "altitude " << altitude << endl;
}
