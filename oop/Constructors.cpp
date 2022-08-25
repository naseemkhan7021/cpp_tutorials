/* Characteristics of Constructors
1. It should be declared in the public section of the classes.
2. They are automatically invoked whenever the object is declared.
3. They cannot return values and do not have return type.
4. It can have default arguments.
5. We cannot refer to their address.
*/

#include <iostream>
using namespace std;

class Complex
{
     int a, b;

public:
     // Creating a Constructor
     // Constructor is a special member function with the same name as of the class.
     // It is used to initialize the objects of its class
     // It is automatically invoked whenever an object is created
     // Complex(void); // Constructor declaration (default)
     Complex(int,int); // Constructor declaration (parameterized)
     // {
     //      a = 16;
     //      b = 21;
     // }

     void displayData()
     {
          cout << "Complex number is " << a << "+" << b << "i" << endl;
     }
};

// Complex::Complex(void) // ----> This is a default constructor as it takes no parameters
// {
//      a = 15;
//      b = 56;
// }
Complex::Complex(int x,int y) // ----> This is a parameterized constructor as it takes parameters
{
     a = x;
     b = y;
}

int main()
{
     // for default constructor
     // Complex c1;
     // c1.displayData();

     // for parameterized constructor
     // Implicit call
     Complex a(4, 6);
     a.displayData();

     // Explicit call
     Complex b = Complex(5, 7);
     b.displayData();

     return 0;
}