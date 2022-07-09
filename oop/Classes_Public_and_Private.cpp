#include<iostream>
#include<string>
using namespace std;

class Programmer{
     private:
          int accountNumber;
     public:
          string name,programmingLanguage;
     void setData(int accountNumber); // Declaration
     void getData(){
          cout<<"name \""<<name<<"\" Programming Language \""<<programmingLanguage<<"\" and his account number is \""<<accountNumber<<"\"";
     };
};

void Programmer::setData(int accountNumberArg){
     accountNumber = accountNumberArg;
}



int main(){
     cout<<"Hello World from C++"<<endl;
     Programmer progrmmer;
     // progrmmer.accountNumber = 156; // this will be give error becouse "accountNumber" is private
     progrmmer.name = "Programmer_1";
     progrmmer.programmingLanguage = "c++";
     progrmmer.setData(6174);
     progrmmer.getData();

     return 0;
}