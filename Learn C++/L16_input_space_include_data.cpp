#include<iostream>
#include<string>

using namespace std;

int main() {
    string s;
    getline(cin,s);
    /*since cin statemant cannot read space so 
    if s input are "Welcome to code learn" the output will
    be "Welcome" to fix simply 
    
    #include<string>

    getline(cin,s);

    */
    cout << s;
    return 0;
}