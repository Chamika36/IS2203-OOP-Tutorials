#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    static int totalCars;
    static void showTotal() {
        cout << "Total cars: " << totalCars << endl;
    }
};

int Car::totalCars = 10;

int main() {
	Car::showTotal();	
}

