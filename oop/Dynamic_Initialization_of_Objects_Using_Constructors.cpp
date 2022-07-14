// Dynamic Initialization of Objects Using Constructors
#include <iostream>
using namespace std;

class BankDeposit
{
     int years, principal;
     float interastRate, returnValue;

public:
     BankDeposit(){};
     BankDeposit(int p, int y, int r);
     BankDeposit(int p, int y, float r);
     void show();
};

BankDeposit::BankDeposit(int p, int y, float r)
{
     principal = p;
     years = y;
     interastRate = r;
     returnValue = principal;
     for (int i = 0; i < y; i++)
     {
          returnValue *= (1 + interastRate);
     }
}

BankDeposit::BankDeposit(int p, int y, int r)
{
     principal = p;
     years = y;
     interastRate = float(r) / 100;
     returnValue = principal;
     for (int i = 0; i < y; i++)
     {
          returnValue *= (1 + interastRate);
     }
}

void BankDeposit::show()
{
     cout << endl
          << "Principal amount was " << principal
          << ". Return value after " << years
          << " years is " << returnValue << endl;
}

int main()
{
     BankDeposit bd1, bd2, bd3;
     int p, y;
     float r;
     int R;

     cout << "Enter the value of p y and r" << endl;
     cin >> p >> y >> r;
     bd1 = BankDeposit(p, y, r);
     bd1.show();

     cout << "Enter the value of p y and R" << endl;
     cin >> p >> y >> R;
     bd2 = BankDeposit(p, y, R);
     bd2.show();
     return 0;
}