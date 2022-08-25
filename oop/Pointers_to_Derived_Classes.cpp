#include <iostream>
using namespace std;

class BaseClass
{
     public:
          int var_base;
          void display()
          {
               cout << "Display Base class where var_base " << var_base << endl;
          }
};
class DeriveClass : public BaseClass
{
     public:
          int var_drive;
          void display()
          {
               cout << "Display Base class where var_base " << var_base << endl;
               cout << "Display Drive class where var_drive " << var_drive << endl;
          }
};

int main()
{

     BaseClass *base_class_pointer;
     BaseClass obj_base;
     DeriveClass obj_derived;
     base_class_pointer = &obj_derived; // Pointing base class pointer to derived class

     base_class_pointer->var_base = 23;
     // base_class_pointer->var_derived= 134; // Will throw an error
     base_class_pointer->display();

     DeriveClass *drive_class_pointer;
     drive_class_pointer = &obj_derived;
     // drive_class_pointer = &obj_base; //a value of type "BaseClass *" cannot be assigned to an entity of type "DeriveClass *"C/C++(513)
     drive_class_pointer->var_base  = 26;
     drive_class_pointer->var_drive  = 40;
     drive_class_pointer->display();


     

     return 0;
}