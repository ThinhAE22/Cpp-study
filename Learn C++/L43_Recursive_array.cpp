// recursive array
#include <iostream>

using namespace std;

int sumOfArray(int a[1000], int n) {
    if (n == 1) return a[0];
    return a[n-1] + sumOfArray(a,n-1);
}

int main() {
    int n;
    int arr[1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << sumOfArray(arr, n);
    return 0;
}