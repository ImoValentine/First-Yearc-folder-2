#include <iostream>

using namespace std;

int main()
{   int i=0;
    int low;
    //declaration structure with name being Player
    struct Player{
    string players[50];
    };

    int lowestScore;
    int winningPlayer;
    int score;


    lowestScore=players[0];
    winningPlayer=players[0];

    //completed
    for (i=0;i<50;i++)//i starts at 0, then i is set to less that 50 as there are 50 players. increment by 1 to count
        {


            //Lowesscore is set to Lowestsore[0]. This being the first element in the list.
            //It then compares it to [i] the successive element
            if(lowestscore>players[i]){//
                lowsestscore=players[i];
            }
        }


    std::cout<<"Lowest score:"<<"/n";
    std::cout<<lowestscore;
    std::cout<<"The "<<i<<" had the lowest score \n";///printing name and player with lowest score

    cout << "Hello user! Welcome to the golf program" << endl;

    return 0;
}
