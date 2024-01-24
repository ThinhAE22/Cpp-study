#include <iostream>
#include <string>

using namespace std;

// Add the source code of the class Dog here
class PrintClass
{
public:
    string char_zero;
    PrintClass();
    PrintClass(string new_char);
    void print(string new_char);
    void get(string new_char);
};

PrintClass::PrintClass()
{
    char_zero = "Unnamed";
}

PrintClass::PrintClass(string new_char)
{
  char_zero = new_char;
}

void PrintClass::print(string new_char)
{
  cout << new_char << endl;
}

void PrintClass::get(string new_char)
{
  char_zero = new_char;
}


// source code excluded to keep the example shorter

int main()
{
    char charstring[50];

    cout << "Input a character string for printing:";

    cin.get(charstring, 50);

    PrintClass printer;

    printer.print(charstring);
}