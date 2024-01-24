//Define a function
#include<iostream>

using namespace std;


//Function format
void print() {
    // print 1 to 100
    for (int i = 0; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;
}


void printAlphabet() {
    for (char c = 'A'; c <= 'Z'; c++) {
        cout << c;
    }
}


int main() {
    // Call funtion
    print();
    printAlphabet();
    return 0;
}
