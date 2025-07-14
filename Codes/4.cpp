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
	    
	  	void start();
	    int forward();
};

int main() {
    Car bmw;

    // Set public members
    bmw.model = "BMW M3";
    bmw.color = "Black";
    
    // Set or access private members 
    bmw.price = 1000; // Gives error [Error] 'int Car::price' is private
    
    bmw.km = 220; // Gives error  [Error] 'int Car::km' is private
    
}

