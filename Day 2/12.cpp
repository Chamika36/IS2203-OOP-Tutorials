#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;
    
    const int* ptr = &a;  // pointer to const int

    // *ptr = 15;  // ? Not allowed: cannot modify the value
    ptr = &b;      // ? Allowed: can point to another address

    cout << "Value pointed by ptr: " << *ptr << endl;
    return 0;
}

