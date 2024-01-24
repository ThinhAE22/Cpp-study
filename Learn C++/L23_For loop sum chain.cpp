#include<iostream>

using namespace std;

int main() {
    int a, b;
    int sum = 0;
    // sum is the varible that stores of all numbers from a to b
    // Note: you need to initialize varible sum to zero
    cin >> a >> b;
    for (int i = a; i <= b; i += 1) {
        sum = sum + i;
    } 
    return 0;
}