#include <iostream>
using namespace std;

typedef struct employee //* struct a way to group several related variables into one place
{
     /* data */
     int eId;      // 4
     char favChar; // 1
     float salary; // 4
} ep;

//! use this, if you wnat what to use 1 value at time and another value overide by currant value (memory saving)
union money //*  Unions provide an efficient way of using the same memory location for multiple-purpose.
{
     /* data */
     int rice;     // 4
     char car;     // 1
     float pounds; // 4
};

int main()
{
     //* It provides a way to define and group integral constants
     enum Meal
     {
          breakfast,
          lunch,
          dinner
     };               //! use this , if you want to zero's indises value like (0,1,2....). here is breakfast == 0, lunch == 1 and dinner == 2
     Meal m1 = lunch; //? you can use it directly or rename like Meal-->m1
     cout << (m1 == 2);
     // cout<<breakfast;
     // cout<<lunch;
     // cout<<dinner;
     // union money m1;
     // m1.rice = 34;
     // m1.car = 'c';
     // cout<<m1.car;

     // ep harry;
     // struct employee shubham;
     // struct employee rohanDas;
     // harry.eId = 1;
     // harry.favChar = 'c';
     // harry.salary = 120000000;
     // cout<<"The value is "<<harry.eId<<endl;
     // cout<<"The value is "<<harry.favChar<<endl;
     // cout<<"The value is "<<harry.salary<<endl;
     return 0;
}
