#include "groundVehicle.h"



void groundVehicle::setGVCntWheels(int cntWheels)
{
	this->cntWheels = cntWheels;
}



void groundVehicle::info()
{
	vehicle::info();
	cout << "count of wheels " << cntWheels << endl;
}
