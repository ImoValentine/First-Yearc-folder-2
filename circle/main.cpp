#include <iostream>

//This program creates a functions that takes in the radius of a circle and calculates the area

using namespace std;

int area, radius;

int circle(int r)
{
    cout << "Hello user, welcome to the circle program" << endl;
    cout<<"Enter radius: ";
    float radius;
    cin>>radius;
    int area=3.14*3.14*radius;
    std::cout<<"The radius is: "<<area<<"\n";

}


int main()
{

    circle(radius);
    return 0;
}
