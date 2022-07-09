#include<iostream>
#include<string>
using namespace std;

class Collages{
     string name;
     // static member will access by all instace class
     static int total; // by default this will be 0;

     public:
     void setData(void){
          cout<<"Enter the name of collage -> ";
          cin>>name;
          total++;
     }
     void displayData(void){
          cout<<"Collage name -> "<<name<<endl;
     }
     // static method can only access static method and properties
     static void getTotal(void){
          cout<<"Collage counted "<<total<<endl;
     }
};
int Collages::total;
int main(){
     Collages rj,sumaya,vidya;

     rj.setData();
     rj.displayData();
     sumaya.setData();
     sumaya.displayData();
     vidya.setData();
     vidya.displayData();

     Collages::getTotal(); // static method only called by Direct class with using scop resolution operators "::"
     return 0;
}