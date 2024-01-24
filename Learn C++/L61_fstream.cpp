/*
fstream file(file_name, opening_flag); // definition of the file object and opening a file at once

or

fstream file; // definition of the file object
file.open(file_name, opening_flag); // opening a file

, where file_name is the chosen file and opening_flag the method of opening the file. 
Below table lists some available opening flags.


                   Mode                         |               Description
__________________________________________________________________________________________________________________________
                ios_base::in                    |   Open the file for reading. Identical to using an ifstream-object.
__________________________________________________________________________________________________________________________
                ios_base::out                   |  	Open the file for writing. Identical to using  an ofstream-object.
__________________________________________________________________________________________________________________________ 
        ios_base::out | ios_base::app           |   Open the file for writing. New information is added after the old info.
__________________________________________________________________________________________________________________________
        ios_base::in | ios_base::out            |   Open the file for reading and writing.
__________________________________________________________________________________________________________________________
ios_base::in | ios_base::out | ios_base::trunc  |   Open the file for reading and writing but delete the old contents first
___________________________________________________________________________________________________________________________
 */

#include <iostream>
#include <fstream>

using namespace std;
 
int main() 
{
    // creating the file object
    fstream file;
    char file_name[8] = "abc.txt";

    // open file for writing
    file.open(file_name, ios_base::out|ios_base::app);

    cout << "Add text to the file." << endl;
    cout << "Finish by pressing 2x[return]." << endl;
    cout << "- - - - - - - - - -" << endl;
    bool unfinished = true;
    string row;
    if (file.is_open()) {
        while (unfinished) {
            getline(cin, row);
            if (row.compare("") == 0) {
                unfinished = false;
            } else {
                file << row << endl;
            }            
        }
        file.close();
    } else {
        cout << "Failed to open the file!" << endl;
        exit(-1);
    }
    
    // open the file for reading
    file.open(file_name, ios_base::in);
 
    if (file.is_open()) {
        cout << file_name << " contents:" << endl;
        
        char character;
        while (!file.eof()) {
            if (row.get(character) != 0) {
                cout << character;
            }
        }
        file.close();
    } else {
        cout << "Failed to open the file!" << endl;
        exit(-1);
    }
}