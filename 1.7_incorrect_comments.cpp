#include<iostream>

/*
    This is a right comment.
*/

/*
    This is an incorrect comment
*/

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    // std::cout << "The multiplication of " << v1 << " and " << v2 << " equals " << v1*v2 << std::endl;
    std::cout << "The multiplication of ";
    std::cout << v1;
    std::cout << " and ";
    std::cout << v2;
    std::cout << " equals ";
    std::cout << v1*v2;
    return 0;
}