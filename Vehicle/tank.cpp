#include "tank.h"



void tank::setTankPower(int tankPower)
{
	this->tankPower = tankPower;
}



void tank::info()
{
	car::info();
	cout << "tank power " << tankPower << endl;
}
