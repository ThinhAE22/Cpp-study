#include <iostream>
#include <fstream>
using namespace std;

void print_matrix(int matrix[5][5]);
int calculate_sum(int matrix[5][5]);

int main(void)
{
  int matrix[5][5];
  int sum;
  ifstream file("matrix.txt");
  if (!file){
        cout << "File cannot be opened!";
  }
  else {
    for (int y=0; y<5;y++){
          for (int x=0;x<5;x++){
            file >> matrix[y][x];
          }
    }
    file.close();
    cout << "Matrix:" << endl;
    print_matrix(matrix);
    sum = count_sum(matrix);
    cout << "Sum of elements: " << sum << endl;
  }
} 

void print_matrix(int matrix[5][5]) {
	for (int y=0; y<5;y++){
          for (int x=0;x<5;x++){
			  if (x == 4) {
				  cout << matrix[y][x] << "\n";
			  } else {
				  cout << matrix[y][x] << "\t";
			  }
            
		  }
	}
}
		
int count_sum(int matrix[5][5]) {
	int sum = 0;
	for (int y=0; y<5;y++){
          for (int x=0;x<5;x++){
            sum = sum + matrix[y][x];
		  }
	}
	return sum;
}