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
     Programmer programmer;
     // programmer.accountNumber = 156; // this will be give error because "accountNumber" is private
     programmer.name = "Programmer_1";
     programmer.programmingLanguage = "c++";
     programmer.setData(6174);
     programmer.getData();

     return 0;
}