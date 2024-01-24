//While loop example
#include<iostream>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    // answer is variable that stores the result of a to the power of b
    // Note: You have to initialize varible answer to value 1
    int answer = 1;
    while (b > 0) {
        // answer *= a equal to answer = answer * a
        answer *= a;
        b--;
    }
    cout << answer;
    return 0;
}