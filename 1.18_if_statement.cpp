#include<iostream>

int main()
{
    int v,cv=0;
    std::cout << "Please input numbers:";
    if (std::cin >> cv)
    {
        int t = 1;
        while (std::cin >> v)
        {
            if (cv == v)
                ++t;
            else
                {std::cout << cv << " occurs " << t << " times." << std::endl;
                cv = v;
                t = 1;}
        }
        std::cout << cv << " occurs " << t << " times." << std::endl;
    }
    return 0;
}
