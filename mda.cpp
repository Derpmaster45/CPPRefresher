#include <iostream>
#include <string>

using namespace std;
int main()
{
    cout<<"Welcome to the Multi Dimensional Array Example\n";
    string carInfo[3][3];
    carInfo={"Ford","Mustang","Chevy","Camero","Toyota","Camery"};
    // nested for loop to go through each array element in multi dimensional array
   for(int i =0; i<3; i++)
    {
    cout<<carInfo[i][j];
    
    for(int j=0; j<3;i++)
{
    cout<<carInfo[i][j];
}
    }
    return 0;
}
