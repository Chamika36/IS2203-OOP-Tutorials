#include <iostream>
using namespace std;

class Car {
public:
    string model;
	
    Car(string m) {
        model = m;
    }  
    
    // Copy Constructor
    Car(const Car &c) {
        model = c.model;
        cout << "Copy constructor called" << endl;
    }
};


int main() {
    Car car1("BMW");
    cout << "Car 1 Model : " << car1.model << endl;
    
    Car car2 = car1;
    cout << "Car 2 Model : " << car2.model << endl;
    
    return 0;
}

