/*a = 97
b = 98
c = 99
d = 100

A = 65
B = 66
C = 67
D = 68
As you can see, the value of a lowercase character is equal to the total value of its uppercase 
character and 32.

#include<iostream>

using namespace std;

int main() {
    char c = 'd' - 32;
    cout << c;
    return 0;
}
When the code above is compiled and executed, it produces the following result: D 
*/
#include<iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= 32;
        }
    }
    cout << s;
    return 0;
}