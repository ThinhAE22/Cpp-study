//Assign real number varible
#include<iostream>

using namespace std;

int main() {
    // we use the scope "double" or "float" to define real number varibles, double will be more precise than float
    double a = 10.5;
    float b = 2.5;
    int c = 3.7; // using int to define real number will only get the value before the decimal point
    int d = 10;
    int e  = 7;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d / e = " << d/e << endl; // by default the result will only take the value before the decimal point ( since e and d are int value)
    cout << "d / e = " << (double)d/e; //using the (double) scope in the math will return real number result
    return 0;
}