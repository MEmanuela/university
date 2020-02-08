#pragma once

#include "Vehicle.h"
#include "Auto.h"
#include "Train.h"

class VehicleFactory
{
public:
	static Vehicle* CreateVehicle(int type);
};
