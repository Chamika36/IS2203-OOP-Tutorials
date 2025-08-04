#include <iostream>
using namespace std;

class Car {
	public:
		int normalCount;
	    static int staticCount;  // static data member
	    
	Car(int c) {
		normalCount = c;
	}
};

// Definition of static member outside the class
int Car::staticCount = 3;

int main() {
    Car c1(1);
    Car c2(2);
    
    cout << "Car 1 Static Count: " << c1.staticCount 
         << " | Normal Count: " << c1.normalCount << endl;
         
        cout << "Car 2 Static Count: " << c2.staticCount 
         << " | Normal Count: " << c2.normalCount << endl;
	
	cout << "For any Car static count: " << Car::staticCount << endl;    
}

