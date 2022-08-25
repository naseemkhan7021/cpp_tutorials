#include<iostream>
using namespace std;

class Complex{
     int real,imaginary;
     public:
     void getData(){
          cout<<"The real part is "<<real<<endl;
          cout<<"The imaginary part is "<<imaginary<<endl;
     }
     void setData(int a,int b){
          real = a;
          imaginary = b;
     }
};

int main(){
     Complex c1;
     Complex *ptr1 = &c1;
     (*ptr1).setData(2,4);
     (*ptr1).getData();
     // we can use arrow
     Complex *ptr2 = new Complex; // we can use new operators
     ptr2->setData(6,10); // we can use arrow for access pointers
     ptr2->getData();
     // array of objects
     Complex *ptr3 = new Complex[5];
     ptr2->setData(12,16); // we can use arrow for access pointers
     ptr2->getData();
     
     return 0;
}