#include <iostream>
using namespace std;

class Calculator
{
  public:

  int Sum(int first, int second);
};

int Calculator::Sum(int first, int second)
{
  int sum =first + second;
  return sum;
}


class Printer
{
	public:
	void Print();
};

void Printer::Print() {
    int a,b,sum = 0;
	cout << "Give a first integer: ";
	cin >> a;
	cout << "Give a second integer: ";
	cin >> b;
	Calculator calc1;
	cout << "Sum: " << calc1.Sum(a, b);
	
}

//___________________________________________

int main()
{  
  Printer object;
  object.Print();
} 