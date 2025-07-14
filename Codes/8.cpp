#include <iostream>
using namespace std;

int a = 100; // Global variable

int main() {
    int a = 200; // Local variable

    cout << "Value of local a = " << a << endl; // will print 200
    
    cout << "Value of global a = " << ::a << endl; // will print 100

}


