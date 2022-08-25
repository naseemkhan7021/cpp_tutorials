#include <iostream>
using namespace std;

class Shop
{
     // private: // by default this will be privet
     int itemId[100];
     int itemPrice[100];
     int counter = 0;

public:
     void incrementCounter(void) { counter++; };
     void setPrice(void);
     void displayItems(void);
};

void Shop::setPrice(void)
{
     cout << "Enter Id of your item number " << counter + 1 << endl;
     cin >> itemId[counter];
     cout << "Enter Prince of your item Id " << itemId[counter] << endl;
     cin >> itemPrice[counter];
     incrementCounter();
}
void Shop::displayItems(void)
{
     for (int i = 0; i < counter; i++)
     {
          cout << "The price of your item Id " << itemId[i] << " is " << itemPrice[i] << endl;
     }
}

int main()
{
     Shop guptaaShop;
     int totalItem;
     cout << "How much item you want to create?" << endl;
     cin >> totalItem;
     for (int i = totalItem;; )
     {
          --i;
          guptaaShop.setPrice();
          if (i == 0)
          {
               char yn;
               cout << "Do you want to add more item? (y/n)" << endl; // cas sensitive
               cin >> yn;
               if (yn == 'y')
               {
                    cout << "How much item you want to create?" << endl;
                    cin >> totalItem;
                    i = totalItem;
                    continue;
                    // cout<<"totalItem -> "<<totalItem<<endl<<" i "<<i;
               }
               else
               {
                    break;
               }
          }
     }
     guptaaShop.displayItems();

     return 0;
}