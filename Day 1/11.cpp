#include <iostream>
using namespace std;

int main() {
    int *numPtr = new int;   // allocate memory
    
    *numPtr = 25;            // assign value
    cout << "Value: " << *numPtr << endl;

    delete numPtr;           // deallocate memory
    return 0;
}

