#include <iostream>
using namespace std;

class Calculator {
public:
    // Add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Add two doubles
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    cout << "Sum of 2 + 3 = " << calc.add(2, 3) << endl;
    cout << "Sum of 2 + 3 + 4 = " << calc.add(2, 3, 4) << endl;
    cout << "Sum of 2.5 + 3.7 = " << calc.add(2.5, 3.7) << endl;

    return 0;
}

