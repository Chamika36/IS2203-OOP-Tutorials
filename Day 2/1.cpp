#include <iostream>
using namespace std;

class Car {
public:
    // Constructor
    Car() {
        cout << "A Car object is created!" << endl;
    }
};

int main() {
    Car myCar; // Constructor is automatically called
    return 0;
}

