#include<iostream>
using namespace std;

// Array of Object ( if you want to set specific size )
class Employee{ 
     int id;
     int sallery;

     public:
     void setData(void){
          sallery=200;
          cout<<"Entre Employee id ->"<<endl;
          cin>>id;
     }
     void displayData(){
          cout<<"Employee id is "<<id<<" and sallery "<<sallery<<endl;
     }
};

// pass object as a funtion argument ()
class Complax{
     int a,b;
     public:
     void setData(int v1, int v2){
          a=v1;
          b=v2;
     }
     void setDataBySum(Complax C1,Complax C2){
          a = C1.a+C2.a;
          b = C1.a+C2.b;
     }
     void displayData(){
          cout<<"Your number complex number is "<<a<<" + "<<b<<"i"<<endl;
     }
};


int main(){
     // Array of Object ( if you want to set specific size )
     Employee google[4];
     for (int i = 1; i < 4; i++)
     {
          google[i].setData();
          google[i].displayData();
     }

     // pass object as a funtion argument ()
     Complax c1,c2,c3;

     c1.setData(1,2);
     c1.displayData();

     c2.setData(2,3);
     c2.displayData();

     c3.setDataBySum(c1,c2);
     c3.displayData();

     return 0;
}