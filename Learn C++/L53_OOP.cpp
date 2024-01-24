//OOP 
#include <iostream>
#include <string>

using namespace std;

// Add the source code of the class Dog here
class Dog
{
public:
  string breed;
  string name;
  int age;

  Dog();
  Dog(string new_name, string new_race, int new_age);
  void Bark();
  void SetName(string new_name);
  void SetBreed(string new_breed);
  void SetAge(int new_age);
  void PrintInfo(); // method to test the object
};

Dog::Dog()
{
  name = "Unnamed";
  breed = "NoBreed";
  age = 0;
}

Dog::Dog(string new_name, string new_breed, int new_age)
{
  name = new_name;
  breed = new_breed;
  age = new_age;
}

void Dog::Bark()
{
  cout << "Woof woof!!!" << endl;
}

void Dog::SetName(string new_name)
{
  name = new_name;
}

void Dog::SetBreed(string new_breed)
{
  breed = new_breed;
}

void Dog::SetAge(int new_age)
{
  age = new_age;
}

void Dog::PrintInfo()
{
  cout << name << ": " << age << " years " << breed << endl;
}
// source code excluded to keep the example shorter

int main()
{
    Dog first_dog;
    string second_name = "Spots";
    string second_breed = "Dalmatian";
    int second_age = 7;

   Dog second_dog(second_name, second_breed, second_age);

   cout << "Dog info in the beginning:\n\n";
   first_dog.PrintInfo();
   second_dog.PrintInfo();

   cout << "\nFirst dog says: ";
   first_dog.Bark();
 
   first_dog.SetName("Pluto");
   first_dog.SetBreed("Afghan");
   first_dog.SetAge(3);
 
   cout << "\n Now first dog also has a name:\n";
   first_dog.PrintInfo();
 }