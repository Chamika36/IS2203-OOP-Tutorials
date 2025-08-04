#include <iostream>
#include <cstring>
using namespace std;

class Person {
public:
	char* name;
	
    // Constructor
    Person(const char* n) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        cout << "Constructor called.\n";
    }

    // User-defined Copy Constructor (Deep Copy)
    Person(const Person& p) {
        name = new char[strlen(p.name) + 1];
        strcpy(name, p.name);
        cout << "Copy Constructor called (Deep Copy).\n";
    }
};

int main() {
    Person p1("John");
    Person p2 = p1;  // Invokes copy constructor

    cout << "Name: " << p1.name << endl;
    cout << "Name: " << p2.name << endl;

    return 0;
}


