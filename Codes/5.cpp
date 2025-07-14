#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    int price;
    int km;

public:
    string model;
    string color;

    // Setter methods
    void setPrice(int p) {
        price = p;
    }

    void setKm(int k) {
        km = k;
    }

    // Getter methods
    int getPrice() {
        return price;
    }

    int getKm() {
        return km;
    }
};

int main() {
    Car bmw;

    // Set public members
    bmw.model = "BMW M3";
    bmw.color = "Black";

    // Set private members via setters
    bmw.setPrice(1000);
    bmw.setKm(220);

    // Get private members via getters
    int bmwPrice = bmw.getPrice();
    int bmwKm = bmw.getKm();
}


