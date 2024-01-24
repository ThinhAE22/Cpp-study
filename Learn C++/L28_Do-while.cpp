//Do-while 
#include<iostream>

using namespace std;

int main() {
    int i = 1;
	do {
		cout << "do-while";
	} while (i < 1);
// Do while execute the command before checking condition, thus do-while is printed on the terminal
	while (i < 1) {
		cout << "while";
	}
// While check the condition first before execute the command, thus while is not printed on the terminal
	return 0;
}