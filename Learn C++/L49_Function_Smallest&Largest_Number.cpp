#include <iostream>

using namespace std;

int largest(int first, int second, int third);

int smallest(int first, int second, int third);

int main() {

  int number1, number2, number3, largestnumber,smallestnumber;

  cout << "Input the first integer";

  cin >> number1;

  cout << "Input the second integer:";

  cin >> number2;

  cout << "Input the third integer:";

  cin >> number3;

  largestnumber = largest(number1, number2, number3);

 smallestnumber =smallest(number1, number2, number3);

  cout << "The largest number was " << largestnumber;

  cout << " and the smallest " <<smallestnumber << "." << endl;

  return 0;
}

int largest(int first, int second, int third) {
	int largestNumber;
	if (second < first && third < first) {
		largestNumber = first;
		} else if (second < third && first < third) {
		largestNumber = third;
	} else if (second > third && first < second) {
		largestNumber = third;
	}
	return largestNumber;
}

int smallest(int first, int second, int third) {
	int smallestNumber;
	if (second < first && third < first && second < third) {
		smallestNumber = second;
		} else if (second < third && first < third && first < second) {
		smallestNumber = first;
	} else if (second > third && first < second && third < first) {
		smallestNumber = third;
	}
	return smallestNumber;
}