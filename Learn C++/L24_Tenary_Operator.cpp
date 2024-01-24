// C++ Tenary Operator
/* Syntax: 
condition ? expression1: expression2;

if condition is true ==> expression1 is executed

if condition is false ==> expression2 is execured

A nested Tenary Operator is that the expression is another 
tenary expression 
*/

#include<iostream>

using namespace std;

int main () {
    int num = -1;
    string result;

    //nested tenary operator to find whether
    // number is positive, negative or zero

    result = (num == 0) ? "zero" : ((num > 0) ? "Positive" : "Negative");

    cout << "Number is " << result;

    return 0;
}