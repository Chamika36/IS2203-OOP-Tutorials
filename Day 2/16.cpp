#include <iostream>
using namespace std;

class Car {
    string brand;
    int year;

public:
    void setDetails(string brand, int year) {
        this->brand = brand;  // Resolves naming conflict
        this->year = year;
    }

    void display() {
        cout << "Brand: " << this->brand << ", Year: " << this->year << endl;
    }
};

int main() {
    Car car1;
    car1.setDetails("Toyota", 2020);
    car1.display();  // Output: Brand: Toyota, Year: 2020
    return 0;
}

