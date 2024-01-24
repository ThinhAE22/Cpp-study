//Asign value to varibles
#include<iostream>

using namespace std;

int main() {
    //How to declare a interger varibles, let's call it "a" by name
    int a;
    //asign 5 to "a"
    a = 5;
    //Display the value of varible "a" on the screen
    cout << "a = " << a;
    cout << endl;
    // another way to assign a varbile let call the new varible "b"
    int b = 238;
    cout << "a - b = " << a - b;
    cout << endl;
    // Declare multi varibles eg: c and d
    int c = 428, d =284;
    cout << "c - d = " << c - d;
    /*Varible can be int,foat,static,struct, etc.
    Valid varible forms: 
    int a;
    int _a;
    int a10_;
    Invalid varible forms:
    int 10a;
    int a 10;
    int int;
    */
    return 0;
}