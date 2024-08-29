#include<iostream>

int main()
{
    int i = 42;
    int *pi = &i;
    *pi = *pi * *pi; // 将i的平方赋值给i
    std::cout << *pi << std::endl;
}
