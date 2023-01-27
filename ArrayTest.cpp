#include <iostream>
#include <string>
using namespace std;
int main()
{
    string favGames[4]={"Stardew Valley","Super Mario Sunshine","Skyrim","Jump King"};
    cout<< favGames[0] <<"\n";
    // loop to access entire array
    for(int i =0; i<4; i++)
{
    cout<< favGames[i]<<"\n";
}
    return 0;
}
