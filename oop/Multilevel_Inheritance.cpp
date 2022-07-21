#include <iostream>
using namespace std;

class Student
{
protected:
     int rollNumber;

public:
     void set_roll_number(int r)
     {
          rollNumber = r;
     };
     void get_roll_number(void)
     {
          cout << "Your Roll number is " << rollNumber << endl;
     };
};

class Exam : public Student
{
protected:
     float math, physics;

public:
     void set_marks(float m, float p)
     {
          math = m;
          physics = p;
     }
     void get_marks(void)
     {
          cout << "Marks obtained in maths are " << math << endl;
          cout << "Marks obtained in physics are " << physics << endl;
     }
};

class Result : public Exam
{
     float percentage;

public:
     void dislay_results(void)
     {
          get_roll_number();
          get_marks();
          cout << "Your result is " << (math + physics) / 2 << "%" << endl;
     }
};

int main()
{
     Result salman;
     salman.set_roll_number(435);
     salman.set_marks(90,85);
     salman.dislay_results();

     return 0;
}