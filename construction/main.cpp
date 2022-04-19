#include <iostream>

using namespace std;
int main()
{
const float SUNDAY = 200; //salary per day for Sundays
const float OTHER = 100; //salary per day for other days
char whichDay; //’2’ for Sundays, ’1’ for
 //other days
float totalAmount; //total salary
int nrSundays; //number of Sundays worked
cout << "Enter first day:'2' for Sunday, '1' for other days" << endl;
cin>>whichDay;
// YOUR STATEMENTS SHOULD COME IN HERE
while (whichDay!='x'){
    cout << "Enter first day:'2' for Sunday, '1' for other days"<< endl;
    if (whichDay='2'){
        nrSundays+=1;
        break;
    }
    else if (whichDay='1'){
        totalAmount+=100;
        break;
    }

}
totalAmount=totalAmount+nrSundays*200;

cout << "Total salary:" << totalAmount << endl;
cout << "number of Sundays worked:" << nrSundays << endl;
return 0;
}
