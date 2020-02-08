#include "Vehicle.h"
#include "Auto.h"
#include "Train.h"
#include "VehicleFactory.h"
#include <conio.h>

int Vehicle::m_counter = 0;

int main()
{
	Auto car("Mazda", 45, 85.3,2);
	car.Print();

	Auto car2;
	car2 = car + 56.7;
	car2.Print();

	Train train("No one knows", 89, 65, 4);
	cout << train;

	Train train2 = train;
	++train2;
	cout << train2;

	Train train3(train2);
	train3.Print();
	cout << "Clasa: " << train3.GetClass() << endl;

	Train x;
	x.Scan();
	cout << x;

	//polimorfism3
	cout << "Vehicle Factory:" << endl;
	VehicleFactory factory;
	Vehicle* obj[4];
	for (int i = 0; i < 4; i++)
	{
		int type;
		cout << "Type(AUTO=1, TRAIN=2): ";
		cin >> type;
		obj[i] = factory.CreateVehicle(type);
		try
		{
			cout << typeid(*obj[i]).name() << endl;
		}
		catch (...)
		{
			cout << "Nullptr" << endl;
		}
	}
	cout << endl;

	for (int i = 0; i < 4; i++)
	{
		try 
		{
			cout << "Object " << i + 1 << ", of type " << typeid(*obj[i]).name() << ":" << endl;
		}
		catch (...)
		{
			cout << "Object " << i + 1 << " is a nullptr. Create vehicle:" << endl;
			int type;
			do 
			{
				cout << "Type(Auto=1, Train=2): ";
				cin >> type;
			} while (type != 1 && type != 2);
			obj[i] = factory.CreateVehicle(type);
		}
		obj[i]->Scan();
	}

	//afisare
	cout << endl;
	for (int i = 0; i < 4; i++)
	{
		obj[i]->Print();
		cout << endl;
	}
	cout << "Contor=" << obj[0]->GetContor() << endl;

	// dealloc
	for (int i = 0; i < 4; i++)
	{
		delete obj[i];
	}
	return 0;
}