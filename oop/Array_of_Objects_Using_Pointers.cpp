#include<iostream>
using namespace std;

class Products{
     int id;
     float price;
     public:
     void setData(int a,int b){
          id=a;
          price=b;
     }
     void getData(){
          cout<<"The product id is "<<id<<endl;
          cout<<"The product price is "<<price<<endl;
     }
};

int main(){
     int size = 2;
     Products *ptr = new Products[size];
     int id,i;
     float price;
     for (i = 0; i < size; i++)
     {
          cout<<"Enter Id and price of item "<<i+1<<endl;
          cin>>id>>price;
          // (*ptr).setData(id,price);
          ptr->setData(id,price);
          ptr++;
     }

     for ( ; i >= 0 ; )
     { 
          i--;
          cout<<"i value is "<<i<<endl;
          ptr--; // otherwise we can use tem pointer
          cout<<"Item number: "<<i+1<<endl;
          ptr->getData();
     }
     

     return 0;
}