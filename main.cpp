#include <iostream>

using namespace std;

int main()
{
    int x, y=1, sum=1;
    cout<< "enter the number :";
    cin >> x;
    while (y<x)
    {
        sum=sum*x;
        x=x-1;
    }
    cout<< sum <<endl;
    return 0;
}
