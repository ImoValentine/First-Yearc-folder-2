#include <iostream>

using namespace std;

string getName()
{   string name;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Your name is: "<<name<<"\n";
    return name;
}


int main()
{
    getName();
    return 0;
}
