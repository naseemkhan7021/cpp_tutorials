#include <iostream>
using namespace std;

/* Multiple Inheritance
     A     B
     |     |
     └──┬──┘
        ↓
        C
*/

class Base1
{
protected:
     int base_1_int;

public:
     void set_base1_int(int v)
     {
          base_1_int = v;
     }
};

class Base2
{
protected:
     int base_2_int;

public:
     void set_base2_int(int v)
     {
          base_2_int = v;
     }
};
class Base3
{
protected:
     int base_3_int;

public:
     void set_base3_int(int v)
     {
          base_3_int = v;
     }
};

class Derived : public Base1, public Base2, public Base3
{
public:
     void display_data(void)
     {
          cout << "The value of Base1 is " << base_1_int << endl;
          cout << "The value of Base2 is " << base_2_int << endl;
          cout << "The value of Base3 is " << base_3_int << endl;
          cout << "The sum of the all values are " << base_1_int + base_2_int + base_3_int;
     }
};

/* Multiple Inheritance

     Base1     Base2     Base3
     ↓          ↓         ↓
     └───→───→──┼──←────←─┘
                ↓
                ↓
              Derived

*/



/* The inherited Derived class members visibility will look sumthing like this.
Data members:
     base_1_int ---> protected
     base_2_int ---> protected
     base_3_int ---> protected
Members functions:
     set_base1_int ---> public
     set_base1_int ---> public
     set_base1_int ---> public
*/

int main()
{
     Derived sumNumber;
     sumNumber.set_base1_int(5);
     sumNumber.set_base2_int(15);
     sumNumber.set_base3_int(35);
     sumNumber.display_data();
     return 0;
}