#include<iostream>

using namespace std;

// break is to stop a loop with certain condition
// we put a break after the cout command in for loop so the cout will be execute first
// if the break was before cout command the result will be 1-49
int main() {
    for (int i = 0; i <= 100; i++) {
        cout << i << " ";
        if (i == 50) {
            break;
        }
    }
//same goes with while
    int a = 1;
    while (a <= 20) {
        if (a == 11) {
        break;
        }
        cout << a << " ";
        a++;
    }
    return 0;
}