#include <iostream>
#include <string>
using namespace std;

class Dog 
{
    public:
	int age;
	string name, race, voice;
	
	Dog();
	Dog(int new_age, string new_name, string new_race, string new_voice);
	string Bark();
	void PrintInformation(); // void return nothing
};

Dog::Dog() 
{
	age = 0;
	name = "Unassigned";
	race = "Unassigned";
	voice = "Unassigned";
}

Dog::Dog(int new_age, string new_name, string new_race, string new_voice) 
{
	age = new_age;
	name = new_name;
	race = new_race;
	voice = new_voice;
}

string Dog::Bark() { //string because the returned value is a string
	return voice;   // return value
}

void Dog::PrintInformation() {
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Race: " << race << endl;
}

//---------------------------------

int main()
{
  Dog buffy(2, "Buffy", "Bulldog", "Hau!!!");
  buffy.PrintInformation();
  cout << "Dog says: " << buffy.Bark(); //the function buffy.Bark() needs to return a value
} 