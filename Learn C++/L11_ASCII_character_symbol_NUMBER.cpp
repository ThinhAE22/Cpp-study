// ASCII character are actually intergers , can see them with cout << (int)ASCII_symbol
#include<iostream>

using namespace std;

/* It is evident that the int stand for ASCII character 
asending one unit one after another following the aphabet order */

int main() {
    cout << "a = " << (int)'a' << endl;
    cout << "b = " << (int)'b' << endl;
    cout << "..." << endl;
    cout << "x = " << (int)'0' << endl;
    cout << "y = " << (int)'y' << endl;
    cout << "z = " << (int)'z' << endl;
    // We can use math func like +,-,*,/ to transform the char 
    char d = 'a' + 3; // 97 +3 =100, and 100 is stand for D in ASCII's rule
    char e = 'd' + 1;
    cout << d << endl;
    cout << e;
    return 0;
}


