#pragma once
#include"engineAirVehicle.h"
class plane:public engineAirVehicle
{
	int cntWings;
public:
	plane(int maxSpeed, string vehicleColor, int cntPassengers, string vehicleModel, bool hasEngine, int altitude, int enginePower, int cntWings=1) :engineAirVehicle(maxSpeed, vehicleColor, cntPassengers, vehicleModel, hasEngine, altitude, enginePower) {
		this->cntWings = cntWings;
	}
	void setPlaneCntWings(int cntWings);
	int getPlaneCntWings()const { return cntWings; }

	/*void setPlaneMaxSpeed(int maxSpeed);
	void setPlaneColor(string vehicleColor);
	void setPlaneCntPassengers(int cntPassengers);
	void setPlaneModel(string vehicleModel);
	void setPlaneHasEngine(bool hasEngine);
	void setPlaneAltitude(int altitude);
	void setPlanePower(int enginePower);

	int getPlaneMaxSpeed()const { return this->getEngineAVMaxSpeed(); }
	string getPlaneColor()const { return this->getEngineAVColor(); }
	int getPlaneCntPassengers()const { return this->getEngineAVCntPassengers(); }
	string getPlaneModel()const { return this->getEngineAVModel(); }
	bool getPlaneHasEngine()const { return this->getEngineAVHasEngine(); }
	int getPlaneAltitude()const { return this->getEngineAVAltitude(); }
	int getPlanePower()const { return this->getEngineAVPower(); }*/

	void info();
};

