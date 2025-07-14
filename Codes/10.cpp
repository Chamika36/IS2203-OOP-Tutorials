#include <iostream>
using namespace std;

class Outer {
	private:
		int x;
		int y;
		
	public:
		string z;
		
	    // Nested class
	    class Inner {
		    public:
		        void display() {
		            cout << "Inside Inner class (nested in Outer)" << endl;
		        }
	    };
};

int main() {
    // Referencing the nested class using scope resolution operator
    Outer::Inner obj;
    
    obj.display();

    return 0;
}

