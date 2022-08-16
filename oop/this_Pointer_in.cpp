#include<iostream>
using namespace std;

class B{
     int a;
     public:
     // B & setData(int a){
     void setData(int a){
          // a=a; // this will tak local value (local first priority)
          this->a = a; // this keywork will refer to object

          // if you want to get directly getData access.
          // return *this;
     }
     void getData(){
          cout<<"the value is "<<a<<endl;
     }
};

int main(){
     B b;
     // b.setData(4).getData();
     b.setData(4);
     b.getData();
     return 0;
}