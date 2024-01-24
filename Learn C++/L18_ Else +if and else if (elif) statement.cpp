//How to use else + if, else if statement

#include<iostream>

using namespace std;

int main() {
    //else + if ( if as a sub condition of else)
    if (n > 0) {
        cout << "n is a positive number";
    } else{
        if (n < 0) {
            cout << "n is a negative number";
        } else {
            cout << "n is equal to 0";
        }
    }
    return 0;
    //else if statement (elif)
     if (n > 0) {
        cout << "n is a positive number";
    } else if (n < 0) {
        cout << "n is a negative number";
    } else {
        cout << "n is equal to 0";
}