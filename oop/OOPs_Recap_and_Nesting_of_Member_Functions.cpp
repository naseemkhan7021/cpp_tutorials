// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup(creater)
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
             // Class definition
        } harry, rohan, lovish; 
*/
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions

#include <iostream>
#include <string>
using namespace std;

class Binary
{
     // private: by defauld members are private
     string s;

public:
     void read(void);
     void display(void);
     void check_binary(void);
     void ones_comliment(void);
} one , two, three;

void Binary::read(void)
{
     cout << "Enter number to check Binary " << endl;
     cin >> s;
}

void Binary::display(void)
{
     cout << s << endl;
}

void Binary::check_binary(void)
{
     for (int index = s.length() - 1; index >= 0; index--)
     {
          if (s.at(index) != '0' && s.at(index) != '1')
          {
               cout << "Given number is not binary number" << endl;
               exit(0);
          }
     }
}

void Binary::ones_comliment(void)
{
     check_binary();

     for (int index = s.length() - 1; index >= 0; index--)
     {
          if (s.at(index) == '0')
          {
               s.at(index) = '1';
          }
          else
          {
               s.at(index) = '0';
          }
     }
     display();
}

int main()
{
     Binary b;
     b.read();
     // b.check_binary();
     // b.display();
     b.ones_comliment();
     // b.display();

     two;

     return 0;
}