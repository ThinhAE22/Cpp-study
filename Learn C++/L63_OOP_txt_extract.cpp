#include <iostream>
#include <fstream>
#include <string>

using namespace std;
 
int main() 
{
    ifstream file("shopping.txt");
    
    if (!file.is_open()) {
        cout << "Failed to open the file!" << endl;
        exit(-1);
    }

    string product_name;
    int products = 0;
    float price, sum = 0;
    
    cout << "shopping" << endl;
    while(file >> product_name && file >> price) {
        cout << product_name << ": " << price << " euros" << endl;
        products++;
        sum += price;
    }
    cout << "products in total: " << products << " pcs" << endl;
    cout << "sum: " << sum << " euros" << endl;
}
