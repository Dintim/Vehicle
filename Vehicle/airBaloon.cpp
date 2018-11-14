#include "airBaloon.h"

void airBaloon::setBaloonVolume(int baloonVolume)
{
	this->baloonVolume = baloonVolume;
}



void airBaloon::info()
{
	airVehicle::info();
	cout << "baloon volume " << baloonVolume << endl;
}
