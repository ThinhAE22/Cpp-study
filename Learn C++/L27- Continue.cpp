#include<iostream>

using namespace std;
// continue command skip the "will be executed command if the condition is true"
int main() {
    for (int i = 0; i <= 100; i++) {
        if (i % 2 == 0) {
            continue;
        }
        cout << i << " ";
    }
    return 0;
}