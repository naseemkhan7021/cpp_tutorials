#include <iostream>
using namespace std;

class Complax
{
     int a, b;

public:
     Complax()
     {
          a = 0;
          b = 0;
     }
     Complax(int x)
     {
          a = x;
          b = 0;
     }
     Complax(int x, int y)
     { // int x = 0, int y = 0
          a = x;
          b = y;
     }

     void dislayData()
     {
          cout << "Complex number is " << a << "+" << b << "i" << endl;
     }
};

int main()
{

     Complax c1, c2(1), c3(2, 3);
     c1.dislayData();
     c2.dislayData();
     c3.dislayData();

     return 0;
}