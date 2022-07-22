#include<iostream>
#include <cmath>
using namespace std;

class SimpleCalculator{
     protected:
     int num1,num2;
     float result;
     public:
     void setNumber(int a, int b){
          num1 = a;
          num2 = b;
     }
     void displayData(){
          cout<<endl<<"The result is "<<result<<endl;
     }
     void process(char type){
          switch (type)
          {
          case '-':
               result = num1-num2;
               break;
          case '*':
               result = num1*num2;
               break;
          case '/':
               result = num1/num2;
               break;
          case '+':
               result = num1+num2;
               break;
          }
          // displayData();
     }
};

class ScientificCalculator:public SimpleCalculator{
     
     public:
     void process(char type){
          SimpleCalculator::process(type);
          switch (type)
          {
          // square
          case 'S':
               result = num1*num1;
               break;
          // cube
          case 'Q':
               result = num1*num1*num1;
               break;
          // sqrt
          case 'T':
               result = sqrt(num1);
               break;
          // pi
          case 'p':
               result = num1+3.14;
               break;
          }
          displayData();
     }
};

// class Hybrid:public ScientificCalculator{
//      public:

// };

int main(){
     ScientificCalculator sfc;
     sfc.setNumber(2,2);
     char type;
     cout<<"Enter type → ";
     cin>>type;
     // sfc.process(type);
     sfc.process(type);
     return 0;
}