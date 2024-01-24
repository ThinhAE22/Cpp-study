#include <iostream>

#include <string>

using namespace std;

string text;

class AskAndPrint {
public:
        string text;
	
        AskAndPrint();
        AskAndPrint(string new_text);
	    void DoYourThing(string new_text);
};

AskAndPrint::AskAndPrint() {
	text = "Unnamed";
}

AskAndPrint::AskAndPrint(string new_text) {
	text = new_text;
}

void AskAndPrint::DoYourThing(string new_text) {
    cout << "Write the text for printing: ";
    getline(cin,new_text);
    cout << new_text;
}

 
int main (void)

{  
   AskAndPrint thing;

   thing.DoYourThing(text);

}