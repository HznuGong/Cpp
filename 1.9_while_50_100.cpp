#include<iostream>

int main()
{
    int sum = 0;
    int i = 50;
    while (i<=100)
    {
        sum += i;
        ++i;
    }
    std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
}