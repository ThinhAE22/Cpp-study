//Array varible type  form: a[i] i is an integer
#include<iostream>

using namespace std;

int main() {
    int a[10];
    // this syntax is array varible assign
    // This mean this array include 10 different a varible
    int sum = 0;
    // a varible to store all element in the array
    for (int i = 0; i < 10; i++) {
        cin >> a;
        sum += a
    }
    /* similar to 
     for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
     for (int i = 0; i < 10; i++) {
        sum += a[i]
    }
    */
    cout << sum;
    return 0;
}