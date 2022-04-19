#include <iostream>

using namespace std;

int calcSum(int a, int b)
{
    return (a+b);
}

void printSum(int s)
{
    cout<<s<<"\n";
}


int main()
{
    int a= 4, b=5;
    printSum(calcSum(a,b));
    return 0;
}
