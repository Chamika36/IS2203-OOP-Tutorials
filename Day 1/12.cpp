#include <iostream>
using namespace std;

int main() {
    int *arr = new int[5];   // allocate memory for 5 integers

    // assign values
    for (int i = 0; i < 5; ++i) {
        arr[i] = (i + 1) * 10;
    }

    // print values
    for (int i = 0; i < 5; ++i) {
        cout << "Element " << i << ": " << arr[i] << endl;
    }

    delete[] arr;            // deallocate memory
    return 0;
}

