#include <iostream>
using namespace std;

class Car {	
public:
	string model;
	
    Car(string m) {
        model = m;
    }
};

int main() {
    Car car("BMW");
    cout << "Car model: " << car.model << endl;
    return 0;
}

