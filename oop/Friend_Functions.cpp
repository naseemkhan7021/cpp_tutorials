/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.
*/

#include <iostream>
using namespace std;

class Complax
{
     int a, b;

public:
     void setData(int v1, int v2)
     {
          a = v1;
          b = v2;
     }
     void dislayData()
     {
          cout << "Complax number is " << a << "+" << b << "i" << endl;
     }
     // Below line means that non member - sumComplex funtion is allowed to do anything with my private members
     friend Complax sumFromComplax(Complax C1, Complax C2);
};

// friend funtion
Complax sumFromComplax(Complax C1, Complax C2)
{
     Complax C3;
     C3.setData((C1.a + C2.a), (C1.b + C2.b));
     return C3;
}

int main()
{
     Complax c1, c2, sum;
     c1.setData(1, 2);
     c1.dislayData();

     c2.setData(3, 4);
     c2.dislayData();

     sum = sumFromComplax(c1,c2);
     sum.dislayData();

     return 0;
}