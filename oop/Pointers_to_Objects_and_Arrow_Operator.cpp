#include<iostream>
using namespace std;

class Complax{
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
     Complax c1;
     Complax *ptr1 = &c1;
     (*ptr1).setData(2,4);
     (*ptr1).getData();
     // we can use arrow
     Complax *ptr2 = new Complax; // we can use new operators
     ptr2->setData(6,10); // we can use arrow for access pointers
     ptr2->getData();
     // array of objects
     Complax *ptr3 = new Complax[5];
     ptr2->setData(12,16); // we can use arrow for access pointers
     ptr2->getData();
     
     return 0;
}