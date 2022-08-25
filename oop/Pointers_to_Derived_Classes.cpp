#include <iostream>
using namespace std;

class BaseClass
{
     public:
          int var_base;
          void display()
          {
               cout << "Display Base class where var_base" << var_base << endl;
          }
};
class DeriveClass : public BaseClass
{
     public:
          int var_drive;
          void display()
          {
               cout << "Display Base class where var_base" << var_base << endl;
               cout << "Display Drive class where var_drive" << var_drive << endl;
          }
};

int main()
{

     BaseClass *base_class_pointer;
     BaseClass obj_base;
     DeriveClass obj_derived;
     base_class_pointer = &obj_derived;
     // BaseClass * base_class_pointer_obj;
     // BaseClass obj_base;
     // DriveClass obj_drive;
     // base_class_pointer_obj = &obj_drive;

     return 0;
}