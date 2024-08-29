#include<iostream>

int global_int;
std::string global_str;
int main()
{
    int local_int;
    std::string local_str;
    std::cout << local_int << std::endl; // 32587 
    std::cout << local_str << std::endl; // ""
    std::cout << global_int << std::endl; // 0
    std::cout << global_str << std::endl; // ""
}


