/*Integer range scope in C++
short is from -32768 to 32767
int  is from -2147483648 to 2147483647
long is from -2147483647 to 2147483647 (the same as the range of int)
long long is from -9223372036854775808 to 9223372036854775807
long long consume alot memmory 
*/

#include<iostream>

using namespace std;

int main() {
    long long a = 384847522;
    long long b = 988347273;
    cout << "a*b = " << a * b << endl;
    int c = 384847522;
    int d = 988347273;
    cout << "c*d = " << (long long)c * d << endl; /* you can use long long to declare that the result is in the long long scope */
    cout << "c*d = " << c * d; // if the result out of the range of scope int for ex the math will fail
    return 0;
}

