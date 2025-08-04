#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;

public:
    // Constructor
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
        cout << "Car object created\n";
    }

    // Member Function
    void displayInfo() {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }

    // Destructor
    ~Car() {
        cout << "Car object destroyed\n";
    }
};

void showStaticCar() {
    static Car myStaticCar("Honda", "Civic", 2018);  // Static object created only once
    myStaticCar.displayInfo();
}

int main() {
    cout << "First call to showStaticCar()\n";
    showStaticCar();

    cout << "\nSecond call to showStaticCar()\n";
    showStaticCar();

    cout << "\nEnd of main\n";
    return 0;
}

