#include <iostream>
using namespace std;

class Animal {
public:
    void eat() { cout << "Animal is eating...\n"; }
};

class Mammal : public Animal { };
class Bird   : public Animal { };

class Bat : public Mammal, public Bird { };

int main() {
    Bat b;
    // b.eat();  // ? Error: ambiguous (two copies of Animal)
    
    b.Mammal::eat(); // ? Resolves ambiguity
    b.Bird::eat();   // ? Resolves ambiguity
}

