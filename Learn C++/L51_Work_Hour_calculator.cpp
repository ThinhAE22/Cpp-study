#include<iostream>

using namespace std;

int main() {
	cout <<"The program calculates the total amount of"  << endl << "work hours during a given time frame and the average work day length." << endl;
	int work_day;
	cout << "How many days:" << endl;
	cin >> work_day;
	double work_hour[30];
	int i,b,c,a = 0;
	for (int i = 1; i <= work_day; i++) {
        if (a < work_day ) {
			cout << "Input hours of workday " << i << ": ";
			cin >> work_hour[a];
            a++;
        }
	}
	
	
	double WorkHour = 0;
	for (int b = 0; b < work_day; b++) {
		WorkHour = WorkHour + work_hour[b];
	}
	
	
	cout << "Total work hours: " << WorkHour << endl;
	cout << "Average work day length: " << WorkHour/work_day << endl;
	
	
	cout << "Inputted hours: ";
	for (int c = 0; c < work_day; c++) {
		cout << work_hour[c] << " ";
	}
	cout << endl;
	return 0;
}
