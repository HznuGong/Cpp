#include<iostream>

int main()
{
    int i = 10, sum=0;
    while (i>=0)
    {
        sum += i;
        --i;
    }
    std::cout << "Sum of 10 to 0 inclusive is " << sum << std::endl;
}