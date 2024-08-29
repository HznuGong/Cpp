#include<iostream>

int main()
{
    // 1.9
    int sum = 0;
    for (int i=50;i<=100;++i)
        sum += i;
    std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;

    // 1.10
    sum = 0;
    for (int i=10;i>=0;--i)
        sum += i;
    std::cout << "Sum of 10 to 0 inclusive is " << sum << std::endl;

    // 1.11
    int a,b = 0;
    std::cout << "Input two integers:" << std::endl;
    std::cin >> a >> b;
    for (;a<=b;++a)
        std::cout << a << " ";
}