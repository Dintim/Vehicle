#include"bus.h"

void main()
{
	bus b(60, "red", 100, "iveco", 1,4,"sedan");
	//int maxSpeed, string vehicleColor, int cntPassengers, string vehicleModel, bool hasEngine, int cntWheels, string bodyType
	/*b.info();
	b.setVehicleColor("grey");
	b.info();*/
	cout << b.getVehicleModel();
	system("pause");
}