#include <iostream>
#include <fstream> //a library let you read and edit txt file
using namespace std;

int main() 
{
    string row;
    char character;
 
    // open story.txt for reading
    ifstream read("story.txt");

    // if reading is successful
    if (read.is_open()) {
        // read one string type value from the file
        read >> row;
        cout << "row: " << row << endl;
        // read one character from the file with get()-function
        read.get(character); // same as 'read >> character;'
        cout << "character: " << "->" << character << "<-" << endl; //get the " " character (space/blank characcter)
    
        // read the rest of the rows
        while (read >> row) {
            cout << "row: " << row << endl;
        }
    
    } else {
        cout << "Unable to open the file!" << endl;
        exit(-1);
    }
}