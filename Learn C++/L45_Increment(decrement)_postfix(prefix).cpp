//Mathematical expression
// The result is evaluated left to right
// eg x = x + 5 => x+5 is calculated first then put in to var x
#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int x = 10;
    int y = x++; 
    //  the post fix makes y receive x =10 first than x is evaluated become x = x + 1
    int b = ++a;
    // the  pre fix make the increment a = a+1 first then but 11 into var b
    cout << x << endl << y << endl << b;
    return 0;
}