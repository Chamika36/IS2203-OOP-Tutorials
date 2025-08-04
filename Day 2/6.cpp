#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    int price;
    
public:
    // Default Constructor
    Car() {
        cout << "Default constructor called. Brand: " << brand << endl;
    }

    // Parameterized Constructor 1
    Car(string b) {
        brand = b;
        cout << "Parameterized constructor 1 called. Brand: " << brand << endl;
    }
    
    // Parameterized Constructor 2
    Car(string b, int p) {
        brand = b;
        price = p;
        cout << "Parameterized constructor 2 called. Brand: " << brand << " Price: " << price << endl;
    }

    // Copy Constructor
    Car(const Car &c) {
        brand = c.brand;
        cout << "Copy constructor called. Brand copied: " << brand << endl;
    }

    // Destructor
    ~Car() {
        cout << "Destructor called for brand: " << brand << endl;
    }
};


int main() {
    Car car1;               // Default constructor
    Car car2("BMW");        // Parameterized constructor 1
    Car car3("BMW", 1000);  // Parameterized constructor 2
    Car car4 = car2;        // Copy constructor

    return 0;
}

