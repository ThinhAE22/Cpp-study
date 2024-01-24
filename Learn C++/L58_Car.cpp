#include <iostream>

#include <string>

using namespace std;

class Vehicle

{

  public:

  int weight;

  int top_speed;

  long driven_km;

  Vehicle(int weight, int top_speed, long driven_km);

  void Drive(int journey);

  int InputWeight();

  int InputTopSpeed();

  long InputDrivenKM();

};

Vehicle::Vehicle(int Aw, int Ats, long Akm)

{

  weight = Aw;

  top_speed = Ats;

  driven_km = Akm;

}

 

void Vehicle::Drive(int journey)

{

  driven_km += journey;

}

 

int Vehicle::InputWeight()

{

  return weight;

}

 

int Vehicle::InputTopSpeed()

{

  return top_speed;

}

 

long Vehicle::InputDrivenKM()

{

  return driven_km;

}


/// the sub class

class Car: public Vehicle
{
public:
	
	string brand, model, license;
	bool running;
	
	Car(int new_weight, int new_speed, long new_km, string new_brand, string new_model, string new_license, bool new_running);
	
	void check_up();
	bool turn_on();
};
// Input var is in the constructor define but the one we use are the var
Car::Car(int new_weight, int new_speed, long new_km, string new_brand, string new_model, string new_license, bool new_running):
Vehicle(weight, top_speed, driven_km) {
	weight = new_weight;
	top_speed = new_speed;
	driven_km = new_km;// eg use driven_km in other func, not new_km
	brand = new_brand;
	model = new_model;
	license = new_license;
	running = new_running;
}

void Car::check_up() {
	cout << "car info: " << endl;
	cout << "brand:" << brand << endl;
	cout << "model:" << model << endl;
	cout << "Kilometres:" << driven_km << endl;
	cout << "weight:" << weight << endl;
	cout << "Top speed:" << top_speed << endl;
	cout << "License plate:" << license << endl;
	cout << "car is ";
	if (running == 0) {
		cout << "not running." << endl;
	} else if (running = 1) {
		cout << "running." << endl;
	}
}

bool Car::turn_on() {
	if (running == 0) {
		running = 1;
	} 
    return running;
}

///


int main()

{

  int weight, speed;

  long km;

  string brand, model, license;

 

  // ask information about car

  cout << "Input car brand: ";

  cin >> brand;

 

  cout << "Input car model: ";

  cin >> model;

 

  cout << "Input car license plate number: ";

  cin >> license;

 

  cout << "Input car weight: ";

  cin >> weight;

 

  cout << "Input car top speed: ";

  cin >> speed;

 

  cout << "Input distance traveled by car: ";

  cin >> km;

  cout << endl;

  Car carX(weight, speed, km, brand, model, license, 0);

 

  carX.check_up();

  carX.turn_on();

  carX.Drive(95);

  cout << endl;

  carX.check_up();

}