#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;
    
    int* const ptr = &a;  // const pointer to int

    *ptr = 15;    // ? Allowed: can modify the value
    // ptr = &b;  // ? Not allowed: cannot point to another address

    cout << "Updated value pointed by ptr: " << *ptr << endl;
    return 0;
}

