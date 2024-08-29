#include<iostream>
using namespace std;

int main()
{
    int i = 1, j = 5;
    int *p1 = &i;
    cout << p1 << endl;
    cout << *p1 << endl;
    p1 = &j;
    cout << p1 << endl;
    cout << *p1 << endl;
    *p1 = 3; 
    cout << *p1 << endl;
}
