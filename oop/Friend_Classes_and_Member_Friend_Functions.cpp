#include <iostream>
using namespace std;

// forward declaration
class Complex;

class Calculator
{
public:
     int sumRealComplex(Complex, Complex);
     int sumComComplex(Complex, Complex);
};

class Complex
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
     void displayData()
     {
          cout << "Complex number is " << a << "+" << b << "i" << endl;
     }
};

int Calculator::sumRealComplex(Complex C1, Complex C2)
{
     return (C1.a + C2.a);
};

int Calculator::sumComComplex(Complex C1, Complex C2)
{
     return (C1.b + C2.b);
};

int main()
{
     Complex c1,c2;
     c1.setData(1,2);
     c1.displayData();

     c2.setData(3,4);
     c2.displayData();

     Calculator cal;
     int realNumber = cal.sumRealComplex(c1,c2);
     cout<<"The sum of real part of number c1 and c2 "<<realNumber<<endl;
     int complexNumber = cal.sumComComplex(c1,c2);
     cout<<"The sum of Complex part of number c1 and c2 "<<complexNumber<<"i"<<endl;

     return 0;
}