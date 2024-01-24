#include <iostream>
using namespace std;

int main()
{
	int numbers[100];
	int index;

	for(index=0; index<100; index++) {
		cout << "Input " << index+1 << ". number: ";
		cin >> numbers[index];
	}

	cout << "Numbers in reverse order: \n";

	for(index=99; index >= 0; index--) {
		cout << numbers[index] << " ";
	}

	cout << endl;
}