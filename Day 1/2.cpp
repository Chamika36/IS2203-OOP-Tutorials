#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    int price;
    int km;
    string color;
    string model;

    void start() {
        cout << model << " started!" << endl;
    }

    void stop() {
        cout << model << " stopped!" << endl;
    }
};

int main() {
    Car bmw;
    
    bmw.price = 4500;
    bmw.km = 800;
    bmw.color = "White";
    bmw.model = "X7";

    Car* ptrBmw = &bmw;

    // Access members using the pointer and arrow operator (->)
    string color = ptrBmw->color;
    ptrBmw->start();
    ptrBmw->stop();
}

