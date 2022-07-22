#include <iostream>
using namespace std;

/* Multilevel Inheritance
     A ----> B
*/

class Base
{
     int data1;

public:
     int data2;
     void setData();
     int getData1();
     int getData2();
};

void Base::setData()
{
     int a,b;
     cout<<"Enter Data 1 -> ";
     cin>>a;
     cout<<endl<<"Enter Data 2 -> ";
     cin>>b;
     data1 = a;
     data2 = b;
}

int Base::getData1()
{
     return data1;
}

int Base::getData2()
{
     return data2;
}

class Derived : public Base
{
     int data3;

public:
     void process();
     void display();
};

void Derived::process()
{
     // setData(); // this will in visibility private and public.
     data3 = data2 * getData1();
}

void Derived::display()
{
     cout << "Value of data 1 is " << getData1() << endl;
     cout << "Value of data 2 is " << data2 << endl;
     cout << "Value of data 3 is " << data3 << endl;
}

/* Multilevel Inheritance
     Base ----> Derived
*/

int main()
{
     Derived drv;
     drv.setData(); // this will not work if visibility  is private.
     drv.process();
     drv.display();

     return 0;
}