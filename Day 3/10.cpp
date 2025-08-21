#include <iostream>
using namespace std;

class Animal {
public:
    void makeSound() {   // Base class version
        cout << "Some generic animal sound\n";
    }
};

class Cow : public Animal {
public:
    void makeSound() {   // Reimplement Animal's function
        cout << "Moow\n";
    }
};

class Cat : public Animal {
public:
    void makeSound() {   // Reimplement Animal's function
        cout << "Meow\n";
    }
};

int main() {
    Animal a;
    Cow c;
    Cat k;

    a.makeSound();   // ?? Calls Animal's version "Some generic animal sound"
    c.makeSound();	 // ?? Calls Cows's version "Moow"
    k.makeSound();	 // ?? Calls Cat's version "Meow"

    return 0;
}

