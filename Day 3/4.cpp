#include <iostream>
using namespace std;

class Animal {
public:
    void eat() { cout << "Animal is eating...\n"; }
};

class Mammal : virtual public Animal { };
class Bird   : virtual public Animal { };

class Bat : public Mammal, public Bird { };

int main() {
    Bat b;
    b.eat(); // ? No ambiguity
}

