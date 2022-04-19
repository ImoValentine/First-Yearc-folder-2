#include <iostream>

using namespace std;

int x=50;
void func()
{
    x+=x;
}

int main()
{
    int x=100;
    func();
    cout << x << endl;
    return 0;
}
