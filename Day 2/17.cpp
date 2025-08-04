#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

double add(double a, double b) {
    return a + b;
}


int main() {
    cout << add(3, 4) << endl;           // Output: 7
    cout << add(2.5, 4.3) << endl;       // Output: 6.8
    cout << add(1, 2, 3) << endl;        // Output: 6
    return 0;
}

