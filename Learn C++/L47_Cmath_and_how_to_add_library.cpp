//Cmath and how to add an library
#include<cmath>
#include<iostream>

using namespace std;

int main() {
	// Trigonometric Functions
	double value = 0.5;
	cout << sin(value) << endl;
	cout << cos(value) << endl;
	cout << tan(value) << endl;

	// Inverse Trig Function
	cout << asin(value) << endl;
	cout << acos(value) << endl;
	cout << atan(value) << endl;

	// Hyperbolic Trig Function
	cout << cosh(value) << endl;
	cout << sinh(value) << endl;
	cout << tanh(value) << endl;

	//Some Root Function
	cout << sqrt(4) << endl; // Squared Root
	cout << cbrt(8) << endl; // Cubed Root

	// Logarithms
	cout << log(1.5) << endl;

	//Round function
	cout << round(50.5) << endl;
	cout << round(50.499999) << endl;

	// Power Function
	cout << pow(3,4) << endl;

	//Other function
	cout << ceil(11.1) << endl;
	cout << floor(11.9) << endl;
	cout << fabs(-11) << endl;
	cout << hypot(3,4) << endl; // Pythagorean's theorem
	cout << fmod(11,2) << endl;

	//Comparison Functions
	double number = 0.4;

	if(isgreater(number, 0))
		cout << number << "is greater than 0" << endl;
	else
		cout << number << "is  not greater than 0" << endl;
	return 0;
}