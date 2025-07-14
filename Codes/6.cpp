#include <iostream>

using namespace std;

class Car {
	private:
	    int price;
	    int km;
	
	public:
	    string model;
	    string color;
	
	    void start() { cout << "Car started!" << endl;} // Function defined inside the class
};

int main() {
    Car bmw;
    bmw.model = "BMW M3";
    bmw.color = "Black";

    bmw.start();
}

