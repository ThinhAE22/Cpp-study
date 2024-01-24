//Recursive Function ham de quy
#include<iostream>

using namespace std;

/*
factorial(5)
= 5 * factorial(4)
= 5 * 4 * factorial(3)
= 5 * 4 * 3 * factorial(2)
= 5 * 4 * 3 * 2 * factorial(1)
= 5 * 4 * 3 * 2 * 1
= 120
*/

#include<iostream>

using namespace std;

int factorial(int n) {
    if (n == 1) return 1; // break point
    return n * factorial(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}