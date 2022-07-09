/*
When a function calls itself it is called recursion and the function which is calling itself is called a recursive function. The recursive function consists of a base case and recursive condition. It is very important to add a base case in recursive function otherwise recursive function will never stop executing.
*/
#include<iostream>
using namespace std;

//Fibonacci Series
int fb(int number){
     // some code here
     if (number<2)
     {
          return 1;
     }
     return fb(number-1) + fb(number-2);
}
// fib(5)
// fib(4) + fib(3)
// fib(2) + fib(3) + fib(2) + fib(3)

// factorial
int factorial(int number){
     if (number<=1)
     {
          return 1;
     }
     return number * factorial(number-1);
}

// Step by step calculation of factorial(4)
// factorial(4) = 4 * factorial(3); 
// factorial(4) = 4 * 3 * factorial(2);
// factorial(4) = 4 * 3 * 2 * factorial(1);
// factorial(4) = 4 * 3 * 2 * 1;
// factorial(4) = 24;

int main(){
     cout<<"Hello World from C++"<<endl;
     cout<<"Enter the number"<<endl;
     int a;
     cin>>a;
     // cout<<"factorial of "<<a<<" is "<<factorial(a);
     cout<<"Fibonacci Series of "<<a<<" is "<<fb(a);
     return 0;
}