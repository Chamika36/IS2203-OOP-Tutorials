#include <iostream>
using namespace std;

class Car {
private:
    int speed;

public:
    Car(int s) : speed(s) {}

    int getSpeed() const {
        return speed;
    }

    // This function is not const, so it cannot be called by a const object
    void setSpeed(int s) {
        speed = s;
    }
};

int main() {
    const Car myCar(100);  // constant object

    cout << "Speed: " << myCar.getSpeed() << endl;

    // myCar.setSpeed(120);  // ? Error: can't call non-const member function

    return 0;
}

