#include <iostream>
#include <math.h>
using namespace std;

class Point
{
     int x, y;
     friend float pointDistance(Point, Point);

public:
     Point(int a, int b)
     {
          x = a;
          y = b;
     }

     void DislayData(void)
     {
          cout << "The pointer is (" << x << ", " << y << ")" << endl;
     }
};

// Create a funtion which takes 2 point objects and computes thedistance between those 2 points
// d=√((x_2-x_1)²+(y_2-y_1)²)
float pointDistance(Point a, Point b)
{
     return (sqrt(pow(b.x - a.x, 2) + pow(b.y-a.y, 2)));
}

int main()
{
     Point a(1, 0);
     a.DislayData();

     Point b(70, 0);
     b.DislayData();

     float value = pointDistance(a,b);
     cout<<"The distance between a and b "<<value;

     return 0;
}