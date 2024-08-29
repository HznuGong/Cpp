#include<iostream>
#include "Sales_item.h"
#include<string>
using namespace std;

int main()
{
    cout << "Please enter the sale orders in sequence." << endl;
    Sales_item total;
    if (cin >> total)
    {
        Sales_item trans;
        int cnt = 1;
        while (cin >> trans)
        {
            if (trans.isbn()==total.isbn())  
            {
                 total += trans;   
                 ++cnt;
            }
            else
            {
                cout << total.isbn() << "'s record:"
                    << total << endl;
                total = trans;
                cnt = 1;
            }
        }
        cout << total.isbn() << "'s record:"
            << total << endl;
    }
    return 0;
}






