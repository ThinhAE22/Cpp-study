//2D array in C++
/* A visual of 2D array
Ex: a 2 line 3 column array
input to define the type of array 2,3

the array    5 7 3
             1 2 4
*/

#include<iostream>

using namespace std;

int main() {
	int arr[100][100];
	int n, m;

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << " " << endl;
		}
	}

	return 0;
}

/* if the input folow this value
array type 3 4
3 4 8 2
5 6 4 9
2 3 8 1

the output
arr[0][0] = 3
arr[0][1] = 4
arr[0][2] = 8
arr[0][3] = 2
arr[1][0] = 5
arr[1][1] = 6
arr[1][2] = 4
arr[1][3] = 9
arr[2][0] = 2
arr[2][1] = 3
arr[2][2] = 8
arr[2][3] = 1
*/