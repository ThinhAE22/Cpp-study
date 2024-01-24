// Consecutive recursive function
#include <iostream>

using namespace std;

int sum(int n) {
    if (n == 1) return 1;
    if (n % 2 == 0) {
        return sum(n-1); //to skip the even number chain
    } else {
        return n + sum(n-1);
    }
}

int main() {
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}