#include<iostream>
#include "Sales_item.h"

int main(){
    Sales_item book;
    std::cout << "Please enter the ISBN, number and price." << std::endl;
    std::cin >> book;
    std::cout << book << std::endl;
    return 0;
}

