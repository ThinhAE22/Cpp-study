#include<iostream>

using namespace std;

int main() {
    int a,b;
    char c;
    cin a << c << b;
    
    switch (c) {   //switch([varieble name]) {} will show what value will be change (varible name)
                   
    case '+': // case "changing value of [varible name]"
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    default:
        cout << "please input +,-,*,/"; //Like a default output for other cases
        break;
    }
    return 0;
}
