#include "bike.h"



void bike::setBikeType(string bikeType)
{
	this->bikeType = bikeType;
}



void bike::info()
{
	groundVehicle::info();
	cout << "bike type " << bikeType << endl;
}
