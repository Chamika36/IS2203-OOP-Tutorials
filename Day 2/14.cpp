#include <iostream>
using namespace std;

class Car {
public:
	const int wheels;
	
    // Constructor with initializer list
    Car(int w) : wheels(w) {}

    void display() {
        cout << "This car has " << wheels << " wheels." << endl;
    }
};

int main() {
    Car car1(4);
    car1.display();
    
    // car1.wheels = 5; // [Error] assignment of read-only member 'Car::wheels'

    return 0;
}

