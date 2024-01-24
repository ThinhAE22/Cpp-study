//Decimal function (The "double" parameter)
#include <iostream>

using namespace std;

double circumference(double r) {
	return 2 * r * 3.14;
}

int main() {
	double r;
	cin >> r;
	cout << circumference(r);
	return 0;
}