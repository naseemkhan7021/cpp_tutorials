#include <iostream>
using namespace std;

class Employee
{
public:
     int id;
     float sallery;

     Employee() {} // this requires for inheritance
     Employee(int intId)
     {
          id = intId;
          sallery = 100;
     }
};

/* Derived Class syntax
class {{derived-class-name}} : {{visibility-mode}} {{vase-class-name}}
{
     class members/method/etc...
}

Note:
1. Default visibility mode is private.
2. Public visibility Mode: Public members of the base class becomes Public members of the derived class.
3. Private visibility Mode: Public members of the base class becomes Private members of the derived class.
4. Private members are never inherited.
*/

// Creating a Programmer class derivedfrom employee base class.
class Programmer : public Employee
{ // default visibility private
public:
     int language;
     Programmer(int intId)
     {
          id = intId;
          language = 9;
     }
     void getData()
     {
          cout << " id is " << id;
     }
};

int main()
{
     Employee rahul(2), ramesh(5);
     cout << rahul.sallery << endl;
     cout << ramesh.sallery << endl;

     Programmer naseem(99);
     cout << naseem.id << endl;
     cout << naseem.language << endl;
     naseem.getData();

     return 0;
}