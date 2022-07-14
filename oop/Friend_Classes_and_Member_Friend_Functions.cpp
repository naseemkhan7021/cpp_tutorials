#include <iostream>
using namespace std;

// forward declaration
class Complax;

class Calculator
{
public:
     int sumRealComplax(Complax, Complax);
     int sumComComplax(Complax, Complax);
};

class Complax
{
     int a, b;
     // Individually declaring functions as friends
    // friend int Calculator ::sumRealComplex(Complex, Complex);
    // friend int Calculator ::sumCompComplex(Complex, Complex);

    // Aliter: Declaring the entire calculator class as friend
    friend class Calculator;

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
};

int Calculator::sumRealComplax(Complax C1, Complax C2)
{
     return (C1.a + C2.a);
};

int Calculator::sumComComplax(Complax C1, Complax C2)
{
     return (C1.b + C2.b);
};

int main()
{
     Complax c1,c2;
     c1.setData(1,2);
     c1.dislayData();

     c2.setData(3,4);
     c2.dislayData();

     Calculator cal;
     int realNumber = cal.sumRealComplax(c1,c2);
     cout<<"The sum of real part of number c1 and c2 "<<realNumber<<endl;
     int complaxNumber = cal.sumComComplax(c1,c2);
     cout<<"The sum of Complax part of number c1 and c2 "<<complaxNumber<<"i"<<endl;

     return 0;
}