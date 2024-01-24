//Logical "AND" in C++
#include<iostream>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    if (a != 0 && b != 0) { //use && as an "AND" logical gate
        cout << "a is not equal to 0 and b is not equal to 0";
    }
    return 0;
}