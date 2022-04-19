#include <iostream>
#include<string>
//This program creates a function that counts the amount of spaces in a string
using namespace std;
string w;
int count_in_word(string word)
{
int a, count=0, i;
string w;
std::cout<<"Greetings and welcome user! This program counts the number of spaces in a string \n";
std::cout<<"Enter a sentence: ";
getline(cin,w);
a=w.size();

for(i=0;i<a;i++)
{
    if (w[i]==' ')
    {
        count++;
    }
}
cout << "The number of spaces in the string is: "<<count<< endl;
}

int main()
{
    count_in_word(w);
    return 0;
}
