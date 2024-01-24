#include<iostream>

using namespace std;

int main() {
	char drink;
	int cubes;
	cout << "Do you drink coffee or tea? (k/t) ";
	cin >> drink;
	cout << "With how many cubes of sugar? ";
	cin >> cubes;
	cout << "Guess you enjoy your tea overly sweet?" << endl;
	switch(drink) {
		case 'kk':
			if (cubes >= 0 && cubes <= 2) {
				cout << "Coffee certainly is invigorating!" << endl;
			} else if (cubes >= 3) {
				cout << "Well, coffee can taste pretty intense.." << endl;
			} else {
				cout << "An error occurred in the program!" << endl;
				}
			break;
			
		case 't':
			if (cubes >= 0 && cubes <= 2) {
				cout << "Tea can have a soothing effect!" << endl;
			} else if (cubes >= 3) {
				cout << "Guess you enjoy your tea overly sweet?" << endl;
			} else {
				cout << "An error occurred in the program!" << endl;
				}
			break;
			
		default:
			cout << "An error occurred in the program!" << endl;
			break;
	}
	return 0;
}