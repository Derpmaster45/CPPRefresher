#include <iostream> 
using namespace std;
int main()
{
    // welcome message
    cout<<"Welcome to a user input array test.\n Please input your favorite number:\n";
    int favNumber;
    cin>> favNumber;
    // declare array based off of input
    int arrayLength[favNumber];
    int altChoice;
    // test to see if user can insert data into an array
    for(int i=0; i<favNumber; i++)
{
    cout<<"What is your next favorite number?\n"; 
    cin>> altChoice;
    arrayLength[i]=altChoice;

}
// output entire array.
for(int i=0; i<favNumber; i++)
{
 cout<< arrayLength[i]<<"\n";
}

}
