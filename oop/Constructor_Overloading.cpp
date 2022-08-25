#include <iostream>
using namespace std;

class Complex
{
     int a, b;

public:
     Complex()
     {
          a = 0;
          b = 0;
     }
     Complex(int x)
     {
          a = x;
          b = 0;
     }
     Complex(int x, int y)
     { // int x = 0, int y = 0
          a = x;
          b = y;
     }

     void displayData()
     {
          cout << "Complex number is " << a << "+" << b << "i" << endl;
     }
};

int main()
{

     Complex c1, c2(1), c3(2, 3);
     c1.displayData();
     c2.displayData();
     c3.displayData();

     return 0;
}