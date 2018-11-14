#include "car.h"



void car::setCarBodyType(string bodyType)
{
	this->bodyType = bodyType;
}



void car::info()
{
	groundVehicle::info();
	cout << "body type " << bodyType << endl;
}
