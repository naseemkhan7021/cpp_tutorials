#include<iostream>
using namespace std;

class BaseClass{
     public:
          int var_base;
          virtual void display(){ // if you want other function with same name add "virtual"
               cout<<"The var_base is "<<var_base<<endl;
          }
};

class DriveClass : public BaseClass{
     public:
          int var_drive;
          void dis(){
               cout<<"The var_base is "<<var_base<<endl;
               cout<<"The var_drive is "<<var_drive<<endl;
          }
};

int main(){
     BaseClass *base_class_pointer;
     BaseClass obj_base;
     DriveClass obj_derived;
     base_class_pointer = &obj_derived; // Pointing base class pointer to derived class

     base_class_pointer->var_base = 23;
     // base_class_pointer->var_derived= 134; // Will throw an error
     base_class_pointer->display();

     return 0;
}