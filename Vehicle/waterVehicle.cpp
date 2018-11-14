#include "waterVehicle.h"



void waterVehicle::setWVDisplacement(int displacement)
{
	this->displacement = displacement;
}



void waterVehicle::info()
{
	vehicle::info();
	cout << "displacement " << displacement << endl;
}
