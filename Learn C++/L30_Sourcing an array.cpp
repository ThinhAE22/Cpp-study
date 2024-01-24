//Sourcing an array in C++
#include <iostream>

using namespace std;

int main() {
    int n;
    int arr[1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ( arr[i] < arr[j]) {
                //if arr[i] < arr[j], swap arr[i] and arr[j]'s values
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            } 
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } 
    return 0;
}