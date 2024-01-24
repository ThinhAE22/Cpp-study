//Counting appearence of letter eg: Code learn has 2 "e" so print 2

#include<iostream>

using namespace std;

int main() {
    string s;
    char c; // we use char if the value has only 1 letter
    cin >> s >> c;
    int total = 0;
    for (int i = 0;i < s.size(); i++) { //s.size is the size of the string (string is bassically a array of letters so convert it into array)
        if ( c == s[i]) {
            total += 1;
        }
    }
    cout << total;
    return 0;
}
