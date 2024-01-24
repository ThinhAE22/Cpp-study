#include <iostream>
#include <fstream>

using namespace std;

int main() {
	fstream file;
    char file_name[12] = "numbers.txt";
    file.open(file_name, ios_base::in);

	int number;
	int sum = 0;
	
    if (file.is_open()) {
		while (file >> number) {
		sum = sum + number;
		}
        cout << "Sum is " << sum << endl; 
        file.close();
	} else {
        cout << "Failed to open the file!" << endl;
        exit(-1);
    }

    
    file.open(file_name, ios_base::out|ios_base::app);
    if (file.is_open()) {
        file << sum << endl;
        file.close();
    }
}