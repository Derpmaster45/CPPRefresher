#include<iostream> 
#include <string>
#include <limits>
using namespace std;
int main()
{
for(;;){
cout<<"Welcome to the sanitization demo\nEnter a number between 1 and 50:\n"<<flush;
int numTest=0;
cin>> numTest;
// sanitize data
if(cin.fail())
{
cerr<<"Sorry, I am unable to read the input.Try again please";
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(),'\n');
continue;
}
//check input ranges
if(numTest<1||numTest>50){
cerr<<"Input out of range.";
continue;
}
cout<<"You have entered " <<numTest <<" Thanks for testing" <<endl;
break;
}
}
