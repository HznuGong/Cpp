#include<iostream>

int main()
{
    int a,b=0;
    std::cout << "Please enter two integers:" << std::endl;
    std::cin >> a >> b;
    if (a>b)
    {   for(;b<=a;--a)
            std::cout << a << std::endl;
    }
    else if (a<b)
    {
        for(;a<=b;++a)
            std::cout << a << std::endl;
    }
    else
    {
        std::cout << "Please enter two different integers!" << std::endl;
    }
    return 0;
}
