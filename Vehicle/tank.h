#pragma once
#include"car.h"
class tank:public car
{
	int tankPower;
public:
	tank(int maxSpeed, string vehicleColor, int cntPassengers, string vehicleModel, bool hasEngine, int cntWheels, string bodyType, int tankPower) :car(maxSpeed, vehicleColor, cntPassengers, vehicleModel, hasEngine = 1, cntWheels, bodyType) {
		this->tankPower = tankPower;
	}
	void setTankPower(int tankPower);
	int getTankPower()const { return tankPower; }

	/*void setTankMaxSpeed(int maxSpeed);
	void setTankColor(string vehicleColor);
	void setTankCntPassengers(int cntPassengers);
	void setTankModel(string vehicleModel);
	void setTankHasEngine(bool hasEngine);
	void setTankCntWheels(int cntWheels);
	void setTankBodyType(string bodyType);

	int getTankMaxSpeed()const { return this->getCarMaxSpeed(); }
	string getTankColor()const { return this->getCarColor(); }
	int getTankCntPassengers()const { return this->getCarCntPassengers(); }
	string getTankModel()const { return this->getCarModel(); }
	bool getTankHasEngine()const { return this->getCarHasEngine(); }
	int getTankCntWheels()const { return this->getCarCntWheels(); }
	string getTankBodyType()const { return this->getCarBodyType(); }*/

	void info();

};

