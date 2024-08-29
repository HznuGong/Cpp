#include<iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
    cout << "Please enter the records sequentially:" << endl;
    Sales_item total;
    if (cin >> total)
    {
        int cnt = 1;
        Sales_item trans;
        string c_isbn = total.isbn();
        while (cin >> trans)
        {
            if (c_isbn == trans.isbn())
            {
                total += trans;   
                cnt += 1;
            }
            else
            {
                cout << c_isbn << "'s record occurs "
                    << cnt << " times." << endl;
                c_isbn = trans.isbn();
                total = trans;
                cnt = 1;
            }

        }
        cout << c_isbn << "'s record occurs "
            << cnt << " times." << endl;
    }
    else
    {
        return -1;
    }
    return 0;
}
