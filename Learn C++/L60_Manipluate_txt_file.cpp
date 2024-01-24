#include <iostream>
#include <fstream>
using namespace std;
 
int main()
{
    // creating the file object
    ofstream writing;

    // open the file for writing
    writing.open("tale.txt");

    if (!writing.is_open()) {
        cout << "Failed to open the file!" << endl;
        exit(-1);
    }

    // file is open, let's move on...
    string row;
    bool tale_continues = true;

    cout << "Write your tale.\nFinish by pressing 2x[return]." << endl;
    cout << "- - - - - - - - - -" << endl;

    while(tale_continues) {

        getline(cin, row); // read the row from keyboard

        if (row.compare("") == '0') { // if row is empty
            // while-loop is false (it also allow to make new line an store it in the row (varible))
            tale_continues = false;
        } else { // text written
            // write the row as is to the file
            // note that the line break character was not read
            // to the variable row, so let's add it here
            writing << row << endl;

        }
    }

    writing.close(); // close the file where the rows were stored in.
}