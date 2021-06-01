// C++ program to explain 
// Single inheritance 
#include <iostream> 
using namespace std; 

// base class 
class Vehicle { 
public: 
	Vehicle() 
	{ 
	cout << "This is a Jarvis" << endl; 
	} 
}; 

// sub class derived from two base classes 
class Car: public Vehicle{ 

}; 

// main function 
int main() 
{ 
	// creating object of sub class will 
	// invoke the constructor of base classes 
	Car obj; 
	return 0; 
} 

