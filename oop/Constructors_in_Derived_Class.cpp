/*
Case1:
class B: public A{
    Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
     Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
     Order of execution of constructor -> C() then B() and A()
};
*/

#include<iostream>
using namespace std;

class Base1{
     int data1;
     public:
     Base1(int i){
          data1 = i;
          cout<<"Base1 constructor called"<<endl;
     }
     void printDataBase1(void){
          cout<<"the Value of Data1 is "<<endl;
     }
};

class Base2{
     int data2;
     public:
     Base2(int i){
          data2 = i;
          cout<<"Base2 constructor called"<<endl;
     }
     void printDataBase2(void){
          cout<<"the Value of Data2 is "<<endl;
     }
};

class Base3{
     int data3;
     public:
     Base3(int i){
          data3 = i;
          cout<<"Base3 constructor called"<<endl;
     }
     void printDataBase3(void){
          cout<<"the Value of Data3 is "<<endl;
     }
};

class Derived: public Base2, public Base1, virtual public Base3{
    int derived1;
    public:
        Derived(int a,int b,int c,int d):Base1(a),Base2(b),Base3(c){
          derived1 = d;
          cout<< "Derived class constructor called"<<endl;
        }
        void printDataDerived(void)
        {
            cout << "The value of derived1 is " << derived1 << endl;
        }
};

int main(){
    Derived harry(1, 2, 3, 4);
    harry.printDataBase1();
    harry.printDataBase2();
    harry.printDataDerived();
    return 0;
}