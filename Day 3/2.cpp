#include <iostream>
using namespace std;

class Animal {
public:
    void eat() { cout << "Eating...\n"; }
protected:
    void sleep() { cout << "Sleeping...\n"; }
private:
    void breathe() { cout << "Breathing...\n"; }
};

// Public Inheritance
class Dog : public Animal {
public:
    void show() {
        eat();   // ? Accessible (public ? public)
        sleep(); // ? Accessible (protected ? protected)
        // breathe(); ? Not accessible (private stays private)
    }
};

// Protected Inheritance
class Cat : protected Animal {
public:
    void show() {
        eat();   // ? Accessible (public ? protected)
        sleep(); // ? Accessible (protected ? protected)
    }
};

// Private Inheritance
class Bird : private Animal {
public:
    void show() {
        eat();   // ? Accessible (public ? private)
        sleep(); // ? Accessible (protected ? private)
    }
};

int main() {
    Dog d;
    d.eat();     // ? Allowed (public in Dog)
    d.show();

    Cat c;
    // c.eat();  ? Not allowed (became protected)
    c.show();

    Bird b;
    // b.eat();  ? Not allowed (became private)
    b.show();
}

