#include "plane.h"



void plane::setPlaneCntWings(int cntWings)
{
	this->cntWings = cntWings;
}



void plane::info()
{
	engineAirVehicle::info();
	cout << "count of wings " << cntWings << endl;
}
