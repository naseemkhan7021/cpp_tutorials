/*
Function overloading is a process to make more than one function with the same name but different parameters, numbers, or sequence.
*/
#include<iostream>
using namespace std;

int sum(int n1,int n2){
     return n1+n2;
}

int sum(int n1,float n2,int n3){
     return n1*n2+n3;
}


int main(){
     cout<<"Hello World from C++"<<endl;
     cout<<"sum fun == "<<sum(2,6)<<endl;
     cout<<"sum fun == "<<sum(2,6,8)<<endl;
     return 0;
}