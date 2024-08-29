#include<iostream>

int main()
{
    int sum, value = 0;
    std::cout << "Please enter a series of integers:" << std::endl;
    while (std::cin >> value)
    {
        sum += value;
    }
    std::cout << "The sum of input is " << sum << std::endl;
}