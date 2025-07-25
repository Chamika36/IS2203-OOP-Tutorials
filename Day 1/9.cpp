#include <iostream>
using namespace std;

// First namespace
namespace car_brand {
    void show() {
        cout << "This is a car from Car Brand namespace." << endl;
    }
}

// Second namespace
namespace bike_brand {
    void show() {
        cout << "This is a bike from Bike Brand namespace." << endl;
    }
}

int main() {
    // Calling functions from each namespace
    
    car_brand::show(); // Output : "This is a car from Car Brand namespace."
    
    bike_brand::show(); // Output : "This is a bike from Bike Brand namespace."

    return 0;
}

