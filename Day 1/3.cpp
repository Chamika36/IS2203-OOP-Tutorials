#include <iostream>
#include <string> // Include for string

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

    int forward() {
        cout << model << " moving forward." << endl;
        return km + 10;
    }

    int backward() {
        cout << model << " moving backward." << endl;
        return km - 5;
    }

    void stop() {
        cout << model << " stopped." << endl;
    }
};

int main() {
    // Using dot operator
    Car audi;

    audi.price = 2000;
    audi.km = 500;
    audi.color = "Black";
    audi.model = "B200";

    cout << "Using dot operator:" << endl;
    cout << "Model: " << audi.model << ", Color: " << audi.color << endl;
    audi.start();
    audi.forward();
    audi.stop();

    cout << endl;

    // Using arrow operator
    Car* bmw;

    bmw->price = 3000;
    bmw->km = 1000;
    bmw->color = "White";
    bmw->model = "X5";

    cout << "Using arrow operator:" << endl;
    cout << "Model: " << bmw->model << ", Color: " << bmw->color << endl;
    bmw->start();
    bmw->backward();
    bmw->stop();

    delete bmw; // free memory
    return 0;
}

