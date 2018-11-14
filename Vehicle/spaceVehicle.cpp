#include "spaceVehicle.h"



void spaceVehicle::setSVFuelType(string fuelType)
{
	this->fuelType = fuelType;
}



void spaceVehicle::info()
{
	vehicle::info();
	cout << "fuel type " << fuelType << endl;
}
