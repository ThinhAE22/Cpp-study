//Boolean in C++
#include<iostream>

using namespace std;

int main() {
    //bool is the scope for boolean var 
    // the result by default true = 1, false = 0
    bool a = true;
    bool b = false;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    // boolean data type often use to express logical expression
    bool b1 = 5 > 4; //since 5 is greater than 4 so b1 is true
    bool b2 = 5 < 4; // since 5 is not lesser than 4 so b2 is false
    bool b3 = 5 == 5; //since 5 equal 5 so b3 is true
    bool b4 = 5 != 5; //since 5 is not (NOT EQUAL) to 5 so b4 is false
    return 0;
}