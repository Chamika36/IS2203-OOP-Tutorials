#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() = 0;
};

class Cow : public Animal {
public:
    void makeSound() override { cout << "Moow\n"; }
};

class Cat : public Animal {
public:
    void makeSound() override { cout << "Meow\n"; }
};

int main() {
    // Animal a; ? Not allowed (abstract class)
    
    Cow c;
    Cat k;
    
    c.makeSound(); 	// "Moow"
    k.makeSound(); 	// "Meow"
}

