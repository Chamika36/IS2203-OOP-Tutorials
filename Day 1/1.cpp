#include <iostream>

using namespace std;

class Car {
	public:
	    int price;
	    int km;
	    string color;
	    string model;
	    
	  	void start();
	    int forward();
	    int backward();
	    void stop();
};

int main() {
    Car audi;
    
    audi.price = 2000;
    audi.km = 500;
    audi.color = "black";
    audi.model = "b200";
    
    String color = audi.color; // Accessing Data members 
    audi.start(); // Access Function Members
}

