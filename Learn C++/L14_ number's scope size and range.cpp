/* Some number data type
Type                      Size             Range
---------------------------------------------------------
bool              |       1 byte    |     0 to 1
                  |                 |
char              |       1 byte    |    -128 to 127
                  |                 |
Unsigned char     |       1 byte    |     0 to 255
                  |                 |
int               |       4 bytes   |    -2147483648 to 2147483647
                  |                 |
unsigned int      |       4 bytes   |     0 to 4294967295
                  |                 |
short             |       2 bytes   |    -32768 to 32767
                  |                 |
unsigned short    |       2 bytes   |     0 to 65535
                  |                 |
long long         |       8 bytes   |    -2^(63) to 2^(63) -1
                  |                 |
unsigned long long|       8 bytes   |     0 to 1844674407309551615
                  |                 |
float             |       4 bytes   |
                  |                 |
double            |       8 bytes   |

*/

#include<iostream>

using namespace std;

int main() {
    char a = 5;
    char b = 8;
    cout << a - b;
    return 0;
}

