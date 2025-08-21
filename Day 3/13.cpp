#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Some generic animal sound\n";
    }
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
    Animal* a;
    Cow c;
    Cat k;

    a = &c;
    a->makeSound();  // ? "Moow"
    a = &k;
    a->makeSound();  // ? "Meow"
}

