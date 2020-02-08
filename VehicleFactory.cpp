#include "VehicleFactory.h"

Vehicle* VehicleFactory::CreateVehicle(int type)
{
	Vehicle* vehicle;
	switch (type)
	{
	case VehicleType::m_auto:
		vehicle = new Auto;
		break;
	case VehicleType::train:
		vehicle = new Train;
		break;
	default:
		vehicle = nullptr;
		break;
	}
	return vehicle;
}