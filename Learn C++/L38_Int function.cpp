// int functions
#include<iostream>

using namespace std;

int sumOfArray(int arr[1000], int n) { // declare var parameter in the func
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum; 
}

/* the function stop when the return is written, so the 
result will be 1 when we replace sum with 1
E.G:
#include<iostream>

using namespace std;

int sum(int a, int b) {
	return 1;
	return a + b;
}

int main() {
	cout << sum(2, 3) << endl;
	cout << sum(1, 4) << endl;
	cout << sum(3, 7) << endl;
	return 0;
}

Ouput
1
1
1
*/

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