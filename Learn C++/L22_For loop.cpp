//For loop
#include<iostream>

using namespace std;

int  main() {
    //Ex1: i++ means i = i + 1 or i+=1
    for(int i = 1; i <= 5; i++) {
        cout << i << " " ;
    }
    //Ex2: i -- means i = i - 1 or i -= 1
    for(int i = 10; i >= 0; i--) {
        cout << i << " ";
    }
    //Ex3: we can define what kind of loop we want like i +=2 or i -=3
    for (int i = 2; i <= 100; i+=2) {
        cout << i << " ";
    }
    return 0;
    //Flow of a (for) loop 
    /* Step 1: Declare varible i in EX1: for(int i = 1;...)
     and assign a starting value i = 1

       Step 2: If i <= 5, the cout << i << ""; 
     will be execute and if i > 5 the code stops and not go to step 3
       
       Step 3: i increse by 1 unit and back to step 2 (i++ means  i = i+1 or i += 1)
       */
}