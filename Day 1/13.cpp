#include <iostream>
using namespace std;

class Car {
private:
    string model;
    int price;

public:
    // Default Constructor
    Car() {
        model = "Unknown";
        price = 0;
        cout << "Default Constructor called\n";
    }

    // Parameterized Constructor
    Car(string m, int p) {
        model = m;
        price = p;
        cout << "Parameterized Constructor called\n";
    }

    // Copy Constructor
    Car(const Car& other) {
        model = other.model;
        price = other.price;
        cout << "Copy Constructor called\n";
    }

    void show() {
        cout << "Model: " << model << ", Price: $" << price << endl;
    }

    // Destructor
    ~Car() {
        cout << "Destructor called for model: " << model << endl;
    }
};

int main() {
    Car car1;                        // Default constructor
    Car car2("BMW M3", 8000);        // Parameterized constructor
    Car car3 = car2;                 // Copy constructor

    cout << "\nDetails:\n";
    car1.show();
    car2.show();
    car3.show();

    return 0;
}

