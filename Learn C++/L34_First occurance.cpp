//First occurence
#include<iostream>

using namespace std;

int main() {
    string s;
    char c;
    int result;
    cin >> s >> c;
    int index = -1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) {
            index = i;
            /*
            Use break statement to terminate the loop because
            we had found the first occurence of c.
            If we don't use break statement, the program will produce
            the last position of c's occurence.
            */
             break;
        }
    }
    cout << index;
    return 0;
}