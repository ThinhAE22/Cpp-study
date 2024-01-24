//Logical gate AND (&&) and OR (||)
//Require : Make an code accept score in range 0 -> 10 and do not except others score

#include<iostream>

using namespace std;

int main() {
    int score;
    cin >> score;
    if (score < 0 || score >10) {
        cout << "The score is not valid";
    } else {
        cout << "The score is valid";
    }
    return 0;
}