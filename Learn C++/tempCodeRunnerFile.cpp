#include<iostream>
#include<fstream>

using namespace std;

int main() {
	ifstream file;
	file.open("students.txt");
		
	if (!file.is_open()) {
        cout << "Failed to open the file!" << endl;
        exit(-1);
    }
	
	string name;
	string class_name;
	
	if (file.is_open()) {
		while(!file.eof()){
            file >> class_name;
            getline(file, name);
			cout << name << ":" << "class" << class_name << endl;
		}
	}
	file.close();
}