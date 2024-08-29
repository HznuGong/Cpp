#include<iostream>
#include "Sales_item.h"
int main()
{
    Sales_item item1, item2;
    std::cout << "Please enter two items, with ISBN, number and price." << std::endl;
    
    std::cin >> item1 >> item2;
    std::cout << item1 + item2 << std::endl;
    return 0;
}
