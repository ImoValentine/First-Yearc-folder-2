#include <iostream>

using namespace std;

int main()
{
    int i,j;
    int ROW=3;
    int COLUMN=2;
    int ar[ROW][COLUMN]={1};
    for (int i = 0; i < ROW; i++){
        for (int j = 0; j < COLUMN; j++){
            ar[i][j] = 5;}
            cout<<ar[j][i]<<"\n";
            }

    cout << "Hello user, This program initializes all items in an array \n" << endl;

    return 0;
}
