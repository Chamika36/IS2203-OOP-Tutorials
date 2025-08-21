#include <iostream>
using namespace std;

class Animal {
public:
    void makeSound() {
        cout << "Some generic animal sound\n";
    }
};

class Cow : public Animal {
public:
    void makeSound() { cout << "Moow\n"; }
};

class Cat : public Animal {
public:
    void makeSound() { cout << "Meow\n"; }
};

int main() {
    Animal* a;
    Cow c;
    Cat k;

    a = &c;
    a->makeSound();  // ? Calls Animal's version
    a = &k;
    a->makeSound();  // ? Calls Animal's version
}

