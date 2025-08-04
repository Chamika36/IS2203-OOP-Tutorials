#include <iostream>
using namespace std;

class Distance {
    int meters;
public:
    Distance(int m) : meters(m) {}

    // Declare friend function
    friend Distance operator+(const Distance&, const Distance&);

    void display() {
        cout << "Meters: " << meters << endl;
    }
};

// Define friend function
Distance operator+(const Distance& d1, const Distance& d2) {
    return Distance(d1.meters + d2.meters);
}

int main() {
    Distance d1(20), d2(30);
    Distance d3 = d1 + d2;  // Calls friend operator+
    d3.display();           // Output: Meters: 50
    return 0;
}

