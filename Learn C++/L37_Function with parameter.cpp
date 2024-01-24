//Function with varibles
#include<iostream>

using namespace std;

// step 1: Declare function show with string (parameter eg int,char or string)  + variable "name" passed to function
void show(string name) {
    cout << "Hello " << name;
}

int main() {
    string name ="Codelearn";
    // You can also call "show("Codelearn") instead of line 12 + line 14
    show(name)
    return 0;
}