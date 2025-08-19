#include <iostream>
using namespace std;

class Animal {
public:
    void eat() { cout << "Eating...\n"; }
};

class Dog : public Animal {
public:
    void bark() { cout << "Barking...\n"; }
};

int main() {
    Dog d;
    d.eat();   // Inherited from Animal
    d.bark();  // Dog's own function
}

